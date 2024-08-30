// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigros2:msg/FeatureLocations.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__BUILDER_HPP_
#define NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigros2/msg/detail/feature_locations__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigros2
{

namespace msg
{

namespace builder
{

class Init_FeatureLocations_matched
{
public:
  explicit Init_FeatureLocations_matched(::navigros2::msg::FeatureLocations & msg)
  : msg_(msg)
  {}
  ::navigros2::msg::FeatureLocations matched(::navigros2::msg::FeatureLocations::_matched_type arg)
  {
    msg_.matched = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::msg::FeatureLocations msg_;
};

class Init_FeatureLocations_yb
{
public:
  explicit Init_FeatureLocations_yb(::navigros2::msg::FeatureLocations & msg)
  : msg_(msg)
  {}
  Init_FeatureLocations_matched yb(::navigros2::msg::FeatureLocations::_yb_type arg)
  {
    msg_.yb = std::move(arg);
    return Init_FeatureLocations_matched(msg_);
  }

private:
  ::navigros2::msg::FeatureLocations msg_;
};

class Init_FeatureLocations_xb
{
public:
  explicit Init_FeatureLocations_xb(::navigros2::msg::FeatureLocations & msg)
  : msg_(msg)
  {}
  Init_FeatureLocations_yb xb(::navigros2::msg::FeatureLocations::_xb_type arg)
  {
    msg_.xb = std::move(arg);
    return Init_FeatureLocations_yb(msg_);
  }

private:
  ::navigros2::msg::FeatureLocations msg_;
};

class Init_FeatureLocations_ya
{
public:
  explicit Init_FeatureLocations_ya(::navigros2::msg::FeatureLocations & msg)
  : msg_(msg)
  {}
  Init_FeatureLocations_xb ya(::navigros2::msg::FeatureLocations::_ya_type arg)
  {
    msg_.ya = std::move(arg);
    return Init_FeatureLocations_xb(msg_);
  }

private:
  ::navigros2::msg::FeatureLocations msg_;
};

class Init_FeatureLocations_xa
{
public:
  Init_FeatureLocations_xa()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FeatureLocations_ya xa(::navigros2::msg::FeatureLocations::_xa_type arg)
  {
    msg_.xa = std::move(arg);
    return Init_FeatureLocations_ya(msg_);
  }

private:
  ::navigros2::msg::FeatureLocations msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::msg::FeatureLocations>()
{
  return navigros2::msg::builder::Init_FeatureLocations_xa();
}

}  // namespace navigros2

#endif  // NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__BUILDER_HPP_
