#!/usr/bin/env python3

import os
import time
import cv2
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from navigros2.msg import Alignment
from std_msgs.msg import Float64
from navigros2.action import MapRepeater
from navigros2.srv import SetDist, SetClockGain
from cv_bridge import CvBridge
import numpy as np
from rosbag2_py import SequentialReader, StorageOptions, ConverterOptions
import threading
import queue 

class ImageFetcherThread(threading.Thread):
    def __init__(self, location, id_queue, img_lock):
        super().__init__()
        self.location = location
        self.id_queue = id_queue
        self.img_lock = img_lock
        self.running = True

    def run(self):
        while self.running:
            try:
                image_id = self.id_queue.get(timeout=1)
                self.img_lock.acquire()
                # Fetch the image
                img_path = os.path.join(self.location, f"{image_id}.jpg")
                if os.path.isfile(img_path):
                    img = cv2.imread(img_path)
                    img_msg = CvBridge().cv2_to_imgmsg(img)
                    self.img_lock.release()
                else:
                    self.img_lock.release()
                self.id_queue.task_done()
            except queue.Empty:
                continue

    def stop(self):
        self.running = False

class ActionServerNode(Node):
    def __init__(self):
        super().__init__('repeater_server')

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
        self.img_queue = queue.Queue()
        self.img_lock = threading.Lock()
        self.img_fetcher_thread = ImageFetcherThread(self.map_name, self.img_queue, self.img_lock)
        self.img_fetcher_thread.start()

        # Create Service Client and Server
        self.distance_reset_srv = self.create_client(SetDist, 'set_dist')
        while not self.distance_reset_srv.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Service not available, waiting...")

        self.set_clock_gain_srv = self.create_service(SetClockGain, 'set_clock_gain', self.set_clock_gain)

        # Create Subscribers and Publishers
        self.distance_sub = self.create_subscription(Float64, 'distance', self.distance_cb, 10)
        self.camera_topic = self.declare_parameter('camera_topic', '').value
        self.cam_sub = self.create_subscription(Image, self.camera_topic, self.image_cb, 10)
        self.al_sub = self.create_subscription(Alignment, 'alignment/output', self.align_cb, 10)
        self.al_1_pub = self.create_publisher(Image, 'alignment/inputCurrent', 10)
        self.al_2_pub = self.create_publisher(Image, 'alignment/inputMap', 10)
        self.al_pub = self.create_publisher(Alignment, 'correction_cmd', 10)
        self.joy_topic = 'map_vel'
        self.joy_pub = self.create_publisher(Twist, self.joy_topic, 10)

        # Action Server
        self.get_logger().info("Starting repeater action server")
        self.server = ActionServer(self, MapRepeater, 'repeater', self.action_cb)
        self.get_logger().info("Server started, awaiting goal")

    def set_clock_gain(self, request, response):
        self.clock_gain = request.gain
        return SetClockGain.Response()

    def image_cb(self, msg):
        if self.is_repeating:
            self.al_1_pub.publish(msg)
            self.img_queue.put(msg)  # Put image message into queue
            self.check_shutdown()

    def get_closest_img(self, dist):
        if len(self.file_list) < 1:
            self.get_logger().warn("Not many map files")

        closest_filename = None
        closest_distance = float('inf')
        dist = float(dist)
        for filename in self.file_list:
            ffilename = float(filename)
            diff = abs(ffilename - dist)
            if diff < closest_distance:
                closest_distance = diff
                closest_filename = filename

        fn = os.path.join(self.map_name, f"{closest_filename}.jpg")
        self.get_logger().warn(f"Opening file: {fn} dist {dist}")
        img = cv2.imread(fn)
        msg = self.br.cv2_to_imgmsg(img)
        self.al_2_pub.publish(msg)

    def distance_cb(self, msg):
        if not self.is_repeating:
            return

        if self.img is None:
            self.get_logger().warn("Warning: no image received")

        dist = msg.data
        self.get_closest_img(dist)

        if self.end_position is not None and dist >= self.end_position:
            self.is_repeating = False

        self.check_shutdown()

    def align_cb(self, msg):
        self.al_pub.publish(msg)

    def goal_valid(self, goal):
        if not goal.map_name:
            self.get_logger().warn("Goal missing map name")
            return False
        if not os.path.isdir(goal.map_name):
            self.get_logger().warn("Can't find map directory")
            return False
        if not os.path.isfile(os.path.join(goal.map_name, f"{goal.map_name}.db3")):
            self.get_logger().warn("Can't find commands")
            return False
        if not os.path.isfile(os.path.join(goal.map_name, "params")):
            self.get_logger().warn("Can't find params")
            return False
        if goal.start_pos < 0:
            self.get_logger().warn("Invalid (negative) start position). Use zero to start at the beginning")
            return False
        if goal.start_pos > goal.end_pos:
            self.get_logger().warn("Start position greater than end position")
            return False
        return True

    def action_cb(self, goal_handle):
        goal = goal_handle.request

        self.get_logger().info("New goal received")

        if not self.goal_valid(goal):
            self.get_logger().warn("Ignoring invalid goal")
            result = MapRepeater.Result()
            result.success = False
            goal_handle.abort(result)
            return

        self.parse_params(os.path.join(goal.map_name, "params"))

        # Get file list
        self.file_list = [os.path.splitext(f)[0] for f in os.listdir(goal.map_name) if f.endswith('.jpg')]
        self.get_logger().warn(f"Found {len(self.file_list)} map files")

        # Set distance to zero
        self.get_logger().debug("Resetting distance")
        self.distance_reset_srv.call_async(SetDist.Request(distance=goal.start_pos))

        self.end_position = goal.end_pos
        self.next_step = 0

        self.get_logger().warn("Starting repeat")
        self.bag_reader = self.create_bag_reader(os.path.join(goal.map_name, f"{goal.map_name}.db3"))
        self.map_name = goal.map_name

        # Create publishers for additional topics
        additional_publishers = {}
        for topic, message_type in self.bag_reader.get_topics():
            if topic != self.saved_odom_topic:
                msg_class = self.get_message_class(message_type)
                additional_publishers[topic] = self.create_publisher(msg_class, topic, 10)

        # Replay bag
        self.get_logger().warn("Starting replay")
        previous_message_time = None
        expected_message_time = None
        self.is_repeating = True
        start = self.get_clock().now()
        for topic, msg, ts in self.bag_reader.read_messages():
            now = self.get_clock().now()
            if previous_message_time is None:
                previous_message_time = ts
                expected_message_time = now
            else:
                simulated_time_to_go = ts - previous_message_time
                corrected_simulated_time_to_go = simulated_time_to_go * self.clock_gain
                error = now - expected_message_time
                sleep_time = corrected_simulated_time_to_go - error
                expected_message_time = now + sleep_time
                rclpy.spin_once(self, timeout_sec=sleep_time.to_sec())
                previous_message_time = ts
            # Publish message
            if topic == self.saved_odom_topic:
                self.joy_pub.publish(msg)
            else:
                additional_publishers[topic].publish(msg)
            if not self.is_repeating:
                self.get_logger().info("Stopped!")
                break
            if self.is_shutdown():
                self.get_logger().info("Node Shutdown")
                result = MapRepeater.Result()
                result.success = False
                goal_handle.abort(result)
                return
        self.is_repeating = False
        end = self.get_clock().now()
        duration = end - start
        self.get_logger().warn(f"Rosbag runtime: {duration.nanoseconds / 1e9}")

        self.get_logger().info("Goal Complete!")
        result = MapRepeater.Result()
        result.success = True
        goal_handle.succeed(result)

    def parse_params(self, filename):
        with open(filename, "r") as f:
            data = f.read().split("\n")
        for line in data:
            if "stepSize" in line:
                self.get_logger().debug(f"Setting step size to: {line.split()[1]}")
                self.map_step = float(line.split()[1])
            if "odomTopic" in line:
                self.get_logger().debug(f"Saved odometry topic is: {line.split()[1]}")
                self.saved_odom_topic = line.split()[1]

    def create_bag_reader(self, bag_path):
        storage_options = StorageOptions(uri=bag_path, storage_id='sqlite3')
        converter_options = ConverterOptions(input_encoding='raw', output_encoding='raw')
        return SequentialReader(storage_options, converter_options)

    def get_message_class(self, message_type):
        # Define message type to class mapping
        if message_type == 'sensor_msgs/Image':
            return Image
        elif message_type == 'geometry_msgs/Twist':
            return Twist
        # Add more message type mappings as needed
        return None

    def check_shutdown(self):
        if self.is_preempt_requested():
            self.shutdown()

    def shutdown(self):
        self.is_repeating = False
        if self.bag_reader is not None:
            self.bag_reader.close()
        self.img_fetcher_thread.stop()
        self.img_fetcher_thread.join()

def main(args=None):
    rclpy.init(args=args)
    action_server_node = ActionServerNode()
    rclpy.spin(action_server_node)
    action_server_node.shutdown()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
