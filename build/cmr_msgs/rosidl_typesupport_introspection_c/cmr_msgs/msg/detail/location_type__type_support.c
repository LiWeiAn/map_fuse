// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cmr_msgs:msg/LocationType.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cmr_msgs/msg/detail/location_type__rosidl_typesupport_introspection_c.h"
#include "cmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cmr_msgs/msg/detail/location_type__functions.h"
#include "cmr_msgs/msg/detail/location_type__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `destination_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LocationType__rosidl_typesupport_introspection_c__LocationType_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cmr_msgs__msg__LocationType__init(message_memory);
}

void LocationType__rosidl_typesupport_introspection_c__LocationType_fini_function(void * message_memory)
{
  cmr_msgs__msg__LocationType__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LocationType__rosidl_typesupport_introspection_c__LocationType_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__msg__LocationType, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__msg__LocationType, destination_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs__msg__LocationType, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LocationType__rosidl_typesupport_introspection_c__LocationType_message_members = {
  "cmr_msgs__msg",  // message namespace
  "LocationType",  // message name
  3,  // number of fields
  sizeof(cmr_msgs__msg__LocationType),
  LocationType__rosidl_typesupport_introspection_c__LocationType_message_member_array,  // message members
  LocationType__rosidl_typesupport_introspection_c__LocationType_init_function,  // function to initialize message memory (memory has to be allocated)
  LocationType__rosidl_typesupport_introspection_c__LocationType_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LocationType__rosidl_typesupport_introspection_c__LocationType_message_type_support_handle = {
  0,
  &LocationType__rosidl_typesupport_introspection_c__LocationType_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmr_msgs, msg, LocationType)() {
  LocationType__rosidl_typesupport_introspection_c__LocationType_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  LocationType__rosidl_typesupport_introspection_c__LocationType_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!LocationType__rosidl_typesupport_introspection_c__LocationType_message_type_support_handle.typesupport_identifier) {
    LocationType__rosidl_typesupport_introspection_c__LocationType_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LocationType__rosidl_typesupport_introspection_c__LocationType_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
