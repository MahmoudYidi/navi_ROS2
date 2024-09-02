import rclpy
from rclpy.node import Node
import cv2
from sensor_msgs.msg import Image
from sensor_msgs.msg import CompressedImage
from cv_bridge import CvBridge

class LiveFeatures(Node):
    def __init__(self):
        super().__init__('live_features')

        # CV Bridge
        self.br = CvBridge()

        # Publisher
        self.pub = self.create_publisher(Image, 'live_viz', 10)

        # Parameters (dynamic reconfigure replacement)
        self.declare_parameter('feature_type', 0)
        self.feature_type = self.get_parameter('feature_type').get_parameter_value().integer_value

        # Subscriber
        camera_topic = self.declare_parameter('camera_topic', '/camera/image_raw').get_parameter_value().string_value
        self.create_subscription(Image, camera_topic, self.img_cb, 10)
        # self.create_subscription(CompressedImage, "/camera_2/image_raw/compressed", self.img_compressed_cb, 10)

        # Feature Detectors
        self.rect_size = 8
        self.rect_col = (255, 0, 0)  # BGR

        try:
            self.feature_types = [
                cv2.SIFT_create(),
                cv2.xfeatures2d.SURF_create(),
                cv2.KAZE_create(),
                cv2.AKAZE_create(),
                cv2.BRISK_create(),
                cv2.ORB_create()
            ]
        except Exception as e:
            self.feature_types = [
                cv2.SIFT_create(),
                cv2.KAZE_create(),
                cv2.AKAZE_create(),
                cv2.BRISK_create(),
                cv2.ORB_create()
            ]

        # Timer to check parameter updates
        self.create_timer(1.0, self.update_parameters)

    def update_parameters(self):
        self.feature_type = self.get_parameter('feature_type').get_parameter_value().integer_value
        self.get_logger().info(f"Current Feature Type: {self.feature_type}")

    def is_publishing(self):
        return self.pub.get_subscription_count() > 0

    def img_cb(self, msg):
        if self.is_publishing():
            self.detect_img(msg, compressed=False)

    def img_compressed_cb(self, msg):
        if self.is_publishing():
            self.detect_img(msg, compressed=True)

    def detect_img(self, msg, compressed):
        img = None
        if compressed:
            img = self.br.compressed_imgmsg_to_cv2(msg)
        else:
            img = self.br.imgmsg_to_cv2(msg)

        kps, des = self.feature_types[self.feature_type].detectAndCompute(img, None)

        for kp in kps:
            x = int(kp.pt[0])
            y = int(kp.pt[1])
            cv2.rectangle(img, (x - self.rect_size, y - self.rect_size),
                          (x + self.rect_size, y + self.rect_size), self.rect_col, 1)

        img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
        img_msg = self.br.cv2_to_imgmsg(img, encoding="rgb8")
        self.pub.publish(img_msg)


def main(args=None):
    rclpy.init(args=args)
    node = LiveFeatures()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
