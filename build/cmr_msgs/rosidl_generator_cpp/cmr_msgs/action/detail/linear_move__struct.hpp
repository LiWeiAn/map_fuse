// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cmr_msgs:action/LinearMove.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__STRUCT_HPP_
#define CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cmr_msgs__action__LinearMove_Goal __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__action__LinearMove_Goal __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LinearMove_Goal_
{
  using Type = LinearMove_Goal_<ContainerAllocator>;

  explicit LinearMove_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point = 0.0f;
    }
  }

  explicit LinearMove_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point = 0.0f;
    }
  }

  // field types and members
  using _point_type =
    float;
  _point_type point;

  // setters for named parameter idiom
  Type & set__point(
    const float & _arg)
  {
    this->point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::action::LinearMove_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::action::LinearMove_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__action__LinearMove_Goal
    std::shared_ptr<cmr_msgs::action::LinearMove_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__action__LinearMove_Goal
    std::shared_ptr<cmr_msgs::action::LinearMove_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinearMove_Goal_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinearMove_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinearMove_Goal_

// alias to use template instance with default allocator
using LinearMove_Goal =
  cmr_msgs::action::LinearMove_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cmr_msgs


#ifndef _WIN32
# define DEPRECATED__cmr_msgs__action__LinearMove_Result __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__action__LinearMove_Result __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LinearMove_Result_
{
  using Type = LinearMove_Result_<ContainerAllocator>;

  explicit LinearMove_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0f;
    }
  }

  explicit LinearMove_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0f;
    }
  }

  // field types and members
  using _result_type =
    float;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const float & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::action::LinearMove_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::action::LinearMove_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__action__LinearMove_Result
    std::shared_ptr<cmr_msgs::action::LinearMove_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__action__LinearMove_Result
    std::shared_ptr<cmr_msgs::action::LinearMove_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinearMove_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinearMove_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinearMove_Result_

// alias to use template instance with default allocator
using LinearMove_Result =
  cmr_msgs::action::LinearMove_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cmr_msgs


// Include directives for member types
// Member 'navigation_time'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cmr_msgs__action__LinearMove_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__action__LinearMove_Feedback __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LinearMove_Feedback_
{
  using Type = LinearMove_Feedback_<ContainerAllocator>;

  explicit LinearMove_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : navigation_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_pose = 0.0f;
      this->current = 0.0f;
      this->error = 0;
      this->status_flag = 0;
    }
  }

  explicit LinearMove_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : navigation_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_pose = 0.0f;
      this->current = 0.0f;
      this->error = 0;
      this->status_flag = 0;
    }
  }

  // field types and members
  using _current_pose_type =
    float;
  _current_pose_type current_pose;
  using _navigation_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _navigation_time_type navigation_time;
  using _current_type =
    float;
  _current_type current;
  using _error_type =
    int8_t;
  _error_type error;
  using _status_flag_type =
    int8_t;
  _status_flag_type status_flag;

  // setters for named parameter idiom
  Type & set__current_pose(
    const float & _arg)
  {
    this->current_pose = _arg;
    return *this;
  }
  Type & set__navigation_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->navigation_time = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__error(
    const int8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__status_flag(
    const int8_t & _arg)
  {
    this->status_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__action__LinearMove_Feedback
    std::shared_ptr<cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__action__LinearMove_Feedback
    std::shared_ptr<cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinearMove_Feedback_ & other) const
  {
    if (this->current_pose != other.current_pose) {
      return false;
    }
    if (this->navigation_time != other.navigation_time) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->status_flag != other.status_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinearMove_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinearMove_Feedback_

// alias to use template instance with default allocator
using LinearMove_Feedback =
  cmr_msgs::action::LinearMove_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cmr_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "cmr_msgs/action/detail/linear_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cmr_msgs__action__LinearMove_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__action__LinearMove_SendGoal_Request __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LinearMove_SendGoal_Request_
{
  using Type = LinearMove_SendGoal_Request_<ContainerAllocator>;

  explicit LinearMove_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit LinearMove_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    cmr_msgs::action::LinearMove_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const cmr_msgs::action::LinearMove_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__action__LinearMove_SendGoal_Request
    std::shared_ptr<cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__action__LinearMove_SendGoal_Request
    std::shared_ptr<cmr_msgs::action::LinearMove_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinearMove_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinearMove_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinearMove_SendGoal_Request_

// alias to use template instance with default allocator
using LinearMove_SendGoal_Request =
  cmr_msgs::action::LinearMove_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cmr_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cmr_msgs__action__LinearMove_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__action__LinearMove_SendGoal_Response __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LinearMove_SendGoal_Response_
{
  using Type = LinearMove_SendGoal_Response_<ContainerAllocator>;

  explicit LinearMove_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit LinearMove_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__action__LinearMove_SendGoal_Response
    std::shared_ptr<cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__action__LinearMove_SendGoal_Response
    std::shared_ptr<cmr_msgs::action::LinearMove_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinearMove_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinearMove_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinearMove_SendGoal_Response_

// alias to use template instance with default allocator
using LinearMove_SendGoal_Response =
  cmr_msgs::action::LinearMove_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cmr_msgs

namespace cmr_msgs
{

namespace action
{

struct LinearMove_SendGoal
{
  using Request = cmr_msgs::action::LinearMove_SendGoal_Request;
  using Response = cmr_msgs::action::LinearMove_SendGoal_Response;
};

}  // namespace action

}  // namespace cmr_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cmr_msgs__action__LinearMove_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__action__LinearMove_GetResult_Request __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LinearMove_GetResult_Request_
{
  using Type = LinearMove_GetResult_Request_<ContainerAllocator>;

  explicit LinearMove_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit LinearMove_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__action__LinearMove_GetResult_Request
    std::shared_ptr<cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__action__LinearMove_GetResult_Request
    std::shared_ptr<cmr_msgs::action::LinearMove_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinearMove_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinearMove_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinearMove_GetResult_Request_

// alias to use template instance with default allocator
using LinearMove_GetResult_Request =
  cmr_msgs::action::LinearMove_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cmr_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "cmr_msgs/action/detail/linear_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cmr_msgs__action__LinearMove_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__action__LinearMove_GetResult_Response __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LinearMove_GetResult_Response_
{
  using Type = LinearMove_GetResult_Response_<ContainerAllocator>;

  explicit LinearMove_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit LinearMove_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    cmr_msgs::action::LinearMove_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const cmr_msgs::action::LinearMove_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__action__LinearMove_GetResult_Response
    std::shared_ptr<cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__action__LinearMove_GetResult_Response
    std::shared_ptr<cmr_msgs::action::LinearMove_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinearMove_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinearMove_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinearMove_GetResult_Response_

// alias to use template instance with default allocator
using LinearMove_GetResult_Response =
  cmr_msgs::action::LinearMove_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cmr_msgs

namespace cmr_msgs
{

namespace action
{

struct LinearMove_GetResult
{
  using Request = cmr_msgs::action::LinearMove_GetResult_Request;
  using Response = cmr_msgs::action::LinearMove_GetResult_Response;
};

}  // namespace action

}  // namespace cmr_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "cmr_msgs/action/detail/linear_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cmr_msgs__action__LinearMove_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__action__LinearMove_FeedbackMessage __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LinearMove_FeedbackMessage_
{
  using Type = LinearMove_FeedbackMessage_<ContainerAllocator>;

  explicit LinearMove_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit LinearMove_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const cmr_msgs::action::LinearMove_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__action__LinearMove_FeedbackMessage
    std::shared_ptr<cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__action__LinearMove_FeedbackMessage
    std::shared_ptr<cmr_msgs::action::LinearMove_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinearMove_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinearMove_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinearMove_FeedbackMessage_

// alias to use template instance with default allocator
using LinearMove_FeedbackMessage =
  cmr_msgs::action::LinearMove_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cmr_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace cmr_msgs
{

namespace action
{

struct LinearMove
{
  /// The goal message defined in the action definition.
  using Goal = cmr_msgs::action::LinearMove_Goal;
  /// The result message defined in the action definition.
  using Result = cmr_msgs::action::LinearMove_Result;
  /// The feedback message defined in the action definition.
  using Feedback = cmr_msgs::action::LinearMove_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = cmr_msgs::action::LinearMove_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = cmr_msgs::action::LinearMove_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = cmr_msgs::action::LinearMove_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct LinearMove LinearMove;

}  // namespace action

}  // namespace cmr_msgs

#endif  // CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__STRUCT_HPP_
