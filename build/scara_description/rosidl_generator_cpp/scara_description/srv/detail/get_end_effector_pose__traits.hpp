// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scara_description:srv/GetEndEffectorPose.idl
// generated code does not contain a copyright notice

#ifndef SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__TRAITS_HPP_
#define SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "scara_description/srv/detail/get_end_effector_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace scara_description
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEndEffectorPose_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEndEffectorPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEndEffectorPose_Request & msg, bool use_flow_style = false)
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

}  // namespace scara_description

namespace rosidl_generator_traits
{

[[deprecated("use scara_description::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const scara_description::srv::GetEndEffectorPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  scara_description::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scara_description::srv::to_yaml() instead")]]
inline std::string to_yaml(const scara_description::srv::GetEndEffectorPose_Request & msg)
{
  return scara_description::srv::to_yaml(msg);
}

template<>
inline const char * data_type<scara_description::srv::GetEndEffectorPose_Request>()
{
  return "scara_description::srv::GetEndEffectorPose_Request";
}

template<>
inline const char * name<scara_description::srv::GetEndEffectorPose_Request>()
{
  return "scara_description/srv/GetEndEffectorPose_Request";
}

template<>
struct has_fixed_size<scara_description::srv::GetEndEffectorPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<scara_description::srv::GetEndEffectorPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<scara_description::srv::GetEndEffectorPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace scara_description
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEndEffectorPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEndEffectorPose_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEndEffectorPose_Response & msg, bool use_flow_style = false)
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

}  // namespace scara_description

namespace rosidl_generator_traits
{

[[deprecated("use scara_description::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const scara_description::srv::GetEndEffectorPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  scara_description::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scara_description::srv::to_yaml() instead")]]
inline std::string to_yaml(const scara_description::srv::GetEndEffectorPose_Response & msg)
{
  return scara_description::srv::to_yaml(msg);
}

template<>
inline const char * data_type<scara_description::srv::GetEndEffectorPose_Response>()
{
  return "scara_description::srv::GetEndEffectorPose_Response";
}

template<>
inline const char * name<scara_description::srv::GetEndEffectorPose_Response>()
{
  return "scara_description/srv/GetEndEffectorPose_Response";
}

template<>
struct has_fixed_size<scara_description::srv::GetEndEffectorPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<scara_description::srv::GetEndEffectorPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<scara_description::srv::GetEndEffectorPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<scara_description::srv::GetEndEffectorPose>()
{
  return "scara_description::srv::GetEndEffectorPose";
}

template<>
inline const char * name<scara_description::srv::GetEndEffectorPose>()
{
  return "scara_description/srv/GetEndEffectorPose";
}

template<>
struct has_fixed_size<scara_description::srv::GetEndEffectorPose>
  : std::integral_constant<
    bool,
    has_fixed_size<scara_description::srv::GetEndEffectorPose_Request>::value &&
    has_fixed_size<scara_description::srv::GetEndEffectorPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<scara_description::srv::GetEndEffectorPose>
  : std::integral_constant<
    bool,
    has_bounded_size<scara_description::srv::GetEndEffectorPose_Request>::value &&
    has_bounded_size<scara_description::srv::GetEndEffectorPose_Response>::value
  >
{
};

template<>
struct is_service<scara_description::srv::GetEndEffectorPose>
  : std::true_type
{
};

template<>
struct is_service_request<scara_description::srv::GetEndEffectorPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<scara_description::srv::GetEndEffectorPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__TRAITS_HPP_
