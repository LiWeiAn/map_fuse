// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cmr_msgs:srv/MaxonControlword.idl
// generated code does not contain a copyright notice
#include "cmr_msgs/srv/detail/maxon_controlword__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
cmr_msgs__srv__MaxonControlword_Request__init(cmr_msgs__srv__MaxonControlword_Request * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  // switch_on
  // enable_voltage
  // quick_stop
  // enable_operation
  // fault_reset
  // halt
  return true;
}

void
cmr_msgs__srv__MaxonControlword_Request__fini(cmr_msgs__srv__MaxonControlword_Request * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  // switch_on
  // enable_voltage
  // quick_stop
  // enable_operation
  // fault_reset
  // halt
}

cmr_msgs__srv__MaxonControlword_Request *
cmr_msgs__srv__MaxonControlword_Request__create()
{
  cmr_msgs__srv__MaxonControlword_Request * msg = (cmr_msgs__srv__MaxonControlword_Request *)malloc(sizeof(cmr_msgs__srv__MaxonControlword_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__srv__MaxonControlword_Request));
  bool success = cmr_msgs__srv__MaxonControlword_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__srv__MaxonControlword_Request__destroy(cmr_msgs__srv__MaxonControlword_Request * msg)
{
  if (msg) {
    cmr_msgs__srv__MaxonControlword_Request__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__srv__MaxonControlword_Request__Sequence__init(cmr_msgs__srv__MaxonControlword_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__srv__MaxonControlword_Request * data = NULL;
  if (size) {
    data = (cmr_msgs__srv__MaxonControlword_Request *)calloc(size, sizeof(cmr_msgs__srv__MaxonControlword_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__srv__MaxonControlword_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__srv__MaxonControlword_Request__fini(&data[i - 1]);
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
cmr_msgs__srv__MaxonControlword_Request__Sequence__fini(cmr_msgs__srv__MaxonControlword_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__srv__MaxonControlword_Request__fini(&array->data[i]);
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

cmr_msgs__srv__MaxonControlword_Request__Sequence *
cmr_msgs__srv__MaxonControlword_Request__Sequence__create(size_t size)
{
  cmr_msgs__srv__MaxonControlword_Request__Sequence * array = (cmr_msgs__srv__MaxonControlword_Request__Sequence *)malloc(sizeof(cmr_msgs__srv__MaxonControlword_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__srv__MaxonControlword_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__srv__MaxonControlword_Request__Sequence__destroy(cmr_msgs__srv__MaxonControlword_Request__Sequence * array)
{
  if (array) {
    cmr_msgs__srv__MaxonControlword_Request__Sequence__fini(array);
  }
  free(array);
}


bool
cmr_msgs__srv__MaxonControlword_Response__init(cmr_msgs__srv__MaxonControlword_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  return true;
}

void
cmr_msgs__srv__MaxonControlword_Response__fini(cmr_msgs__srv__MaxonControlword_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
}

cmr_msgs__srv__MaxonControlword_Response *
cmr_msgs__srv__MaxonControlword_Response__create()
{
  cmr_msgs__srv__MaxonControlword_Response * msg = (cmr_msgs__srv__MaxonControlword_Response *)malloc(sizeof(cmr_msgs__srv__MaxonControlword_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__srv__MaxonControlword_Response));
  bool success = cmr_msgs__srv__MaxonControlword_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__srv__MaxonControlword_Response__destroy(cmr_msgs__srv__MaxonControlword_Response * msg)
{
  if (msg) {
    cmr_msgs__srv__MaxonControlword_Response__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__srv__MaxonControlword_Response__Sequence__init(cmr_msgs__srv__MaxonControlword_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__srv__MaxonControlword_Response * data = NULL;
  if (size) {
    data = (cmr_msgs__srv__MaxonControlword_Response *)calloc(size, sizeof(cmr_msgs__srv__MaxonControlword_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__srv__MaxonControlword_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__srv__MaxonControlword_Response__fini(&data[i - 1]);
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
cmr_msgs__srv__MaxonControlword_Response__Sequence__fini(cmr_msgs__srv__MaxonControlword_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__srv__MaxonControlword_Response__fini(&array->data[i]);
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

cmr_msgs__srv__MaxonControlword_Response__Sequence *
cmr_msgs__srv__MaxonControlword_Response__Sequence__create(size_t size)
{
  cmr_msgs__srv__MaxonControlword_Response__Sequence * array = (cmr_msgs__srv__MaxonControlword_Response__Sequence *)malloc(sizeof(cmr_msgs__srv__MaxonControlword_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__srv__MaxonControlword_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__srv__MaxonControlword_Response__Sequence__destroy(cmr_msgs__srv__MaxonControlword_Response__Sequence * array)
{
  if (array) {
    cmr_msgs__srv__MaxonControlword_Response__Sequence__fini(array);
  }
  free(array);
}
