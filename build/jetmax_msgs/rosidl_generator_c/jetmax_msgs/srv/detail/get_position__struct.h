// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jetmax_msgs:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__SRV__DETAIL__GET_POSITION__STRUCT_H_
#define JETMAX_MSGS__SRV__DETAIL__GET_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetPosition in the package jetmax_msgs.
typedef struct jetmax_msgs__srv__GetPosition_Request
{
  uint8_t structure_needs_at_least_one_member;
} jetmax_msgs__srv__GetPosition_Request;

// Struct for a sequence of jetmax_msgs__srv__GetPosition_Request.
typedef struct jetmax_msgs__srv__GetPosition_Request__Sequence
{
  jetmax_msgs__srv__GetPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetmax_msgs__srv__GetPosition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'object_pos'
// Member 'robot_markers'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in srv/GetPosition in the package jetmax_msgs.
typedef struct jetmax_msgs__srv__GetPosition_Response
{
  geometry_msgs__msg__Point object_pos;
  geometry_msgs__msg__Point__Sequence robot_markers;
} jetmax_msgs__srv__GetPosition_Response;

// Struct for a sequence of jetmax_msgs__srv__GetPosition_Response.
typedef struct jetmax_msgs__srv__GetPosition_Response__Sequence
{
  jetmax_msgs__srv__GetPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetmax_msgs__srv__GetPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JETMAX_MSGS__SRV__DETAIL__GET_POSITION__STRUCT_H_
