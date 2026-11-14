// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scara_description:srv/SetJointConfig.idl
// generated code does not contain a copyright notice

#ifndef SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__TRAITS_HPP_
#define SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "scara_description/srv/detail/set_joint_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace scara_description
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointConfig_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_1
  {
    out << "joint_1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_1, out);
    out << ", ";
  }

  // member: joint_2
  {
    out << "joint_2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_2, out);
    out << ", ";
  }

  // member: joint_3
  {
    out << "joint_3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJointConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_1, out);
    out << "\n";
  }

  // member: joint_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_2, out);
    out << "\n";
  }

  // member: joint_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJointConfig_Request & msg, bool use_flow_style = false)
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
  const scara_description::srv::SetJointConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  scara_description::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scara_description::srv::to_yaml() instead")]]
inline std::string to_yaml(const scara_description::srv::SetJointConfig_Request & msg)
{
  return scara_description::srv::to_yaml(msg);
}

template<>
inline const char * data_type<scara_description::srv::SetJointConfig_Request>()
{
  return "scara_description::srv::SetJointConfig_Request";
}

template<>
inline const char * name<scara_description::srv::SetJointConfig_Request>()
{
  return "scara_description/srv/SetJointConfig_Request";
}

template<>
struct has_fixed_size<scara_description::srv::SetJointConfig_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<scara_description::srv::SetJointConfig_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<scara_description::srv::SetJointConfig_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace scara_description
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointConfig_Response & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJointConfig_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJointConfig_Response & msg, bool use_flow_style = false)
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
  const scara_description::srv::SetJointConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  scara_description::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scara_description::srv::to_yaml() instead")]]
inline std::string to_yaml(const scara_description::srv::SetJointConfig_Response & msg)
{
  return scara_description::srv::to_yaml(msg);
}

template<>
inline const char * data_type<scara_description::srv::SetJointConfig_Response>()
{
  return "scara_description::srv::SetJointConfig_Response";
}

template<>
inline const char * name<scara_description::srv::SetJointConfig_Response>()
{
  return "scara_description/srv/SetJointConfig_Response";
}

template<>
struct has_fixed_size<scara_description::srv::SetJointConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<scara_description::srv::SetJointConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<scara_description::srv::SetJointConfig_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<scara_description::srv::SetJointConfig>()
{
  return "scara_description::srv::SetJointConfig";
}

template<>
inline const char * name<scara_description::srv::SetJointConfig>()
{
  return "scara_description/srv/SetJointConfig";
}

template<>
struct has_fixed_size<scara_description::srv::SetJointConfig>
  : std::integral_constant<
    bool,
    has_fixed_size<scara_description::srv::SetJointConfig_Request>::value &&
    has_fixed_size<scara_description::srv::SetJointConfig_Response>::value
  >
{
};

template<>
struct has_bounded_size<scara_description::srv::SetJointConfig>
  : std::integral_constant<
    bool,
    has_bounded_size<scara_description::srv::SetJointConfig_Request>::value &&
    has_bounded_size<scara_description::srv::SetJointConfig_Response>::value
  >
{
};

template<>
struct is_service<scara_description::srv::SetJointConfig>
  : std::true_type
{
};

template<>
struct is_service_request<scara_description::srv::SetJointConfig_Request>
  : std::true_type
{
};

template<>
struct is_service_response<scara_description::srv::SetJointConfig_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__TRAITS_HPP_
