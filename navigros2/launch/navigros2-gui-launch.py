from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    # Declare launch arguments
    camera_topic_arg = DeclareLaunchArgument(
        'camera_topic',
        default_value='/realsense/color/image_raw',
        description='Camera topic name'
    )

    # Nodes
    histogram_viz_node = Node(
        package='navigros2',
        executable='histogram_viz.py',
        name='histogram_viz',
        output='screen',
        respawn=True,
        parameters=[{}],
        namespace='navigros2'
    )

    live_viz_node = Node(
        package='navigros2',
        executable='live_viz.py',
        name='live_viz',
        output='screen',
        respawn=True,
        parameters=[{
            'camera_topic': LaunchConfiguration('camera_topic')
        }],
        namespace='navigros2'
    )

    matches_viz_node = Node(
        package='navigros2',
        executable='matches_viz.py',
        name='matches_viz',
        output='screen',
        respawn=True,
        parameters=[{}],
        namespace='navigros2'
    )

    return LaunchDescription([
        camera_topic_arg,
        histogram_viz_node,
        live_viz_node,
        matches_viz_node
    ])
