import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Get the package share directory
    tripod7_path = get_package_share_directory('tripod7')

    # YAML configuration file for joint names and controllers
    joint_names_yaml = os.path.join(tripod7_path, 'config', 'joint_names_tripod7.yaml')

    # Load joint controller configurations from YAML file
    load_controllers = Node(
        package='controller_manager',
        executable='spawner.py',
        output='screen',
        arguments=[
            'leg01_position_controller',
            'high01_position_controller',
            'low01_position_controller',
            'leg02_position_controller',
            'high02_position_controller',
            'low02_position_controller',
            'leg03_position_controller',
            'high03_position_controller',
            'low03_position_controller',
            'joint_state_controller'
        ]
    )

    # Load parameters from YAML
    load_joint_params = Node(
        package='rclcpp',
        executable='parameter_loader',  # Not a ROS 2 built-in, replace with the actual loader
        arguments=[joint_names_yaml],
        output='screen'
    )

    # Robot State Publisher to broadcast joint states to TF
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'use_sim_time': True}],
        remappings=[('/joint_states', '/rrbot/joint_states')]
    )

    return LaunchDescription([
        load_joint_params,
        load_controllers,
        robot_state_publisher
    ])
