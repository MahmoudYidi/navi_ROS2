#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import cv2
import alignment
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from navigros2.msg import Alignment, FloatList
from rclpy.parameter import Parameter
from rcl_interfaces.msg import SetParametersResult

class AlignmentNode(Node):

    def __init__(self):
        super().__init__('alignment_node')

        # Initialize parameters
        self.declare_parameter('feature_type', 0)

        self.feature_types = {
            0: "SIFT",
            1: "SURF",
            2: "KAZE",
            3: "AKAZE",
            4: "BRISK",
            5: "ORB",
            6: "VGG",
            7: "Siamese"
        }

        # Create publishers
        self.pub = self.create_publisher(Alignment, 'alignment/output', 10)
        self.pub_hist = self.create_publisher(FloatList, 'histogram', 10)

        # Create subscribers
        self.sub_current = self.create_subscription(Image, 'alignment/inputCurrent', self.callbackB, 10)
        self.sub_map = self.create_subscription(Image, 'alignment/inputMap', self.callbackA, 10)

        # Initialize the CvBridge and aligner
        self.br = CvBridge()
        self.align = alignment.Alignment()
        self.imgABuf = None

        # Add a callback for parameter changes
        self.add_on_set_parameters_callback(self.config_cb)

        self.get_logger().info("Aligner Node Ready...")

    def callbackA(self, msg):
        self.get_logger().info("Received map image.")
        self.imgABuf = self.br.imgmsg_to_cv2(msg)

    def callbackB(self, msg):
        if self.imgABuf is None:
            self.get_logger().warn("Aligner is still awaiting the map image!")
            return

        imgB = self.br.imgmsg_to_cv2(msg)
        alignment, uncertainty, hist = self.align.process(self.imgABuf, imgB)
        m = Alignment()
        m.alignment = alignment
        m.uncertainty = uncertainty
        self.pub.publish(m)

        hm = FloatList()
        hm.data = hist
        self.pub_hist.publish(hm)

    def config_cb(self, params):
        for param in params:
            if param.name == 'feature_type':
                if param.value in self.feature_types:
                    self.align.method = self.feature_types[param.value]
                    self.get_logger().info(f"Feature type set to {self.align.method}")
                else:
                    self.get_logger().warn("Invalid feature type")
        return SetParametersResult(successful=True)

def main(args=None):
    rclpy.init(args=args)
    node = AlignmentNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
