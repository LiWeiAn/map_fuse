// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from box_msgs:msg/Box.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "box_msgs/msg/detail/box__rosidl_typesupport_introspection_c.h"
#include "box_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "box_msgs/msg/detail/box__functions.h"
#include "box_msgs/msg/detail/box__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Box__rosidl_typesupport_introspection_c__Box_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  box_msgs__msg__Box__init(message_memory);
}

void Box__rosidl_typesupport_introspection_c__Box_fini_function(void * message_memory)
{
  box_msgs__msg__Box__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Box__rosidl_typesupport_introspection_c__Box_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(box_msgs__msg__Box, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "l",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(box_msgs__msg__Box, l),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(box_msgs__msg__Box, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(box_msgs__msg__Box, t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(box_msgs__msg__Box, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Box__rosidl_typesupport_introspection_c__Box_message_members = {
  "box_msgs__msg",  // message namespace
  "Box",  // message name
  5,  // number of fields
  sizeof(box_msgs__msg__Box),
  Box__rosidl_typesupport_introspection_c__Box_message_member_array,  // message members
  Box__rosidl_typesupport_introspection_c__Box_init_function,  // function to initialize message memory (memory has to be allocated)
  Box__rosidl_typesupport_introspection_c__Box_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Box__rosidl_typesupport_introspection_c__Box_message_type_support_handle = {
  0,
  &Box__rosidl_typesupport_introspection_c__Box_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_box_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, box_msgs, msg, Box)() {
  Box__rosidl_typesupport_introspection_c__Box_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!Box__rosidl_typesupport_introspection_c__Box_message_type_support_handle.typesupport_identifier) {
    Box__rosidl_typesupport_introspection_c__Box_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Box__rosidl_typesupport_introspection_c__Box_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
