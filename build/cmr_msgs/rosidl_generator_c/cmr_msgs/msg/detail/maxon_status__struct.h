// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cmr_msgs:msg/MaxonStatus.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__MAXON_STATUS__STRUCT_H_
#define CMR_MSGS__MSG__DETAIL__MAXON_STATUS__STRUCT_H_

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
// Member 'device_state'
// Member 'velocity_dem'
// Member 'velocity_act'
// Member 'torque_act_avg'
// Member 'voltage'
// Member 'i2t_level_cont'
// Member 'i2t_level_motor'
// Member 'current_dem'
// Member 'current_act'
// Member 'current_act_avg'
// Member 'sense_vel_act'
// Member 'sense_vel_avg'
// Member 'error'
// Member 'error_history'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/MaxonStatus in the package cmr_msgs.
typedef struct cmr_msgs__msg__MaxonStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint8__Sequence device_state;
  rosidl_runtime_c__int32__Sequence velocity_dem;
  rosidl_runtime_c__int32__Sequence velocity_act;
  rosidl_runtime_c__int16__Sequence torque_act_avg;
  rosidl_runtime_c__uint16__Sequence voltage;
  rosidl_runtime_c__uint16__Sequence i2t_level_cont;
  rosidl_runtime_c__uint16__Sequence i2t_level_motor;
  rosidl_runtime_c__int32__Sequence current_dem;
  rosidl_runtime_c__int32__Sequence current_act;
  rosidl_runtime_c__int32__Sequence current_act_avg;
  rosidl_runtime_c__int32__Sequence sense_vel_act;
  rosidl_runtime_c__int32__Sequence sense_vel_avg;
  rosidl_runtime_c__uint8__Sequence error;
  rosidl_runtime_c__uint16__Sequence error_history;
} cmr_msgs__msg__MaxonStatus;

// Struct for a sequence of cmr_msgs__msg__MaxonStatus.
typedef struct cmr_msgs__msg__MaxonStatus__Sequence
{
  cmr_msgs__msg__MaxonStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__msg__MaxonStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CMR_MSGS__MSG__DETAIL__MAXON_STATUS__STRUCT_H_
