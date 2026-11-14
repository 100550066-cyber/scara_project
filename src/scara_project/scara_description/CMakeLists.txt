cmake_minimum_required(VERSION 3.8)
project(scara_description)

find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate custom service interfaces (automatically builds the scara_project.srv Python module)
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/SetJointConfig.srv"
  "srv/GetEndEffectorPose.srv"
  DEPENDENCIES geometry_msgs
)

# Install robot description, launch, rviz, and mesh files
install(DIRECTORY urdf launch rviz
  DESTINATION share/${PROJECT_NAME}
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
