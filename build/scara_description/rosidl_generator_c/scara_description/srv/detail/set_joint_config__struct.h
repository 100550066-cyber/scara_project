// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scara_description:srv/SetJointConfig.idl
// generated code does not contain a copyright notice

#ifndef SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__STRUCT_H_
#define SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetJointConfig in the package scara_description.
typedef struct scara_description__srv__SetJointConfig_Request
{
  double joint_1;
  double joint_2;
  double joint_3;
} scara_description__srv__SetJointConfig_Request;

// Struct for a sequence of scara_description__srv__SetJointConfig_Request.
typedef struct scara_description__srv__SetJointConfig_Request__Sequence
{
  scara_description__srv__SetJointConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_description__srv__SetJointConfig_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetJointConfig in the package scara_description.
typedef struct scara_description__srv__SetJointConfig_Response
{
  bool success;
  rosidl_runtime_c__String message;
} scara_description__srv__SetJointConfig_Response;

// Struct for a sequence of scara_description__srv__SetJointConfig_Response.
typedef struct scara_description__srv__SetJointConfig_Response__Sequence
{
  scara_description__srv__SetJointConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_description__srv__SetJointConfig_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__STRUCT_H_
