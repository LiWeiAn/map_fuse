// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cmr_msgs:msg/MaxonStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cmr_msgs/msg/detail/maxon_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cmr_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MaxonStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cmr_msgs::msg::MaxonStatus(_init);
}

void MaxonStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cmr_msgs::msg::MaxonStatus *>(message_memory);
  typed_message->~MaxonStatus();
}

size_t size_function__MaxonStatus__device_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__device_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__device_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__device_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__velocity_dem(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__velocity_dem(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__velocity_dem(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__velocity_dem(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__velocity_act(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__velocity_act(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__velocity_act(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__velocity_act(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__torque_act_avg(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__torque_act_avg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__torque_act_avg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__torque_act_avg(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__voltage(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__voltage(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__voltage(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__voltage(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__i2t_level_cont(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__i2t_level_cont(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__i2t_level_cont(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__i2t_level_cont(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__i2t_level_motor(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__i2t_level_motor(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__i2t_level_motor(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__i2t_level_motor(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__current_dem(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__current_dem(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__current_dem(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__current_dem(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__current_act(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__current_act(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__current_act(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__current_act(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__current_act_avg(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__current_act_avg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__current_act_avg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__current_act_avg(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__sense_vel_act(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__sense_vel_act(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__sense_vel_act(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__sense_vel_act(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__sense_vel_avg(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__sense_vel_avg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__sense_vel_avg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__sense_vel_avg(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__error(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__error(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__error(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__error(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MaxonStatus__error_history(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MaxonStatus__error_history(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MaxonStatus__error_history(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MaxonStatus__error_history(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MaxonStatus_message_member_array[15] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "device_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, device_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__device_state,  // size() function pointer
    get_const_function__MaxonStatus__device_state,  // get_const(index) function pointer
    get_function__MaxonStatus__device_state,  // get(index) function pointer
    resize_function__MaxonStatus__device_state  // resize(index) function pointer
  },
  {
    "velocity_dem",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, velocity_dem),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__velocity_dem,  // size() function pointer
    get_const_function__MaxonStatus__velocity_dem,  // get_const(index) function pointer
    get_function__MaxonStatus__velocity_dem,  // get(index) function pointer
    resize_function__MaxonStatus__velocity_dem  // resize(index) function pointer
  },
  {
    "velocity_act",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, velocity_act),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__velocity_act,  // size() function pointer
    get_const_function__MaxonStatus__velocity_act,  // get_const(index) function pointer
    get_function__MaxonStatus__velocity_act,  // get(index) function pointer
    resize_function__MaxonStatus__velocity_act  // resize(index) function pointer
  },
  {
    "torque_act_avg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, torque_act_avg),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__torque_act_avg,  // size() function pointer
    get_const_function__MaxonStatus__torque_act_avg,  // get_const(index) function pointer
    get_function__MaxonStatus__torque_act_avg,  // get(index) function pointer
    resize_function__MaxonStatus__torque_act_avg  // resize(index) function pointer
  },
  {
    "voltage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, voltage),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__voltage,  // size() function pointer
    get_const_function__MaxonStatus__voltage,  // get_const(index) function pointer
    get_function__MaxonStatus__voltage,  // get(index) function pointer
    resize_function__MaxonStatus__voltage  // resize(index) function pointer
  },
  {
    "i2t_level_cont",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, i2t_level_cont),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__i2t_level_cont,  // size() function pointer
    get_const_function__MaxonStatus__i2t_level_cont,  // get_const(index) function pointer
    get_function__MaxonStatus__i2t_level_cont,  // get(index) function pointer
    resize_function__MaxonStatus__i2t_level_cont  // resize(index) function pointer
  },
  {
    "i2t_level_motor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, i2t_level_motor),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__i2t_level_motor,  // size() function pointer
    get_const_function__MaxonStatus__i2t_level_motor,  // get_const(index) function pointer
    get_function__MaxonStatus__i2t_level_motor,  // get(index) function pointer
    resize_function__MaxonStatus__i2t_level_motor  // resize(index) function pointer
  },
  {
    "current_dem",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, current_dem),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__current_dem,  // size() function pointer
    get_const_function__MaxonStatus__current_dem,  // get_const(index) function pointer
    get_function__MaxonStatus__current_dem,  // get(index) function pointer
    resize_function__MaxonStatus__current_dem  // resize(index) function pointer
  },
  {
    "current_act",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, current_act),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__current_act,  // size() function pointer
    get_const_function__MaxonStatus__current_act,  // get_const(index) function pointer
    get_function__MaxonStatus__current_act,  // get(index) function pointer
    resize_function__MaxonStatus__current_act  // resize(index) function pointer
  },
  {
    "current_act_avg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, current_act_avg),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__current_act_avg,  // size() function pointer
    get_const_function__MaxonStatus__current_act_avg,  // get_const(index) function pointer
    get_function__MaxonStatus__current_act_avg,  // get(index) function pointer
    resize_function__MaxonStatus__current_act_avg  // resize(index) function pointer
  },
  {
    "sense_vel_act",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, sense_vel_act),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__sense_vel_act,  // size() function pointer
    get_const_function__MaxonStatus__sense_vel_act,  // get_const(index) function pointer
    get_function__MaxonStatus__sense_vel_act,  // get(index) function pointer
    resize_function__MaxonStatus__sense_vel_act  // resize(index) function pointer
  },
  {
    "sense_vel_avg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, sense_vel_avg),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__sense_vel_avg,  // size() function pointer
    get_const_function__MaxonStatus__sense_vel_avg,  // get_const(index) function pointer
    get_function__MaxonStatus__sense_vel_avg,  // get(index) function pointer
    resize_function__MaxonStatus__sense_vel_avg  // resize(index) function pointer
  },
  {
    "error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, error),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__error,  // size() function pointer
    get_const_function__MaxonStatus__error,  // get_const(index) function pointer
    get_function__MaxonStatus__error,  // get(index) function pointer
    resize_function__MaxonStatus__error  // resize(index) function pointer
  },
  {
    "error_history",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cmr_msgs::msg::MaxonStatus, error_history),  // bytes offset in struct
    nullptr,  // default value
    size_function__MaxonStatus__error_history,  // size() function pointer
    get_const_function__MaxonStatus__error_history,  // get_const(index) function pointer
    get_function__MaxonStatus__error_history,  // get(index) function pointer
    resize_function__MaxonStatus__error_history  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MaxonStatus_message_members = {
  "cmr_msgs::msg",  // message namespace
  "MaxonStatus",  // message name
  15,  // number of fields
  sizeof(cmr_msgs::msg::MaxonStatus),
  MaxonStatus_message_member_array,  // message members
  MaxonStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  MaxonStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MaxonStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MaxonStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cmr_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cmr_msgs::msg::MaxonStatus>()
{
  return &::cmr_msgs::msg::rosidl_typesupport_introspection_cpp::MaxonStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cmr_msgs, msg, MaxonStatus)() {
  return &::cmr_msgs::msg::rosidl_typesupport_introspection_cpp::MaxonStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
