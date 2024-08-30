// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigros2:action/MapMaker.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__ACTION__DETAIL__MAP_MAKER__BUILDER_HPP_
#define NAVIGROS2__ACTION__DETAIL__MAP_MAKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigros2/action/detail/map_maker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapMaker_Goal_start
{
public:
  explicit Init_MapMaker_Goal_start(::navigros2::action::MapMaker_Goal & msg)
  : msg_(msg)
  {}
  ::navigros2::action::MapMaker_Goal start(::navigros2::action::MapMaker_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapMaker_Goal msg_;
};

class Init_MapMaker_Goal_map_name
{
public:
  explicit Init_MapMaker_Goal_map_name(::navigros2::action::MapMaker_Goal & msg)
  : msg_(msg)
  {}
  Init_MapMaker_Goal_start map_name(::navigros2::action::MapMaker_Goal::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_MapMaker_Goal_start(msg_);
  }

private:
  ::navigros2::action::MapMaker_Goal msg_;
};

class Init_MapMaker_Goal_saveimgs4viz
{
public:
  Init_MapMaker_Goal_saveimgs4viz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapMaker_Goal_map_name saveimgs4viz(::navigros2::action::MapMaker_Goal::_saveimgs4viz_type arg)
  {
    msg_.saveimgs4viz = std::move(arg);
    return Init_MapMaker_Goal_map_name(msg_);
  }

private:
  ::navigros2::action::MapMaker_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapMaker_Goal>()
{
  return navigros2::action::builder::Init_MapMaker_Goal_saveimgs4viz();
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapMaker_Result_success
{
public:
  Init_MapMaker_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigros2::action::MapMaker_Result success(::navigros2::action::MapMaker_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapMaker_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapMaker_Result>()
{
  return navigros2::action::builder::Init_MapMaker_Result_success();
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
auto build<::navigros2::action::MapMaker_Feedback>()
{
  return ::navigros2::action::MapMaker_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapMaker_SendGoal_Request_goal
{
public:
  explicit Init_MapMaker_SendGoal_Request_goal(::navigros2::action::MapMaker_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::navigros2::action::MapMaker_SendGoal_Request goal(::navigros2::action::MapMaker_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapMaker_SendGoal_Request msg_;
};

class Init_MapMaker_SendGoal_Request_goal_id
{
public:
  Init_MapMaker_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapMaker_SendGoal_Request_goal goal_id(::navigros2::action::MapMaker_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MapMaker_SendGoal_Request_goal(msg_);
  }

private:
  ::navigros2::action::MapMaker_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapMaker_SendGoal_Request>()
{
  return navigros2::action::builder::Init_MapMaker_SendGoal_Request_goal_id();
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapMaker_SendGoal_Response_stamp
{
public:
  explicit Init_MapMaker_SendGoal_Response_stamp(::navigros2::action::MapMaker_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::navigros2::action::MapMaker_SendGoal_Response stamp(::navigros2::action::MapMaker_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapMaker_SendGoal_Response msg_;
};

class Init_MapMaker_SendGoal_Response_accepted
{
public:
  Init_MapMaker_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapMaker_SendGoal_Response_stamp accepted(::navigros2::action::MapMaker_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MapMaker_SendGoal_Response_stamp(msg_);
  }

private:
  ::navigros2::action::MapMaker_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapMaker_SendGoal_Response>()
{
  return navigros2::action::builder::Init_MapMaker_SendGoal_Response_accepted();
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapMaker_GetResult_Request_goal_id
{
public:
  Init_MapMaker_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigros2::action::MapMaker_GetResult_Request goal_id(::navigros2::action::MapMaker_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapMaker_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapMaker_GetResult_Request>()
{
  return navigros2::action::builder::Init_MapMaker_GetResult_Request_goal_id();
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapMaker_GetResult_Response_result
{
public:
  explicit Init_MapMaker_GetResult_Response_result(::navigros2::action::MapMaker_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::navigros2::action::MapMaker_GetResult_Response result(::navigros2::action::MapMaker_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapMaker_GetResult_Response msg_;
};

class Init_MapMaker_GetResult_Response_status
{
public:
  Init_MapMaker_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapMaker_GetResult_Response_result status(::navigros2::action::MapMaker_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MapMaker_GetResult_Response_result(msg_);
  }

private:
  ::navigros2::action::MapMaker_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapMaker_GetResult_Response>()
{
  return navigros2::action::builder::Init_MapMaker_GetResult_Response_status();
}

}  // namespace navigros2


namespace navigros2
{

namespace action
{

namespace builder
{

class Init_MapMaker_FeedbackMessage_feedback
{
public:
  explicit Init_MapMaker_FeedbackMessage_feedback(::navigros2::action::MapMaker_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::navigros2::action::MapMaker_FeedbackMessage feedback(::navigros2::action::MapMaker_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::action::MapMaker_FeedbackMessage msg_;
};

class Init_MapMaker_FeedbackMessage_goal_id
{
public:
  Init_MapMaker_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapMaker_FeedbackMessage_feedback goal_id(::navigros2::action::MapMaker_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MapMaker_FeedbackMessage_feedback(msg_);
  }

private:
  ::navigros2::action::MapMaker_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::action::MapMaker_FeedbackMessage>()
{
  return navigros2::action::builder::Init_MapMaker_FeedbackMessage_goal_id();
}

}  // namespace navigros2

#endif  // NAVIGROS2__ACTION__DETAIL__MAP_MAKER__BUILDER_HPP_
