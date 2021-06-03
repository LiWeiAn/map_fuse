// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cmr_msgs:msg/LiftingMech.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__LIFTING_MECH__STRUCT_H_
#define CMR_MSGS__MSG__DETAIL__LIFTING_MECH__STRUCT_H_

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

// Struct defined in msg/LiftingMech in the package cmr_msgs.
typedef struct cmr_msgs__msg__LiftingMech
{
  std_msgs__msg__Header header;
  bool lifting_state;
} cmr_msgs__msg__LiftingMech;

// Struct for a sequence of cmr_msgs__msg__LiftingMech.
typedef struct cmr_msgs__msg__LiftingMech__Sequence
{
  cmr_msgs__msg__LiftingMech * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__msg__LiftingMech__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CMR_MSGS__MSG__DETAIL__LIFTING_MECH__STRUCT_H_
