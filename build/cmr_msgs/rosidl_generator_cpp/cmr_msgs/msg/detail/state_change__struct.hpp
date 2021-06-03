// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cmr_msgs:msg/StateChange.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__STATE_CHANGE__STRUCT_HPP_
#define CMR_MSGS__MSG__DETAIL__STATE_CHANGE__STRUCT_HPP_

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
# define DEPRECATED__cmr_msgs__msg__StateChange __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__msg__StateChange __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateChange_
{
  using Type = StateChange_<ContainerAllocator>;

  explicit StateChange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_state = 0;
      this->node_name = "";
    }
  }

  explicit StateChange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    node_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_state = 0;
      this->node_name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _control_state_type =
    uint8_t;
  _control_state_type control_state;
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _node_name_type node_name;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__control_state(
    const uint8_t & _arg)
  {
    this->control_state = _arg;
    return *this;
  }
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STARTUP =
    1u;
  static constexpr uint8_t PAUSE =
    2u;
  static constexpr uint8_t RESUME =
    3u;
  static constexpr uint8_t RESET =
    4u;
  static constexpr uint8_t SHUTDOWN =
    5u;

  // pointer types
  using RawPtr =
    cmr_msgs::msg::StateChange_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::msg::StateChange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::msg::StateChange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::msg::StateChange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::msg::StateChange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::msg::StateChange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::msg::StateChange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::msg::StateChange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::msg::StateChange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::msg::StateChange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__msg__StateChange
    std::shared_ptr<cmr_msgs::msg::StateChange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__msg__StateChange
    std::shared_ptr<cmr_msgs::msg::StateChange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateChange_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->control_state != other.control_state) {
      return false;
    }
    if (this->node_name != other.node_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateChange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateChange_

// alias to use template instance with default allocator
using StateChange =
  cmr_msgs::msg::StateChange_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t StateChange_<ContainerAllocator>::STARTUP;
template<typename ContainerAllocator>
constexpr uint8_t StateChange_<ContainerAllocator>::PAUSE;
template<typename ContainerAllocator>
constexpr uint8_t StateChange_<ContainerAllocator>::RESUME;
template<typename ContainerAllocator>
constexpr uint8_t StateChange_<ContainerAllocator>::RESET;
template<typename ContainerAllocator>
constexpr uint8_t StateChange_<ContainerAllocator>::SHUTDOWN;

}  // namespace msg

}  // namespace cmr_msgs

#endif  // CMR_MSGS__MSG__DETAIL__STATE_CHANGE__STRUCT_HPP_
