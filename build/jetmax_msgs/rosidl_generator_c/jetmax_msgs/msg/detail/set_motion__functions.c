// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jetmax_msgs:msg/SetMotion.idl
// generated code does not contain a copyright notice
#include "jetmax_msgs/msg/detail/set_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
jetmax_msgs__msg__SetMotion__init(jetmax_msgs__msg__SetMotion * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  // speed
  return true;
}

void
jetmax_msgs__msg__SetMotion__fini(jetmax_msgs__msg__SetMotion * msg)
{
  if (!msg) {
    return;
  }
  // angle
  // speed
}

bool
jetmax_msgs__msg__SetMotion__are_equal(const jetmax_msgs__msg__SetMotion * lhs, const jetmax_msgs__msg__SetMotion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  return true;
}

bool
jetmax_msgs__msg__SetMotion__copy(
  const jetmax_msgs__msg__SetMotion * input,
  jetmax_msgs__msg__SetMotion * output)
{
  if (!input || !output) {
    return false;
  }
  // angle
  output->angle = input->angle;
  // speed
  output->speed = input->speed;
  return true;
}

jetmax_msgs__msg__SetMotion *
jetmax_msgs__msg__SetMotion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__msg__SetMotion * msg = (jetmax_msgs__msg__SetMotion *)allocator.allocate(sizeof(jetmax_msgs__msg__SetMotion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetmax_msgs__msg__SetMotion));
  bool success = jetmax_msgs__msg__SetMotion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jetmax_msgs__msg__SetMotion__destroy(jetmax_msgs__msg__SetMotion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jetmax_msgs__msg__SetMotion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jetmax_msgs__msg__SetMotion__Sequence__init(jetmax_msgs__msg__SetMotion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__msg__SetMotion * data = NULL;

  if (size) {
    data = (jetmax_msgs__msg__SetMotion *)allocator.zero_allocate(size, sizeof(jetmax_msgs__msg__SetMotion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetmax_msgs__msg__SetMotion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetmax_msgs__msg__SetMotion__fini(&data[i - 1]);
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
jetmax_msgs__msg__SetMotion__Sequence__fini(jetmax_msgs__msg__SetMotion__Sequence * array)
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
      jetmax_msgs__msg__SetMotion__fini(&array->data[i]);
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

jetmax_msgs__msg__SetMotion__Sequence *
jetmax_msgs__msg__SetMotion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__msg__SetMotion__Sequence * array = (jetmax_msgs__msg__SetMotion__Sequence *)allocator.allocate(sizeof(jetmax_msgs__msg__SetMotion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jetmax_msgs__msg__SetMotion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jetmax_msgs__msg__SetMotion__Sequence__destroy(jetmax_msgs__msg__SetMotion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jetmax_msgs__msg__SetMotion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jetmax_msgs__msg__SetMotion__Sequence__are_equal(const jetmax_msgs__msg__SetMotion__Sequence * lhs, const jetmax_msgs__msg__SetMotion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jetmax_msgs__msg__SetMotion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jetmax_msgs__msg__SetMotion__Sequence__copy(
  const jetmax_msgs__msg__SetMotion__Sequence * input,
  jetmax_msgs__msg__SetMotion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jetmax_msgs__msg__SetMotion);
    jetmax_msgs__msg__SetMotion * data =
      (jetmax_msgs__msg__SetMotion *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jetmax_msgs__msg__SetMotion__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          jetmax_msgs__msg__SetMotion__fini(&data[i]);
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
    if (!jetmax_msgs__msg__SetMotion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
