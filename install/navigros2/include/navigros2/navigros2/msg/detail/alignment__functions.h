// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from navigros2:msg/Alignment.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__ALIGNMENT__FUNCTIONS_H_
#define NAVIGROS2__MSG__DETAIL__ALIGNMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "navigros2/msg/rosidl_generator_c__visibility_control.h"

#include "navigros2/msg/detail/alignment__struct.h"

/// Initialize msg/Alignment message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigros2__msg__Alignment
 * )) before or use
 * navigros2__msg__Alignment__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__msg__Alignment__init(navigros2__msg__Alignment * msg);

/// Finalize msg/Alignment message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__msg__Alignment__fini(navigros2__msg__Alignment * msg);

/// Create msg/Alignment message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigros2__msg__Alignment__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__msg__Alignment *
navigros2__msg__Alignment__create();

/// Destroy msg/Alignment message.
/**
 * It calls
 * navigros2__msg__Alignment__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__msg__Alignment__destroy(navigros2__msg__Alignment * msg);

/// Check for msg/Alignment message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__msg__Alignment__are_equal(const navigros2__msg__Alignment * lhs, const navigros2__msg__Alignment * rhs);

/// Copy a msg/Alignment message.
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
navigros2__msg__Alignment__copy(
  const navigros2__msg__Alignment * input,
  navigros2__msg__Alignment * output);

/// Initialize array of msg/Alignment messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigros2__msg__Alignment__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__msg__Alignment__Sequence__init(navigros2__msg__Alignment__Sequence * array, size_t size);

/// Finalize array of msg/Alignment messages.
/**
 * It calls
 * navigros2__msg__Alignment__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__msg__Alignment__Sequence__fini(navigros2__msg__Alignment__Sequence * array);

/// Create array of msg/Alignment messages.
/**
 * It allocates the memory for the array and calls
 * navigros2__msg__Alignment__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__msg__Alignment__Sequence *
navigros2__msg__Alignment__Sequence__create(size_t size);

/// Destroy array of msg/Alignment messages.
/**
 * It calls
 * navigros2__msg__Alignment__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__msg__Alignment__Sequence__destroy(navigros2__msg__Alignment__Sequence * array);

/// Check for msg/Alignment message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__msg__Alignment__Sequence__are_equal(const navigros2__msg__Alignment__Sequence * lhs, const navigros2__msg__Alignment__Sequence * rhs);

/// Copy an array of msg/Alignment messages.
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
navigros2__msg__Alignment__Sequence__copy(
  const navigros2__msg__Alignment__Sequence * input,
  navigros2__msg__Alignment__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NAVIGROS2__MSG__DETAIL__ALIGNMENT__FUNCTIONS_H_
