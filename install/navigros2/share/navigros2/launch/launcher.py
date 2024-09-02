from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([

        # Declare arguments (parameters) that users can set from the command line
        DeclareLaunchArgument(
            'camera_topic',
            default_value='/realsense/color/image_raw',
            description='Camera topic name'
        ),
        DeclareLaunchArgument(
            'cmd_vel_pub',
            default_value='/bearnav/cmd_vel',
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
        DeclareLaunchArgument(
            'additional_record_topics',
            default_value='/sound_play/goal',
            description='Additional topics to record for each traversal'
        ),

        # Alignment node
        Node(
            package='bearnav2',
            executable='alignment_ros_1.py',
            name='alignment',
            output='screen',
            parameters=[{
                'config_file': LaunchConfiguration('config_file')  # Assuming your node handles this parameter
            }]
        ),

        # Distance node
        Node(
            package='bearnav2',
            executable='distance_ros_1.py',
            name='distance',
            output='screen',
            parameters=[{
                'cmd_vel_topic': LaunchConfiguration('cmd_vel_sub'),
                'odom_topic': LaunchConfiguration('odom_topic')
            }]
        ),

        # Mapmaker node
        Node(
            package='bearnav2',
            executable='mapmaker_ros_1.py',
            name='mapmaker',
            output='screen',
            parameters=[{
                'camera_topic': LaunchConfiguration('camera_topic'),
                'cmd_vel_topic': LaunchConfiguration('cmd_vel_sub'),
                'additional_record_topics': LaunchConfiguration('additional_record_topics')
            }]
        ),

        # Repeater node
        Node(
            package='bearnav2',
            executable='repeater_ros_1.py',
            name='repeater',
            output='screen',
            parameters=[{
                'camera_topic': LaunchConfiguration('camera_topic')
            }]
        ),

        # Navigator node
        Node(
            package='bearnav2',
            executable='navigator_ros_1.py',
            name='navigator',
            output='screen',
            parameters=[{
                'cmd_vel_topic': LaunchConfiguration('cmd_vel_pub')
            }]
        ),

        # Preprocess node
        Node(
            package='bearnav2',
            executable='preprocess_ros_1.py',
            name='preprocess',
            output='screen'
        )
    ])
