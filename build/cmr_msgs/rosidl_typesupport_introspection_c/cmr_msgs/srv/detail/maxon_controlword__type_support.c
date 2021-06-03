// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cmr_msgs:srv/MaxonControlword.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cmr_msgs/srv/detail/maxon_controlword__rosidl_typesupport_introspection_c.h"
#include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cmr_msgs/srv/detail/maxon_controlword__functions.h"
#include "cmr_msgs/srv/detail/maxon_controlword__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__srv__MaxonControlword_Request__init(message_memory);
}

void MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_fini_function(void * message_memory)
{
  cmr_msgs__srv__MaxonControlword_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_message_member_array[7] = {
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__srv__MaxonControlword_Request, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "switch_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__srv__MaxonControlword_Request, switch_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__srv__MaxonControlword_Request, enable_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quick_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__srv__MaxonControlword_Request, quick_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_operation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__srv__MaxonControlword_Request, enable_operation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fault_reset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__srv__MaxonControlword_Request, fault_reset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "halt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__srv__MaxonControlword_Request, halt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_message_members = {
  "cmr_msgs__srv",  // message namespace
  "MaxonControlword_Request",  // message name
  7,  // number of fields
  sizeof(cmr_msgs__srv__MaxonControlword_Request),
  MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_message_member_array,  // message members
  MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_message_type_support_handle = {
  0,
  &MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, MaxonControlword_Request)() {
  if (!MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_message_type_support_handle.typesupport_identifier) {
    MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MaxonControlword_Request__rosidl_typesupport_introspection_c__MaxonControlword_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cmr_msgs/srv/detail/maxon_controlword__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cmr_msgs/srv/detail/maxon_controlword__functions.h"
// already included above
// #include "cmr_msgs/srv/detail/maxon_controlword__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__srv__MaxonControlword_Response__init(message_memory);
}

void MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_fini_function(void * message_memory)
{
  cmr_msgs__srv__MaxonControlword_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__srv__MaxonControlword_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_message_members = {
  "cmr_msgs__srv",  // message namespace
  "MaxonControlword_Response",  // message name
  1,  // number of fields
  sizeof(cmr_msgs__srv__MaxonControlword_Response),
  MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_message_member_array,  // message members
  MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_message_type_support_handle = {
  0,
  &MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, MaxonControlword_Response)() {
  if (!MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_message_type_support_handle.typesupport_identifier) {
    MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MaxonControlword_Response__rosidl_typesupport_introspection_c__MaxonControlword_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cmr_msgs/srv/detail/maxon_controlword__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cmr_msgs__srv__detail__maxon_controlword__rosidl_typesupport_introspection_c__MaxonControlword_service_members = {
  "cmr_msgs__srv",  // service namespace
  "MaxonControlword",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cmr_msgs__srv__detail__maxon_controlword__rosidl_typesupport_introspection_c__MaxonControlword_Request_message_type_support_handle,
  NULL  // response message
  // cmr_msgs__srv__detail__maxon_controlword__rosidl_typesupport_introspection_c__MaxonControlword_Response_message_type_support_handle
};

static rosidl_service_type_support_t cmr_msgs__srv__detail__maxon_controlword__rosidl_typesupport_introspection_c__MaxonControlword_service_type_support_handle = {
  0,
  &cmr_msgs__srv__detail__maxon_controlword__rosidl_typesupport_introspection_c__MaxonControlword_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, MaxonControlword_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, MaxonControlword_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, MaxonControlword)() {
  if (!cmr_msgs__srv__detail__maxon_controlword__rosidl_typesupport_introspection_c__MaxonControlword_service_type_support_handle.typesupport_identifier) {
    cmr_msgs__srv__detail__maxon_controlword__rosidl_typesupport_introspection_c__MaxonControlword_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cmr_msgs__srv__detail__maxon_controlword__rosidl_typesupport_introspection_c__MaxonControlword_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, MaxonControlword_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, MaxonControlword_Response)()->data;
  }

  return &cmr_msgs__srv__detail__maxon_controlword__rosidl_typesupport_introspection_c__MaxonControlword_service_type_support_handle;
}
