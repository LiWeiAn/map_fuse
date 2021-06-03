// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cmr_msgs:msg/StateChange.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__STATE_CHANGE__STRUCT_H_
#define CMR_MSGS__MSG__DETAIL__STATE_CHANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STARTUP'.
enum
{
  cmr_msgs__msg__StateChange__STARTUP = 1
};

/// Constant 'PAUSE'.
enum
{
  cmr_msgs__msg__StateChange__PAUSE = 2
};

/// Constant 'RESUME'.
enum
{
  cmr_msgs__msg__StateChange__RESUME = 3
};

/// Constant 'RESET'.
enum
{
  cmr_msgs__msg__StateChange__RESET = 4
};

/// Constant 'SHUTDOWN'.
enum
{
  cmr_msgs__msg__StateChange__SHUTDOWN = 5
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'node_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/StateChange in the package cmr_msgs.
typedef struct cmr_msgs__msg__StateChange
{
  std_msgs__msg__Header header;
  uint8_t control_state;
  rosidl_runtime_c__String node_name;
} cmr_msgs__msg__StateChange;

// Struct for a sequence of cmr_msgs__msg__StateChange.
typedef struct cmr_msgs__msg__StateChange__Sequence
{
  cmr_msgs__msg__StateChange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__msg__StateChange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CMR_MSGS__MSG__DETAIL__STATE_CHANGE__STRUCT_H_
