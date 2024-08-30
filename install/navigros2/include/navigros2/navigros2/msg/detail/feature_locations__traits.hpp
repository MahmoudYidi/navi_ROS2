// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navigros2:msg/FeatureLocations.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__TRAITS_HPP_
#define NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navigros2/msg/detail/feature_locations__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace navigros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const FeatureLocations & msg,
  std::ostream & out)
{
  out << "{";
  // member: xa
  {
    if (msg.xa.size() == 0) {
      out << "xa: []";
    } else {
      out << "xa: [";
      size_t pending_items = msg.xa.size();
      for (auto item : msg.xa) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ya
  {
    if (msg.ya.size() == 0) {
      out << "ya: []";
    } else {
      out << "ya: [";
      size_t pending_items = msg.ya.size();
      for (auto item : msg.ya) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: xb
  {
    if (msg.xb.size() == 0) {
      out << "xb: []";
    } else {
      out << "xb: [";
      size_t pending_items = msg.xb.size();
      for (auto item : msg.xb) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yb
  {
    if (msg.yb.size() == 0) {
      out << "yb: []";
    } else {
      out << "yb: [";
      size_t pending_items = msg.yb.size();
      for (auto item : msg.yb) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: matched
  {
    if (msg.matched.size() == 0) {
      out << "matched: []";
    } else {
      out << "matched: [";
      size_t pending_items = msg.matched.size();
      for (auto item : msg.matched) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FeatureLocations & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.xa.size() == 0) {
      out << "xa: []\n";
    } else {
      out << "xa:\n";
      for (auto item : msg.xa) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ya
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ya.size() == 0) {
      out << "ya: []\n";
    } else {
      out << "ya:\n";
      for (auto item : msg.ya) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: xb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.xb.size() == 0) {
      out << "xb: []\n";
    } else {
      out << "xb:\n";
      for (auto item : msg.xb) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: yb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yb.size() == 0) {
      out << "yb: []\n";
    } else {
      out << "yb:\n";
      for (auto item : msg.yb) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: matched
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.matched.size() == 0) {
      out << "matched: []\n";
    } else {
      out << "matched:\n";
      for (auto item : msg.matched) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FeatureLocations & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::msg::FeatureLocations & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::msg::FeatureLocations & msg)
{
  return navigros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::msg::FeatureLocations>()
{
  return "navigros2::msg::FeatureLocations";
}

template<>
inline const char * name<navigros2::msg::FeatureLocations>()
{
  return "navigros2/msg/FeatureLocations";
}

template<>
struct has_fixed_size<navigros2::msg::FeatureLocations>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<navigros2::msg::FeatureLocations>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<navigros2::msg::FeatureLocations>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__TRAITS_HPP_
