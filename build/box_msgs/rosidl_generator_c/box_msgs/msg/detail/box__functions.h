// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from box_msgs:msg/Box.idl
// generated code does not contain a copyright notice

#ifndef BOX_MSGS__MSG__DETAIL__BOX__FUNCTIONS_H_
#define BOX_MSGS__MSG__DETAIL__BOX__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "box_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "box_msgs/msg/detail/box__struct.h"

/// Initialize msg/Box message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * box_msgs__msg__Box
 * )) before or use
 * box_msgs__msg__Box__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_box_msgs
bool
box_msgs__msg__Box__init(box_msgs__msg__Box * msg);

/// Finalize msg/Box message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_msgs
void
box_msgs__msg__Box__fini(box_msgs__msg__Box * msg);

/// Create msg/Box message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * box_msgs__msg__Box__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_box_msgs
box_msgs__msg__Box *
box_msgs__msg__Box__create();

/// Destroy msg/Box message.
/**
 * It calls
 * box_msgs__msg__Box__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_msgs
void
box_msgs__msg__Box__destroy(box_msgs__msg__Box * msg);


/// Initialize array of msg/Box messages.
/**
 * It allocates the memory for the number of elements and calls
 * box_msgs__msg__Box__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_msgs
bool
box_msgs__msg__Box__Sequence__init(box_msgs__msg__Box__Sequence * array, size_t size);

/// Finalize array of msg/Box messages.
/**
 * It calls
 * box_msgs__msg__Box__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_msgs
void
box_msgs__msg__Box__Sequence__fini(box_msgs__msg__Box__Sequence * array);

/// Create array of msg/Box messages.
/**
 * It allocates the memory for the array and calls
 * box_msgs__msg__Box__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_box_msgs
box_msgs__msg__Box__Sequence *
box_msgs__msg__Box__Sequence__create(size_t size);

/// Destroy array of msg/Box messages.
/**
 * It calls
 * box_msgs__msg__Box__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_msgs
void
box_msgs__msg__Box__Sequence__destroy(box_msgs__msg__Box__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // BOX_MSGS__MSG__DETAIL__BOX__FUNCTIONS_H_
