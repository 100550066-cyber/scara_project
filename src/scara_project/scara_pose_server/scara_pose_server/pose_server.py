
import rclpy
from rclpy.node import Node
from rclpy.time import Time
from scara_description.srv import GetEndEffectorPose
from tf2_ros import Buffer, TransformException, TransformListener


class PoseServer(Node):
    def __init__(self):
        super().__init__('pose_server')

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(
            self.tf_buffer,
            self
        )

        self.srv = self.create_service(
            GetEndEffectorPose,
            'get_end_effector_pose',
            self.handle_get_pose
        )

        self.get_logger().info('Pose Server started')

    def handle_get_pose(self, request, response):
        try:
            transform = self.tf_buffer.lookup_transform(
                'base_link',
                'link3',
                Time()
            )

            response.pose.header = transform.header

            response.pose.pose.position.x = (
                transform.transform.translation.x
            )
            response.pose.pose.position.y = (
                transform.transform.translation.y
            )
            response.pose.pose.position.z = (
                transform.transform.translation.z
            )

            response.pose.pose.orientation = (
                transform.transform.rotation
            )

            response.success = True
            response.message = 'Pose retrieved successfully'

        except TransformException as e:
            response.success = False
            response.message = str(e)

        return response


def main(args=None):
    rclpy.init(args=args)

    node = PoseServer()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
