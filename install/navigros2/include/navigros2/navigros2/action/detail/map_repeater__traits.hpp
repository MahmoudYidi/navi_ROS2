// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navigros2:action/MapRepeater.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__TRAITS_HPP_
#define NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navigros2/action/detail/map_repeater__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace navigros2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapRepeater_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_pos
  {
    out << "start_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.start_pos, out);
    out << ", ";
  }

  // member: end_pos
  {
    out << "end_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.end_pos, out);
    out << ", ";
  }

  // member: traversals
  {
    out << "traversals: ";
    rosidl_generator_traits::value_to_yaml(msg.traversals, out);
    out << ", ";
  }

  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapRepeater_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.start_pos, out);
    out << "\n";
  }

  // member: end_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.end_pos, out);
    out << "\n";
  }

  // member: traversals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traversals: ";
    rosidl_generator_traits::value_to_yaml(msg.traversals, out);
    out << "\n";
  }

  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapRepeater_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::action::MapRepeater_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::action::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::action::MapRepeater_Goal & msg)
{
  return navigros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::action::MapRepeater_Goal>()
{
  return "navigros2::action::MapRepeater_Goal";
}

template<>
inline const char * name<navigros2::action::MapRepeater_Goal>()
{
  return "navigros2/action/MapRepeater_Goal";
}

template<>
struct has_fixed_size<navigros2::action::MapRepeater_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<navigros2::action::MapRepeater_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<navigros2::action::MapRepeater_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace navigros2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapRepeater_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapRepeater_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapRepeater_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::action::MapRepeater_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::action::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::action::MapRepeater_Result & msg)
{
  return navigros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::action::MapRepeater_Result>()
{
  return "navigros2::action::MapRepeater_Result";
}

template<>
inline const char * name<navigros2::action::MapRepeater_Result>()
{
  return "navigros2/action/MapRepeater_Result";
}

template<>
struct has_fixed_size<navigros2::action::MapRepeater_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigros2::action::MapRepeater_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigros2::action::MapRepeater_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace navigros2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapRepeater_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapRepeater_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapRepeater_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::action::MapRepeater_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::action::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::action::MapRepeater_Feedback & msg)
{
  return navigros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::action::MapRepeater_Feedback>()
{
  return "navigros2::action::MapRepeater_Feedback";
}

template<>
inline const char * name<navigros2::action::MapRepeater_Feedback>()
{
  return "navigros2/action/MapRepeater_Feedback";
}

template<>
struct has_fixed_size<navigros2::action::MapRepeater_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigros2::action::MapRepeater_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigros2::action::MapRepeater_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "navigros2/action/detail/map_repeater__traits.hpp"

namespace navigros2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapRepeater_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapRepeater_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapRepeater_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::action::MapRepeater_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::action::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::action::MapRepeater_SendGoal_Request & msg)
{
  return navigros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::action::MapRepeater_SendGoal_Request>()
{
  return "navigros2::action::MapRepeater_SendGoal_Request";
}

template<>
inline const char * name<navigros2::action::MapRepeater_SendGoal_Request>()
{
  return "navigros2/action/MapRepeater_SendGoal_Request";
}

template<>
struct has_fixed_size<navigros2::action::MapRepeater_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<navigros2::action::MapRepeater_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<navigros2::action::MapRepeater_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<navigros2::action::MapRepeater_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<navigros2::action::MapRepeater_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace navigros2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapRepeater_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapRepeater_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapRepeater_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::action::MapRepeater_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::action::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::action::MapRepeater_SendGoal_Response & msg)
{
  return navigros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::action::MapRepeater_SendGoal_Response>()
{
  return "navigros2::action::MapRepeater_SendGoal_Response";
}

template<>
inline const char * name<navigros2::action::MapRepeater_SendGoal_Response>()
{
  return "navigros2/action/MapRepeater_SendGoal_Response";
}

template<>
struct has_fixed_size<navigros2::action::MapRepeater_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<navigros2::action::MapRepeater_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<navigros2::action::MapRepeater_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<navigros2::action::MapRepeater_SendGoal>()
{
  return "navigros2::action::MapRepeater_SendGoal";
}

template<>
inline const char * name<navigros2::action::MapRepeater_SendGoal>()
{
  return "navigros2/action/MapRepeater_SendGoal";
}

template<>
struct has_fixed_size<navigros2::action::MapRepeater_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<navigros2::action::MapRepeater_SendGoal_Request>::value &&
    has_fixed_size<navigros2::action::MapRepeater_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<navigros2::action::MapRepeater_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<navigros2::action::MapRepeater_SendGoal_Request>::value &&
    has_bounded_size<navigros2::action::MapRepeater_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<navigros2::action::MapRepeater_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<navigros2::action::MapRepeater_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<navigros2::action::MapRepeater_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace navigros2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapRepeater_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapRepeater_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapRepeater_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::action::MapRepeater_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::action::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::action::MapRepeater_GetResult_Request & msg)
{
  return navigros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::action::MapRepeater_GetResult_Request>()
{
  return "navigros2::action::MapRepeater_GetResult_Request";
}

template<>
inline const char * name<navigros2::action::MapRepeater_GetResult_Request>()
{
  return "navigros2/action/MapRepeater_GetResult_Request";
}

template<>
struct has_fixed_size<navigros2::action::MapRepeater_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<navigros2::action::MapRepeater_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<navigros2::action::MapRepeater_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "navigros2/action/detail/map_repeater__traits.hpp"

namespace navigros2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapRepeater_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapRepeater_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapRepeater_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::action::MapRepeater_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::action::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::action::MapRepeater_GetResult_Response & msg)
{
  return navigros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::action::MapRepeater_GetResult_Response>()
{
  return "navigros2::action::MapRepeater_GetResult_Response";
}

template<>
inline const char * name<navigros2::action::MapRepeater_GetResult_Response>()
{
  return "navigros2/action/MapRepeater_GetResult_Response";
}

template<>
struct has_fixed_size<navigros2::action::MapRepeater_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<navigros2::action::MapRepeater_Result>::value> {};

template<>
struct has_bounded_size<navigros2::action::MapRepeater_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<navigros2::action::MapRepeater_Result>::value> {};

template<>
struct is_message<navigros2::action::MapRepeater_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<navigros2::action::MapRepeater_GetResult>()
{
  return "navigros2::action::MapRepeater_GetResult";
}

template<>
inline const char * name<navigros2::action::MapRepeater_GetResult>()
{
  return "navigros2/action/MapRepeater_GetResult";
}

template<>
struct has_fixed_size<navigros2::action::MapRepeater_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<navigros2::action::MapRepeater_GetResult_Request>::value &&
    has_fixed_size<navigros2::action::MapRepeater_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<navigros2::action::MapRepeater_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<navigros2::action::MapRepeater_GetResult_Request>::value &&
    has_bounded_size<navigros2::action::MapRepeater_GetResult_Response>::value
  >
{
};

template<>
struct is_service<navigros2::action::MapRepeater_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<navigros2::action::MapRepeater_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<navigros2::action::MapRepeater_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "navigros2/action/detail/map_repeater__traits.hpp"

namespace navigros2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapRepeater_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapRepeater_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapRepeater_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::action::MapRepeater_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::action::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::action::MapRepeater_FeedbackMessage & msg)
{
  return navigros2::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::action::MapRepeater_FeedbackMessage>()
{
  return "navigros2::action::MapRepeater_FeedbackMessage";
}

template<>
inline const char * name<navigros2::action::MapRepeater_FeedbackMessage>()
{
  return "navigros2/action/MapRepeater_FeedbackMessage";
}

template<>
struct has_fixed_size<navigros2::action::MapRepeater_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<navigros2::action::MapRepeater_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<navigros2::action::MapRepeater_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<navigros2::action::MapRepeater_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<navigros2::action::MapRepeater_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<navigros2::action::MapRepeater>
  : std::true_type
{
};

template<>
struct is_action_goal<navigros2::action::MapRepeater_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<navigros2::action::MapRepeater_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<navigros2::action::MapRepeater_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__TRAITS_HPP_
