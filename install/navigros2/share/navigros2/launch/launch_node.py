from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'cmd_vel_pub',
            default_value='/navigros2/cmd_vel',
            description='The topic that cmd_vel messages will be published on when replaying a map'
        ),
        DeclareLaunchArgument(
            'cmd_vel_sub',
            default_value='/husky_velocity_controller/cmd_vel',
            description='The topic that cmd_vel messages will be recorded from when making a map'
        ),
        DeclareLaunchArgument(
            'odom_topic',
            default_value='/husky_velocity_controller/odom',
            description='The topic that odometry information will be read from'
        ),

        # Distance node
        Node(
            package='navigros2',
            executable='distance_ros.py',
            name='distance',
            output='screen',
            parameters=[{
                #'cmd_vel_topic': LaunchConfiguration('cmd_vel_sub'),
                #'odom_topic': LaunchConfiguration('odom_topic')
            }]
        )  

        
    ])
