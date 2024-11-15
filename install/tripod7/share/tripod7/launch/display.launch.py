import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    package_name = 'tripod7'
    urdf_file = os.path.join(
        get_package_share_directory(package_name),
        'urdf',
        'tripod7.urdf'
    )

    return LaunchDescription([
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': urdf_file}]  # Direct URDF path, no xacro
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            arguments=['-d', os.path.join(get_package_share_directory(package_name), 'rviz', 'robot.rviz')],
            output='screen'
        ),
    ])
