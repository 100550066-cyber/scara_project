// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scara_description:srv/SetJointConfig.idl
// generated code does not contain a copyright notice

#ifndef SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__STRUCT_HPP_
#define SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__scara_description__srv__SetJointConfig_Request __attribute__((deprecated))
#else
# define DEPRECATED__scara_description__srv__SetJointConfig_Request __declspec(deprecated)
#endif

namespace scara_description
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointConfig_Request_
{
  using Type = SetJointConfig_Request_<ContainerAllocator>;

  explicit SetJointConfig_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_1 = 0.0;
      this->joint_2 = 0.0;
      this->joint_3 = 0.0;
    }
  }

  explicit SetJointConfig_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_1 = 0.0;
      this->joint_2 = 0.0;
      this->joint_3 = 0.0;
    }
  }

  // field types and members
  using _joint_1_type =
    double;
  _joint_1_type joint_1;
  using _joint_2_type =
    double;
  _joint_2_type joint_2;
  using _joint_3_type =
    double;
  _joint_3_type joint_3;

  // setters for named parameter idiom
  Type & set__joint_1(
    const double & _arg)
  {
    this->joint_1 = _arg;
    return *this;
  }
  Type & set__joint_2(
    const double & _arg)
  {
    this->joint_2 = _arg;
    return *this;
  }
  Type & set__joint_3(
    const double & _arg)
  {
    this->joint_3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_description::srv::SetJointConfig_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_description::srv::SetJointConfig_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_description::srv::SetJointConfig_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_description::srv::SetJointConfig_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_description::srv::SetJointConfig_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_description::srv::SetJointConfig_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_description::srv::SetJointConfig_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_description::srv::SetJointConfig_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_description::srv::SetJointConfig_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_description::srv::SetJointConfig_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_description__srv__SetJointConfig_Request
    std::shared_ptr<scara_description::srv::SetJointConfig_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_description__srv__SetJointConfig_Request
    std::shared_ptr<scara_description::srv::SetJointConfig_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointConfig_Request_ & other) const
  {
    if (this->joint_1 != other.joint_1) {
      return false;
    }
    if (this->joint_2 != other.joint_2) {
      return false;
    }
    if (this->joint_3 != other.joint_3) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointConfig_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointConfig_Request_

// alias to use template instance with default allocator
using SetJointConfig_Request =
  scara_description::srv::SetJointConfig_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace scara_description


#ifndef _WIN32
# define DEPRECATED__scara_description__srv__SetJointConfig_Response __attribute__((deprecated))
#else
# define DEPRECATED__scara_description__srv__SetJointConfig_Response __declspec(deprecated)
#endif

namespace scara_description
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointConfig_Response_
{
  using Type = SetJointConfig_Response_<ContainerAllocator>;

  explicit SetJointConfig_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetJointConfig_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
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

  // constant declarations

  // pointer types
  using RawPtr =
    scara_description::srv::SetJointConfig_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_description::srv::SetJointConfig_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_description::srv::SetJointConfig_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_description::srv::SetJointConfig_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_description::srv::SetJointConfig_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_description::srv::SetJointConfig_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_description::srv::SetJointConfig_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_description::srv::SetJointConfig_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_description::srv::SetJointConfig_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_description::srv::SetJointConfig_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_description__srv__SetJointConfig_Response
    std::shared_ptr<scara_description::srv::SetJointConfig_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_description__srv__SetJointConfig_Response
    std::shared_ptr<scara_description::srv::SetJointConfig_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointConfig_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointConfig_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointConfig_Response_

// alias to use template instance with default allocator
using SetJointConfig_Response =
  scara_description::srv::SetJointConfig_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace scara_description

namespace scara_description
{

namespace srv
{

struct SetJointConfig
{
  using Request = scara_description::srv::SetJointConfig_Request;
  using Response = scara_description::srv::SetJointConfig_Response;
};

}  // namespace srv

}  // namespace scara_description

#endif  // SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__STRUCT_HPP_
