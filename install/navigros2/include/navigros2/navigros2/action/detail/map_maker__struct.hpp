// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from navigros2:action/MapMaker.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__ACTION__DETAIL__MAP_MAKER__STRUCT_HPP_
#define NAVIGROS2__ACTION__DETAIL__MAP_MAKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__navigros2__action__MapMaker_Goal __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__action__MapMaker_Goal __declspec(deprecated)
#endif

namespace navigros2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapMaker_Goal_
{
  using Type = MapMaker_Goal_<ContainerAllocator>;

  explicit MapMaker_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->saveimgs4viz = false;
      this->map_name = "";
      this->start = false;
    }
  }

  explicit MapMaker_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->saveimgs4viz = false;
      this->map_name = "";
      this->start = false;
    }
  }

  // field types and members
  using _saveimgs4viz_type =
    bool;
  _saveimgs4viz_type saveimgs4viz;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _start_type =
    bool;
  _start_type start;

  // setters for named parameter idiom
  Type & set__saveimgs4viz(
    const bool & _arg)
  {
    this->saveimgs4viz = _arg;
    return *this;
  }
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__start(
    const bool & _arg)
  {
    this->start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::action::MapMaker_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::action::MapMaker_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__action__MapMaker_Goal
    std::shared_ptr<navigros2::action::MapMaker_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__action__MapMaker_Goal
    std::shared_ptr<navigros2::action::MapMaker_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapMaker_Goal_ & other) const
  {
    if (this->saveimgs4viz != other.saveimgs4viz) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapMaker_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapMaker_Goal_

// alias to use template instance with default allocator
using MapMaker_Goal =
  navigros2::action::MapMaker_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace navigros2


#ifndef _WIN32
# define DEPRECATED__navigros2__action__MapMaker_Result __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__action__MapMaker_Result __declspec(deprecated)
#endif

namespace navigros2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapMaker_Result_
{
  using Type = MapMaker_Result_<ContainerAllocator>;

  explicit MapMaker_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MapMaker_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::action::MapMaker_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::action::MapMaker_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__action__MapMaker_Result
    std::shared_ptr<navigros2::action::MapMaker_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__action__MapMaker_Result
    std::shared_ptr<navigros2::action::MapMaker_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapMaker_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapMaker_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapMaker_Result_

// alias to use template instance with default allocator
using MapMaker_Result =
  navigros2::action::MapMaker_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace navigros2


#ifndef _WIN32
# define DEPRECATED__navigros2__action__MapMaker_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__action__MapMaker_Feedback __declspec(deprecated)
#endif

namespace navigros2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapMaker_Feedback_
{
  using Type = MapMaker_Feedback_<ContainerAllocator>;

  explicit MapMaker_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MapMaker_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::action::MapMaker_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::action::MapMaker_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__action__MapMaker_Feedback
    std::shared_ptr<navigros2::action::MapMaker_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__action__MapMaker_Feedback
    std::shared_ptr<navigros2::action::MapMaker_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapMaker_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapMaker_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapMaker_Feedback_

// alias to use template instance with default allocator
using MapMaker_Feedback =
  navigros2::action::MapMaker_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace navigros2


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "navigros2/action/detail/map_maker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__navigros2__action__MapMaker_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__action__MapMaker_SendGoal_Request __declspec(deprecated)
#endif

namespace navigros2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapMaker_SendGoal_Request_
{
  using Type = MapMaker_SendGoal_Request_<ContainerAllocator>;

  explicit MapMaker_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MapMaker_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    navigros2::action::MapMaker_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const navigros2::action::MapMaker_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__action__MapMaker_SendGoal_Request
    std::shared_ptr<navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__action__MapMaker_SendGoal_Request
    std::shared_ptr<navigros2::action::MapMaker_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapMaker_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapMaker_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapMaker_SendGoal_Request_

// alias to use template instance with default allocator
using MapMaker_SendGoal_Request =
  navigros2::action::MapMaker_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace navigros2


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__navigros2__action__MapMaker_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__action__MapMaker_SendGoal_Response __declspec(deprecated)
#endif

namespace navigros2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapMaker_SendGoal_Response_
{
  using Type = MapMaker_SendGoal_Response_<ContainerAllocator>;

  explicit MapMaker_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MapMaker_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__action__MapMaker_SendGoal_Response
    std::shared_ptr<navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__action__MapMaker_SendGoal_Response
    std::shared_ptr<navigros2::action::MapMaker_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapMaker_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapMaker_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapMaker_SendGoal_Response_

// alias to use template instance with default allocator
using MapMaker_SendGoal_Response =
  navigros2::action::MapMaker_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace navigros2

namespace navigros2
{

namespace action
{

struct MapMaker_SendGoal
{
  using Request = navigros2::action::MapMaker_SendGoal_Request;
  using Response = navigros2::action::MapMaker_SendGoal_Response;
};

}  // namespace action

}  // namespace navigros2


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__navigros2__action__MapMaker_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__action__MapMaker_GetResult_Request __declspec(deprecated)
#endif

namespace navigros2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapMaker_GetResult_Request_
{
  using Type = MapMaker_GetResult_Request_<ContainerAllocator>;

  explicit MapMaker_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MapMaker_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__action__MapMaker_GetResult_Request
    std::shared_ptr<navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__action__MapMaker_GetResult_Request
    std::shared_ptr<navigros2::action::MapMaker_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapMaker_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapMaker_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapMaker_GetResult_Request_

// alias to use template instance with default allocator
using MapMaker_GetResult_Request =
  navigros2::action::MapMaker_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace navigros2


// Include directives for member types
// Member 'result'
// already included above
// #include "navigros2/action/detail/map_maker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__navigros2__action__MapMaker_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__action__MapMaker_GetResult_Response __declspec(deprecated)
#endif

namespace navigros2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapMaker_GetResult_Response_
{
  using Type = MapMaker_GetResult_Response_<ContainerAllocator>;

  explicit MapMaker_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MapMaker_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    navigros2::action::MapMaker_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const navigros2::action::MapMaker_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__action__MapMaker_GetResult_Response
    std::shared_ptr<navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__action__MapMaker_GetResult_Response
    std::shared_ptr<navigros2::action::MapMaker_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapMaker_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapMaker_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapMaker_GetResult_Response_

// alias to use template instance with default allocator
using MapMaker_GetResult_Response =
  navigros2::action::MapMaker_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace navigros2

namespace navigros2
{

namespace action
{

struct MapMaker_GetResult
{
  using Request = navigros2::action::MapMaker_GetResult_Request;
  using Response = navigros2::action::MapMaker_GetResult_Response;
};

}  // namespace action

}  // namespace navigros2


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "navigros2/action/detail/map_maker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__navigros2__action__MapMaker_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__action__MapMaker_FeedbackMessage __declspec(deprecated)
#endif

namespace navigros2
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MapMaker_FeedbackMessage_
{
  using Type = MapMaker_FeedbackMessage_<ContainerAllocator>;

  explicit MapMaker_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MapMaker_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    navigros2::action::MapMaker_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const navigros2::action::MapMaker_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__action__MapMaker_FeedbackMessage
    std::shared_ptr<navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__action__MapMaker_FeedbackMessage
    std::shared_ptr<navigros2::action::MapMaker_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapMaker_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapMaker_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapMaker_FeedbackMessage_

// alias to use template instance with default allocator
using MapMaker_FeedbackMessage =
  navigros2::action::MapMaker_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace navigros2

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace navigros2
{

namespace action
{

struct MapMaker
{
  /// The goal message defined in the action definition.
  using Goal = navigros2::action::MapMaker_Goal;
  /// The result message defined in the action definition.
  using Result = navigros2::action::MapMaker_Result;
  /// The feedback message defined in the action definition.
  using Feedback = navigros2::action::MapMaker_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = navigros2::action::MapMaker_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = navigros2::action::MapMaker_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = navigros2::action::MapMaker_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MapMaker MapMaker;

}  // namespace action

}  // namespace navigros2

#endif  // NAVIGROS2__ACTION__DETAIL__MAP_MAKER__STRUCT_HPP_
