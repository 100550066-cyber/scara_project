// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scara_description:srv/GetEndEffectorPose.idl
// generated code does not contain a copyright notice

#ifndef SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__STRUCT_HPP_
#define SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__scara_description__srv__GetEndEffectorPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__scara_description__srv__GetEndEffectorPose_Request __declspec(deprecated)
#endif

namespace scara_description
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEndEffectorPose_Request_
{
  using Type = GetEndEffectorPose_Request_<ContainerAllocator>;

  explicit GetEndEffectorPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetEndEffectorPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_description__srv__GetEndEffectorPose_Request
    std::shared_ptr<scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_description__srv__GetEndEffectorPose_Request
    std::shared_ptr<scara_description::srv::GetEndEffectorPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEndEffectorPose_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEndEffectorPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEndEffectorPose_Request_

// alias to use template instance with default allocator
using GetEndEffectorPose_Request =
  scara_description::srv::GetEndEffectorPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace scara_description


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__scara_description__srv__GetEndEffectorPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__scara_description__srv__GetEndEffectorPose_Response __declspec(deprecated)
#endif

namespace scara_description
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEndEffectorPose_Response_
{
  using Type = GetEndEffectorPose_Response_<ContainerAllocator>;

  explicit GetEndEffectorPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GetEndEffectorPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_description__srv__GetEndEffectorPose_Response
    std::shared_ptr<scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_description__srv__GetEndEffectorPose_Response
    std::shared_ptr<scara_description::srv::GetEndEffectorPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEndEffectorPose_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEndEffectorPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEndEffectorPose_Response_

// alias to use template instance with default allocator
using GetEndEffectorPose_Response =
  scara_description::srv::GetEndEffectorPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace scara_description

namespace scara_description
{

namespace srv
{

struct GetEndEffectorPose
{
  using Request = scara_description::srv::GetEndEffectorPose_Request;
  using Response = scara_description::srv::GetEndEffectorPose_Response;
};

}  // namespace srv

}  // namespace scara_description

#endif  // SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__STRUCT_HPP_
