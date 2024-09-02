from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Declare launch arguments
        DeclareLaunchArgument('camera_topic', default_value='/realsense/color/image_raw', description='Camera topic name'),
        DeclareLaunchArgument('cmd_vel_pub', default_value='/navigros2/cmd_vel', description='The topic that cmd_vel messages will be published on when replaying a map (can be the same as cmd_vel_sub)'),
        DeclareLaunchArgument('cmd_vel_sub', default_value='/husky_velocity_controller/cmd_vel', description='The topic that cmd_vel messages will be recorded from when making a map (can be the same as cmd_vel_pub)'),
        DeclareLaunchArgument('odom_topic', default_value='/husky_velocity_controller/odom', description='The topic that odometry information will be read from'),
        DeclareLaunchArgument('additional_record_topics', default_value='/sound_play/goal', description='Space separated topics names for additional recording'),

       

        # Alignment node
        #Node(
         #   package='navigros2',
          #  executable='alignment-ros-1.py',
           # name='alignment',
            #respawn=False,
            #output='screen',
            #arguments=['$(find navigros2)/src/alignment/config.yaml', '-OO']
        #),

        # Distance node
        Node(
            package='navigros2',
            executable='distance_ros.py',
            name='distance',
            respawn=True,
            arguments=['-OO'],
            parameters=[{
                'cmd_vel_topic': LaunchConfiguration('cmd_vel_sub'),
                'odom_topic': LaunchConfiguration('odom_topic')
            }],
            namespace='navigros2'
        ),

        # Mapmaker node
        Node(
            package='navigros2',
            executable='mapmaker_ros.py',
            name='mapmaker',
            respawn=True,
            arguments=['-OO'],
            parameters=[{
                'camera_topic': LaunchConfiguration('camera_topic'),
                'cmd_vel_topic': LaunchConfiguration('cmd_vel_sub'),
                'additional_record_topics': LaunchConfiguration('additional_record_topics')
            }],
            namespace='navigros2'
        ),

        # Repeater node
        Node(
            package='navigros2',
            executable='repeater_ros.py',
            name='repeater',
            respawn=True,
            arguments=['-OO'],
            parameters=[{
                'camera_topic': LaunchConfiguration('camera_topic')
            }],
            namespace='navigros2'
        ),



        # Navigator node
       # Node(
        #    package='navigros2',
         #   executable='navigator_ros.py',
          #  name='navigator',
           # respawn=True,
            #arguments=['-OO'],
            #parameters=[{
           #     'cmd_vel_topic': LaunchConfiguration('cmd_vel_pub')
            #}]
        #),

        # Preprocess node
       # Node(
       #     package='bearnav2',
       #     executable='preprocess-ros-1.py',
       #     name='preprocess',
       #     respawn=True,
       #     arguments=['-OO']
       # ),
    ])
