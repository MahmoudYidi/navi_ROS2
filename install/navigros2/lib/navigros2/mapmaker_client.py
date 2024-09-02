import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from navigros2.action import MapMaker
from rclpy.exceptions import ROSInterruptException

class MapMakerClient(Node):
    def __init__(self):
        super().__init__('mapmaker_client')
        self.client = ActionClient(self, MapMaker, 'mapmaker')

    def send_goal(self, map_name, start):
        if not self.client.wait_for_server(timeout_sec=10.0):
            self.get_logger().error('Action server not available')
            return

        goal_msg = MapMaker.Goal()
        goal_msg.map_name = map_name
        goal_msg.start = start

        self.get_logger().info('Sending goal...')
        self.send_goal_future = self.client.send_goal_async(goal_msg)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        result = future.result()
        if result.accepted:
            self.get_logger().info('Goal accepted by action server')
            self.get_result_future = self.client.get_result_async()
            self.get_result_future.add_done_callback(self.result_callback)
        else:
            self.get_logger().error('Goal rejected by action server')

    def result_callback(self, future):
        result = future.result().result
        if result.success:
            self.get_logger().info('Action succeeded')
        else:
            self.get_logger().error('Action failed')

def main(args=None):
    rclpy.init(args=args)
    client = MapMakerClient()
    
    try:
        client.send_goal(map_name='test_map', start=True)
        rclpy.spin(client)
    except ROSInterruptException:
        pass
    finally:
        client.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
