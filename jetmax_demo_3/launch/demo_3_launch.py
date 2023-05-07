from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument

# keeping default namespaces

def generate_launch_description():
    ip_launch_arg = DeclareLaunchArgument(
        name='ip',
        default_value=''
    )
    rigid_object_id_arg = DeclareLaunchArgument(
        name='rigid_object_id',
        default_value='0'
    )
    robot_base_arg = DeclareLaunchArgument(
        name='robot_name',
        default_value='hiwonder'
    )
    ip = LaunchConfiguration('ip')
    rigid_object_id = LaunchConfiguration('rigid_object_id')
    robot_base = LaunchConfiguration('robot_base')
    robot_arm = LaunchConfiguration('robot_arm')
    robot_ee = LaunchConfiguration('robot_ee')

    return LaunchDescription([
        Node(
            package='jetmax_demo_3',
            executable='state_engine',
            name='StateEngine',
            parameters=[
               {"motive_ip_address": ip}
            ]
        ),
        Node(
            package='jetmax_demo_3',
            executable='path_planner',
            name='PathPlanner'
        ),
        Node(
            package='jetmax_demo_3',
            executable='position_service',
            name='PositionService',
            parameters=[
               {"robot_name": rigid_object_id}
            ]
        )
    ])
