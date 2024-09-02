#!/usr/bin/env python3

import os
import time
import cv2
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
from cv_bridge import CvBridge
from navigros2.action import MapMaker
from navigros2.srv import SetDist
from rosbag2_py import SequentialWriter, StorageOptions, ConverterOptions

class ActionServerNode(Node):

    def __init__(self):
        super().__init__('mapmaker_server')

        # Initialize variables
        self.br = CvBridge()
        self.is_mapping = False
        self.img = None
        self.map_name = ""
        self.map_step = 1.0
        self.next_step = 0
        self.bag_writer = None
        self.last_distance = None

        # Parameters
        self.declare_parameter('additional_record_topics', '')
        self.declare_parameter('camera_topic', '')
        self.declare_parameter('cmd_vel_topic', '')

        self.additional_topics = self.get_parameter('additional_record_topics').get_parameter_value().string_value.split(" ")
        self.additional_topic_subscribers = []

        # Logging additional topics (Removing Support for this for now) #################################################
        #if self.additional_topics[0] != "":
         #   self.get_logger().warn("Recording the following additional topics: " + str(self.additional_topics))
          #  for topic in self.additional_topics:
           #     msg_type = self.get_message_type(topic)
            #    self.create_subscription(msg_type, topic, lambda msg, t=topic: self.misc_cb(msg, t), 10)
        
        self.get_logger().info("Waiting for services to become available...")
        self.distance_reset_srv = self.create_client(SetDist, 'set_dist')
        while not self.distance_reset_srv.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Service not available, waiting...")
        
        self.get_logger().info("Starting...")
        self.distance_reset_srv.call_async(SetDist.Request(dist=0.0))

        self.distance_sub = self.create_subscription(Float64, 'distance', self.distance_cb, 10)
        self.camera_topic = self.get_parameter('camera_topic').get_parameter_value().string_value
        self.cam_sub = self.create_subscription(Image, self.camera_topic, self.image_cb, 10)
        
        self.joy_topic = self.get_parameter('cmd_vel_topic').get_parameter_value().string_value
        self.joy_sub = self.create_subscription(Twist, self.joy_topic, self.joy_cb, 10)
        
        self.get_logger().info("Starting mapmaker action server")
        self.action_server = ActionServer(self, MapMaker, 'mapmaker', self.action_cb)
        self.get_logger().info("Server started, awaiting goal")

    def get_message_type(self, topic):
        # Trial: to debug this later ##########################################################
        if topic == '/camera/image_raw':
            return Image
        elif topic == '/cmd_vel':
            return Twist
        elif topic == '/distance':
            return Float64
        else:
            self.get_logger().error(f"Unknown topic type for {topic}")
            raise ValueError(f"Unknown topic type for {topic}")

    def misc_cb(self, msg, topic):
        if self.is_mapping:
            self.get_logger().debug(f"Adding misc from {topic}")
            if self.bag_writer:
                self.bag_writer.write(topic, msg)

    def image_cb(self, msg):
        self.img = self.br.imgmsg_to_cv2(msg)
        self.check_shutdown()

    def distance_cb(self, msg):
        if not self.is_mapping or self.img is None:
            return
        
        dist = msg.data
        self.last_distance = dist
        if dist >= self.next_step:
            if self.img is None:
                self.get_logger().warn("Warning: no image received!")
            self.get_logger().debug("Hit waypoint")
            self.next_step += self.map_step
            filename = os.path.join(self.map_name, f"{dist}.jpg")
            cv2.imwrite(filename, self.img)
            self.get_logger().warn(f"Image saved {filename}")

        self.check_shutdown()

    def joy_cb(self, msg):
        if self.is_mapping:
            self.get_logger().debug("Adding joy")
            if self.bag_writer:
                self.bag_writer.write(self.joy_topic, msg)

    def action_cb(self, goal_handle):
        self.get_logger().info(f"Action callback triggered with goal: {goal_handle.request}")
        goal = goal_handle.request
        result = MapMaker.Result()
        #self.get_logger().info(f"Received goal: {goal.map_name}, start: {goal.start}")

       # if self.img is None:
        #    self.get_logger().error("WARNING: no image coming through, ignoring")
         #   result = MapMaker.Result()
          #  result.success = False
           # goal_handle.abort()  # No parameters needed
         #   return

        if not goal.map_name:
            self.get_logger().warn("Missing map name, ignoring")
            result.success = False
            goal_handle.abort()
            return result  # Return the result

        if goal.start:
            self.is_mapping = False
            self.img = None
            try:
                os.mkdir(goal.map_name)
                with open(os.path.join(goal.map_name, "params"), "w") as f:
                    f.write(f"stepSize: {self.map_step}\n")
                    f.write(f"odomTopic: {self.joy_topic}\n")
            except Exception as e:
                self.get_logger().warn(f"Unable to create map directory, ignoring: {e}")
                result.success = False
                goal_handle.abort()
                return result  # Return the result

            self.get_logger().info("Starting mapping")
            self.bag_writer = self.create_bag_writer(os.path.join(goal.map_name, f"{goal.map_name}.db3"))
            self.map_name = goal.map_name
            self.next_step = 0
            self.last_distance = None
            self.distance_reset_srv.call_async(SetDist.Request(dist=0.0))
            self.is_mapping = True

            result.success = True
            goal_handle.succeed()
            return result  # Return the result
        else:
            self.get_logger().debug("Creating final waypoint")
            filename = os.path.join(self.map_name, f"{self.last_distance}.jpg")
            cv2.imwrite(filename, self.img)
            self.get_logger().info("Stopping Mapping")
            time.sleep(2)
            self.is_mapping = False
            if self.bag_writer:
                self.bag_writer.close()  # Close the rosbag2 writer properly

            result.success = True
            goal_handle.succeed()
            return result  # Return the result

    def create_bag_writer(self, filename):
        storage_options = StorageOptions(uri=filename, storage_id='sqlite3')
        converter_options = ConverterOptions('', '')
        bag_writer = SequentialWriter()
        bag_writer.open(storage_options, converter_options)
        return bag_writer

    def check_shutdown(self):
        if self.action_server.is_preempt_requested():
            self.shutdown()

    def shutdown(self):
        self.is_mapping = False
        if self.bag_writer is not None:
            self.bag_writer.close()  # Close the rosbag2 writer properly

def main(args=None):
    rclpy.init(args=args)
    action_server_node = ActionServerNode()
    try:
        rclpy.spin(action_server_node)
    except KeyboardInterrupt:
        pass
    finally:
        action_server_node.shutdown()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
