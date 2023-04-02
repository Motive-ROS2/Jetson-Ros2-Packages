from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument

# keeping default namespaces

def generate_launch_description():
    motive_ip_address = LaunchConfiguration('motive_ip_address')
    rigid_object_id = LaunchConfiguration('rigid_object_id')
    robot_name = LaunchConfiguration('robot_name')

    motive_ip_address_arg = DeclareLaunchArgument(
    'motive_ip_address',
    default_value='10.1.10.253'
    )
    rigid_object_id_arg = DeclareLaunchArgument(
        'rigid_object_id',
        default_value='0'
    )
    robot_name_arg = DeclareLaunchArgument(
        'robot_name',
        default_value='hiwonder'
    )

    return LaunchDescription([
        Node(
            package='jetmax_demo_3',
            executable='state_engine',
            name='StateEngine' #,
            #parameters=[
            #    {"motive_ip_address": motive_ip_address},
            #    {"rigid_object_id": rigid_object_id},
            #    {"robot_name": robot_name}
            #]
        ),
        Node(
            package='jetmax_demo_3',
            executable='path_planner',
            name='PathPlanner'
        )
    ])
