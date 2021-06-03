// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cmr_msgs:srv/MaxonControlword.idl
// generated code does not contain a copyright notice
#include "cmr_msgs/srv/detail/maxon_controlword__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cmr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cmr_msgs/srv/detail/maxon_controlword__struct.h"
#include "cmr_msgs/srv/detail/maxon_controlword__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MaxonControlword_Request__ros_msg_type = cmr_msgs__srv__MaxonControlword_Request;

static bool _MaxonControlword_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MaxonControlword_Request__ros_msg_type * ros_message = static_cast<const _MaxonControlword_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node_id
  {
    cdr << ros_message->node_id;
  }

  // Field name: switch_on
  {
    cdr << (ros_message->switch_on ? true : false);
  }

  // Field name: enable_voltage
  {
    cdr << (ros_message->enable_voltage ? true : false);
  }

  // Field name: quick_stop
  {
    cdr << (ros_message->quick_stop ? true : false);
  }

  // Field name: enable_operation
  {
    cdr << (ros_message->enable_operation ? true : false);
  }

  // Field name: fault_reset
  {
    cdr << (ros_message->fault_reset ? true : false);
  }

  // Field name: halt
  {
    cdr << (ros_message->halt ? true : false);
  }

  return true;
}

static bool _MaxonControlword_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MaxonControlword_Request__ros_msg_type * ros_message = static_cast<_MaxonControlword_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node_id
  {
    cdr >> ros_message->node_id;
  }

  // Field name: switch_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->switch_on = tmp ? true : false;
  }

  // Field name: enable_voltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_voltage = tmp ? true : false;
  }

  // Field name: quick_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->quick_stop = tmp ? true : false;
  }

  // Field name: enable_operation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_operation = tmp ? true : false;
  }

  // Field name: fault_reset
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fault_reset = tmp ? true : false;
  }

  // Field name: halt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->halt = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cmr_msgs
size_t get_serialized_size_cmr_msgs__srv__MaxonControlword_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MaxonControlword_Request__ros_msg_type * ros_message = static_cast<const _MaxonControlword_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name node_id
  {
    size_t item_size = sizeof(ros_message->node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name switch_on
  {
    size_t item_size = sizeof(ros_message->switch_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable_voltage
  {
    size_t item_size = sizeof(ros_message->enable_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quick_stop
  {
    size_t item_size = sizeof(ros_message->quick_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable_operation
  {
    size_t item_size = sizeof(ros_message->enable_operation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fault_reset
  {
    size_t item_size = sizeof(ros_message->fault_reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name halt
  {
    size_t item_size = sizeof(ros_message->halt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MaxonControlword_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cmr_msgs__srv__MaxonControlword_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cmr_msgs
size_t max_serialized_size_cmr_msgs__srv__MaxonControlword_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: node_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: switch_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enable_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: quick_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enable_operation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fault_reset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: halt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MaxonControlword_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cmr_msgs__srv__MaxonControlword_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MaxonControlword_Request = {
  "cmr_msgs::srv",
  "MaxonControlword_Request",
  _MaxonControlword_Request__cdr_serialize,
  _MaxonControlword_Request__cdr_deserialize,
  _MaxonControlword_Request__get_serialized_size,
  _MaxonControlword_Request__max_serialized_size
};

static rosidl_message_type_support_t _MaxonControlword_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MaxonControlword_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cmr_msgs, srv, MaxonControlword_Request)() {
  return &_MaxonControlword_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cmr_msgs/srv/detail/maxon_controlword__struct.h"
// already included above
// #include "cmr_msgs/srv/detail/maxon_controlword__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MaxonControlword_Response__ros_msg_type = cmr_msgs__srv__MaxonControlword_Response;

static bool _MaxonControlword_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MaxonControlword_Response__ros_msg_type * ros_message = static_cast<const _MaxonControlword_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    cdr << (ros_message->response ? true : false);
  }

  return true;
}

static bool _MaxonControlword_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MaxonControlword_Response__ros_msg_type * ros_message = static_cast<_MaxonControlword_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->response = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cmr_msgs
size_t get_serialized_size_cmr_msgs__srv__MaxonControlword_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MaxonControlword_Response__ros_msg_type * ros_message = static_cast<const _MaxonControlword_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response
  {
    size_t item_size = sizeof(ros_message->response);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MaxonControlword_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cmr_msgs__srv__MaxonControlword_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cmr_msgs
size_t max_serialized_size_cmr_msgs__srv__MaxonControlword_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: response
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MaxonControlword_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cmr_msgs__srv__MaxonControlword_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MaxonControlword_Response = {
  "cmr_msgs::srv",
  "MaxonControlword_Response",
  _MaxonControlword_Response__cdr_serialize,
  _MaxonControlword_Response__cdr_deserialize,
  _MaxonControlword_Response__get_serialized_size,
  _MaxonControlword_Response__max_serialized_size
};

static rosidl_message_type_support_t _MaxonControlword_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MaxonControlword_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cmr_msgs, srv, MaxonControlword_Response)() {
  return &_MaxonControlword_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cmr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cmr_msgs/srv/maxon_controlword.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MaxonControlword__callbacks = {
  "cmr_msgs::srv",
  "MaxonControlword",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cmr_msgs, srv, MaxonControlword_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cmr_msgs, srv, MaxonControlword_Response)(),
};

static rosidl_service_type_support_t MaxonControlword__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MaxonControlword__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cmr_msgs, srv, MaxonControlword)() {
  return &MaxonControlword__handle;
}

#if defined(__cplusplus)
}
#endif
