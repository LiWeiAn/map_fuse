// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cmr_msgs:msg/LocationType.idl
// generated code does not contain a copyright notice
#include "cmr_msgs/msg/detail/location_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `destination_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
cmr_msgs__msg__LocationType__init(cmr_msgs__msg__LocationType * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cmr_msgs__msg__LocationType__fini(msg);
    return false;
  }
  // destination_type
  if (!rosidl_runtime_c__String__init(&msg->destination_type)) {
    cmr_msgs__msg__LocationType__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    cmr_msgs__msg__LocationType__fini(msg);
    return false;
  }
  return true;
}

void
cmr_msgs__msg__LocationType__fini(cmr_msgs__msg__LocationType * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // destination_type
  rosidl_runtime_c__String__fini(&msg->destination_type);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

cmr_msgs__msg__LocationType *
cmr_msgs__msg__LocationType__create()
{
  cmr_msgs__msg__LocationType * msg = (cmr_msgs__msg__LocationType *)malloc(sizeof(cmr_msgs__msg__LocationType));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__msg__LocationType));
  bool success = cmr_msgs__msg__LocationType__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__msg__LocationType__destroy(cmr_msgs__msg__LocationType * msg)
{
  if (msg) {
    cmr_msgs__msg__LocationType__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__msg__LocationType__Sequence__init(cmr_msgs__msg__LocationType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__msg__LocationType * data = NULL;
  if (size) {
    data = (cmr_msgs__msg__LocationType *)calloc(size, sizeof(cmr_msgs__msg__LocationType));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__msg__LocationType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__msg__LocationType__fini(&data[i - 1]);
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
cmr_msgs__msg__LocationType__Sequence__fini(cmr_msgs__msg__LocationType__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__msg__LocationType__fini(&array->data[i]);
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

cmr_msgs__msg__LocationType__Sequence *
cmr_msgs__msg__LocationType__Sequence__create(size_t size)
{
  cmr_msgs__msg__LocationType__Sequence * array = (cmr_msgs__msg__LocationType__Sequence *)malloc(sizeof(cmr_msgs__msg__LocationType__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__msg__LocationType__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__msg__LocationType__Sequence__destroy(cmr_msgs__msg__LocationType__Sequence * array)
{
  if (array) {
    cmr_msgs__msg__LocationType__Sequence__fini(array);
  }
  free(array);
}
