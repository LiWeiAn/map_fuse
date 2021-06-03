// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cmr_msgs:srv/MaxonControlword.idl
// generated code does not contain a copyright notice
#include "cmr_msgs/srv/detail/maxon_controlword__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cmr_msgs/srv/detail/maxon_controlword__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cmr_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cmr_msgs
cdr_serialize(
  const cmr_msgs::srv::MaxonControlword_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: node_id
  cdr << ros_message.node_id;
  // Member: switch_on
  cdr << (ros_message.switch_on ? true : false);
  // Member: enable_voltage
  cdr << (ros_message.enable_voltage ? true : false);
  // Member: quick_stop
  cdr << (ros_message.quick_stop ? true : false);
  // Member: enable_operation
  cdr << (ros_message.enable_operation ? true : false);
  // Member: fault_reset
  cdr << (ros_message.fault_reset ? true : false);
  // Member: halt
  cdr << (ros_message.halt ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cmr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cmr_msgs::srv::MaxonControlword_Request & ros_message)
{
  // Member: node_id
  cdr >> ros_message.node_id;

  // Member: switch_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.switch_on = tmp ? true : false;
  }

  // Member: enable_voltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enable_voltage = tmp ? true : false;
  }

  // Member: quick_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.quick_stop = tmp ? true : false;
  }

  // Member: enable_operation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enable_operation = tmp ? true : false;
  }

  // Member: fault_reset
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fault_reset = tmp ? true : false;
  }

  // Member: halt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.halt = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cmr_msgs
get_serialized_size(
  const cmr_msgs::srv::MaxonControlword_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: node_id
  {
    size_t item_size = sizeof(ros_message.node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: switch_on
  {
    size_t item_size = sizeof(ros_message.switch_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enable_voltage
  {
    size_t item_size = sizeof(ros_message.enable_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: quick_stop
  {
    size_t item_size = sizeof(ros_message.quick_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enable_operation
  {
    size_t item_size = sizeof(ros_message.enable_operation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fault_reset
  {
    size_t item_size = sizeof(ros_message.fault_reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: halt
  {
    size_t item_size = sizeof(ros_message.halt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cmr_msgs
max_serialized_size_MaxonControlword_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: node_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: switch_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enable_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: quick_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enable_operation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fault_reset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: halt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MaxonControlword_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cmr_msgs::srv::MaxonControlword_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MaxonControlword_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cmr_msgs::srv::MaxonControlword_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MaxonControlword_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cmr_msgs::srv::MaxonControlword_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MaxonControlword_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MaxonControlword_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _MaxonControlword_Request__callbacks = {
  "cmr_msgs::srv",
  "MaxonControlword_Request",
  _MaxonControlword_Request__cdr_serialize,
  _MaxonControlword_Request__cdr_deserialize,
  _MaxonControlword_Request__get_serialized_size,
  _MaxonControlword_Request__max_serialized_size
};

static rosidl_message_type_support_t _MaxonControlword_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MaxonControlword_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cmr_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cmr_msgs::srv::MaxonControlword_Request>()
{
  return &cmr_msgs::srv::typesupport_fastrtps_cpp::_MaxonControlword_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cmr_msgs, srv, MaxonControlword_Request)() {
  return &cmr_msgs::srv::typesupport_fastrtps_cpp::_MaxonControlword_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cmr_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cmr_msgs
cdr_serialize(
  const cmr_msgs::srv::MaxonControlword_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: response
  cdr << (ros_message.response ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cmr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cmr_msgs::srv::MaxonControlword_Response & ros_message)
{
  // Member: response
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.response = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cmr_msgs
get_serialized_size(
  const cmr_msgs::srv::MaxonControlword_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: response
  {
    size_t item_size = sizeof(ros_message.response);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cmr_msgs
max_serialized_size_MaxonControlword_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: response
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MaxonControlword_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cmr_msgs::srv::MaxonControlword_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MaxonControlword_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cmr_msgs::srv::MaxonControlword_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MaxonControlword_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cmr_msgs::srv::MaxonControlword_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MaxonControlword_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MaxonControlword_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _MaxonControlword_Response__callbacks = {
  "cmr_msgs::srv",
  "MaxonControlword_Response",
  _MaxonControlword_Response__cdr_serialize,
  _MaxonControlword_Response__cdr_deserialize,
  _MaxonControlword_Response__get_serialized_size,
  _MaxonControlword_Response__max_serialized_size
};

static rosidl_message_type_support_t _MaxonControlword_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MaxonControlword_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cmr_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cmr_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cmr_msgs::srv::MaxonControlword_Response>()
{
  return &cmr_msgs::srv::typesupport_fastrtps_cpp::_MaxonControlword_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cmr_msgs, srv, MaxonControlword_Response)() {
  return &cmr_msgs::srv::typesupport_fastrtps_cpp::_MaxonControlword_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace cmr_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _MaxonControlword__callbacks = {
  "cmr_msgs::srv",
  "MaxonControlword",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cmr_msgs, srv, MaxonControlword_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cmr_msgs, srv, MaxonControlword_Response)(),
};

static rosidl_service_type_support_t _MaxonControlword__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MaxonControlword__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cmr_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cmr_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<cmr_msgs::srv::MaxonControlword>()
{
  return &cmr_msgs::srv::typesupport_fastrtps_cpp::_MaxonControlword__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cmr_msgs, srv, MaxonControlword)() {
  return &cmr_msgs::srv::typesupport_fastrtps_cpp::_MaxonControlword__handle;
}

#ifdef __cplusplus
}
#endif
