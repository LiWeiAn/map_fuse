// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cmr_msgs:msg/MaxonStatus.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__MAXON_STATUS__STRUCT_HPP_
#define CMR_MSGS__MSG__DETAIL__MAXON_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cmr_msgs__msg__MaxonStatus __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__msg__MaxonStatus __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MaxonStatus_
{
  using Type = MaxonStatus_<ContainerAllocator>;

  explicit MaxonStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MaxonStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _device_state_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _device_state_type device_state;
  using _velocity_dem_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _velocity_dem_type velocity_dem;
  using _velocity_act_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _velocity_act_type velocity_act;
  using _torque_act_avg_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _torque_act_avg_type torque_act_avg;
  using _voltage_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _voltage_type voltage;
  using _i2t_level_cont_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _i2t_level_cont_type i2t_level_cont;
  using _i2t_level_motor_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _i2t_level_motor_type i2t_level_motor;
  using _current_dem_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _current_dem_type current_dem;
  using _current_act_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _current_act_type current_act;
  using _current_act_avg_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _current_act_avg_type current_act_avg;
  using _sense_vel_act_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _sense_vel_act_type sense_vel_act;
  using _sense_vel_avg_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _sense_vel_avg_type sense_vel_avg;
  using _error_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _error_type error;
  using _error_history_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _error_history_type error_history;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__device_state(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->device_state = _arg;
    return *this;
  }
  Type & set__velocity_dem(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->velocity_dem = _arg;
    return *this;
  }
  Type & set__velocity_act(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->velocity_act = _arg;
    return *this;
  }
  Type & set__torque_act_avg(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->torque_act_avg = _arg;
    return *this;
  }
  Type & set__voltage(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__i2t_level_cont(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->i2t_level_cont = _arg;
    return *this;
  }
  Type & set__i2t_level_motor(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->i2t_level_motor = _arg;
    return *this;
  }
  Type & set__current_dem(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->current_dem = _arg;
    return *this;
  }
  Type & set__current_act(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->current_act = _arg;
    return *this;
  }
  Type & set__current_act_avg(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->current_act_avg = _arg;
    return *this;
  }
  Type & set__sense_vel_act(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->sense_vel_act = _arg;
    return *this;
  }
  Type & set__sense_vel_avg(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->sense_vel_avg = _arg;
    return *this;
  }
  Type & set__error(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__error_history(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->error_history = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::msg::MaxonStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::msg::MaxonStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::msg::MaxonStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::msg::MaxonStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::msg::MaxonStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::msg::MaxonStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::msg::MaxonStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::msg::MaxonStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::msg::MaxonStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::msg::MaxonStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__msg__MaxonStatus
    std::shared_ptr<cmr_msgs::msg::MaxonStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__msg__MaxonStatus
    std::shared_ptr<cmr_msgs::msg::MaxonStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MaxonStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->device_state != other.device_state) {
      return false;
    }
    if (this->velocity_dem != other.velocity_dem) {
      return false;
    }
    if (this->velocity_act != other.velocity_act) {
      return false;
    }
    if (this->torque_act_avg != other.torque_act_avg) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->i2t_level_cont != other.i2t_level_cont) {
      return false;
    }
    if (this->i2t_level_motor != other.i2t_level_motor) {
      return false;
    }
    if (this->current_dem != other.current_dem) {
      return false;
    }
    if (this->current_act != other.current_act) {
      return false;
    }
    if (this->current_act_avg != other.current_act_avg) {
      return false;
    }
    if (this->sense_vel_act != other.sense_vel_act) {
      return false;
    }
    if (this->sense_vel_avg != other.sense_vel_avg) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->error_history != other.error_history) {
      return false;
    }
    return true;
  }
  bool operator!=(const MaxonStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MaxonStatus_

// alias to use template instance with default allocator
using MaxonStatus =
  cmr_msgs::msg::MaxonStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cmr_msgs

#endif  // CMR_MSGS__MSG__DETAIL__MAXON_STATUS__STRUCT_HPP_
