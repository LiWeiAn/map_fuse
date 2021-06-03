// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cmr_msgs:msg/LocationType.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__STRUCT_HPP_
#define CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cmr_msgs__msg__LocationType __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__msg__LocationType __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocationType_
{
  using Type = LocationType_<ContainerAllocator>;

  explicit LocationType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->destination_type = "";
    }
  }

  explicit LocationType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    destination_type(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->destination_type = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _destination_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _destination_type_type destination_type;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__destination_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->destination_type = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::msg::LocationType_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::msg::LocationType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::msg::LocationType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::msg::LocationType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::msg::LocationType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::msg::LocationType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::msg::LocationType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::msg::LocationType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::msg::LocationType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::msg::LocationType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__msg__LocationType
    std::shared_ptr<cmr_msgs::msg::LocationType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__msg__LocationType
    std::shared_ptr<cmr_msgs::msg::LocationType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocationType_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->destination_type != other.destination_type) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocationType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocationType_

// alias to use template instance with default allocator
using LocationType =
  cmr_msgs::msg::LocationType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cmr_msgs

#endif  // CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__STRUCT_HPP_
