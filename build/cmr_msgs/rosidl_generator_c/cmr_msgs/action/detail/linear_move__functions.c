// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cmr_msgs:action/LinearMove.idl
// generated code does not contain a copyright notice
#include "cmr_msgs/action/detail/linear_move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
cmr_msgs__action__LinearMove_Goal__init(cmr_msgs__action__LinearMove_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // point
  return true;
}

void
cmr_msgs__action__LinearMove_Goal__fini(cmr_msgs__action__LinearMove_Goal * msg)
{
  if (!msg) {
    return;
  }
  // point
}

cmr_msgs__action__LinearMove_Goal *
cmr_msgs__action__LinearMove_Goal__create()
{
  cmr_msgs__action__LinearMove_Goal * msg = (cmr_msgs__action__LinearMove_Goal *)malloc(sizeof(cmr_msgs__action__LinearMove_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__action__LinearMove_Goal));
  bool success = cmr_msgs__action__LinearMove_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__action__LinearMove_Goal__destroy(cmr_msgs__action__LinearMove_Goal * msg)
{
  if (msg) {
    cmr_msgs__action__LinearMove_Goal__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__action__LinearMove_Goal__Sequence__init(cmr_msgs__action__LinearMove_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__action__LinearMove_Goal * data = NULL;
  if (size) {
    data = (cmr_msgs__action__LinearMove_Goal *)calloc(size, sizeof(cmr_msgs__action__LinearMove_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__action__LinearMove_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__action__LinearMove_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cmr_msgs__action__LinearMove_Goal__Sequence__fini(cmr_msgs__action__LinearMove_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__action__LinearMove_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cmr_msgs__action__LinearMove_Goal__Sequence *
cmr_msgs__action__LinearMove_Goal__Sequence__create(size_t size)
{
  cmr_msgs__action__LinearMove_Goal__Sequence * array = (cmr_msgs__action__LinearMove_Goal__Sequence *)malloc(sizeof(cmr_msgs__action__LinearMove_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__action__LinearMove_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__action__LinearMove_Goal__Sequence__destroy(cmr_msgs__action__LinearMove_Goal__Sequence * array)
{
  if (array) {
    cmr_msgs__action__LinearMove_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
cmr_msgs__action__LinearMove_Result__init(cmr_msgs__action__LinearMove_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
cmr_msgs__action__LinearMove_Result__fini(cmr_msgs__action__LinearMove_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
}

cmr_msgs__action__LinearMove_Result *
cmr_msgs__action__LinearMove_Result__create()
{
  cmr_msgs__action__LinearMove_Result * msg = (cmr_msgs__action__LinearMove_Result *)malloc(sizeof(cmr_msgs__action__LinearMove_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__action__LinearMove_Result));
  bool success = cmr_msgs__action__LinearMove_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__action__LinearMove_Result__destroy(cmr_msgs__action__LinearMove_Result * msg)
{
  if (msg) {
    cmr_msgs__action__LinearMove_Result__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__action__LinearMove_Result__Sequence__init(cmr_msgs__action__LinearMove_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__action__LinearMove_Result * data = NULL;
  if (size) {
    data = (cmr_msgs__action__LinearMove_Result *)calloc(size, sizeof(cmr_msgs__action__LinearMove_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__action__LinearMove_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__action__LinearMove_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cmr_msgs__action__LinearMove_Result__Sequence__fini(cmr_msgs__action__LinearMove_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__action__LinearMove_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cmr_msgs__action__LinearMove_Result__Sequence *
cmr_msgs__action__LinearMove_Result__Sequence__create(size_t size)
{
  cmr_msgs__action__LinearMove_Result__Sequence * array = (cmr_msgs__action__LinearMove_Result__Sequence *)malloc(sizeof(cmr_msgs__action__LinearMove_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__action__LinearMove_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__action__LinearMove_Result__Sequence__destroy(cmr_msgs__action__LinearMove_Result__Sequence * array)
{
  if (array) {
    cmr_msgs__action__LinearMove_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `navigation_time`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
cmr_msgs__action__LinearMove_Feedback__init(cmr_msgs__action__LinearMove_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_pose
  // navigation_time
  if (!builtin_interfaces__msg__Duration__init(&msg->navigation_time)) {
    cmr_msgs__action__LinearMove_Feedback__fini(msg);
    return false;
  }
  // current
  // error
  // status_flag
  return true;
}

void
cmr_msgs__action__LinearMove_Feedback__fini(cmr_msgs__action__LinearMove_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_pose
  // navigation_time
  builtin_interfaces__msg__Duration__fini(&msg->navigation_time);
  // current
  // error
  // status_flag
}

cmr_msgs__action__LinearMove_Feedback *
cmr_msgs__action__LinearMove_Feedback__create()
{
  cmr_msgs__action__LinearMove_Feedback * msg = (cmr_msgs__action__LinearMove_Feedback *)malloc(sizeof(cmr_msgs__action__LinearMove_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__action__LinearMove_Feedback));
  bool success = cmr_msgs__action__LinearMove_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__action__LinearMove_Feedback__destroy(cmr_msgs__action__LinearMove_Feedback * msg)
{
  if (msg) {
    cmr_msgs__action__LinearMove_Feedback__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__action__LinearMove_Feedback__Sequence__init(cmr_msgs__action__LinearMove_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__action__LinearMove_Feedback * data = NULL;
  if (size) {
    data = (cmr_msgs__action__LinearMove_Feedback *)calloc(size, sizeof(cmr_msgs__action__LinearMove_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__action__LinearMove_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__action__LinearMove_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cmr_msgs__action__LinearMove_Feedback__Sequence__fini(cmr_msgs__action__LinearMove_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__action__LinearMove_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cmr_msgs__action__LinearMove_Feedback__Sequence *
cmr_msgs__action__LinearMove_Feedback__Sequence__create(size_t size)
{
  cmr_msgs__action__LinearMove_Feedback__Sequence * array = (cmr_msgs__action__LinearMove_Feedback__Sequence *)malloc(sizeof(cmr_msgs__action__LinearMove_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__action__LinearMove_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__action__LinearMove_Feedback__Sequence__destroy(cmr_msgs__action__LinearMove_Feedback__Sequence * array)
{
  if (array) {
    cmr_msgs__action__LinearMove_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "cmr_msgs/action/detail/linear_move__functions.h"

bool
cmr_msgs__action__LinearMove_SendGoal_Request__init(cmr_msgs__action__LinearMove_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cmr_msgs__action__LinearMove_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!cmr_msgs__action__LinearMove_Goal__init(&msg->goal)) {
    cmr_msgs__action__LinearMove_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
cmr_msgs__action__LinearMove_SendGoal_Request__fini(cmr_msgs__action__LinearMove_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  cmr_msgs__action__LinearMove_Goal__fini(&msg->goal);
}

cmr_msgs__action__LinearMove_SendGoal_Request *
cmr_msgs__action__LinearMove_SendGoal_Request__create()
{
  cmr_msgs__action__LinearMove_SendGoal_Request * msg = (cmr_msgs__action__LinearMove_SendGoal_Request *)malloc(sizeof(cmr_msgs__action__LinearMove_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__action__LinearMove_SendGoal_Request));
  bool success = cmr_msgs__action__LinearMove_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__action__LinearMove_SendGoal_Request__destroy(cmr_msgs__action__LinearMove_SendGoal_Request * msg)
{
  if (msg) {
    cmr_msgs__action__LinearMove_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__init(cmr_msgs__action__LinearMove_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__action__LinearMove_SendGoal_Request * data = NULL;
  if (size) {
    data = (cmr_msgs__action__LinearMove_SendGoal_Request *)calloc(size, sizeof(cmr_msgs__action__LinearMove_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__action__LinearMove_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__action__LinearMove_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__fini(cmr_msgs__action__LinearMove_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__action__LinearMove_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cmr_msgs__action__LinearMove_SendGoal_Request__Sequence *
cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__create(size_t size)
{
  cmr_msgs__action__LinearMove_SendGoal_Request__Sequence * array = (cmr_msgs__action__LinearMove_SendGoal_Request__Sequence *)malloc(sizeof(cmr_msgs__action__LinearMove_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__destroy(cmr_msgs__action__LinearMove_SendGoal_Request__Sequence * array)
{
  if (array) {
    cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
cmr_msgs__action__LinearMove_SendGoal_Response__init(cmr_msgs__action__LinearMove_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    cmr_msgs__action__LinearMove_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
cmr_msgs__action__LinearMove_SendGoal_Response__fini(cmr_msgs__action__LinearMove_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

cmr_msgs__action__LinearMove_SendGoal_Response *
cmr_msgs__action__LinearMove_SendGoal_Response__create()
{
  cmr_msgs__action__LinearMove_SendGoal_Response * msg = (cmr_msgs__action__LinearMove_SendGoal_Response *)malloc(sizeof(cmr_msgs__action__LinearMove_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__action__LinearMove_SendGoal_Response));
  bool success = cmr_msgs__action__LinearMove_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__action__LinearMove_SendGoal_Response__destroy(cmr_msgs__action__LinearMove_SendGoal_Response * msg)
{
  if (msg) {
    cmr_msgs__action__LinearMove_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__init(cmr_msgs__action__LinearMove_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__action__LinearMove_SendGoal_Response * data = NULL;
  if (size) {
    data = (cmr_msgs__action__LinearMove_SendGoal_Response *)calloc(size, sizeof(cmr_msgs__action__LinearMove_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__action__LinearMove_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__action__LinearMove_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__fini(cmr_msgs__action__LinearMove_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__action__LinearMove_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cmr_msgs__action__LinearMove_SendGoal_Response__Sequence *
cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__create(size_t size)
{
  cmr_msgs__action__LinearMove_SendGoal_Response__Sequence * array = (cmr_msgs__action__LinearMove_SendGoal_Response__Sequence *)malloc(sizeof(cmr_msgs__action__LinearMove_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__destroy(cmr_msgs__action__LinearMove_SendGoal_Response__Sequence * array)
{
  if (array) {
    cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
cmr_msgs__action__LinearMove_GetResult_Request__init(cmr_msgs__action__LinearMove_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cmr_msgs__action__LinearMove_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
cmr_msgs__action__LinearMove_GetResult_Request__fini(cmr_msgs__action__LinearMove_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

cmr_msgs__action__LinearMove_GetResult_Request *
cmr_msgs__action__LinearMove_GetResult_Request__create()
{
  cmr_msgs__action__LinearMove_GetResult_Request * msg = (cmr_msgs__action__LinearMove_GetResult_Request *)malloc(sizeof(cmr_msgs__action__LinearMove_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__action__LinearMove_GetResult_Request));
  bool success = cmr_msgs__action__LinearMove_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__action__LinearMove_GetResult_Request__destroy(cmr_msgs__action__LinearMove_GetResult_Request * msg)
{
  if (msg) {
    cmr_msgs__action__LinearMove_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__action__LinearMove_GetResult_Request__Sequence__init(cmr_msgs__action__LinearMove_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__action__LinearMove_GetResult_Request * data = NULL;
  if (size) {
    data = (cmr_msgs__action__LinearMove_GetResult_Request *)calloc(size, sizeof(cmr_msgs__action__LinearMove_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__action__LinearMove_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__action__LinearMove_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cmr_msgs__action__LinearMove_GetResult_Request__Sequence__fini(cmr_msgs__action__LinearMove_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__action__LinearMove_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cmr_msgs__action__LinearMove_GetResult_Request__Sequence *
cmr_msgs__action__LinearMove_GetResult_Request__Sequence__create(size_t size)
{
  cmr_msgs__action__LinearMove_GetResult_Request__Sequence * array = (cmr_msgs__action__LinearMove_GetResult_Request__Sequence *)malloc(sizeof(cmr_msgs__action__LinearMove_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__action__LinearMove_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__action__LinearMove_GetResult_Request__Sequence__destroy(cmr_msgs__action__LinearMove_GetResult_Request__Sequence * array)
{
  if (array) {
    cmr_msgs__action__LinearMove_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "cmr_msgs/action/detail/linear_move__functions.h"

bool
cmr_msgs__action__LinearMove_GetResult_Response__init(cmr_msgs__action__LinearMove_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!cmr_msgs__action__LinearMove_Result__init(&msg->result)) {
    cmr_msgs__action__LinearMove_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
cmr_msgs__action__LinearMove_GetResult_Response__fini(cmr_msgs__action__LinearMove_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  cmr_msgs__action__LinearMove_Result__fini(&msg->result);
}

cmr_msgs__action__LinearMove_GetResult_Response *
cmr_msgs__action__LinearMove_GetResult_Response__create()
{
  cmr_msgs__action__LinearMove_GetResult_Response * msg = (cmr_msgs__action__LinearMove_GetResult_Response *)malloc(sizeof(cmr_msgs__action__LinearMove_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__action__LinearMove_GetResult_Response));
  bool success = cmr_msgs__action__LinearMove_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__action__LinearMove_GetResult_Response__destroy(cmr_msgs__action__LinearMove_GetResult_Response * msg)
{
  if (msg) {
    cmr_msgs__action__LinearMove_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__action__LinearMove_GetResult_Response__Sequence__init(cmr_msgs__action__LinearMove_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__action__LinearMove_GetResult_Response * data = NULL;
  if (size) {
    data = (cmr_msgs__action__LinearMove_GetResult_Response *)calloc(size, sizeof(cmr_msgs__action__LinearMove_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__action__LinearMove_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__action__LinearMove_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cmr_msgs__action__LinearMove_GetResult_Response__Sequence__fini(cmr_msgs__action__LinearMove_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__action__LinearMove_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cmr_msgs__action__LinearMove_GetResult_Response__Sequence *
cmr_msgs__action__LinearMove_GetResult_Response__Sequence__create(size_t size)
{
  cmr_msgs__action__LinearMove_GetResult_Response__Sequence * array = (cmr_msgs__action__LinearMove_GetResult_Response__Sequence *)malloc(sizeof(cmr_msgs__action__LinearMove_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__action__LinearMove_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__action__LinearMove_GetResult_Response__Sequence__destroy(cmr_msgs__action__LinearMove_GetResult_Response__Sequence * array)
{
  if (array) {
    cmr_msgs__action__LinearMove_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "cmr_msgs/action/detail/linear_move__functions.h"

bool
cmr_msgs__action__LinearMove_FeedbackMessage__init(cmr_msgs__action__LinearMove_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cmr_msgs__action__LinearMove_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!cmr_msgs__action__LinearMove_Feedback__init(&msg->feedback)) {
    cmr_msgs__action__LinearMove_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
cmr_msgs__action__LinearMove_FeedbackMessage__fini(cmr_msgs__action__LinearMove_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  cmr_msgs__action__LinearMove_Feedback__fini(&msg->feedback);
}

cmr_msgs__action__LinearMove_FeedbackMessage *
cmr_msgs__action__LinearMove_FeedbackMessage__create()
{
  cmr_msgs__action__LinearMove_FeedbackMessage * msg = (cmr_msgs__action__LinearMove_FeedbackMessage *)malloc(sizeof(cmr_msgs__action__LinearMove_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__action__LinearMove_FeedbackMessage));
  bool success = cmr_msgs__action__LinearMove_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__action__LinearMove_FeedbackMessage__destroy(cmr_msgs__action__LinearMove_FeedbackMessage * msg)
{
  if (msg) {
    cmr_msgs__action__LinearMove_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__init(cmr_msgs__action__LinearMove_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__action__LinearMove_FeedbackMessage * data = NULL;
  if (size) {
    data = (cmr_msgs__action__LinearMove_FeedbackMessage *)calloc(size, sizeof(cmr_msgs__action__LinearMove_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__action__LinearMove_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__action__LinearMove_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__fini(cmr_msgs__action__LinearMove_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__action__LinearMove_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cmr_msgs__action__LinearMove_FeedbackMessage__Sequence *
cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__create(size_t size)
{
  cmr_msgs__action__LinearMove_FeedbackMessage__Sequence * array = (cmr_msgs__action__LinearMove_FeedbackMessage__Sequence *)malloc(sizeof(cmr_msgs__action__LinearMove_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__destroy(cmr_msgs__action__LinearMove_FeedbackMessage__Sequence * array)
{
  if (array) {
    cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
