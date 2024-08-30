// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navigros2:action/MapRepeater.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__STRUCT_H_
#define NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MapRepeater in the package navigros2.
typedef struct navigros2__action__MapRepeater_Goal
{
  double start_pos;
  double end_pos;
  uint8_t traversals;
  rosidl_runtime_c__String map_name;
} navigros2__action__MapRepeater_Goal;

// Struct for a sequence of navigros2__action__MapRepeater_Goal.
typedef struct navigros2__action__MapRepeater_Goal__Sequence
{
  navigros2__action__MapRepeater_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__action__MapRepeater_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MapRepeater in the package navigros2.
typedef struct navigros2__action__MapRepeater_Result
{
  bool success;
} navigros2__action__MapRepeater_Result;

// Struct for a sequence of navigros2__action__MapRepeater_Result.
typedef struct navigros2__action__MapRepeater_Result__Sequence
{
  navigros2__action__MapRepeater_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__action__MapRepeater_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MapRepeater in the package navigros2.
typedef struct navigros2__action__MapRepeater_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} navigros2__action__MapRepeater_Feedback;

// Struct for a sequence of navigros2__action__MapRepeater_Feedback.
typedef struct navigros2__action__MapRepeater_Feedback__Sequence
{
  navigros2__action__MapRepeater_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__action__MapRepeater_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "navigros2/action/detail/map_repeater__struct.h"

/// Struct defined in action/MapRepeater in the package navigros2.
typedef struct navigros2__action__MapRepeater_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  navigros2__action__MapRepeater_Goal goal;
} navigros2__action__MapRepeater_SendGoal_Request;

// Struct for a sequence of navigros2__action__MapRepeater_SendGoal_Request.
typedef struct navigros2__action__MapRepeater_SendGoal_Request__Sequence
{
  navigros2__action__MapRepeater_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__action__MapRepeater_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MapRepeater in the package navigros2.
typedef struct navigros2__action__MapRepeater_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} navigros2__action__MapRepeater_SendGoal_Response;

// Struct for a sequence of navigros2__action__MapRepeater_SendGoal_Response.
typedef struct navigros2__action__MapRepeater_SendGoal_Response__Sequence
{
  navigros2__action__MapRepeater_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__action__MapRepeater_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MapRepeater in the package navigros2.
typedef struct navigros2__action__MapRepeater_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} navigros2__action__MapRepeater_GetResult_Request;

// Struct for a sequence of navigros2__action__MapRepeater_GetResult_Request.
typedef struct navigros2__action__MapRepeater_GetResult_Request__Sequence
{
  navigros2__action__MapRepeater_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__action__MapRepeater_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "navigros2/action/detail/map_repeater__struct.h"

/// Struct defined in action/MapRepeater in the package navigros2.
typedef struct navigros2__action__MapRepeater_GetResult_Response
{
  int8_t status;
  navigros2__action__MapRepeater_Result result;
} navigros2__action__MapRepeater_GetResult_Response;

// Struct for a sequence of navigros2__action__MapRepeater_GetResult_Response.
typedef struct navigros2__action__MapRepeater_GetResult_Response__Sequence
{
  navigros2__action__MapRepeater_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__action__MapRepeater_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "navigros2/action/detail/map_repeater__struct.h"

/// Struct defined in action/MapRepeater in the package navigros2.
typedef struct navigros2__action__MapRepeater_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  navigros2__action__MapRepeater_Feedback feedback;
} navigros2__action__MapRepeater_FeedbackMessage;

// Struct for a sequence of navigros2__action__MapRepeater_FeedbackMessage.
typedef struct navigros2__action__MapRepeater_FeedbackMessage__Sequence
{
  navigros2__action__MapRepeater_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__action__MapRepeater_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__STRUCT_H_
