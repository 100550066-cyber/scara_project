// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from scara_description:srv/SetJointConfig.idl
// generated code does not contain a copyright notice
#include "scara_description/srv/detail/set_joint_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
scara_description__srv__SetJointConfig_Request__init(scara_description__srv__SetJointConfig_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joint_1
  // joint_2
  // joint_3
  return true;
}

void
scara_description__srv__SetJointConfig_Request__fini(scara_description__srv__SetJointConfig_Request * msg)
{
  if (!msg) {
    return;
  }
  // joint_1
  // joint_2
  // joint_3
}

bool
scara_description__srv__SetJointConfig_Request__are_equal(const scara_description__srv__SetJointConfig_Request * lhs, const scara_description__srv__SetJointConfig_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_1
  if (lhs->joint_1 != rhs->joint_1) {
    return false;
  }
  // joint_2
  if (lhs->joint_2 != rhs->joint_2) {
    return false;
  }
  // joint_3
  if (lhs->joint_3 != rhs->joint_3) {
    return false;
  }
  return true;
}

bool
scara_description__srv__SetJointConfig_Request__copy(
  const scara_description__srv__SetJointConfig_Request * input,
  scara_description__srv__SetJointConfig_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_1
  output->joint_1 = input->joint_1;
  // joint_2
  output->joint_2 = input->joint_2;
  // joint_3
  output->joint_3 = input->joint_3;
  return true;
}

scara_description__srv__SetJointConfig_Request *
scara_description__srv__SetJointConfig_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_description__srv__SetJointConfig_Request * msg = (scara_description__srv__SetJointConfig_Request *)allocator.allocate(sizeof(scara_description__srv__SetJointConfig_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_description__srv__SetJointConfig_Request));
  bool success = scara_description__srv__SetJointConfig_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
scara_description__srv__SetJointConfig_Request__destroy(scara_description__srv__SetJointConfig_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    scara_description__srv__SetJointConfig_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
scara_description__srv__SetJointConfig_Request__Sequence__init(scara_description__srv__SetJointConfig_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_description__srv__SetJointConfig_Request * data = NULL;

  if (size) {
    data = (scara_description__srv__SetJointConfig_Request *)allocator.zero_allocate(size, sizeof(scara_description__srv__SetJointConfig_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_description__srv__SetJointConfig_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_description__srv__SetJointConfig_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
scara_description__srv__SetJointConfig_Request__Sequence__fini(scara_description__srv__SetJointConfig_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_description__srv__SetJointConfig_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

scara_description__srv__SetJointConfig_Request__Sequence *
scara_description__srv__SetJointConfig_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_description__srv__SetJointConfig_Request__Sequence * array = (scara_description__srv__SetJointConfig_Request__Sequence *)allocator.allocate(sizeof(scara_description__srv__SetJointConfig_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = scara_description__srv__SetJointConfig_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
scara_description__srv__SetJointConfig_Request__Sequence__destroy(scara_description__srv__SetJointConfig_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    scara_description__srv__SetJointConfig_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
scara_description__srv__SetJointConfig_Request__Sequence__are_equal(const scara_description__srv__SetJointConfig_Request__Sequence * lhs, const scara_description__srv__SetJointConfig_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_description__srv__SetJointConfig_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_description__srv__SetJointConfig_Request__Sequence__copy(
  const scara_description__srv__SetJointConfig_Request__Sequence * input,
  scara_description__srv__SetJointConfig_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_description__srv__SetJointConfig_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    scara_description__srv__SetJointConfig_Request * data =
      (scara_description__srv__SetJointConfig_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_description__srv__SetJointConfig_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          scara_description__srv__SetJointConfig_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!scara_description__srv__SetJointConfig_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
scara_description__srv__SetJointConfig_Response__init(scara_description__srv__SetJointConfig_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    scara_description__srv__SetJointConfig_Response__fini(msg);
    return false;
  }
  return true;
}

void
scara_description__srv__SetJointConfig_Response__fini(scara_description__srv__SetJointConfig_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
scara_description__srv__SetJointConfig_Response__are_equal(const scara_description__srv__SetJointConfig_Response * lhs, const scara_description__srv__SetJointConfig_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
scara_description__srv__SetJointConfig_Response__copy(
  const scara_description__srv__SetJointConfig_Response * input,
  scara_description__srv__SetJointConfig_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

scara_description__srv__SetJointConfig_Response *
scara_description__srv__SetJointConfig_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_description__srv__SetJointConfig_Response * msg = (scara_description__srv__SetJointConfig_Response *)allocator.allocate(sizeof(scara_description__srv__SetJointConfig_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_description__srv__SetJointConfig_Response));
  bool success = scara_description__srv__SetJointConfig_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
scara_description__srv__SetJointConfig_Response__destroy(scara_description__srv__SetJointConfig_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    scara_description__srv__SetJointConfig_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
scara_description__srv__SetJointConfig_Response__Sequence__init(scara_description__srv__SetJointConfig_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_description__srv__SetJointConfig_Response * data = NULL;

  if (size) {
    data = (scara_description__srv__SetJointConfig_Response *)allocator.zero_allocate(size, sizeof(scara_description__srv__SetJointConfig_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_description__srv__SetJointConfig_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_description__srv__SetJointConfig_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
scara_description__srv__SetJointConfig_Response__Sequence__fini(scara_description__srv__SetJointConfig_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      scara_description__srv__SetJointConfig_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

scara_description__srv__SetJointConfig_Response__Sequence *
scara_description__srv__SetJointConfig_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_description__srv__SetJointConfig_Response__Sequence * array = (scara_description__srv__SetJointConfig_Response__Sequence *)allocator.allocate(sizeof(scara_description__srv__SetJointConfig_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = scara_description__srv__SetJointConfig_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
scara_description__srv__SetJointConfig_Response__Sequence__destroy(scara_description__srv__SetJointConfig_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    scara_description__srv__SetJointConfig_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
scara_description__srv__SetJointConfig_Response__Sequence__are_equal(const scara_description__srv__SetJointConfig_Response__Sequence * lhs, const scara_description__srv__SetJointConfig_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_description__srv__SetJointConfig_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_description__srv__SetJointConfig_Response__Sequence__copy(
  const scara_description__srv__SetJointConfig_Response__Sequence * input,
  scara_description__srv__SetJointConfig_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_description__srv__SetJointConfig_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    scara_description__srv__SetJointConfig_Response * data =
      (scara_description__srv__SetJointConfig_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_description__srv__SetJointConfig_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          scara_description__srv__SetJointConfig_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!scara_description__srv__SetJointConfig_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
