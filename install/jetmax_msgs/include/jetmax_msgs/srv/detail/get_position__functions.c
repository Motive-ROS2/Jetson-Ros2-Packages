// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jetmax_msgs:srv/GetPosition.idl
// generated code does not contain a copyright notice
#include "jetmax_msgs/srv/detail/get_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
jetmax_msgs__srv__GetPosition_Request__init(jetmax_msgs__srv__GetPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
jetmax_msgs__srv__GetPosition_Request__fini(jetmax_msgs__srv__GetPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
jetmax_msgs__srv__GetPosition_Request__are_equal(const jetmax_msgs__srv__GetPosition_Request * lhs, const jetmax_msgs__srv__GetPosition_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
jetmax_msgs__srv__GetPosition_Request__copy(
  const jetmax_msgs__srv__GetPosition_Request * input,
  jetmax_msgs__srv__GetPosition_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

jetmax_msgs__srv__GetPosition_Request *
jetmax_msgs__srv__GetPosition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__srv__GetPosition_Request * msg = (jetmax_msgs__srv__GetPosition_Request *)allocator.allocate(sizeof(jetmax_msgs__srv__GetPosition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetmax_msgs__srv__GetPosition_Request));
  bool success = jetmax_msgs__srv__GetPosition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jetmax_msgs__srv__GetPosition_Request__destroy(jetmax_msgs__srv__GetPosition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jetmax_msgs__srv__GetPosition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jetmax_msgs__srv__GetPosition_Request__Sequence__init(jetmax_msgs__srv__GetPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__srv__GetPosition_Request * data = NULL;

  if (size) {
    data = (jetmax_msgs__srv__GetPosition_Request *)allocator.zero_allocate(size, sizeof(jetmax_msgs__srv__GetPosition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetmax_msgs__srv__GetPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetmax_msgs__srv__GetPosition_Request__fini(&data[i - 1]);
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
jetmax_msgs__srv__GetPosition_Request__Sequence__fini(jetmax_msgs__srv__GetPosition_Request__Sequence * array)
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
      jetmax_msgs__srv__GetPosition_Request__fini(&array->data[i]);
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

jetmax_msgs__srv__GetPosition_Request__Sequence *
jetmax_msgs__srv__GetPosition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__srv__GetPosition_Request__Sequence * array = (jetmax_msgs__srv__GetPosition_Request__Sequence *)allocator.allocate(sizeof(jetmax_msgs__srv__GetPosition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jetmax_msgs__srv__GetPosition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jetmax_msgs__srv__GetPosition_Request__Sequence__destroy(jetmax_msgs__srv__GetPosition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jetmax_msgs__srv__GetPosition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jetmax_msgs__srv__GetPosition_Request__Sequence__are_equal(const jetmax_msgs__srv__GetPosition_Request__Sequence * lhs, const jetmax_msgs__srv__GetPosition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jetmax_msgs__srv__GetPosition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jetmax_msgs__srv__GetPosition_Request__Sequence__copy(
  const jetmax_msgs__srv__GetPosition_Request__Sequence * input,
  jetmax_msgs__srv__GetPosition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jetmax_msgs__srv__GetPosition_Request);
    jetmax_msgs__srv__GetPosition_Request * data =
      (jetmax_msgs__srv__GetPosition_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jetmax_msgs__srv__GetPosition_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          jetmax_msgs__srv__GetPosition_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!jetmax_msgs__srv__GetPosition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `object_pos`
// Member `robot_markers`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
jetmax_msgs__srv__GetPosition_Response__init(jetmax_msgs__srv__GetPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // object_pos
  if (!geometry_msgs__msg__Point__init(&msg->object_pos)) {
    jetmax_msgs__srv__GetPosition_Response__fini(msg);
    return false;
  }
  // robot_markers
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->robot_markers, 0)) {
    jetmax_msgs__srv__GetPosition_Response__fini(msg);
    return false;
  }
  return true;
}

void
jetmax_msgs__srv__GetPosition_Response__fini(jetmax_msgs__srv__GetPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // object_pos
  geometry_msgs__msg__Point__fini(&msg->object_pos);
  // robot_markers
  geometry_msgs__msg__Point__Sequence__fini(&msg->robot_markers);
}

bool
jetmax_msgs__srv__GetPosition_Response__are_equal(const jetmax_msgs__srv__GetPosition_Response * lhs, const jetmax_msgs__srv__GetPosition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_pos
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->object_pos), &(rhs->object_pos)))
  {
    return false;
  }
  // robot_markers
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->robot_markers), &(rhs->robot_markers)))
  {
    return false;
  }
  return true;
}

bool
jetmax_msgs__srv__GetPosition_Response__copy(
  const jetmax_msgs__srv__GetPosition_Response * input,
  jetmax_msgs__srv__GetPosition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // object_pos
  if (!geometry_msgs__msg__Point__copy(
      &(input->object_pos), &(output->object_pos)))
  {
    return false;
  }
  // robot_markers
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->robot_markers), &(output->robot_markers)))
  {
    return false;
  }
  return true;
}

jetmax_msgs__srv__GetPosition_Response *
jetmax_msgs__srv__GetPosition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__srv__GetPosition_Response * msg = (jetmax_msgs__srv__GetPosition_Response *)allocator.allocate(sizeof(jetmax_msgs__srv__GetPosition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetmax_msgs__srv__GetPosition_Response));
  bool success = jetmax_msgs__srv__GetPosition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jetmax_msgs__srv__GetPosition_Response__destroy(jetmax_msgs__srv__GetPosition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jetmax_msgs__srv__GetPosition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jetmax_msgs__srv__GetPosition_Response__Sequence__init(jetmax_msgs__srv__GetPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__srv__GetPosition_Response * data = NULL;

  if (size) {
    data = (jetmax_msgs__srv__GetPosition_Response *)allocator.zero_allocate(size, sizeof(jetmax_msgs__srv__GetPosition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetmax_msgs__srv__GetPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetmax_msgs__srv__GetPosition_Response__fini(&data[i - 1]);
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
jetmax_msgs__srv__GetPosition_Response__Sequence__fini(jetmax_msgs__srv__GetPosition_Response__Sequence * array)
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
      jetmax_msgs__srv__GetPosition_Response__fini(&array->data[i]);
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

jetmax_msgs__srv__GetPosition_Response__Sequence *
jetmax_msgs__srv__GetPosition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__srv__GetPosition_Response__Sequence * array = (jetmax_msgs__srv__GetPosition_Response__Sequence *)allocator.allocate(sizeof(jetmax_msgs__srv__GetPosition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jetmax_msgs__srv__GetPosition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jetmax_msgs__srv__GetPosition_Response__Sequence__destroy(jetmax_msgs__srv__GetPosition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jetmax_msgs__srv__GetPosition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jetmax_msgs__srv__GetPosition_Response__Sequence__are_equal(const jetmax_msgs__srv__GetPosition_Response__Sequence * lhs, const jetmax_msgs__srv__GetPosition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jetmax_msgs__srv__GetPosition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jetmax_msgs__srv__GetPosition_Response__Sequence__copy(
  const jetmax_msgs__srv__GetPosition_Response__Sequence * input,
  jetmax_msgs__srv__GetPosition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jetmax_msgs__srv__GetPosition_Response);
    jetmax_msgs__srv__GetPosition_Response * data =
      (jetmax_msgs__srv__GetPosition_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jetmax_msgs__srv__GetPosition_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          jetmax_msgs__srv__GetPosition_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!jetmax_msgs__srv__GetPosition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
