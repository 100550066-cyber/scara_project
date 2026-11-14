import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from scara_description.srv import SetJointConfig


class JointConfigServer(Node):
    def __init__(self):
        super().__init__('joint_config_server')

        # Match joint names and limits to your URDF
        self.joint_limits = {
            'joint_1': (-3.14, 3.14),
            'joint_2': (-3.14, 3.14),
            'joint_3': (0.0, 0.11),
            #'gripper_joint': (0.0, 0.04),  # Update to match your gripper joint name & limits
        }
        self.current_positions = [0.0, 0.0, 0.0, 0.0]

        self.publisher_ = self.create_publisher(JointState, '/joint_states', 10)
        self.srv = self.create_service(SetJointConfig, 'set_joint_config', self.handle_set_joints)

        # Publish continuously at 20 Hz so RViz / robot_state_publisher stays updated
        self.timer = self.create_timer(0.05, self.publish_joint_states)
        self.get_logger().info('Joint Configuration Server ready on /set_joint_config')

    def publish_joint_states(self):
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = list(self.joint_limits.keys())
        msg.position = self.current_positions
        self.publisher_.publish(msg)

    def handle_set_joints(self, request, response):
        requested = {
            'joint_1': request.joint_1,
            'joint_2': request.joint_2,
            'joint_3': request.joint_3,
            #'gripper_joint': request.gripper_joint,
        }

        for name, val in requested.items():
            low, high = self.joint_limits[name]
            if not (low <= val <= high):
                response.success = False
                response.message = (
                    f"Rejected: '{name}' value {val:.4f} is out of limits [{low}, {high}]."
                )
                self.get_logger().warn(response.message)
                return response

        self.current_positions = list(requested.values())
        self.publish_joint_states()

        response.success = True
        response.message = f'Successfully updated joint configuration: {self.current_positions}'
        self.get_logger().info(response.message)
        return response


def main(args=None):
    rclpy.init(args=args)
    node = JointConfigServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()