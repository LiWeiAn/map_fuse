// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cmr_msgs:msg/LocationType.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__STRUCT_H_
#define CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__STRUCT_H_

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
// Member 'destination_type'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/LocationType in the package cmr_msgs.
typedef struct cmr_msgs__msg__LocationType
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String destination_type;
  geometry_msgs__msg__Pose pose;
} cmr_msgs__msg__LocationType;

// Struct for a sequence of cmr_msgs__msg__LocationType.
typedef struct cmr_msgs__msg__LocationType__Sequence
{
  cmr_msgs__msg__LocationType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__msg__LocationType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__STRUCT_H_
