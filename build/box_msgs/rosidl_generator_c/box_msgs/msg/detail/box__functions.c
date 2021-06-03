// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from box_msgs:msg/Box.idl
// generated code does not contain a copyright notice
#include "box_msgs/msg/detail/box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
box_msgs__msg__Box__init(box_msgs__msg__Box * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    box_msgs__msg__Box__fini(msg);
    return false;
  }
  // l
  // r
  // t
  // b
  return true;
}

void
box_msgs__msg__Box__fini(box_msgs__msg__Box * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // l
  // r
  // t
  // b
}

box_msgs__msg__Box *
box_msgs__msg__Box__create()
{
  box_msgs__msg__Box * msg = (box_msgs__msg__Box *)malloc(sizeof(box_msgs__msg__Box));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(box_msgs__msg__Box));
  bool success = box_msgs__msg__Box__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
box_msgs__msg__Box__destroy(box_msgs__msg__Box * msg)
{
  if (msg) {
    box_msgs__msg__Box__fini(msg);
  }
  free(msg);
}


bool
box_msgs__msg__Box__Sequence__init(box_msgs__msg__Box__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  box_msgs__msg__Box * data = NULL;
  if (size) {
    data = (box_msgs__msg__Box *)calloc(size, sizeof(box_msgs__msg__Box));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = box_msgs__msg__Box__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        box_msgs__msg__Box__fini(&data[i - 1]);
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
box_msgs__msg__Box__Sequence__fini(box_msgs__msg__Box__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      box_msgs__msg__Box__fini(&array->data[i]);
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

box_msgs__msg__Box__Sequence *
box_msgs__msg__Box__Sequence__create(size_t size)
{
  box_msgs__msg__Box__Sequence * array = (box_msgs__msg__Box__Sequence *)malloc(sizeof(box_msgs__msg__Box__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = box_msgs__msg__Box__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
box_msgs__msg__Box__Sequence__destroy(box_msgs__msg__Box__Sequence * array)
{
  if (array) {
    box_msgs__msg__Box__Sequence__fini(array);
  }
  free(array);
}
