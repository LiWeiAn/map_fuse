// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cmr_msgs:action/LinearMove.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__TRAITS_HPP_
#define CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__TRAITS_HPP_

#include "cmr_msgs/action/detail/linear_move__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::action::LinearMove_Goal>()
{
  return "cmr_msgs::action::LinearMove_Goal";
}

template<>
inline const char * name<cmr_msgs::action::LinearMove_Goal>()
{
  return "cmr_msgs/action/LinearMove_Goal";
}

template<>
struct has_fixed_size<cmr_msgs::action::LinearMove_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cmr_msgs::action::LinearMove_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cmr_msgs::action::LinearMove_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::action::LinearMove_Result>()
{
  return "cmr_msgs::action::LinearMove_Result";
}

template<>
inline const char * name<cmr_msgs::action::LinearMove_Result>()
{
  return "cmr_msgs/action/LinearMove_Result";
}

template<>
struct has_fixed_size<cmr_msgs::action::LinearMove_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cmr_msgs::action::LinearMove_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cmr_msgs::action::LinearMove_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'navigation_time'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::action::LinearMove_Feedback>()
{
  return "cmr_msgs::action::LinearMove_Feedback";
}

template<>
inline const char * name<cmr_msgs::action::LinearMove_Feedback>()
{
  return "cmr_msgs/action/LinearMove_Feedback";
}

template<>
struct has_fixed_size<cmr_msgs::action::LinearMove_Feedback>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<cmr_msgs::action::LinearMove_Feedback>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<cmr_msgs::action::LinearMove_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "cmr_msgs/action/detail/linear_move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::action::LinearMove_SendGoal_Request>()
{
  return "cmr_msgs::action::LinearMove_SendGoal_Request";
}

template<>
inline const char * name<cmr_msgs::action::LinearMove_SendGoal_Request>()
{
  return "cmr_msgs/action/LinearMove_SendGoal_Request";
}

template<>
struct has_fixed_size<cmr_msgs::action::LinearMove_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<cmr_msgs::action::LinearMove_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cmr_msgs::action::LinearMove_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<cmr_msgs::action::LinearMove_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cmr_msgs::action::LinearMove_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::action::LinearMove_SendGoal_Response>()
{
  return "cmr_msgs::action::LinearMove_SendGoal_Response";
}

template<>
inline const char * name<cmr_msgs::action::LinearMove_SendGoal_Response>()
{
  return "cmr_msgs/action/LinearMove_SendGoal_Response";
}

template<>
struct has_fixed_size<cmr_msgs::action::LinearMove_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<cmr_msgs::action::LinearMove_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<cmr_msgs::action::LinearMove_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::action::LinearMove_SendGoal>()
{
  return "cmr_msgs::action::LinearMove_SendGoal";
}

template<>
inline const char * name<cmr_msgs::action::LinearMove_SendGoal>()
{
  return "cmr_msgs/action/LinearMove_SendGoal";
}

template<>
struct has_fixed_size<cmr_msgs::action::LinearMove_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<cmr_msgs::action::LinearMove_SendGoal_Request>::value &&
    has_fixed_size<cmr_msgs::action::LinearMove_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<cmr_msgs::action::LinearMove_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<cmr_msgs::action::LinearMove_SendGoal_Request>::value &&
    has_bounded_size<cmr_msgs::action::LinearMove_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<cmr_msgs::action::LinearMove_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<cmr_msgs::action::LinearMove_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cmr_msgs::action::LinearMove_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::action::LinearMove_GetResult_Request>()
{
  return "cmr_msgs::action::LinearMove_GetResult_Request";
}

template<>
inline const char * name<cmr_msgs::action::LinearMove_GetResult_Request>()
{
  return "cmr_msgs/action/LinearMove_GetResult_Request";
}

template<>
struct has_fixed_size<cmr_msgs::action::LinearMove_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cmr_msgs::action::LinearMove_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cmr_msgs::action::LinearMove_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "cmr_msgs/action/detail/linear_move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::action::LinearMove_GetResult_Response>()
{
  return "cmr_msgs::action::LinearMove_GetResult_Response";
}

template<>
inline const char * name<cmr_msgs::action::LinearMove_GetResult_Response>()
{
  return "cmr_msgs/action/LinearMove_GetResult_Response";
}

template<>
struct has_fixed_size<cmr_msgs::action::LinearMove_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<cmr_msgs::action::LinearMove_Result>::value> {};

template<>
struct has_bounded_size<cmr_msgs::action::LinearMove_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<cmr_msgs::action::LinearMove_Result>::value> {};

template<>
struct is_message<cmr_msgs::action::LinearMove_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::action::LinearMove_GetResult>()
{
  return "cmr_msgs::action::LinearMove_GetResult";
}

template<>
inline const char * name<cmr_msgs::action::LinearMove_GetResult>()
{
  return "cmr_msgs/action/LinearMove_GetResult";
}

template<>
struct has_fixed_size<cmr_msgs::action::LinearMove_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<cmr_msgs::action::LinearMove_GetResult_Request>::value &&
    has_fixed_size<cmr_msgs::action::LinearMove_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<cmr_msgs::action::LinearMove_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<cmr_msgs::action::LinearMove_GetResult_Request>::value &&
    has_bounded_size<cmr_msgs::action::LinearMove_GetResult_Response>::value
  >
{
};

template<>
struct is_service<cmr_msgs::action::LinearMove_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<cmr_msgs::action::LinearMove_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cmr_msgs::action::LinearMove_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "cmr_msgs/action/detail/linear_move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::action::LinearMove_FeedbackMessage>()
{
  return "cmr_msgs::action::LinearMove_FeedbackMessage";
}

template<>
inline const char * name<cmr_msgs::action::LinearMove_FeedbackMessage>()
{
  return "cmr_msgs/action/LinearMove_FeedbackMessage";
}

template<>
struct has_fixed_size<cmr_msgs::action::LinearMove_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<cmr_msgs::action::LinearMove_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cmr_msgs::action::LinearMove_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<cmr_msgs::action::LinearMove_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cmr_msgs::action::LinearMove_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<cmr_msgs::action::LinearMove>
  : std::true_type
{
};

template<>
struct is_action_goal<cmr_msgs::action::LinearMove_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<cmr_msgs::action::LinearMove_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<cmr_msgs::action::LinearMove_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__TRAITS_HPP_
