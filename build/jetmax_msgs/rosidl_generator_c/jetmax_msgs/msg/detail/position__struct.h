// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jetmax_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__MSG__DETAIL__POSITION__STRUCT_H_
#define JETMAX_MSGS__MSG__DETAIL__POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Position in the package jetmax_msgs.
typedef struct jetmax_msgs__msg__Position
{
  float x;
  float y;
  float z;
} jetmax_msgs__msg__Position;

// Struct for a sequence of jetmax_msgs__msg__Position.
typedef struct jetmax_msgs__msg__Position__Sequence
{
  jetmax_msgs__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetmax_msgs__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JETMAX_MSGS__MSG__DETAIL__POSITION__STRUCT_H_
