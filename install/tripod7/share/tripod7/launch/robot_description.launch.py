import os
import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Get the URDF file
    tripod7_path = get_package_share_directory('tripod7')
    urdf_file = os.path.join(tripod7_path, 'urdf', 'tripod7.urdf')

    # Process the xacro file to URDF
    robot_description = Command(['xacro ', urdf_file])

    # Create the launch description
    return LaunchDescription([
        # Robot description parameter
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': robot_description}],
        ),

        # Fake joint state publisher
        Node(
            package='joint_state_publisher',
            executable='joint_state_publisher',
            name='joint_state_publisher',
            parameters=[{'use_gui': False}]
        ),
    ])
