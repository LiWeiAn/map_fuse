// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cmr_msgs:action/LinearMove.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__STRUCT_H_
#define CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/LinearMove in the package cmr_msgs.
typedef struct cmr_msgs__action__LinearMove_Goal
{
  float point;
} cmr_msgs__action__LinearMove_Goal;

// Struct for a sequence of cmr_msgs__action__LinearMove_Goal.
typedef struct cmr_msgs__action__LinearMove_Goal__Sequence
{
  cmr_msgs__action__LinearMove_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__action__LinearMove_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/LinearMove in the package cmr_msgs.
typedef struct cmr_msgs__action__LinearMove_Result
{
  float result;
} cmr_msgs__action__LinearMove_Result;

// Struct for a sequence of cmr_msgs__action__LinearMove_Result.
typedef struct cmr_msgs__action__LinearMove_Result__Sequence
{
  cmr_msgs__action__LinearMove_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__action__LinearMove_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'navigation_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in action/LinearMove in the package cmr_msgs.
typedef struct cmr_msgs__action__LinearMove_Feedback
{
  float current_pose;
  builtin_interfaces__msg__Duration navigation_time;
  float current;
  int8_t error;
  int8_t status_flag;
} cmr_msgs__action__LinearMove_Feedback;

// Struct for a sequence of cmr_msgs__action__LinearMove_Feedback.
typedef struct cmr_msgs__action__LinearMove_Feedback__Sequence
{
  cmr_msgs__action__LinearMove_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__action__LinearMove_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "cmr_msgs/action/detail/linear_move__struct.h"

// Struct defined in action/LinearMove in the package cmr_msgs.
typedef struct cmr_msgs__action__LinearMove_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  cmr_msgs__action__LinearMove_Goal goal;
} cmr_msgs__action__LinearMove_SendGoal_Request;

// Struct for a sequence of cmr_msgs__action__LinearMove_SendGoal_Request.
typedef struct cmr_msgs__action__LinearMove_SendGoal_Request__Sequence
{
  cmr_msgs__action__LinearMove_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__action__LinearMove_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/LinearMove in the package cmr_msgs.
typedef struct cmr_msgs__action__LinearMove_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} cmr_msgs__action__LinearMove_SendGoal_Response;

// Struct for a sequence of cmr_msgs__action__LinearMove_SendGoal_Response.
typedef struct cmr_msgs__action__LinearMove_SendGoal_Response__Sequence
{
  cmr_msgs__action__LinearMove_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__action__LinearMove_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/LinearMove in the package cmr_msgs.
typedef struct cmr_msgs__action__LinearMove_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} cmr_msgs__action__LinearMove_GetResult_Request;

// Struct for a sequence of cmr_msgs__action__LinearMove_GetResult_Request.
typedef struct cmr_msgs__action__LinearMove_GetResult_Request__Sequence
{
  cmr_msgs__action__LinearMove_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__action__LinearMove_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "cmr_msgs/action/detail/linear_move__struct.h"

// Struct defined in action/LinearMove in the package cmr_msgs.
typedef struct cmr_msgs__action__LinearMove_GetResult_Response
{
  int8_t status;
  cmr_msgs__action__LinearMove_Result result;
} cmr_msgs__action__LinearMove_GetResult_Response;

// Struct for a sequence of cmr_msgs__action__LinearMove_GetResult_Response.
typedef struct cmr_msgs__action__LinearMove_GetResult_Response__Sequence
{
  cmr_msgs__action__LinearMove_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__action__LinearMove_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "cmr_msgs/action/detail/linear_move__struct.h"

// Struct defined in action/LinearMove in the package cmr_msgs.
typedef struct cmr_msgs__action__LinearMove_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  cmr_msgs__action__LinearMove_Feedback feedback;
} cmr_msgs__action__LinearMove_FeedbackMessage;

// Struct for a sequence of cmr_msgs__action__LinearMove_FeedbackMessage.
typedef struct cmr_msgs__action__LinearMove_FeedbackMessage__Sequence
{
  cmr_msgs__action__LinearMove_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmr_msgs__action__LinearMove_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__STRUCT_H_
