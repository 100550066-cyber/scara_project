# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target scara_description::scara_description
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${scara_description_TARGETS}.
if(scara_description_TARGETS AND NOT TARGET scara_description::scara_description)
  add_library(scara_description::scara_description INTERFACE IMPORTED)
  set_target_properties(scara_description::scara_description PROPERTIES
    INTERFACE_LINK_LIBRARIES "${scara_description_TARGETS}")
endif()
