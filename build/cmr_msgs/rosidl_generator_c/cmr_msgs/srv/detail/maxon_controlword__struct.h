// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cmr_msgs:srv/MaxonControlword.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__STRUCT_H_
#define CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/MaxonControlword in the package cmr_msgs.
typedef struct cmr_msgs__srv__MaxonControlword_Request
{
  int8_t node_id;
  bool switch_on;
  bool enable_voltage;
  bool quick_stop;
  bool enable_operation;
  bool fault_reset;
  bool halt;
} cmr_msgs__srv__MaxonControlword_Request;

// Struct for a sequence of cmr_msgs__srv__MaxonControlword_Request.
typedef struct cmr_msgs__srv__MaxonControlword_Request__Sequence
{
  cmr_msgs__srv__MaxonControlword_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__srv__MaxonControlword_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MaxonControlword in the package cmr_msgs.
typedef struct cmr_msgs__srv__MaxonControlword_Response
{
  bool response;
} cmr_msgs__srv__MaxonControlword_Response;

// Struct for a sequence of cmr_msgs__srv__MaxonControlword_Response.
typedef struct cmr_msgs__srv__MaxonControlword_Response__Sequence
{
  cmr_msgs__srv__MaxonControlword_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__srv__MaxonControlword_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__STRUCT_H_
