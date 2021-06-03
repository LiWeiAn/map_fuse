// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cmr_msgs:action/LinearMove.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"
#include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cmr_msgs/action/detail/linear_move__functions.h"
#include "cmr_msgs/action/detail/linear_move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__action__LinearMove_Goal__init(message_memory);
}

void LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_fini_function(void * message_memory)
{
  cmr_msgs__action__LinearMove_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_message_member_array[1] = {
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_Goal, point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_message_members = {
  "cmr_msgs__action",  // message namespace
  "LinearMove_Goal",  // message name
  1,  // number of fields
  sizeof(cmr_msgs__action__LinearMove_Goal),
  LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_message_member_array,  // message members
  LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_message_type_support_handle = {
  0,
  &LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_Goal)() {
  if (!LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_message_type_support_handle.typesupport_identifier) {
    LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinearMove_Goal__rosidl_typesupport_introspection_c__LinearMove_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__functions.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__action__LinearMove_Result__init(message_memory);
}

void LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_fini_function(void * message_memory)
{
  cmr_msgs__action__LinearMove_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_message_members = {
  "cmr_msgs__action",  // message namespace
  "LinearMove_Result",  // message name
  1,  // number of fields
  sizeof(cmr_msgs__action__LinearMove_Result),
  LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_message_member_array,  // message members
  LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_message_type_support_handle = {
  0,
  &LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_Result)() {
  if (!LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_message_type_support_handle.typesupport_identifier) {
    LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinearMove_Result__rosidl_typesupport_introspection_c__LinearMove_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__functions.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__struct.h"


// Include directives for member types
// Member `navigation_time`
#include "builtin_interfaces/msg/duration.h"
// Member `navigation_time`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__action__LinearMove_Feedback__init(message_memory);
}

void LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_fini_function(void * message_memory)
{
  cmr_msgs__action__LinearMove_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_message_member_array[5] = {
  {
    "current_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_Feedback, current_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "navigation_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_Feedback, navigation_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_Feedback, current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_Feedback, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_Feedback, status_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_message_members = {
  "cmr_msgs__action",  // message namespace
  "LinearMove_Feedback",  // message name
  5,  // number of fields
  sizeof(cmr_msgs__action__LinearMove_Feedback),
  LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_message_member_array,  // message members
  LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_message_type_support_handle = {
  0,
  &LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_Feedback)() {
  LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_message_type_support_handle.typesupport_identifier) {
    LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinearMove_Feedback__rosidl_typesupport_introspection_c__LinearMove_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__functions.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "cmr_msgs/action/linear_move.h"
// Member `goal`
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__action__LinearMove_SendGoal_Request__init(message_memory);
}

void LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_fini_function(void * message_memory)
{
  cmr_msgs__action__LinearMove_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_message_members = {
  "cmr_msgs__action",  // message namespace
  "LinearMove_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(cmr_msgs__action__LinearMove_SendGoal_Request),
  LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_message_member_array,  // message members
  LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_message_type_support_handle = {
  0,
  &LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_SendGoal_Request)() {
  LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_Goal)();
  if (!LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinearMove_SendGoal_Request__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__functions.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__action__LinearMove_SendGoal_Response__init(message_memory);
}

void LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_fini_function(void * message_memory)
{
  cmr_msgs__action__LinearMove_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_message_members = {
  "cmr_msgs__action",  // message namespace
  "LinearMove_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(cmr_msgs__action__LinearMove_SendGoal_Response),
  LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_message_member_array,  // message members
  LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_message_type_support_handle = {
  0,
  &LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_SendGoal_Response)() {
  LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinearMove_SendGoal_Response__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_SendGoal_service_members = {
  "cmr_msgs__action",  // service namespace
  "LinearMove_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_SendGoal_service_type_support_handle = {
  0,
  &cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_SendGoal)() {
  if (!cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_SendGoal_service_type_support_handle.typesupport_identifier) {
    cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_SendGoal_Response)()->data;
  }

  return &cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__functions.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__action__LinearMove_GetResult_Request__init(message_memory);
}

void LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_fini_function(void * message_memory)
{
  cmr_msgs__action__LinearMove_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_message_members = {
  "cmr_msgs__action",  // message namespace
  "LinearMove_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(cmr_msgs__action__LinearMove_GetResult_Request),
  LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_message_member_array,  // message members
  LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_message_type_support_handle = {
  0,
  &LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_GetResult_Request)() {
  LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinearMove_GetResult_Request__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__functions.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "cmr_msgs/action/linear_move.h"
// Member `result`
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__action__LinearMove_GetResult_Response__init(message_memory);
}

void LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_fini_function(void * message_memory)
{
  cmr_msgs__action__LinearMove_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_message_members = {
  "cmr_msgs__action",  // message namespace
  "LinearMove_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(cmr_msgs__action__LinearMove_GetResult_Response),
  LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_message_member_array,  // message members
  LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_message_type_support_handle = {
  0,
  &LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_GetResult_Response)() {
  LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_Result)();
  if (!LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinearMove_GetResult_Response__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_GetResult_service_members = {
  "cmr_msgs__action",  // service namespace
  "LinearMove_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_GetResult_service_type_support_handle = {
  0,
  &cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_GetResult)() {
  if (!cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_GetResult_service_type_support_handle.typesupport_identifier) {
    cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_GetResult_Response)()->data;
  }

  return &cmr_msgs__action__detail__linear_move__rosidl_typesupport_introspection_c__LinearMove_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__functions.h"
// already included above
// #include "cmr_msgs/action/detail/linear_move__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "cmr_msgs/action/linear_move.h"
// Member `feedback`
// already included above
// #include "cmr_msgs/action/detail/linear_move__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__action__LinearMove_FeedbackMessage__init(message_memory);
}

void LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_fini_function(void * message_memory)
{
  cmr_msgs__action__LinearMove_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__action__LinearMove_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_message_members = {
  "cmr_msgs__action",  // message namespace
  "LinearMove_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(cmr_msgs__action__LinearMove_FeedbackMessage),
  LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_message_member_array,  // message members
  LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_message_type_support_handle = {
  0,
  &LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_FeedbackMessage)() {
  LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, action, LinearMove_Feedback)();
  if (!LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinearMove_FeedbackMessage__rosidl_typesupport_introspection_c__LinearMove_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
