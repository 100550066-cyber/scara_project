// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scara_description:srv/GetEndEffectorPose.idl
// generated code does not contain a copyright notice

#ifndef SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__STRUCT_H_
#define SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetEndEffectorPose in the package scara_description.
typedef struct scara_description__srv__GetEndEffectorPose_Request
{
  uint8_t structure_needs_at_least_one_member;
} scara_description__srv__GetEndEffectorPose_Request;

// Struct for a sequence of scara_description__srv__GetEndEffectorPose_Request.
typedef struct scara_description__srv__GetEndEffectorPose_Request__Sequence
{
  scara_description__srv__GetEndEffectorPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_description__srv__GetEndEffectorPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/GetEndEffectorPose in the package scara_description.
typedef struct scara_description__srv__GetEndEffectorPose_Response
{
  bool success;
  rosidl_runtime_c__String message;
  geometry_msgs__msg__PoseStamped pose;
} scara_description__srv__GetEndEffectorPose_Response;

// Struct for a sequence of scara_description__srv__GetEndEffectorPose_Response.
typedef struct scara_description__srv__GetEndEffectorPose_Response__Sequence
{
  scara_description__srv__GetEndEffectorPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_description__srv__GetEndEffectorPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__STRUCT_H_
