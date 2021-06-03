// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cmr_msgs:msg/LiftingMech.idl
// generated code does not contain a copyright notice
#include "cmr_msgs/msg/detail/lifting_mech__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
cmr_msgs__msg__LiftingMech__init(cmr_msgs__msg__LiftingMech * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cmr_msgs__msg__LiftingMech__fini(msg);
    return false;
  }
  // lifting_state
  return true;
}

void
cmr_msgs__msg__LiftingMech__fini(cmr_msgs__msg__LiftingMech * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lifting_state
}

cmr_msgs__msg__LiftingMech *
cmr_msgs__msg__LiftingMech__create()
{
  cmr_msgs__msg__LiftingMech * msg = (cmr_msgs__msg__LiftingMech *)malloc(sizeof(cmr_msgs__msg__LiftingMech));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__msg__LiftingMech));
  bool success = cmr_msgs__msg__LiftingMech__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__msg__LiftingMech__destroy(cmr_msgs__msg__LiftingMech * msg)
{
  if (msg) {
    cmr_msgs__msg__LiftingMech__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__msg__LiftingMech__Sequence__init(cmr_msgs__msg__LiftingMech__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__msg__LiftingMech * data = NULL;
  if (size) {
    data = (cmr_msgs__msg__LiftingMech *)calloc(size, sizeof(cmr_msgs__msg__LiftingMech));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__msg__LiftingMech__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__msg__LiftingMech__fini(&data[i - 1]);
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
cmr_msgs__msg__LiftingMech__Sequence__fini(cmr_msgs__msg__LiftingMech__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__msg__LiftingMech__fini(&array->data[i]);
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

cmr_msgs__msg__LiftingMech__Sequence *
cmr_msgs__msg__LiftingMech__Sequence__create(size_t size)
{
  cmr_msgs__msg__LiftingMech__Sequence * array = (cmr_msgs__msg__LiftingMech__Sequence *)malloc(sizeof(cmr_msgs__msg__LiftingMech__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__msg__LiftingMech__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__msg__LiftingMech__Sequence__destroy(cmr_msgs__msg__LiftingMech__Sequence * array)
{
  if (array) {
    cmr_msgs__msg__LiftingMech__Sequence__fini(array);
  }
  free(array);
}
