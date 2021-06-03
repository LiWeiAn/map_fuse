// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cmr_msgs:srv/SignalTask.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__STRUCT_H_
#define CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "std_msgs/msg/detail/empty__struct.h"

// Struct defined in srv/SignalTask in the package cmr_msgs.
typedef struct cmr_msgs__srv__SignalTask_Request
{
  std_msgs__msg__Empty request;
} cmr_msgs__srv__SignalTask_Request;

// Struct for a sequence of cmr_msgs__srv__SignalTask_Request.
typedef struct cmr_msgs__srv__SignalTask_Request__Sequence
{
  cmr_msgs__srv__SignalTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__srv__SignalTask_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "std_msgs/msg/detail/empty__struct.h"

// Struct defined in srv/SignalTask in the package cmr_msgs.
typedef struct cmr_msgs__srv__SignalTask_Response
{
  std_msgs__msg__Empty response;
} cmr_msgs__srv__SignalTask_Response;

// Struct for a sequence of cmr_msgs__srv__SignalTask_Response.
typedef struct cmr_msgs__srv__SignalTask_Response__Sequence
{
  cmr_msgs__srv__SignalTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__srv__SignalTask_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__STRUCT_H_
