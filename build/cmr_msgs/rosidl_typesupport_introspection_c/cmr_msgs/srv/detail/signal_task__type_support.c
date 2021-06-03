// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cmr_msgs:srv/SignalTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cmr_msgs/srv/detail/signal_task__rosidl_typesupport_introspection_c.h"
#include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cmr_msgs/srv/detail/signal_task__functions.h"
#include "cmr_msgs/srv/detail/signal_task__struct.h"


// Include directives for member types
// Member `request`
#include "std_msgs/msg/empty.h"
// Member `request`
#include "std_msgs/msg/detail/empty__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__srv__SignalTask_Request__init(message_memory);
}

void SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_fini_function(void * message_memory)
{
  cmr_msgs__srv__SignalTask_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_message_member_array[1] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__srv__SignalTask_Request, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_message_members = {
  "cmr_msgs__srv",  // message namespace
  "SignalTask_Request",  // message name
  1,  // number of fields
  sizeof(cmr_msgs__srv__SignalTask_Request),
  SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_message_member_array,  // message members
  SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_message_type_support_handle = {
  0,
  &SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, SignalTask_Request)() {
  SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Empty)();
  if (!SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_message_type_support_handle.typesupport_identifier) {
    SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SignalTask_Request__rosidl_typesupport_introspection_c__SignalTask_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cmr_msgs/srv/detail/signal_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cmr_msgs/srv/detail/signal_task__functions.h"
// already included above
// #include "cmr_msgs/srv/detail/signal_task__struct.h"


// Include directives for member types
// Member `response`
// already included above
// #include "std_msgs/msg/empty.h"
// Member `response`
// already included above
// #include "std_msgs/msg/detail/empty__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__srv__SignalTask_Response__init(message_memory);
}

void SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_fini_function(void * message_memory)
{
  cmr_msgs__srv__SignalTask_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__srv__SignalTask_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_message_members = {
  "cmr_msgs__srv",  // message namespace
  "SignalTask_Response",  // message name
  1,  // number of fields
  sizeof(cmr_msgs__srv__SignalTask_Response),
  SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_message_member_array,  // message members
  SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_message_type_support_handle = {
  0,
  &SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, SignalTask_Response)() {
  SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Empty)();
  if (!SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_message_type_support_handle.typesupport_identifier) {
    SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SignalTask_Response__rosidl_typesupport_introspection_c__SignalTask_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cmr_msgs/srv/detail/signal_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cmr_msgs__srv__detail__signal_task__rosidl_typesupport_introspection_c__SignalTask_service_members = {
  "cmr_msgs__srv",  // service namespace
  "SignalTask",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cmr_msgs__srv__detail__signal_task__rosidl_typesupport_introspection_c__SignalTask_Request_message_type_support_handle,
  NULL  // response message
  // cmr_msgs__srv__detail__signal_task__rosidl_typesupport_introspection_c__SignalTask_Response_message_type_support_handle
};

static rosidl_service_type_support_t cmr_msgs__srv__detail__signal_task__rosidl_typesupport_introspection_c__SignalTask_service_type_support_handle = {
  0,
  &cmr_msgs__srv__detail__signal_task__rosidl_typesupport_introspection_c__SignalTask_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, SignalTask_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, SignalTask_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, SignalTask)() {
  if (!cmr_msgs__srv__detail__signal_task__rosidl_typesupport_introspection_c__SignalTask_service_type_support_handle.typesupport_identifier) {
    cmr_msgs__srv__detail__signal_task__rosidl_typesupport_introspection_c__SignalTask_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cmr_msgs__srv__detail__signal_task__rosidl_typesupport_introspection_c__SignalTask_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, SignalTask_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, srv, SignalTask_Response)()->data;
  }

  return &cmr_msgs__srv__detail__signal_task__rosidl_typesupport_introspection_c__SignalTask_service_type_support_handle;
}
