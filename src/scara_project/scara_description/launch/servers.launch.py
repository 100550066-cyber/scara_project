
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    joint_server = Node(
        package='scara_joint_server',
        executable='joint_config_server',
        output='screen'
    )

    pose_server = Node(
        package='scara_pose_server',
        executable='pose_server',
        output='screen'
    )

    return LaunchDescription([
        joint_server,
        pose_server
    ])
