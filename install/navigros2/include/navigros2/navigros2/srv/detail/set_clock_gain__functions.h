// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from navigros2:srv/SetClockGain.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__FUNCTIONS_H_
#define NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "navigros2/msg/rosidl_generator_c__visibility_control.h"

#include "navigros2/srv/detail/set_clock_gain__struct.h"

/// Initialize srv/SetClockGain message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigros2__srv__SetClockGain_Request
 * )) before or use
 * navigros2__srv__SetClockGain_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__srv__SetClockGain_Request__init(navigros2__srv__SetClockGain_Request * msg);

/// Finalize srv/SetClockGain message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__srv__SetClockGain_Request__fini(navigros2__srv__SetClockGain_Request * msg);

/// Create srv/SetClockGain message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigros2__srv__SetClockGain_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__srv__SetClockGain_Request *
navigros2__srv__SetClockGain_Request__create();

/// Destroy srv/SetClockGain message.
/**
 * It calls
 * navigros2__srv__SetClockGain_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__srv__SetClockGain_Request__destroy(navigros2__srv__SetClockGain_Request * msg);

/// Check for srv/SetClockGain message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__srv__SetClockGain_Request__are_equal(const navigros2__srv__SetClockGain_Request * lhs, const navigros2__srv__SetClockGain_Request * rhs);

/// Copy a srv/SetClockGain message.
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
navigros2__srv__SetClockGain_Request__copy(
  const navigros2__srv__SetClockGain_Request * input,
  navigros2__srv__SetClockGain_Request * output);

/// Initialize array of srv/SetClockGain messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigros2__srv__SetClockGain_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__srv__SetClockGain_Request__Sequence__init(navigros2__srv__SetClockGain_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetClockGain messages.
/**
 * It calls
 * navigros2__srv__SetClockGain_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__srv__SetClockGain_Request__Sequence__fini(navigros2__srv__SetClockGain_Request__Sequence * array);

/// Create array of srv/SetClockGain messages.
/**
 * It allocates the memory for the array and calls
 * navigros2__srv__SetClockGain_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__srv__SetClockGain_Request__Sequence *
navigros2__srv__SetClockGain_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetClockGain messages.
/**
 * It calls
 * navigros2__srv__SetClockGain_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__srv__SetClockGain_Request__Sequence__destroy(navigros2__srv__SetClockGain_Request__Sequence * array);

/// Check for srv/SetClockGain message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__srv__SetClockGain_Request__Sequence__are_equal(const navigros2__srv__SetClockGain_Request__Sequence * lhs, const navigros2__srv__SetClockGain_Request__Sequence * rhs);

/// Copy an array of srv/SetClockGain messages.
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
navigros2__srv__SetClockGain_Request__Sequence__copy(
  const navigros2__srv__SetClockGain_Request__Sequence * input,
  navigros2__srv__SetClockGain_Request__Sequence * output);

/// Initialize srv/SetClockGain message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigros2__srv__SetClockGain_Response
 * )) before or use
 * navigros2__srv__SetClockGain_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__srv__SetClockGain_Response__init(navigros2__srv__SetClockGain_Response * msg);

/// Finalize srv/SetClockGain message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__srv__SetClockGain_Response__fini(navigros2__srv__SetClockGain_Response * msg);

/// Create srv/SetClockGain message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigros2__srv__SetClockGain_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__srv__SetClockGain_Response *
navigros2__srv__SetClockGain_Response__create();

/// Destroy srv/SetClockGain message.
/**
 * It calls
 * navigros2__srv__SetClockGain_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__srv__SetClockGain_Response__destroy(navigros2__srv__SetClockGain_Response * msg);

/// Check for srv/SetClockGain message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__srv__SetClockGain_Response__are_equal(const navigros2__srv__SetClockGain_Response * lhs, const navigros2__srv__SetClockGain_Response * rhs);

/// Copy a srv/SetClockGain message.
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
navigros2__srv__SetClockGain_Response__copy(
  const navigros2__srv__SetClockGain_Response * input,
  navigros2__srv__SetClockGain_Response * output);

/// Initialize array of srv/SetClockGain messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigros2__srv__SetClockGain_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__srv__SetClockGain_Response__Sequence__init(navigros2__srv__SetClockGain_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetClockGain messages.
/**
 * It calls
 * navigros2__srv__SetClockGain_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__srv__SetClockGain_Response__Sequence__fini(navigros2__srv__SetClockGain_Response__Sequence * array);

/// Create array of srv/SetClockGain messages.
/**
 * It allocates the memory for the array and calls
 * navigros2__srv__SetClockGain_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
navigros2__srv__SetClockGain_Response__Sequence *
navigros2__srv__SetClockGain_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetClockGain messages.
/**
 * It calls
 * navigros2__srv__SetClockGain_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
void
navigros2__srv__SetClockGain_Response__Sequence__destroy(navigros2__srv__SetClockGain_Response__Sequence * array);

/// Check for srv/SetClockGain message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigros2
bool
navigros2__srv__SetClockGain_Response__Sequence__are_equal(const navigros2__srv__SetClockGain_Response__Sequence * lhs, const navigros2__srv__SetClockGain_Response__Sequence * rhs);

/// Copy an array of srv/SetClockGain messages.
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
navigros2__srv__SetClockGain_Response__Sequence__copy(
  const navigros2__srv__SetClockGain_Response__Sequence * input,
  navigros2__srv__SetClockGain_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__FUNCTIONS_H_
