#!/usr/bin/env python3

import time
import os
import cv2
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
from cv_bridge import CvBridge
from navigros2.action import MapRepeater
from navigros2.srv import SetDist, SetClockGain
import rosbag2_py
import threading
import numpy as np
from rclpy.clock import Clock
from rclpy.duration import Duration

class ActionServerNode(Node):

    def __init__(self):
        super().__init__('replayer_server')

        # Initialize variables
        self.br = CvBridge()
        self.img = None
        self.map_name = ""
        self.map_step = None
        self.next_step = 0
        self.bag_reader = None
        self.is_repeating = False
        self.file_list = []
        self.end_position = None
        self.clock_gain = 1.0

        # Set up the services and action server
        self.get_logger().info("Waiting for services to become available...")
        self.distance_reset_srv = self.create_client(SetDist, 'set_dist')
        self.set_clock_gain_srv = self.create_service(SetClockGain, 'set_clock_gain', self.set_clock_gain)

        while not self.distance_reset_srv.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Service not available, waiting...")

        # Subscribers
        self.get_logger().info("Subscribing to distance and camera topics")
        self.distance_sub = self.create_subscription(Float64, 'distance', self.distance_cb, 10)
        self.camera_topic = self.declare_parameter('camera_topic', '/camera/image_raw').get_parameter_value().string_value
        self.cam_sub = self.create_subscription(Image, self.camera_topic, self.image_cb, 10)

        # Publishers
        self.al_1_pub = self.create_publisher(Image, 'alignment/inputCurrent', 10)
        self.al_2_pub = self.create_publisher(Image, 'alignment/inputMap', 10)
        self.al_pub = self.create_publisher(Twist, 'correction_cmd', 10)
        self.joy_pub = self.create_publisher(Twist, 'map_vel', 10)

        # Alignment module subscription
        self.al_sub = self.create_subscription(Twist, 'alignment/output', self.align_cb, 10)

        # Start the action server
        self.get_logger().info("Starting repeater action server")
        self.action_server = ActionServer(
            self,
            MapRepeater,
            'repeater',
            self.action_cb,
            callback_group=MutuallyExclusiveCallbackGroup()
        )
        self.get_logger().info("Server started, awaiting goal")

    def set_clock_gain(self, request, response):
        self.clock_gain = request.gain
        response.success = True
        return response

    def image_cb(self, msg):
        if self.is_repeating:
            self.al_1_pub.publish(msg)
            self.img = True
            #self.check_shutdown()

    def get_closest_img(self, dist):
        if len(self.file_list) < 1:
            self.get_logger().warn("No map files found")
            return

        closest_filename = None
        closest_distance = float('inf')
        dist = float(dist)

        # Ensure that file_list contains filenames with full precision
        self.file_list = [f.split('.jpg')[0] for f in os.listdir(self.map_name) if f.endswith('.jpg')]
        
        # Log the filenames for debugging
        #self.get_logger().info(f"Available files: {self.file_list}")

        for filename in self.file_list:
            try:
                file_distance = float(filename)  # Convert string filename to float for comparison
            except ValueError:
                self.get_logger().warn(f"Filename {filename} is not a valid float")
                continue  # Skip invalid filenames

            diff = abs(file_distance - dist)
            if diff < closest_distance:
                closest_distance = diff
                closest_filename = filename

        if closest_filename:
            fn = os.path.join(self.map_name, f"{closest_filename}.jpg")
            #self.get_logger().info(f"Opening file: {fn}, distance: {dist}")
            img = cv2.imread(fn)

            if img is None:
                self.get_logger().error(f"Failed to load image: {fn}. Please check if the file exists and is readable.")
            else:
                msg = self.br.cv2_to_imgmsg(img)
                self.al_2_pub.publish(msg)
        else:
            self.get_logger().warn(f"No closest file found for distance: {dist}")





    def distance_cb(self, msg):
        if not self.is_repeating or self.img is None:
            return

        dist = msg.data
        self.get_closest_img(dist)

        if self.end_position != 0 and dist >= self.end_position:
            self.is_repeating = False

        #self.check_shutdown()

    def align_cb(self, msg):
        self.al_pub.publish(msg)

    def goal_valid(self, goal):
        # Check for valid map directory
        if not goal.map_name:
            self.get_logger().warn("Goal missing map name")
            return False
        
        map_directory = goal.map_name

        if not os.path.isdir(map_directory):
            self.get_logger().warn(f"Can't find map directory: {map_directory}")
            return False

        if not os.path.isfile(os.path.join(map_directory, 'params')):
            self.get_logger().warn(f"Can't find params in directory: {map_directory}")
            return False
        
        # Check for the sub-directory
        sub_directory = os.path.join(map_directory, goal.map_name)
        if not os.path.isdir(sub_directory):
            self.get_logger().warn(f"Can't find sub-directory: {sub_directory}")
            return False

        db_files = [f for f in os.listdir(sub_directory) if f.endswith('.db3')]
        if not db_files:
            self.get_logger().warn(f"Can't find any .db3 files in directory: {sub_directory}")
            return False

        if not os.path.isfile(os.path.join(sub_directory, 'metadata.yaml')):
            self.get_logger().warn(f"Can't find metadata.yaml in directory: {sub_directory}")
            return False

        # Validate positions
        if goal.start_pos < 0:
            self.get_logger().warn("Invalid (negative) start position")
            return False

        if goal.start_pos > goal.end_pos:
            self.get_logger().warn("Start position greater than end position")
            return False

        return True

    def action_cb(self, goal_handle):
        goal = goal_handle.request
        self.get_logger().info("New goal received")

        result = MapRepeater.Result()
        
        if not goal_handle.is_active:
            self.get_logger().info("Goal preempted")
            self.shutdown()
            return result
        
        if not self.goal_valid(goal):
            self.get_logger().warn("Ignoring invalid goal")
            result.success = False
            goal_handle.abort()
            return result

        self.parse_params(os.path.join(goal.map_name, "params"))

        # Get file list
        all_files = next(os.walk(goal.map_name))[2]

        self.file_list = [filename.split('.')[0] for filename in all_files if ".jpg" in filename]
        self.get_logger().info(f"Found {len(self.file_list)} map files")

        # Set distance to zero
        self.get_logger().info("Resetting distance")
        self.distance_reset_srv.call_async(SetDist.Request(dist=goal.start_pos))
        self.end_position = goal.end_pos
        self.next_step = 0

        self.get_logger().info("Starting repeat")
        self.bag_reader = self.create_bag_reader(goal.map_name)
        self.map_name = goal.map_name
        self.is_repeating = True

        # Create publishers for additional topics
        additional_publishers = {}
        for topic in self.bag_reader.get_all_topics_and_types():
            if topic.name != self.saved_odom_topic:
                msg_type = self.get_message_type(topic.type)
                additional_publishers[topic.name] = self.create_publisher(msg_type, topic.name, 10)

        # Replay bag
        self.get_logger().info("Starting bag playback")
        clock = Clock()
        start_time = clock.now()

        previous_message_time = None

        for topic, msg, timestamp in self.read_messages_from_bag():
            if previous_message_time is None:
                previous_message_time = timestamp
            else:
                simulated_time_to_go = timestamp - previous_message_time
                corrected_simulated_time_to_go = simulated_time_to_go * self.clock_gain
                # Convert nanoseconds to seconds and nanoseconds
                seconds = int(corrected_simulated_time_to_go // 1e9)  # Integer part in seconds
                nanoseconds = int(corrected_simulated_time_to_go % 1e9)  # Remainder in nanoseconds
                #self.get_logger().info(f"Simulated time to go: {simulated_time_to_go}, Corrected time: {corrected_simulated_time_to_go}, Seconds: {seconds}, Nanoseconds: {nanoseconds}")
                duration = Duration(seconds=seconds, nanoseconds=nanoseconds)
                #clock.sleep_for(corrected_simulated_time_to_go)
                clock.sleep_for(duration)
                previous_message_time = timestamp

            if topic == self.saved_odom_topic:
                self.joy_pub.publish(msg)
            else:
                additional_publishers[topic].publish(msg)

            #if not self.is_repeating or self.get_clock().is_shutdown():
             #   break
            while not self.is_repeating:
                if not rclpy.ok():  # Checks if the ROS system is still running
                    self.get_logger().info("ROS is shutting down.")
                    break

        end_time = clock.now()
        duration = end_time - start_time
        self.get_logger().info(f"Rosbag runtime: {duration.nanoseconds / 1e9:.2f} seconds")

        result.success = True
        goal_handle.succeed()
        return result

    def create_bag_reader(self, directory):
        # Expect directory to be the main directory containing sub-directory with .db3 files
        sub_directory = os.path.join(directory, os.path.basename(directory))
        
        if not os.path.isdir(sub_directory):
            raise FileNotFoundError(f"Sub-directory not found: {sub_directory}")

        db_files = [f for f in os.listdir(sub_directory) if f.endswith('.db3')]
        if not db_files:
            raise FileNotFoundError("No .db3 files found in sub-directory")

        db_file = db_files[0]
        file_path = os.path.join(sub_directory, db_file)
        
        storage_options = rosbag2_py.StorageOptions(uri=file_path, storage_id='sqlite3')
        converter_options = rosbag2_py.ConverterOptions('', '')
        bag_reader = rosbag2_py.SequentialReader()
        bag_reader.open(storage_options, converter_options)
        return bag_reader


    def read_messages_from_bag(self):
        while self.bag_reader.has_next():
            topic, msg, timestamp = self.bag_reader.read_next()
            yield topic, msg, timestamp

    def get_message_type(self, topic_type):
        # Map topic types to their corresponding ROS message types
        if topic_type == 'sensor_msgs/msg/Image':
            return Image
        elif topic_type == 'geometry_msgs/msg/Twist':
            return Twist
        elif topic_type == 'std_msgs/msg/Float64':
            return Float64
        else:
            raise ValueError(f"Unknown topic type: {topic_type}")

    def parse_params(self, filename):
        with open(filename, "r") as f:
            data = f.read().splitlines()

        for line in data:
            param, value = line.split(":")
            param = param.strip()
            value = value.strip()

            if param == "stepSize":
                self.map_step = float(value)
                self.get_logger().info(f"Step size set to: {self.map_step}")
            elif param == "odomTopic":
                self.saved_odom_topic = value
                self.get_logger().info(f"Saved odometry topic: {self.saved_odom_topic}")

    def check_shutdown(self):
        #if self.action_server.is_preempt_requested():
         #   self.shutdown()
        pass

    def shutdown(self):
        self.get_logger().warn("Cancelling repeat")
        self.is_repeating = False
        self.bag_reader.reset()
        self.end_position = None
        self.distance_reset_srv.call_async(SetDist.Request(dist=0))

def main(args=None):
    rclpy.init(args=args)
    try:
        node = ActionServerNode()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()

if __name__ == '__main__':
    main()
