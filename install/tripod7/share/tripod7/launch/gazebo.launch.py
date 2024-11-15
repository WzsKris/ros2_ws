import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.actions import ExecuteProcess
from launch.substitutions import Command

def generate_launch_description():
    tripod7_path = get_package_share_directory('tripod7')

    # Load your robot's URDF
    robot_description = Command(['xacro ', os.path.join(tripod7_path, 'urdf', 'tripod7.urdf')])

    # Node to publish robot state
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description}]
    )

    # Launch Ignition Gazebo with the SDF model
    ign_gazebo = ExecuteProcess(
        cmd=['ign', 'gazebo', os.path.join(tripod7_path, 'sdf', 'tripod7.sdf')],
        output='screen'
    )

    # Bridge between ROS 2 and Ignition Gazebo
    ros_ign_bridge = Node(
        package='ros_ign_bridge',
        executable='parameter_bridge',
        arguments=[
            '/model/tripod7/pose@geometry_msgs/msg/Pose@ignition.msgs.Pose',
            '/world/default/clock@rosgraph_msgs/msg/Clock@ignition.msgs.Clock'
        ],
        output='screen'
    )

    return LaunchDescription([
        robot_state_publisher,
        ign_gazebo,
        ros_ign_bridge
    ])
