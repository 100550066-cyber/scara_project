
import time

import rclpy
from rclpy.node import Node
from scara_description.srv import GetEndEffectorPose, SetJointConfig


class ScaraClient(Node):
    def __init__(self):
        super().__init__('scara_client')

        self.joint_client = self.create_client(
            SetJointConfig, 'set_joint_config'
        )
        self.pose_client = self.create_client(
            GetEndEffectorPose, 'get_end_effector_pose'
        )

    def set_joints(self, joint_1, joint_2, joint_3):
        while not self.joint_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for Joint Configuration Server...')

        request = SetJointConfig.Request()
        request.joint_1 = joint_1
        request.joint_2 = joint_2
        request.joint_3 = joint_3

        future = self.joint_client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        return future.result()

    def get_pose(self):
        while not self.pose_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for Pose Server...')

        request = GetEndEffectorPose.Request()
        future = self.pose_client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        return future.result()


def main(args=None):
    rclpy.init(args=args)
    node = ScaraClient()

    joint_configs = [
        (0.0, 0.0, 0.0),
        (0.5, 0.5, 0.05),
        (1.0, -0.5, 0.1)
    ]

    for joint_1, joint_2, joint_3 in joint_configs:
        node.get_logger().info(
            f'Testing joints: {joint_1}, {joint_2}, {joint_3}'
        )

        response = node.set_joints(joint_1, joint_2, joint_3)

        if response is not None:
            node.get_logger().info(response.message)

            if response.success:
                time.sleep(0.2)

                pose_response = node.get_pose()

                if pose_response is not None and pose_response.success:
                    pose = pose_response.pose.pose

                    node.get_logger().info(
                        f'Position: x={pose.position.x:.3f}, '
                        f'y={pose.position.y:.3f}, '
                        f'z={pose.position.z:.3f}'
                    )

                    node.get_logger().info(
                        f'Orientation: x={pose.orientation.x:.3f}, '
                        f'y={pose.orientation.y:.3f}, '
                        f'z={pose.orientation.z:.3f}, '
                        f'w={pose.orientation.w:.3f}'
                    )

                elif pose_response is not None:
                    node.get_logger().warn(pose_response.message)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
