// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jetmax_msgs:action/PathPlanning.idl
// generated code does not contain a copyright notice
#include "jetmax_msgs/action/detail/path_planning__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_pos`
// Member `robot_markers`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
jetmax_msgs__action__PathPlanning_Goal__init(jetmax_msgs__action__PathPlanning_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // object_pos
  if (!geometry_msgs__msg__Point__init(&msg->object_pos)) {
    jetmax_msgs__action__PathPlanning_Goal__fini(msg);
    return false;
  }
  // robot_markers
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->robot_markers, 0)) {
    jetmax_msgs__action__PathPlanning_Goal__fini(msg);
    return false;
  }
  return true;
}

void
jetmax_msgs__action__PathPlanning_Goal__fini(jetmax_msgs__action__PathPlanning_Goal * msg)
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
jetmax_msgs__action__PathPlanning_Goal__are_equal(const jetmax_msgs__action__PathPlanning_Goal * lhs, const jetmax_msgs__action__PathPlanning_Goal * rhs)
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
jetmax_msgs__action__PathPlanning_Goal__copy(
  const jetmax_msgs__action__PathPlanning_Goal * input,
  jetmax_msgs__action__PathPlanning_Goal * output)
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

jetmax_msgs__action__PathPlanning_Goal *
jetmax_msgs__action__PathPlanning_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_Goal * msg = (jetmax_msgs__action__PathPlanning_Goal *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetmax_msgs__action__PathPlanning_Goal));
  bool success = jetmax_msgs__action__PathPlanning_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jetmax_msgs__action__PathPlanning_Goal__destroy(jetmax_msgs__action__PathPlanning_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jetmax_msgs__action__PathPlanning_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jetmax_msgs__action__PathPlanning_Goal__Sequence__init(jetmax_msgs__action__PathPlanning_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_Goal * data = NULL;

  if (size) {
    data = (jetmax_msgs__action__PathPlanning_Goal *)allocator.zero_allocate(size, sizeof(jetmax_msgs__action__PathPlanning_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetmax_msgs__action__PathPlanning_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetmax_msgs__action__PathPlanning_Goal__fini(&data[i - 1]);
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
jetmax_msgs__action__PathPlanning_Goal__Sequence__fini(jetmax_msgs__action__PathPlanning_Goal__Sequence * array)
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
      jetmax_msgs__action__PathPlanning_Goal__fini(&array->data[i]);
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

jetmax_msgs__action__PathPlanning_Goal__Sequence *
jetmax_msgs__action__PathPlanning_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_Goal__Sequence * array = (jetmax_msgs__action__PathPlanning_Goal__Sequence *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jetmax_msgs__action__PathPlanning_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jetmax_msgs__action__PathPlanning_Goal__Sequence__destroy(jetmax_msgs__action__PathPlanning_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jetmax_msgs__action__PathPlanning_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jetmax_msgs__action__PathPlanning_Goal__Sequence__are_equal(const jetmax_msgs__action__PathPlanning_Goal__Sequence * lhs, const jetmax_msgs__action__PathPlanning_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jetmax_msgs__action__PathPlanning_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_Goal__Sequence__copy(
  const jetmax_msgs__action__PathPlanning_Goal__Sequence * input,
  jetmax_msgs__action__PathPlanning_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jetmax_msgs__action__PathPlanning_Goal);
    jetmax_msgs__action__PathPlanning_Goal * data =
      (jetmax_msgs__action__PathPlanning_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jetmax_msgs__action__PathPlanning_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          jetmax_msgs__action__PathPlanning_Goal__fini(&data[i]);
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
    if (!jetmax_msgs__action__PathPlanning_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
jetmax_msgs__action__PathPlanning_Result__init(jetmax_msgs__action__PathPlanning_Result * msg)
{
  if (!msg) {
    return false;
  }
  // return_code
  return true;
}

void
jetmax_msgs__action__PathPlanning_Result__fini(jetmax_msgs__action__PathPlanning_Result * msg)
{
  if (!msg) {
    return;
  }
  // return_code
}

bool
jetmax_msgs__action__PathPlanning_Result__are_equal(const jetmax_msgs__action__PathPlanning_Result * lhs, const jetmax_msgs__action__PathPlanning_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // return_code
  if (lhs->return_code != rhs->return_code) {
    return false;
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_Result__copy(
  const jetmax_msgs__action__PathPlanning_Result * input,
  jetmax_msgs__action__PathPlanning_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // return_code
  output->return_code = input->return_code;
  return true;
}

jetmax_msgs__action__PathPlanning_Result *
jetmax_msgs__action__PathPlanning_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_Result * msg = (jetmax_msgs__action__PathPlanning_Result *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetmax_msgs__action__PathPlanning_Result));
  bool success = jetmax_msgs__action__PathPlanning_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jetmax_msgs__action__PathPlanning_Result__destroy(jetmax_msgs__action__PathPlanning_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jetmax_msgs__action__PathPlanning_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jetmax_msgs__action__PathPlanning_Result__Sequence__init(jetmax_msgs__action__PathPlanning_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_Result * data = NULL;

  if (size) {
    data = (jetmax_msgs__action__PathPlanning_Result *)allocator.zero_allocate(size, sizeof(jetmax_msgs__action__PathPlanning_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetmax_msgs__action__PathPlanning_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetmax_msgs__action__PathPlanning_Result__fini(&data[i - 1]);
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
jetmax_msgs__action__PathPlanning_Result__Sequence__fini(jetmax_msgs__action__PathPlanning_Result__Sequence * array)
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
      jetmax_msgs__action__PathPlanning_Result__fini(&array->data[i]);
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

jetmax_msgs__action__PathPlanning_Result__Sequence *
jetmax_msgs__action__PathPlanning_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_Result__Sequence * array = (jetmax_msgs__action__PathPlanning_Result__Sequence *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jetmax_msgs__action__PathPlanning_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jetmax_msgs__action__PathPlanning_Result__Sequence__destroy(jetmax_msgs__action__PathPlanning_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jetmax_msgs__action__PathPlanning_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jetmax_msgs__action__PathPlanning_Result__Sequence__are_equal(const jetmax_msgs__action__PathPlanning_Result__Sequence * lhs, const jetmax_msgs__action__PathPlanning_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jetmax_msgs__action__PathPlanning_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_Result__Sequence__copy(
  const jetmax_msgs__action__PathPlanning_Result__Sequence * input,
  jetmax_msgs__action__PathPlanning_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jetmax_msgs__action__PathPlanning_Result);
    jetmax_msgs__action__PathPlanning_Result * data =
      (jetmax_msgs__action__PathPlanning_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jetmax_msgs__action__PathPlanning_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          jetmax_msgs__action__PathPlanning_Result__fini(&data[i]);
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
    if (!jetmax_msgs__action__PathPlanning_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
jetmax_msgs__action__PathPlanning_Feedback__init(jetmax_msgs__action__PathPlanning_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // update_status
  return true;
}

void
jetmax_msgs__action__PathPlanning_Feedback__fini(jetmax_msgs__action__PathPlanning_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // update_status
}

bool
jetmax_msgs__action__PathPlanning_Feedback__are_equal(const jetmax_msgs__action__PathPlanning_Feedback * lhs, const jetmax_msgs__action__PathPlanning_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // update_status
  if (lhs->update_status != rhs->update_status) {
    return false;
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_Feedback__copy(
  const jetmax_msgs__action__PathPlanning_Feedback * input,
  jetmax_msgs__action__PathPlanning_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // update_status
  output->update_status = input->update_status;
  return true;
}

jetmax_msgs__action__PathPlanning_Feedback *
jetmax_msgs__action__PathPlanning_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_Feedback * msg = (jetmax_msgs__action__PathPlanning_Feedback *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetmax_msgs__action__PathPlanning_Feedback));
  bool success = jetmax_msgs__action__PathPlanning_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jetmax_msgs__action__PathPlanning_Feedback__destroy(jetmax_msgs__action__PathPlanning_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jetmax_msgs__action__PathPlanning_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jetmax_msgs__action__PathPlanning_Feedback__Sequence__init(jetmax_msgs__action__PathPlanning_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_Feedback * data = NULL;

  if (size) {
    data = (jetmax_msgs__action__PathPlanning_Feedback *)allocator.zero_allocate(size, sizeof(jetmax_msgs__action__PathPlanning_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetmax_msgs__action__PathPlanning_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetmax_msgs__action__PathPlanning_Feedback__fini(&data[i - 1]);
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
jetmax_msgs__action__PathPlanning_Feedback__Sequence__fini(jetmax_msgs__action__PathPlanning_Feedback__Sequence * array)
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
      jetmax_msgs__action__PathPlanning_Feedback__fini(&array->data[i]);
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

jetmax_msgs__action__PathPlanning_Feedback__Sequence *
jetmax_msgs__action__PathPlanning_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_Feedback__Sequence * array = (jetmax_msgs__action__PathPlanning_Feedback__Sequence *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jetmax_msgs__action__PathPlanning_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jetmax_msgs__action__PathPlanning_Feedback__Sequence__destroy(jetmax_msgs__action__PathPlanning_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jetmax_msgs__action__PathPlanning_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jetmax_msgs__action__PathPlanning_Feedback__Sequence__are_equal(const jetmax_msgs__action__PathPlanning_Feedback__Sequence * lhs, const jetmax_msgs__action__PathPlanning_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jetmax_msgs__action__PathPlanning_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_Feedback__Sequence__copy(
  const jetmax_msgs__action__PathPlanning_Feedback__Sequence * input,
  jetmax_msgs__action__PathPlanning_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jetmax_msgs__action__PathPlanning_Feedback);
    jetmax_msgs__action__PathPlanning_Feedback * data =
      (jetmax_msgs__action__PathPlanning_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jetmax_msgs__action__PathPlanning_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          jetmax_msgs__action__PathPlanning_Feedback__fini(&data[i]);
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
    if (!jetmax_msgs__action__PathPlanning_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"

bool
jetmax_msgs__action__PathPlanning_SendGoal_Request__init(jetmax_msgs__action__PathPlanning_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    jetmax_msgs__action__PathPlanning_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!jetmax_msgs__action__PathPlanning_Goal__init(&msg->goal)) {
    jetmax_msgs__action__PathPlanning_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
jetmax_msgs__action__PathPlanning_SendGoal_Request__fini(jetmax_msgs__action__PathPlanning_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  jetmax_msgs__action__PathPlanning_Goal__fini(&msg->goal);
}

bool
jetmax_msgs__action__PathPlanning_SendGoal_Request__are_equal(const jetmax_msgs__action__PathPlanning_SendGoal_Request * lhs, const jetmax_msgs__action__PathPlanning_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!jetmax_msgs__action__PathPlanning_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_SendGoal_Request__copy(
  const jetmax_msgs__action__PathPlanning_SendGoal_Request * input,
  jetmax_msgs__action__PathPlanning_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!jetmax_msgs__action__PathPlanning_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

jetmax_msgs__action__PathPlanning_SendGoal_Request *
jetmax_msgs__action__PathPlanning_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_SendGoal_Request * msg = (jetmax_msgs__action__PathPlanning_SendGoal_Request *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Request));
  bool success = jetmax_msgs__action__PathPlanning_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jetmax_msgs__action__PathPlanning_SendGoal_Request__destroy(jetmax_msgs__action__PathPlanning_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jetmax_msgs__action__PathPlanning_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence__init(jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_SendGoal_Request * data = NULL;

  if (size) {
    data = (jetmax_msgs__action__PathPlanning_SendGoal_Request *)allocator.zero_allocate(size, sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetmax_msgs__action__PathPlanning_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetmax_msgs__action__PathPlanning_SendGoal_Request__fini(&data[i - 1]);
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
jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence__fini(jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence * array)
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
      jetmax_msgs__action__PathPlanning_SendGoal_Request__fini(&array->data[i]);
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

jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence *
jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence * array = (jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence__destroy(jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence__are_equal(const jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence * lhs, const jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jetmax_msgs__action__PathPlanning_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence__copy(
  const jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence * input,
  jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Request);
    jetmax_msgs__action__PathPlanning_SendGoal_Request * data =
      (jetmax_msgs__action__PathPlanning_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jetmax_msgs__action__PathPlanning_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          jetmax_msgs__action__PathPlanning_SendGoal_Request__fini(&data[i]);
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
    if (!jetmax_msgs__action__PathPlanning_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
jetmax_msgs__action__PathPlanning_SendGoal_Response__init(jetmax_msgs__action__PathPlanning_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    jetmax_msgs__action__PathPlanning_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
jetmax_msgs__action__PathPlanning_SendGoal_Response__fini(jetmax_msgs__action__PathPlanning_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
jetmax_msgs__action__PathPlanning_SendGoal_Response__are_equal(const jetmax_msgs__action__PathPlanning_SendGoal_Response * lhs, const jetmax_msgs__action__PathPlanning_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_SendGoal_Response__copy(
  const jetmax_msgs__action__PathPlanning_SendGoal_Response * input,
  jetmax_msgs__action__PathPlanning_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

jetmax_msgs__action__PathPlanning_SendGoal_Response *
jetmax_msgs__action__PathPlanning_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_SendGoal_Response * msg = (jetmax_msgs__action__PathPlanning_SendGoal_Response *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Response));
  bool success = jetmax_msgs__action__PathPlanning_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jetmax_msgs__action__PathPlanning_SendGoal_Response__destroy(jetmax_msgs__action__PathPlanning_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jetmax_msgs__action__PathPlanning_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence__init(jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_SendGoal_Response * data = NULL;

  if (size) {
    data = (jetmax_msgs__action__PathPlanning_SendGoal_Response *)allocator.zero_allocate(size, sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetmax_msgs__action__PathPlanning_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetmax_msgs__action__PathPlanning_SendGoal_Response__fini(&data[i - 1]);
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
jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence__fini(jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence * array)
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
      jetmax_msgs__action__PathPlanning_SendGoal_Response__fini(&array->data[i]);
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

jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence *
jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence * array = (jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence__destroy(jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence__are_equal(const jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence * lhs, const jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jetmax_msgs__action__PathPlanning_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence__copy(
  const jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence * input,
  jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Response);
    jetmax_msgs__action__PathPlanning_SendGoal_Response * data =
      (jetmax_msgs__action__PathPlanning_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jetmax_msgs__action__PathPlanning_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          jetmax_msgs__action__PathPlanning_SendGoal_Response__fini(&data[i]);
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
    if (!jetmax_msgs__action__PathPlanning_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
jetmax_msgs__action__PathPlanning_GetResult_Request__init(jetmax_msgs__action__PathPlanning_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    jetmax_msgs__action__PathPlanning_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
jetmax_msgs__action__PathPlanning_GetResult_Request__fini(jetmax_msgs__action__PathPlanning_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
jetmax_msgs__action__PathPlanning_GetResult_Request__are_equal(const jetmax_msgs__action__PathPlanning_GetResult_Request * lhs, const jetmax_msgs__action__PathPlanning_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_GetResult_Request__copy(
  const jetmax_msgs__action__PathPlanning_GetResult_Request * input,
  jetmax_msgs__action__PathPlanning_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

jetmax_msgs__action__PathPlanning_GetResult_Request *
jetmax_msgs__action__PathPlanning_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_GetResult_Request * msg = (jetmax_msgs__action__PathPlanning_GetResult_Request *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetmax_msgs__action__PathPlanning_GetResult_Request));
  bool success = jetmax_msgs__action__PathPlanning_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jetmax_msgs__action__PathPlanning_GetResult_Request__destroy(jetmax_msgs__action__PathPlanning_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jetmax_msgs__action__PathPlanning_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence__init(jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_GetResult_Request * data = NULL;

  if (size) {
    data = (jetmax_msgs__action__PathPlanning_GetResult_Request *)allocator.zero_allocate(size, sizeof(jetmax_msgs__action__PathPlanning_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetmax_msgs__action__PathPlanning_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetmax_msgs__action__PathPlanning_GetResult_Request__fini(&data[i - 1]);
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
jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence__fini(jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence * array)
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
      jetmax_msgs__action__PathPlanning_GetResult_Request__fini(&array->data[i]);
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

jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence *
jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence * array = (jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence__destroy(jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence__are_equal(const jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence * lhs, const jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jetmax_msgs__action__PathPlanning_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence__copy(
  const jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence * input,
  jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jetmax_msgs__action__PathPlanning_GetResult_Request);
    jetmax_msgs__action__PathPlanning_GetResult_Request * data =
      (jetmax_msgs__action__PathPlanning_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jetmax_msgs__action__PathPlanning_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          jetmax_msgs__action__PathPlanning_GetResult_Request__fini(&data[i]);
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
    if (!jetmax_msgs__action__PathPlanning_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"

bool
jetmax_msgs__action__PathPlanning_GetResult_Response__init(jetmax_msgs__action__PathPlanning_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!jetmax_msgs__action__PathPlanning_Result__init(&msg->result)) {
    jetmax_msgs__action__PathPlanning_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
jetmax_msgs__action__PathPlanning_GetResult_Response__fini(jetmax_msgs__action__PathPlanning_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  jetmax_msgs__action__PathPlanning_Result__fini(&msg->result);
}

bool
jetmax_msgs__action__PathPlanning_GetResult_Response__are_equal(const jetmax_msgs__action__PathPlanning_GetResult_Response * lhs, const jetmax_msgs__action__PathPlanning_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!jetmax_msgs__action__PathPlanning_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_GetResult_Response__copy(
  const jetmax_msgs__action__PathPlanning_GetResult_Response * input,
  jetmax_msgs__action__PathPlanning_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!jetmax_msgs__action__PathPlanning_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

jetmax_msgs__action__PathPlanning_GetResult_Response *
jetmax_msgs__action__PathPlanning_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_GetResult_Response * msg = (jetmax_msgs__action__PathPlanning_GetResult_Response *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetmax_msgs__action__PathPlanning_GetResult_Response));
  bool success = jetmax_msgs__action__PathPlanning_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jetmax_msgs__action__PathPlanning_GetResult_Response__destroy(jetmax_msgs__action__PathPlanning_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jetmax_msgs__action__PathPlanning_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence__init(jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_GetResult_Response * data = NULL;

  if (size) {
    data = (jetmax_msgs__action__PathPlanning_GetResult_Response *)allocator.zero_allocate(size, sizeof(jetmax_msgs__action__PathPlanning_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetmax_msgs__action__PathPlanning_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetmax_msgs__action__PathPlanning_GetResult_Response__fini(&data[i - 1]);
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
jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence__fini(jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence * array)
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
      jetmax_msgs__action__PathPlanning_GetResult_Response__fini(&array->data[i]);
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

jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence *
jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence * array = (jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence__destroy(jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence__are_equal(const jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence * lhs, const jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jetmax_msgs__action__PathPlanning_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence__copy(
  const jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence * input,
  jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jetmax_msgs__action__PathPlanning_GetResult_Response);
    jetmax_msgs__action__PathPlanning_GetResult_Response * data =
      (jetmax_msgs__action__PathPlanning_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jetmax_msgs__action__PathPlanning_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          jetmax_msgs__action__PathPlanning_GetResult_Response__fini(&data[i]);
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
    if (!jetmax_msgs__action__PathPlanning_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"

bool
jetmax_msgs__action__PathPlanning_FeedbackMessage__init(jetmax_msgs__action__PathPlanning_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    jetmax_msgs__action__PathPlanning_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!jetmax_msgs__action__PathPlanning_Feedback__init(&msg->feedback)) {
    jetmax_msgs__action__PathPlanning_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
jetmax_msgs__action__PathPlanning_FeedbackMessage__fini(jetmax_msgs__action__PathPlanning_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  jetmax_msgs__action__PathPlanning_Feedback__fini(&msg->feedback);
}

bool
jetmax_msgs__action__PathPlanning_FeedbackMessage__are_equal(const jetmax_msgs__action__PathPlanning_FeedbackMessage * lhs, const jetmax_msgs__action__PathPlanning_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!jetmax_msgs__action__PathPlanning_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_FeedbackMessage__copy(
  const jetmax_msgs__action__PathPlanning_FeedbackMessage * input,
  jetmax_msgs__action__PathPlanning_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!jetmax_msgs__action__PathPlanning_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

jetmax_msgs__action__PathPlanning_FeedbackMessage *
jetmax_msgs__action__PathPlanning_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_FeedbackMessage * msg = (jetmax_msgs__action__PathPlanning_FeedbackMessage *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetmax_msgs__action__PathPlanning_FeedbackMessage));
  bool success = jetmax_msgs__action__PathPlanning_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jetmax_msgs__action__PathPlanning_FeedbackMessage__destroy(jetmax_msgs__action__PathPlanning_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jetmax_msgs__action__PathPlanning_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence__init(jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_FeedbackMessage * data = NULL;

  if (size) {
    data = (jetmax_msgs__action__PathPlanning_FeedbackMessage *)allocator.zero_allocate(size, sizeof(jetmax_msgs__action__PathPlanning_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetmax_msgs__action__PathPlanning_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetmax_msgs__action__PathPlanning_FeedbackMessage__fini(&data[i - 1]);
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
jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence__fini(jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence * array)
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
      jetmax_msgs__action__PathPlanning_FeedbackMessage__fini(&array->data[i]);
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

jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence *
jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence * array = (jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence *)allocator.allocate(sizeof(jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence__destroy(jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence__are_equal(const jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence * lhs, const jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jetmax_msgs__action__PathPlanning_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence__copy(
  const jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence * input,
  jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jetmax_msgs__action__PathPlanning_FeedbackMessage);
    jetmax_msgs__action__PathPlanning_FeedbackMessage * data =
      (jetmax_msgs__action__PathPlanning_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jetmax_msgs__action__PathPlanning_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          jetmax_msgs__action__PathPlanning_FeedbackMessage__fini(&data[i]);
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
    if (!jetmax_msgs__action__PathPlanning_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
