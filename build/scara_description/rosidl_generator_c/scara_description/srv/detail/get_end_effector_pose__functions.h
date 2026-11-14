// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from scara_description:srv/GetEndEffectorPose.idl
// generated code does not contain a copyright notice

#ifndef SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__FUNCTIONS_H_
#define SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "scara_description/msg/rosidl_generator_c__visibility_control.h"

#include "scara_description/srv/detail/get_end_effector_pose__struct.h"

/// Initialize srv/GetEndEffectorPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scara_description__srv__GetEndEffectorPose_Request
 * )) before or use
 * scara_description__srv__GetEndEffectorPose_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Request__init(scara_description__srv__GetEndEffectorPose_Request * msg);

/// Finalize srv/GetEndEffectorPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
void
scara_description__srv__GetEndEffectorPose_Request__fini(scara_description__srv__GetEndEffectorPose_Request * msg);

/// Create srv/GetEndEffectorPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scara_description__srv__GetEndEffectorPose_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
scara_description__srv__GetEndEffectorPose_Request *
scara_description__srv__GetEndEffectorPose_Request__create();

/// Destroy srv/GetEndEffectorPose message.
/**
 * It calls
 * scara_description__srv__GetEndEffectorPose_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
void
scara_description__srv__GetEndEffectorPose_Request__destroy(scara_description__srv__GetEndEffectorPose_Request * msg);

/// Check for srv/GetEndEffectorPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Request__are_equal(const scara_description__srv__GetEndEffectorPose_Request * lhs, const scara_description__srv__GetEndEffectorPose_Request * rhs);

/// Copy a srv/GetEndEffectorPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Request__copy(
  const scara_description__srv__GetEndEffectorPose_Request * input,
  scara_description__srv__GetEndEffectorPose_Request * output);

/// Initialize array of srv/GetEndEffectorPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * scara_description__srv__GetEndEffectorPose_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Request__Sequence__init(scara_description__srv__GetEndEffectorPose_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetEndEffectorPose messages.
/**
 * It calls
 * scara_description__srv__GetEndEffectorPose_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
void
scara_description__srv__GetEndEffectorPose_Request__Sequence__fini(scara_description__srv__GetEndEffectorPose_Request__Sequence * array);

/// Create array of srv/GetEndEffectorPose messages.
/**
 * It allocates the memory for the array and calls
 * scara_description__srv__GetEndEffectorPose_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
scara_description__srv__GetEndEffectorPose_Request__Sequence *
scara_description__srv__GetEndEffectorPose_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetEndEffectorPose messages.
/**
 * It calls
 * scara_description__srv__GetEndEffectorPose_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
void
scara_description__srv__GetEndEffectorPose_Request__Sequence__destroy(scara_description__srv__GetEndEffectorPose_Request__Sequence * array);

/// Check for srv/GetEndEffectorPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Request__Sequence__are_equal(const scara_description__srv__GetEndEffectorPose_Request__Sequence * lhs, const scara_description__srv__GetEndEffectorPose_Request__Sequence * rhs);

/// Copy an array of srv/GetEndEffectorPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Request__Sequence__copy(
  const scara_description__srv__GetEndEffectorPose_Request__Sequence * input,
  scara_description__srv__GetEndEffectorPose_Request__Sequence * output);

/// Initialize srv/GetEndEffectorPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scara_description__srv__GetEndEffectorPose_Response
 * )) before or use
 * scara_description__srv__GetEndEffectorPose_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Response__init(scara_description__srv__GetEndEffectorPose_Response * msg);

/// Finalize srv/GetEndEffectorPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
void
scara_description__srv__GetEndEffectorPose_Response__fini(scara_description__srv__GetEndEffectorPose_Response * msg);

/// Create srv/GetEndEffectorPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scara_description__srv__GetEndEffectorPose_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
scara_description__srv__GetEndEffectorPose_Response *
scara_description__srv__GetEndEffectorPose_Response__create();

/// Destroy srv/GetEndEffectorPose message.
/**
 * It calls
 * scara_description__srv__GetEndEffectorPose_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
void
scara_description__srv__GetEndEffectorPose_Response__destroy(scara_description__srv__GetEndEffectorPose_Response * msg);

/// Check for srv/GetEndEffectorPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Response__are_equal(const scara_description__srv__GetEndEffectorPose_Response * lhs, const scara_description__srv__GetEndEffectorPose_Response * rhs);

/// Copy a srv/GetEndEffectorPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Response__copy(
  const scara_description__srv__GetEndEffectorPose_Response * input,
  scara_description__srv__GetEndEffectorPose_Response * output);

/// Initialize array of srv/GetEndEffectorPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * scara_description__srv__GetEndEffectorPose_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Response__Sequence__init(scara_description__srv__GetEndEffectorPose_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetEndEffectorPose messages.
/**
 * It calls
 * scara_description__srv__GetEndEffectorPose_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
void
scara_description__srv__GetEndEffectorPose_Response__Sequence__fini(scara_description__srv__GetEndEffectorPose_Response__Sequence * array);

/// Create array of srv/GetEndEffectorPose messages.
/**
 * It allocates the memory for the array and calls
 * scara_description__srv__GetEndEffectorPose_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
scara_description__srv__GetEndEffectorPose_Response__Sequence *
scara_description__srv__GetEndEffectorPose_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetEndEffectorPose messages.
/**
 * It calls
 * scara_description__srv__GetEndEffectorPose_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
void
scara_description__srv__GetEndEffectorPose_Response__Sequence__destroy(scara_description__srv__GetEndEffectorPose_Response__Sequence * array);

/// Check for srv/GetEndEffectorPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Response__Sequence__are_equal(const scara_description__srv__GetEndEffectorPose_Response__Sequence * lhs, const scara_description__srv__GetEndEffectorPose_Response__Sequence * rhs);

/// Copy an array of srv/GetEndEffectorPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scara_description
bool
scara_description__srv__GetEndEffectorPose_Response__Sequence__copy(
  const scara_description__srv__GetEndEffectorPose_Response__Sequence * input,
  scara_description__srv__GetEndEffectorPose_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__FUNCTIONS_H_
