// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from navigros2:action/MapRepeater.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__FUNCTIONS_H_
#define NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "navigros2/msg/rosidl_generator_c__visibility_control.h"

#include "navigros2/action/detail/map_repeater__struct.h"

/// Initialize action/MapRepeater message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigros2__action__MapRepeater_Goal
 * )) before or use
 * navigros2__action__MapRepeater_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Goal__init(navigros2__action__MapRepeater_Goal * msg);

/// Finalize action/MapRepeater message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Goal__fini(navigros2__action__MapRepeater_Goal * msg);

/// Create action/MapRepeater message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigros2__action__MapRepeater_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_Goal *
navigros2__action__MapRepeater_Goal__create();

/// Destroy action/MapRepeater message.
/**
 * It calls
 * navigros2__action__MapRepeater_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Goal__destroy(navigros2__action__MapRepeater_Goal * msg);

/// Check for action/MapRepeater message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Goal__are_equal(const navigros2__action__MapRepeater_Goal * lhs, const navigros2__action__MapRepeater_Goal * rhs);

/// Copy a action/MapRepeater message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Goal__copy(
  const navigros2__action__MapRepeater_Goal * input,
  navigros2__action__MapRepeater_Goal * output);

/// Initialize array of action/MapRepeater messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigros2__action__MapRepeater_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Goal__Sequence__init(navigros2__action__MapRepeater_Goal__Sequence * array, size_t size);

/// Finalize array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Goal__Sequence__fini(navigros2__action__MapRepeater_Goal__Sequence * array);

/// Create array of action/MapRepeater messages.
/**
 * It allocates the memory for the array and calls
 * navigros2__action__MapRepeater_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_Goal__Sequence *
navigros2__action__MapRepeater_Goal__Sequence__create(size_t size);

/// Destroy array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Goal__Sequence__destroy(navigros2__action__MapRepeater_Goal__Sequence * array);

/// Check for action/MapRepeater message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Goal__Sequence__are_equal(const navigros2__action__MapRepeater_Goal__Sequence * lhs, const navigros2__action__MapRepeater_Goal__Sequence * rhs);

/// Copy an array of action/MapRepeater messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Goal__Sequence__copy(
  const navigros2__action__MapRepeater_Goal__Sequence * input,
  navigros2__action__MapRepeater_Goal__Sequence * output);

/// Initialize action/MapRepeater message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigros2__action__MapRepeater_Result
 * )) before or use
 * navigros2__action__MapRepeater_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Result__init(navigros2__action__MapRepeater_Result * msg);

/// Finalize action/MapRepeater message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Result__fini(navigros2__action__MapRepeater_Result * msg);

/// Create action/MapRepeater message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigros2__action__MapRepeater_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_Result *
navigros2__action__MapRepeater_Result__create();

/// Destroy action/MapRepeater message.
/**
 * It calls
 * navigros2__action__MapRepeater_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Result__destroy(navigros2__action__MapRepeater_Result * msg);

/// Check for action/MapRepeater message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Result__are_equal(const navigros2__action__MapRepeater_Result * lhs, const navigros2__action__MapRepeater_Result * rhs);

/// Copy a action/MapRepeater message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Result__copy(
  const navigros2__action__MapRepeater_Result * input,
  navigros2__action__MapRepeater_Result * output);

/// Initialize array of action/MapRepeater messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigros2__action__MapRepeater_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Result__Sequence__init(navigros2__action__MapRepeater_Result__Sequence * array, size_t size);

/// Finalize array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Result__Sequence__fini(navigros2__action__MapRepeater_Result__Sequence * array);

/// Create array of action/MapRepeater messages.
/**
 * It allocates the memory for the array and calls
 * navigros2__action__MapRepeater_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_Result__Sequence *
navigros2__action__MapRepeater_Result__Sequence__create(size_t size);

/// Destroy array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Result__Sequence__destroy(navigros2__action__MapRepeater_Result__Sequence * array);

/// Check for action/MapRepeater message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Result__Sequence__are_equal(const navigros2__action__MapRepeater_Result__Sequence * lhs, const navigros2__action__MapRepeater_Result__Sequence * rhs);

/// Copy an array of action/MapRepeater messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Result__Sequence__copy(
  const navigros2__action__MapRepeater_Result__Sequence * input,
  navigros2__action__MapRepeater_Result__Sequence * output);

/// Initialize action/MapRepeater message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigros2__action__MapRepeater_Feedback
 * )) before or use
 * navigros2__action__MapRepeater_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Feedback__init(navigros2__action__MapRepeater_Feedback * msg);

/// Finalize action/MapRepeater message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Feedback__fini(navigros2__action__MapRepeater_Feedback * msg);

/// Create action/MapRepeater message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigros2__action__MapRepeater_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_Feedback *
navigros2__action__MapRepeater_Feedback__create();

/// Destroy action/MapRepeater message.
/**
 * It calls
 * navigros2__action__MapRepeater_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Feedback__destroy(navigros2__action__MapRepeater_Feedback * msg);

/// Check for action/MapRepeater message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Feedback__are_equal(const navigros2__action__MapRepeater_Feedback * lhs, const navigros2__action__MapRepeater_Feedback * rhs);

/// Copy a action/MapRepeater message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Feedback__copy(
  const navigros2__action__MapRepeater_Feedback * input,
  navigros2__action__MapRepeater_Feedback * output);

/// Initialize array of action/MapRepeater messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigros2__action__MapRepeater_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Feedback__Sequence__init(navigros2__action__MapRepeater_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Feedback__Sequence__fini(navigros2__action__MapRepeater_Feedback__Sequence * array);

/// Create array of action/MapRepeater messages.
/**
 * It allocates the memory for the array and calls
 * navigros2__action__MapRepeater_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_Feedback__Sequence *
navigros2__action__MapRepeater_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_Feedback__Sequence__destroy(navigros2__action__MapRepeater_Feedback__Sequence * array);

/// Check for action/MapRepeater message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Feedback__Sequence__are_equal(const navigros2__action__MapRepeater_Feedback__Sequence * lhs, const navigros2__action__MapRepeater_Feedback__Sequence * rhs);

/// Copy an array of action/MapRepeater messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_Feedback__Sequence__copy(
  const navigros2__action__MapRepeater_Feedback__Sequence * input,
  navigros2__action__MapRepeater_Feedback__Sequence * output);

/// Initialize action/MapRepeater message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigros2__action__MapRepeater_SendGoal_Request
 * )) before or use
 * navigros2__action__MapRepeater_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Request__init(navigros2__action__MapRepeater_SendGoal_Request * msg);

/// Finalize action/MapRepeater message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_SendGoal_Request__fini(navigros2__action__MapRepeater_SendGoal_Request * msg);

/// Create action/MapRepeater message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigros2__action__MapRepeater_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_SendGoal_Request *
navigros2__action__MapRepeater_SendGoal_Request__create();

/// Destroy action/MapRepeater message.
/**
 * It calls
 * navigros2__action__MapRepeater_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_SendGoal_Request__destroy(navigros2__action__MapRepeater_SendGoal_Request * msg);

/// Check for action/MapRepeater message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Request__are_equal(const navigros2__action__MapRepeater_SendGoal_Request * lhs, const navigros2__action__MapRepeater_SendGoal_Request * rhs);

/// Copy a action/MapRepeater message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Request__copy(
  const navigros2__action__MapRepeater_SendGoal_Request * input,
  navigros2__action__MapRepeater_SendGoal_Request * output);

/// Initialize array of action/MapRepeater messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigros2__action__MapRepeater_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Request__Sequence__init(navigros2__action__MapRepeater_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_SendGoal_Request__Sequence__fini(navigros2__action__MapRepeater_SendGoal_Request__Sequence * array);

/// Create array of action/MapRepeater messages.
/**
 * It allocates the memory for the array and calls
 * navigros2__action__MapRepeater_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_SendGoal_Request__Sequence *
navigros2__action__MapRepeater_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_SendGoal_Request__Sequence__destroy(navigros2__action__MapRepeater_SendGoal_Request__Sequence * array);

/// Check for action/MapRepeater message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Request__Sequence__are_equal(const navigros2__action__MapRepeater_SendGoal_Request__Sequence * lhs, const navigros2__action__MapRepeater_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MapRepeater messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Request__Sequence__copy(
  const navigros2__action__MapRepeater_SendGoal_Request__Sequence * input,
  navigros2__action__MapRepeater_SendGoal_Request__Sequence * output);

/// Initialize action/MapRepeater message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigros2__action__MapRepeater_SendGoal_Response
 * )) before or use
 * navigros2__action__MapRepeater_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Response__init(navigros2__action__MapRepeater_SendGoal_Response * msg);

/// Finalize action/MapRepeater message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_SendGoal_Response__fini(navigros2__action__MapRepeater_SendGoal_Response * msg);

/// Create action/MapRepeater message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigros2__action__MapRepeater_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_SendGoal_Response *
navigros2__action__MapRepeater_SendGoal_Response__create();

/// Destroy action/MapRepeater message.
/**
 * It calls
 * navigros2__action__MapRepeater_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_SendGoal_Response__destroy(navigros2__action__MapRepeater_SendGoal_Response * msg);

/// Check for action/MapRepeater message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Response__are_equal(const navigros2__action__MapRepeater_SendGoal_Response * lhs, const navigros2__action__MapRepeater_SendGoal_Response * rhs);

/// Copy a action/MapRepeater message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Response__copy(
  const navigros2__action__MapRepeater_SendGoal_Response * input,
  navigros2__action__MapRepeater_SendGoal_Response * output);

/// Initialize array of action/MapRepeater messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigros2__action__MapRepeater_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Response__Sequence__init(navigros2__action__MapRepeater_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_SendGoal_Response__Sequence__fini(navigros2__action__MapRepeater_SendGoal_Response__Sequence * array);

/// Create array of action/MapRepeater messages.
/**
 * It allocates the memory for the array and calls
 * navigros2__action__MapRepeater_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_SendGoal_Response__Sequence *
navigros2__action__MapRepeater_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_SendGoal_Response__Sequence__destroy(navigros2__action__MapRepeater_SendGoal_Response__Sequence * array);

/// Check for action/MapRepeater message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Response__Sequence__are_equal(const navigros2__action__MapRepeater_SendGoal_Response__Sequence * lhs, const navigros2__action__MapRepeater_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MapRepeater messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_SendGoal_Response__Sequence__copy(
  const navigros2__action__MapRepeater_SendGoal_Response__Sequence * input,
  navigros2__action__MapRepeater_SendGoal_Response__Sequence * output);

/// Initialize action/MapRepeater message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigros2__action__MapRepeater_GetResult_Request
 * )) before or use
 * navigros2__action__MapRepeater_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Request__init(navigros2__action__MapRepeater_GetResult_Request * msg);

/// Finalize action/MapRepeater message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_GetResult_Request__fini(navigros2__action__MapRepeater_GetResult_Request * msg);

/// Create action/MapRepeater message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigros2__action__MapRepeater_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_GetResult_Request *
navigros2__action__MapRepeater_GetResult_Request__create();

/// Destroy action/MapRepeater message.
/**
 * It calls
 * navigros2__action__MapRepeater_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_GetResult_Request__destroy(navigros2__action__MapRepeater_GetResult_Request * msg);

/// Check for action/MapRepeater message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Request__are_equal(const navigros2__action__MapRepeater_GetResult_Request * lhs, const navigros2__action__MapRepeater_GetResult_Request * rhs);

/// Copy a action/MapRepeater message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Request__copy(
  const navigros2__action__MapRepeater_GetResult_Request * input,
  navigros2__action__MapRepeater_GetResult_Request * output);

/// Initialize array of action/MapRepeater messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigros2__action__MapRepeater_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Request__Sequence__init(navigros2__action__MapRepeater_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_GetResult_Request__Sequence__fini(navigros2__action__MapRepeater_GetResult_Request__Sequence * array);

/// Create array of action/MapRepeater messages.
/**
 * It allocates the memory for the array and calls
 * navigros2__action__MapRepeater_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_GetResult_Request__Sequence *
navigros2__action__MapRepeater_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_GetResult_Request__Sequence__destroy(navigros2__action__MapRepeater_GetResult_Request__Sequence * array);

/// Check for action/MapRepeater message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Request__Sequence__are_equal(const navigros2__action__MapRepeater_GetResult_Request__Sequence * lhs, const navigros2__action__MapRepeater_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MapRepeater messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Request__Sequence__copy(
  const navigros2__action__MapRepeater_GetResult_Request__Sequence * input,
  navigros2__action__MapRepeater_GetResult_Request__Sequence * output);

/// Initialize action/MapRepeater message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigros2__action__MapRepeater_GetResult_Response
 * )) before or use
 * navigros2__action__MapRepeater_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Response__init(navigros2__action__MapRepeater_GetResult_Response * msg);

/// Finalize action/MapRepeater message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_GetResult_Response__fini(navigros2__action__MapRepeater_GetResult_Response * msg);

/// Create action/MapRepeater message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigros2__action__MapRepeater_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_GetResult_Response *
navigros2__action__MapRepeater_GetResult_Response__create();

/// Destroy action/MapRepeater message.
/**
 * It calls
 * navigros2__action__MapRepeater_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_GetResult_Response__destroy(navigros2__action__MapRepeater_GetResult_Response * msg);

/// Check for action/MapRepeater message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Response__are_equal(const navigros2__action__MapRepeater_GetResult_Response * lhs, const navigros2__action__MapRepeater_GetResult_Response * rhs);

/// Copy a action/MapRepeater message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Response__copy(
  const navigros2__action__MapRepeater_GetResult_Response * input,
  navigros2__action__MapRepeater_GetResult_Response * output);

/// Initialize array of action/MapRepeater messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigros2__action__MapRepeater_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Response__Sequence__init(navigros2__action__MapRepeater_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_GetResult_Response__Sequence__fini(navigros2__action__MapRepeater_GetResult_Response__Sequence * array);

/// Create array of action/MapRepeater messages.
/**
 * It allocates the memory for the array and calls
 * navigros2__action__MapRepeater_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_GetResult_Response__Sequence *
navigros2__action__MapRepeater_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_GetResult_Response__Sequence__destroy(navigros2__action__MapRepeater_GetResult_Response__Sequence * array);

/// Check for action/MapRepeater message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Response__Sequence__are_equal(const navigros2__action__MapRepeater_GetResult_Response__Sequence * lhs, const navigros2__action__MapRepeater_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MapRepeater messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_GetResult_Response__Sequence__copy(
  const navigros2__action__MapRepeater_GetResult_Response__Sequence * input,
  navigros2__action__MapRepeater_GetResult_Response__Sequence * output);

/// Initialize action/MapRepeater message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigros2__action__MapRepeater_FeedbackMessage
 * )) before or use
 * navigros2__action__MapRepeater_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_FeedbackMessage__init(navigros2__action__MapRepeater_FeedbackMessage * msg);

/// Finalize action/MapRepeater message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_FeedbackMessage__fini(navigros2__action__MapRepeater_FeedbackMessage * msg);

/// Create action/MapRepeater message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigros2__action__MapRepeater_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_FeedbackMessage *
navigros2__action__MapRepeater_FeedbackMessage__create();

/// Destroy action/MapRepeater message.
/**
 * It calls
 * navigros2__action__MapRepeater_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_FeedbackMessage__destroy(navigros2__action__MapRepeater_FeedbackMessage * msg);

/// Check for action/MapRepeater message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_FeedbackMessage__are_equal(const navigros2__action__MapRepeater_FeedbackMessage * lhs, const navigros2__action__MapRepeater_FeedbackMessage * rhs);

/// Copy a action/MapRepeater message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_FeedbackMessage__copy(
  const navigros2__action__MapRepeater_FeedbackMessage * input,
  navigros2__action__MapRepeater_FeedbackMessage * output);

/// Initialize array of action/MapRepeater messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigros2__action__MapRepeater_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_FeedbackMessage__Sequence__init(navigros2__action__MapRepeater_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_FeedbackMessage__Sequence__fini(navigros2__action__MapRepeater_FeedbackMessage__Sequence * array);

/// Create array of action/MapRepeater messages.
/**
 * It allocates the memory for the array and calls
 * navigros2__action__MapRepeater_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__action__MapRepeater_FeedbackMessage__Sequence *
navigros2__action__MapRepeater_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MapRepeater messages.
/**
 * It calls
 * navigros2__action__MapRepeater_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__action__MapRepeater_FeedbackMessage__Sequence__destroy(navigros2__action__MapRepeater_FeedbackMessage__Sequence * array);

/// Check for action/MapRepeater message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_FeedbackMessage__Sequence__are_equal(const navigros2__action__MapRepeater_FeedbackMessage__Sequence * lhs, const navigros2__action__MapRepeater_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MapRepeater messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__action__MapRepeater_FeedbackMessage__Sequence__copy(
  const navigros2__action__MapRepeater_FeedbackMessage__Sequence * input,
  navigros2__action__MapRepeater_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__FUNCTIONS_H_
