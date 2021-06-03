// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from box_msgs:msg/Box.idl
// generated code does not contain a copyright notice

#ifndef BOX_MSGS__MSG__DETAIL__BOX__STRUCT_HPP_
#define BOX_MSGS__MSG__DETAIL__BOX__STRUCT_HPP_

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
# define DEPRECATED__box_msgs__msg__Box __attribute__((deprecated))
#else
# define DEPRECATED__box_msgs__msg__Box __declspec(deprecated)
#endif

namespace box_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Box_
{
  using Type = Box_<ContainerAllocator>;

  explicit Box_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l = 0.0f;
      this->r = 0.0f;
      this->t = 0.0f;
      this->b = 0.0f;
    }
  }

  explicit Box_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l = 0.0f;
      this->r = 0.0f;
      this->t = 0.0f;
      this->b = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _l_type =
    float;
  _l_type l;
  using _r_type =
    float;
  _r_type r;
  using _t_type =
    float;
  _t_type t;
  using _b_type =
    float;
  _b_type b;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__l(
    const float & _arg)
  {
    this->l = _arg;
    return *this;
  }
  Type & set__r(
    const float & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__t(
    const float & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__b(
    const float & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    box_msgs::msg::Box_<ContainerAllocator> *;
  using ConstRawPtr =
    const box_msgs::msg::Box_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<box_msgs::msg::Box_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<box_msgs::msg::Box_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      box_msgs::msg::Box_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<box_msgs::msg::Box_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      box_msgs::msg::Box_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<box_msgs::msg::Box_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<box_msgs::msg::Box_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<box_msgs::msg::Box_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__box_msgs__msg__Box
    std::shared_ptr<box_msgs::msg::Box_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__box_msgs__msg__Box
    std::shared_ptr<box_msgs::msg::Box_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Box_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->l != other.l) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const Box_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Box_

// alias to use template instance with default allocator
using Box =
  box_msgs::msg::Box_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace box_msgs

#endif  // BOX_MSGS__MSG__DETAIL__BOX__STRUCT_HPP_
