// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cmr_msgs:msg/MaxonStatus.idl
// generated code does not contain a copyright notice
#include "cmr_msgs/msg/detail/maxon_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cmr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cmr_msgs/msg/detail/maxon_status__struct.h"
#include "cmr_msgs/msg/detail/maxon_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // current_act, current_act_avg, current_dem, device_state, error, error_history, i2t_level_cont, i2t_level_motor, sense_vel_act, sense_vel_avg, torque_act_avg, velocity_act, velocity_dem, voltage
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // current_act, current_act_avg, current_dem, device_state, error, error_history, i2t_level_cont, i2t_level_motor, sense_vel_act, sense_vel_avg, torque_act_avg, velocity_act, velocity_dem, voltage
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cmr_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cmr_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cmr_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _MaxonStatus__ros_msg_type = cmr_msgs__msg__MaxonStatus;

static bool _MaxonStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MaxonStatus__ros_msg_type * ros_message = static_cast<const _MaxonStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: device_state
  {
    size_t size = ros_message->device_state.size;
    auto array_ptr = ros_message->device_state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: velocity_dem
  {
    size_t size = ros_message->velocity_dem.size;
    auto array_ptr = ros_message->velocity_dem.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: velocity_act
  {
    size_t size = ros_message->velocity_act.size;
    auto array_ptr = ros_message->velocity_act.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: torque_act_avg
  {
    size_t size = ros_message->torque_act_avg.size;
    auto array_ptr = ros_message->torque_act_avg.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: voltage
  {
    size_t size = ros_message->voltage.size;
    auto array_ptr = ros_message->voltage.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: i2t_level_cont
  {
    size_t size = ros_message->i2t_level_cont.size;
    auto array_ptr = ros_message->i2t_level_cont.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: i2t_level_motor
  {
    size_t size = ros_message->i2t_level_motor.size;
    auto array_ptr = ros_message->i2t_level_motor.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: current_dem
  {
    size_t size = ros_message->current_dem.size;
    auto array_ptr = ros_message->current_dem.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: current_act
  {
    size_t size = ros_message->current_act.size;
    auto array_ptr = ros_message->current_act.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: current_act_avg
  {
    size_t size = ros_message->current_act_avg.size;
    auto array_ptr = ros_message->current_act_avg.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sense_vel_act
  {
    size_t size = ros_message->sense_vel_act.size;
    auto array_ptr = ros_message->sense_vel_act.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sense_vel_avg
  {
    size_t size = ros_message->sense_vel_avg.size;
    auto array_ptr = ros_message->sense_vel_avg.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: error
  {
    size_t size = ros_message->error.size;
    auto array_ptr = ros_message->error.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: error_history
  {
    size_t size = ros_message->error_history.size;
    auto array_ptr = ros_message->error_history.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MaxonStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MaxonStatus__ros_msg_type * ros_message = static_cast<_MaxonStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: device_state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->device_state.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->device_state);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->device_state, size)) {
      return "failed to create array for field 'device_state'";
    }
    auto array_ptr = ros_message->device_state.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: velocity_dem
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->velocity_dem.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->velocity_dem);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->velocity_dem, size)) {
      return "failed to create array for field 'velocity_dem'";
    }
    auto array_ptr = ros_message->velocity_dem.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: velocity_act
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->velocity_act.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->velocity_act);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->velocity_act, size)) {
      return "failed to create array for field 'velocity_act'";
    }
    auto array_ptr = ros_message->velocity_act.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: torque_act_avg
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->torque_act_avg.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->torque_act_avg);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->torque_act_avg, size)) {
      return "failed to create array for field 'torque_act_avg'";
    }
    auto array_ptr = ros_message->torque_act_avg.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: voltage
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->voltage.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->voltage);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->voltage, size)) {
      return "failed to create array for field 'voltage'";
    }
    auto array_ptr = ros_message->voltage.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: i2t_level_cont
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->i2t_level_cont.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->i2t_level_cont);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->i2t_level_cont, size)) {
      return "failed to create array for field 'i2t_level_cont'";
    }
    auto array_ptr = ros_message->i2t_level_cont.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: i2t_level_motor
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->i2t_level_motor.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->i2t_level_motor);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->i2t_level_motor, size)) {
      return "failed to create array for field 'i2t_level_motor'";
    }
    auto array_ptr = ros_message->i2t_level_motor.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: current_dem
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->current_dem.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->current_dem);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->current_dem, size)) {
      return "failed to create array for field 'current_dem'";
    }
    auto array_ptr = ros_message->current_dem.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: current_act
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->current_act.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->current_act);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->current_act, size)) {
      return "failed to create array for field 'current_act'";
    }
    auto array_ptr = ros_message->current_act.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: current_act_avg
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->current_act_avg.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->current_act_avg);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->current_act_avg, size)) {
      return "failed to create array for field 'current_act_avg'";
    }
    auto array_ptr = ros_message->current_act_avg.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sense_vel_act
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sense_vel_act.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->sense_vel_act);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->sense_vel_act, size)) {
      return "failed to create array for field 'sense_vel_act'";
    }
    auto array_ptr = ros_message->sense_vel_act.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sense_vel_avg
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sense_vel_avg.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->sense_vel_avg);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->sense_vel_avg, size)) {
      return "failed to create array for field 'sense_vel_avg'";
    }
    auto array_ptr = ros_message->sense_vel_avg.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: error
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->error.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->error);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->error, size)) {
      return "failed to create array for field 'error'";
    }
    auto array_ptr = ros_message->error.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: error_history
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->error_history.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->error_history);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->error_history, size)) {
      return "failed to create array for field 'error_history'";
    }
    auto array_ptr = ros_message->error_history.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cmr_msgs
size_t get_serialized_size_cmr_msgs__msg__MaxonStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MaxonStatus__ros_msg_type * ros_message = static_cast<const _MaxonStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name device_state
  {
    size_t array_size = ros_message->device_state.size;
    auto array_ptr = ros_message->device_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_dem
  {
    size_t array_size = ros_message->velocity_dem.size;
    auto array_ptr = ros_message->velocity_dem.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_act
  {
    size_t array_size = ros_message->velocity_act.size;
    auto array_ptr = ros_message->velocity_act.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_act_avg
  {
    size_t array_size = ros_message->torque_act_avg.size;
    auto array_ptr = ros_message->torque_act_avg.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage
  {
    size_t array_size = ros_message->voltage.size;
    auto array_ptr = ros_message->voltage.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i2t_level_cont
  {
    size_t array_size = ros_message->i2t_level_cont.size;
    auto array_ptr = ros_message->i2t_level_cont.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i2t_level_motor
  {
    size_t array_size = ros_message->i2t_level_motor.size;
    auto array_ptr = ros_message->i2t_level_motor.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_dem
  {
    size_t array_size = ros_message->current_dem.size;
    auto array_ptr = ros_message->current_dem.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_act
  {
    size_t array_size = ros_message->current_act.size;
    auto array_ptr = ros_message->current_act.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_act_avg
  {
    size_t array_size = ros_message->current_act_avg.size;
    auto array_ptr = ros_message->current_act_avg.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sense_vel_act
  {
    size_t array_size = ros_message->sense_vel_act.size;
    auto array_ptr = ros_message->sense_vel_act.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sense_vel_avg
  {
    size_t array_size = ros_message->sense_vel_avg.size;
    auto array_ptr = ros_message->sense_vel_avg.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  {
    size_t array_size = ros_message->error.size;
    auto array_ptr = ros_message->error.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_history
  {
    size_t array_size = ros_message->error_history.size;
    auto array_ptr = ros_message->error_history.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MaxonStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cmr_msgs__msg__MaxonStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cmr_msgs
size_t max_serialized_size_cmr_msgs__msg__MaxonStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: device_state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: velocity_dem
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_act
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque_act_avg
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: voltage
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: i2t_level_cont
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: i2t_level_motor
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: current_dem
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_act
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_act_avg
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sense_vel_act
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sense_vel_avg
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: error
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_history
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MaxonStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cmr_msgs__msg__MaxonStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MaxonStatus = {
  "cmr_msgs::msg",
  "MaxonStatus",
  _MaxonStatus__cdr_serialize,
  _MaxonStatus__cdr_deserialize,
  _MaxonStatus__get_serialized_size,
  _MaxonStatus__max_serialized_size
};

static rosidl_message_type_support_t _MaxonStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MaxonStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cmr_msgs, msg, MaxonStatus)() {
  return &_MaxonStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
