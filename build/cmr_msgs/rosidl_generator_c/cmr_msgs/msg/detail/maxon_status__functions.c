// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cmr_msgs:msg/MaxonStatus.idl
// generated code does not contain a copyright notice
#include "cmr_msgs/msg/detail/maxon_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `device_state`
// Member `velocity_dem`
// Member `velocity_act`
// Member `torque_act_avg`
// Member `voltage`
// Member `i2t_level_cont`
// Member `i2t_level_motor`
// Member `current_dem`
// Member `current_act`
// Member `current_act_avg`
// Member `sense_vel_act`
// Member `sense_vel_avg`
// Member `error`
// Member `error_history`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cmr_msgs__msg__MaxonStatus__init(cmr_msgs__msg__MaxonStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // device_state
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->device_state, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // velocity_dem
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->velocity_dem, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // velocity_act
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->velocity_act, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // torque_act_avg
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->torque_act_avg, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // voltage
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->voltage, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // i2t_level_cont
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->i2t_level_cont, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // i2t_level_motor
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->i2t_level_motor, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // current_dem
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->current_dem, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // current_act
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->current_act, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // current_act_avg
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->current_act_avg, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // sense_vel_act
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->sense_vel_act, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // sense_vel_avg
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->sense_vel_avg, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // error
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->error, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  // error_history
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->error_history, 0)) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
    return false;
  }
  return true;
}

void
cmr_msgs__msg__MaxonStatus__fini(cmr_msgs__msg__MaxonStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // device_state
  rosidl_runtime_c__uint8__Sequence__fini(&msg->device_state);
  // velocity_dem
  rosidl_runtime_c__int32__Sequence__fini(&msg->velocity_dem);
  // velocity_act
  rosidl_runtime_c__int32__Sequence__fini(&msg->velocity_act);
  // torque_act_avg
  rosidl_runtime_c__int16__Sequence__fini(&msg->torque_act_avg);
  // voltage
  rosidl_runtime_c__uint16__Sequence__fini(&msg->voltage);
  // i2t_level_cont
  rosidl_runtime_c__uint16__Sequence__fini(&msg->i2t_level_cont);
  // i2t_level_motor
  rosidl_runtime_c__uint16__Sequence__fini(&msg->i2t_level_motor);
  // current_dem
  rosidl_runtime_c__int32__Sequence__fini(&msg->current_dem);
  // current_act
  rosidl_runtime_c__int32__Sequence__fini(&msg->current_act);
  // current_act_avg
  rosidl_runtime_c__int32__Sequence__fini(&msg->current_act_avg);
  // sense_vel_act
  rosidl_runtime_c__int32__Sequence__fini(&msg->sense_vel_act);
  // sense_vel_avg
  rosidl_runtime_c__int32__Sequence__fini(&msg->sense_vel_avg);
  // error
  rosidl_runtime_c__uint8__Sequence__fini(&msg->error);
  // error_history
  rosidl_runtime_c__uint16__Sequence__fini(&msg->error_history);
}

cmr_msgs__msg__MaxonStatus *
cmr_msgs__msg__MaxonStatus__create()
{
  cmr_msgs__msg__MaxonStatus * msg = (cmr_msgs__msg__MaxonStatus *)malloc(sizeof(cmr_msgs__msg__MaxonStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmr_msgs__msg__MaxonStatus));
  bool success = cmr_msgs__msg__MaxonStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cmr_msgs__msg__MaxonStatus__destroy(cmr_msgs__msg__MaxonStatus * msg)
{
  if (msg) {
    cmr_msgs__msg__MaxonStatus__fini(msg);
  }
  free(msg);
}


bool
cmr_msgs__msg__MaxonStatus__Sequence__init(cmr_msgs__msg__MaxonStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cmr_msgs__msg__MaxonStatus * data = NULL;
  if (size) {
    data = (cmr_msgs__msg__MaxonStatus *)calloc(size, sizeof(cmr_msgs__msg__MaxonStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmr_msgs__msg__MaxonStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmr_msgs__msg__MaxonStatus__fini(&data[i - 1]);
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
cmr_msgs__msg__MaxonStatus__Sequence__fini(cmr_msgs__msg__MaxonStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cmr_msgs__msg__MaxonStatus__fini(&array->data[i]);
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

cmr_msgs__msg__MaxonStatus__Sequence *
cmr_msgs__msg__MaxonStatus__Sequence__create(size_t size)
{
  cmr_msgs__msg__MaxonStatus__Sequence * array = (cmr_msgs__msg__MaxonStatus__Sequence *)malloc(sizeof(cmr_msgs__msg__MaxonStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cmr_msgs__msg__MaxonStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cmr_msgs__msg__MaxonStatus__Sequence__destroy(cmr_msgs__msg__MaxonStatus__Sequence * array)
{
  if (array) {
    cmr_msgs__msg__MaxonStatus__Sequence__fini(array);
  }
  free(array);
}
