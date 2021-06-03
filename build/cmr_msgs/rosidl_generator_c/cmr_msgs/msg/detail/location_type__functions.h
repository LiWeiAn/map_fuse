// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cmr_msgs:msg/LocationType.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__FUNCTIONS_H_
#define CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cmr_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cmr_msgs/msg/detail/location_type__struct.h"

/// Initialize msg/LocationType message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cmr_msgs__msg__LocationType
 * )) before or use
 * cmr_msgs__msg__LocationType__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__msg__LocationType__init(cmr_msgs__msg__LocationType * msg);

/// Finalize msg/LocationType message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__msg__LocationType__fini(cmr_msgs__msg__LocationType * msg);

/// Create msg/LocationType message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cmr_msgs__msg__LocationType__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__msg__LocationType *
cmr_msgs__msg__LocationType__create();

/// Destroy msg/LocationType message.
/**
 * It calls
 * cmr_msgs__msg__LocationType__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__msg__LocationType__destroy(cmr_msgs__msg__LocationType * msg);


/// Initialize array of msg/LocationType messages.
/**
 * It allocates the memory for the number of elements and calls
 * cmr_msgs__msg__LocationType__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__msg__LocationType__Sequence__init(cmr_msgs__msg__LocationType__Sequence * array, size_t size);

/// Finalize array of msg/LocationType messages.
/**
 * It calls
 * cmr_msgs__msg__LocationType__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__msg__LocationType__Sequence__fini(cmr_msgs__msg__LocationType__Sequence * array);

/// Create array of msg/LocationType messages.
/**
 * It allocates the memory for the array and calls
 * cmr_msgs__msg__LocationType__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__msg__LocationType__Sequence *
cmr_msgs__msg__LocationType__Sequence__create(size_t size);

/// Destroy array of msg/LocationType messages.
/**
 * It calls
 * cmr_msgs__msg__LocationType__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__msg__LocationType__Sequence__destroy(cmr_msgs__msg__LocationType__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__FUNCTIONS_H_
