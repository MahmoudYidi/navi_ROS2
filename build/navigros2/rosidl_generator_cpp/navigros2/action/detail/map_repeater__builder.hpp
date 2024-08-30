// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigros2:action/MapRepeater.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__BUILDER_HPP_
#define NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigros2/action/detail/map_repeater__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapRepeater_Goal_map_name
{
public:
  explicit Init_MapRepeater_Goal_map_name(::navigros2::action::MapRepeater_Goal & msg)
  : msg_(msg)
  {}
  ::navigros2::action::MapRepeater_Goal map_name(::navigros2::action::MapRepeater_Goal::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapRepeater_Goal msg_;
};

class Init_MapRepeater_Goal_traversals
{
public:
  explicit Init_MapRepeater_Goal_traversals(::navigros2::action::MapRepeater_Goal & msg)
  : msg_(msg)
  {}
  Init_MapRepeater_Goal_map_name traversals(::navigros2::action::MapRepeater_Goal::_traversals_type arg)
  {
    msg_.traversals = std::move(arg);
    return Init_MapRepeater_Goal_map_name(msg_);
  }

private:
  ::navigros2::action::MapRepeater_Goal msg_;
};

class Init_MapRepeater_Goal_end_pos
{
public:
  explicit Init_MapRepeater_Goal_end_pos(::navigros2::action::MapRepeater_Goal & msg)
  : msg_(msg)
  {}
  Init_MapRepeater_Goal_traversals end_pos(::navigros2::action::MapRepeater_Goal::_end_pos_type arg)
  {
    msg_.end_pos = std::move(arg);
    return Init_MapRepeater_Goal_traversals(msg_);
  }

private:
  ::navigros2::action::MapRepeater_Goal msg_;
};

class Init_MapRepeater_Goal_start_pos
{
public:
  Init_MapRepeater_Goal_start_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapRepeater_Goal_end_pos start_pos(::navigros2::action::MapRepeater_Goal::_start_pos_type arg)
  {
    msg_.start_pos = std::move(arg);
    return Init_MapRepeater_Goal_end_pos(msg_);
  }

private:
  ::navigros2::action::MapRepeater_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapRepeater_Goal>()
{
  return navigros2::action::builder::Init_MapRepeater_Goal_start_pos();
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapRepeater_Result_success
{
public:
  Init_MapRepeater_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigros2::action::MapRepeater_Result success(::navigros2::action::MapRepeater_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapRepeater_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapRepeater_Result>()
{
  return navigros2::action::builder::Init_MapRepeater_Result_success();
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapRepeater_Feedback>()
{
  return ::navigros2::action::MapRepeater_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapRepeater_SendGoal_Request_goal
{
public:
  explicit Init_MapRepeater_SendGoal_Request_goal(::navigros2::action::MapRepeater_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::navigros2::action::MapRepeater_SendGoal_Request goal(::navigros2::action::MapRepeater_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapRepeater_SendGoal_Request msg_;
};

class Init_MapRepeater_SendGoal_Request_goal_id
{
public:
  Init_MapRepeater_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapRepeater_SendGoal_Request_goal goal_id(::navigros2::action::MapRepeater_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MapRepeater_SendGoal_Request_goal(msg_);
  }

private:
  ::navigros2::action::MapRepeater_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapRepeater_SendGoal_Request>()
{
  return navigros2::action::builder::Init_MapRepeater_SendGoal_Request_goal_id();
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapRepeater_SendGoal_Response_stamp
{
public:
  explicit Init_MapRepeater_SendGoal_Response_stamp(::navigros2::action::MapRepeater_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::navigros2::action::MapRepeater_SendGoal_Response stamp(::navigros2::action::MapRepeater_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapRepeater_SendGoal_Response msg_;
};

class Init_MapRepeater_SendGoal_Response_accepted
{
public:
  Init_MapRepeater_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapRepeater_SendGoal_Response_stamp accepted(::navigros2::action::MapRepeater_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MapRepeater_SendGoal_Response_stamp(msg_);
  }

private:
  ::navigros2::action::MapRepeater_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapRepeater_SendGoal_Response>()
{
  return navigros2::action::builder::Init_MapRepeater_SendGoal_Response_accepted();
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapRepeater_GetResult_Request_goal_id
{
public:
  Init_MapRepeater_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigros2::action::MapRepeater_GetResult_Request goal_id(::navigros2::action::MapRepeater_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapRepeater_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapRepeater_GetResult_Request>()
{
  return navigros2::action::builder::Init_MapRepeater_GetResult_Request_goal_id();
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapRepeater_GetResult_Response_result
{
public:
  explicit Init_MapRepeater_GetResult_Response_result(::navigros2::action::MapRepeater_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::navigros2::action::MapRepeater_GetResult_Response result(::navigros2::action::MapRepeater_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapRepeater_GetResult_Response msg_;
};

class Init_MapRepeater_GetResult_Response_status
{
public:
  Init_MapRepeater_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapRepeater_GetResult_Response_result status(::navigros2::action::MapRepeater_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MapRepeater_GetResult_Response_result(msg_);
  }

private:
  ::navigros2::action::MapRepeater_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapRepeater_GetResult_Response>()
{
  return navigros2::action::builder::Init_MapRepeater_GetResult_Response_status();
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapRepeater_FeedbackMessage_feedback
{
public:
  explicit Init_MapRepeater_FeedbackMessage_feedback(::navigros2::action::MapRepeater_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::navigros2::action::MapRepeater_FeedbackMessage feedback(::navigros2::action::MapRepeater_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapRepeater_FeedbackMessage msg_;
};

class Init_MapRepeater_FeedbackMessage_goal_id
{
public:
  Init_MapRepeater_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapRepeater_FeedbackMessage_feedback goal_id(::navigros2::action::MapRepeater_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MapRepeater_FeedbackMessage_feedback(msg_);
  }

private:
  ::navigros2::action::MapRepeater_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapRepeater_FeedbackMessage>()
{
  return navigros2::action::builder::Init_MapRepeater_FeedbackMessage_goal_id();
}

}  // namespace navigros2

#endif  // NAVIGROS2__ACTION__DETAIL__MAP_REPEATER__BUILDER_HPP_
