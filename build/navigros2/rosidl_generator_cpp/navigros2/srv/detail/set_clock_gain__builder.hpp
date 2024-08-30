// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigros2:srv/SetClockGain.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__BUILDER_HPP_
#define NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigros2/srv/detail/set_clock_gain__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigros2
{

namespace srv
{

namespace builder
{

class Init_SetClockGain_Request_gain
{
public:
  Init_SetClockGain_Request_gain()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigros2::srv::SetClockGain_Request gain(::navigros2::srv::SetClockGain_Request::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::srv::SetClockGain_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::srv::SetClockGain_Request>()
{
  return navigros2::srv::builder::Init_SetClockGain_Request_gain();
}

}  // namespace navigros2


namespace navigros2
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::srv::SetClockGain_Response>()
{
  return ::navigros2::srv::SetClockGain_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace navigros2

#endif  // NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__BUILDER_HPP_
