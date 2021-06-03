// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from box_msgs:msg/Box.idl
// generated code does not contain a copyright notice

#ifndef BOX_MSGS__MSG__DETAIL__BOX__STRUCT_H_
#define BOX_MSGS__MSG__DETAIL__BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/Box in the package box_msgs.
typedef struct box_msgs__msg__Box
{
  std_msgs__msg__Header header;
  float l;
  float r;
  float t;
  float b;
} box_msgs__msg__Box;

// Struct for a sequence of box_msgs__msg__Box.
typedef struct box_msgs__msg__Box__Sequence
{
  box_msgs__msg__Box * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} box_msgs__msg__Box__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOX_MSGS__MSG__DETAIL__BOX__STRUCT_H_
