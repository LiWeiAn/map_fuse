// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cmr_msgs:action/LinearMove.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__FUNCTIONS_H_
#define CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cmr_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cmr_msgs/action/detail/linear_move__struct.h"

/// Initialize action/LinearMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cmr_msgs__action__LinearMove_Goal
 * )) before or use
 * cmr_msgs__action__LinearMove_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_Goal__init(cmr_msgs__action__LinearMove_Goal * msg);

/// Finalize action/LinearMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Goal__fini(cmr_msgs__action__LinearMove_Goal * msg);

/// Create action/LinearMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cmr_msgs__action__LinearMove_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_Goal *
cmr_msgs__action__LinearMove_Goal__create();

/// Destroy action/LinearMove message.
/**
 * It calls
 * cmr_msgs__action__LinearMove_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Goal__destroy(cmr_msgs__action__LinearMove_Goal * msg);


/// Initialize array of action/LinearMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * cmr_msgs__action__LinearMove_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_Goal__Sequence__init(cmr_msgs__action__LinearMove_Goal__Sequence * array, size_t size);

/// Finalize array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Goal__Sequence__fini(cmr_msgs__action__LinearMove_Goal__Sequence * array);

/// Create array of action/LinearMove messages.
/**
 * It allocates the memory for the array and calls
 * cmr_msgs__action__LinearMove_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_Goal__Sequence *
cmr_msgs__action__LinearMove_Goal__Sequence__create(size_t size);

/// Destroy array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Goal__Sequence__destroy(cmr_msgs__action__LinearMove_Goal__Sequence * array);

/// Initialize action/LinearMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cmr_msgs__action__LinearMove_Result
 * )) before or use
 * cmr_msgs__action__LinearMove_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_Result__init(cmr_msgs__action__LinearMove_Result * msg);

/// Finalize action/LinearMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Result__fini(cmr_msgs__action__LinearMove_Result * msg);

/// Create action/LinearMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cmr_msgs__action__LinearMove_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_Result *
cmr_msgs__action__LinearMove_Result__create();

/// Destroy action/LinearMove message.
/**
 * It calls
 * cmr_msgs__action__LinearMove_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Result__destroy(cmr_msgs__action__LinearMove_Result * msg);


/// Initialize array of action/LinearMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * cmr_msgs__action__LinearMove_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_Result__Sequence__init(cmr_msgs__action__LinearMove_Result__Sequence * array, size_t size);

/// Finalize array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Result__Sequence__fini(cmr_msgs__action__LinearMove_Result__Sequence * array);

/// Create array of action/LinearMove messages.
/**
 * It allocates the memory for the array and calls
 * cmr_msgs__action__LinearMove_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_Result__Sequence *
cmr_msgs__action__LinearMove_Result__Sequence__create(size_t size);

/// Destroy array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Result__Sequence__destroy(cmr_msgs__action__LinearMove_Result__Sequence * array);

/// Initialize action/LinearMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cmr_msgs__action__LinearMove_Feedback
 * )) before or use
 * cmr_msgs__action__LinearMove_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_Feedback__init(cmr_msgs__action__LinearMove_Feedback * msg);

/// Finalize action/LinearMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Feedback__fini(cmr_msgs__action__LinearMove_Feedback * msg);

/// Create action/LinearMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cmr_msgs__action__LinearMove_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_Feedback *
cmr_msgs__action__LinearMove_Feedback__create();

/// Destroy action/LinearMove message.
/**
 * It calls
 * cmr_msgs__action__LinearMove_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Feedback__destroy(cmr_msgs__action__LinearMove_Feedback * msg);


/// Initialize array of action/LinearMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * cmr_msgs__action__LinearMove_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_Feedback__Sequence__init(cmr_msgs__action__LinearMove_Feedback__Sequence * array, size_t size);

/// Finalize array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Feedback__Sequence__fini(cmr_msgs__action__LinearMove_Feedback__Sequence * array);

/// Create array of action/LinearMove messages.
/**
 * It allocates the memory for the array and calls
 * cmr_msgs__action__LinearMove_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_Feedback__Sequence *
cmr_msgs__action__LinearMove_Feedback__Sequence__create(size_t size);

/// Destroy array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_Feedback__Sequence__destroy(cmr_msgs__action__LinearMove_Feedback__Sequence * array);

/// Initialize action/LinearMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cmr_msgs__action__LinearMove_SendGoal_Request
 * )) before or use
 * cmr_msgs__action__LinearMove_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_SendGoal_Request__init(cmr_msgs__action__LinearMove_SendGoal_Request * msg);

/// Finalize action/LinearMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_SendGoal_Request__fini(cmr_msgs__action__LinearMove_SendGoal_Request * msg);

/// Create action/LinearMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cmr_msgs__action__LinearMove_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_SendGoal_Request *
cmr_msgs__action__LinearMove_SendGoal_Request__create();

/// Destroy action/LinearMove message.
/**
 * It calls
 * cmr_msgs__action__LinearMove_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_SendGoal_Request__destroy(cmr_msgs__action__LinearMove_SendGoal_Request * msg);


/// Initialize array of action/LinearMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * cmr_msgs__action__LinearMove_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__init(cmr_msgs__action__LinearMove_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__fini(cmr_msgs__action__LinearMove_SendGoal_Request__Sequence * array);

/// Create array of action/LinearMove messages.
/**
 * It allocates the memory for the array and calls
 * cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_SendGoal_Request__Sequence *
cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_SendGoal_Request__Sequence__destroy(cmr_msgs__action__LinearMove_SendGoal_Request__Sequence * array);

/// Initialize action/LinearMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cmr_msgs__action__LinearMove_SendGoal_Response
 * )) before or use
 * cmr_msgs__action__LinearMove_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_SendGoal_Response__init(cmr_msgs__action__LinearMove_SendGoal_Response * msg);

/// Finalize action/LinearMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_SendGoal_Response__fini(cmr_msgs__action__LinearMove_SendGoal_Response * msg);

/// Create action/LinearMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cmr_msgs__action__LinearMove_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_SendGoal_Response *
cmr_msgs__action__LinearMove_SendGoal_Response__create();

/// Destroy action/LinearMove message.
/**
 * It calls
 * cmr_msgs__action__LinearMove_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_SendGoal_Response__destroy(cmr_msgs__action__LinearMove_SendGoal_Response * msg);


/// Initialize array of action/LinearMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * cmr_msgs__action__LinearMove_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__init(cmr_msgs__action__LinearMove_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__fini(cmr_msgs__action__LinearMove_SendGoal_Response__Sequence * array);

/// Create array of action/LinearMove messages.
/**
 * It allocates the memory for the array and calls
 * cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_SendGoal_Response__Sequence *
cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_SendGoal_Response__Sequence__destroy(cmr_msgs__action__LinearMove_SendGoal_Response__Sequence * array);

/// Initialize action/LinearMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cmr_msgs__action__LinearMove_GetResult_Request
 * )) before or use
 * cmr_msgs__action__LinearMove_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_GetResult_Request__init(cmr_msgs__action__LinearMove_GetResult_Request * msg);

/// Finalize action/LinearMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_GetResult_Request__fini(cmr_msgs__action__LinearMove_GetResult_Request * msg);

/// Create action/LinearMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cmr_msgs__action__LinearMove_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_GetResult_Request *
cmr_msgs__action__LinearMove_GetResult_Request__create();

/// Destroy action/LinearMove message.
/**
 * It calls
 * cmr_msgs__action__LinearMove_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_GetResult_Request__destroy(cmr_msgs__action__LinearMove_GetResult_Request * msg);


/// Initialize array of action/LinearMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * cmr_msgs__action__LinearMove_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_GetResult_Request__Sequence__init(cmr_msgs__action__LinearMove_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_GetResult_Request__Sequence__fini(cmr_msgs__action__LinearMove_GetResult_Request__Sequence * array);

/// Create array of action/LinearMove messages.
/**
 * It allocates the memory for the array and calls
 * cmr_msgs__action__LinearMove_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_GetResult_Request__Sequence *
cmr_msgs__action__LinearMove_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_GetResult_Request__Sequence__destroy(cmr_msgs__action__LinearMove_GetResult_Request__Sequence * array);

/// Initialize action/LinearMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cmr_msgs__action__LinearMove_GetResult_Response
 * )) before or use
 * cmr_msgs__action__LinearMove_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_GetResult_Response__init(cmr_msgs__action__LinearMove_GetResult_Response * msg);

/// Finalize action/LinearMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_GetResult_Response__fini(cmr_msgs__action__LinearMove_GetResult_Response * msg);

/// Create action/LinearMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cmr_msgs__action__LinearMove_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_GetResult_Response *
cmr_msgs__action__LinearMove_GetResult_Response__create();

/// Destroy action/LinearMove message.
/**
 * It calls
 * cmr_msgs__action__LinearMove_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_GetResult_Response__destroy(cmr_msgs__action__LinearMove_GetResult_Response * msg);


/// Initialize array of action/LinearMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * cmr_msgs__action__LinearMove_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_GetResult_Response__Sequence__init(cmr_msgs__action__LinearMove_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_GetResult_Response__Sequence__fini(cmr_msgs__action__LinearMove_GetResult_Response__Sequence * array);

/// Create array of action/LinearMove messages.
/**
 * It allocates the memory for the array and calls
 * cmr_msgs__action__LinearMove_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_GetResult_Response__Sequence *
cmr_msgs__action__LinearMove_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_GetResult_Response__Sequence__destroy(cmr_msgs__action__LinearMove_GetResult_Response__Sequence * array);

/// Initialize action/LinearMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cmr_msgs__action__LinearMove_FeedbackMessage
 * )) before or use
 * cmr_msgs__action__LinearMove_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_FeedbackMessage__init(cmr_msgs__action__LinearMove_FeedbackMessage * msg);

/// Finalize action/LinearMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_FeedbackMessage__fini(cmr_msgs__action__LinearMove_FeedbackMessage * msg);

/// Create action/LinearMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cmr_msgs__action__LinearMove_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_FeedbackMessage *
cmr_msgs__action__LinearMove_FeedbackMessage__create();

/// Destroy action/LinearMove message.
/**
 * It calls
 * cmr_msgs__action__LinearMove_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_FeedbackMessage__destroy(cmr_msgs__action__LinearMove_FeedbackMessage * msg);


/// Initialize array of action/LinearMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * cmr_msgs__action__LinearMove_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
bool
cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__init(cmr_msgs__action__LinearMove_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__fini(cmr_msgs__action__LinearMove_FeedbackMessage__Sequence * array);

/// Create array of action/LinearMove messages.
/**
 * It allocates the memory for the array and calls
 * cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
cmr_msgs__action__LinearMove_FeedbackMessage__Sequence *
cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/LinearMove messages.
/**
 * It calls
 * cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cmr_msgs
void
cmr_msgs__action__LinearMove_FeedbackMessage__Sequence__destroy(cmr_msgs__action__LinearMove_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__FUNCTIONS_H_
