// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navigros2:srv/SetClockGain.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__TRAITS_HPP_
#define NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navigros2/srv/detail/set_clock_gain__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace navigros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetClockGain_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: gain
  {
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetClockGain_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetClockGain_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::srv::SetClockGain_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::srv::SetClockGain_Request & msg)
{
  return navigros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::srv::SetClockGain_Request>()
{
  return "navigros2::srv::SetClockGain_Request";
}

template<>
inline const char * name<navigros2::srv::SetClockGain_Request>()
{
  return "navigros2/srv/SetClockGain_Request";
}

template<>
struct has_fixed_size<navigros2::srv::SetClockGain_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigros2::srv::SetClockGain_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigros2::srv::SetClockGain_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace navigros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetClockGain_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetClockGain_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetClockGain_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::srv::SetClockGain_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::srv::SetClockGain_Response & msg)
{
  return navigros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::srv::SetClockGain_Response>()
{
  return "navigros2::srv::SetClockGain_Response";
}

template<>
inline const char * name<navigros2::srv::SetClockGain_Response>()
{
  return "navigros2/srv/SetClockGain_Response";
}

template<>
struct has_fixed_size<navigros2::srv::SetClockGain_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigros2::srv::SetClockGain_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigros2::srv::SetClockGain_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<navigros2::srv::SetClockGain>()
{
  return "navigros2::srv::SetClockGain";
}

template<>
inline const char * name<navigros2::srv::SetClockGain>()
{
  return "navigros2/srv/SetClockGain";
}

template<>
struct has_fixed_size<navigros2::srv::SetClockGain>
  : std::integral_constant<
    bool,
    has_fixed_size<navigros2::srv::SetClockGain_Request>::value &&
    has_fixed_size<navigros2::srv::SetClockGain_Response>::value
  >
{
};

template<>
struct has_bounded_size<navigros2::srv::SetClockGain>
  : std::integral_constant<
    bool,
    has_bounded_size<navigros2::srv::SetClockGain_Request>::value &&
    has_bounded_size<navigros2::srv::SetClockGain_Response>::value
  >
{
};

template<>
struct is_service<navigros2::srv::SetClockGain>
  : std::true_type
{
};

template<>
struct is_service_request<navigros2::srv::SetClockGain_Request>
  : std::true_type
{
};

template<>
struct is_service_response<navigros2::srv::SetClockGain_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__TRAITS_HPP_
