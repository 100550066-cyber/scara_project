#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "scara_description__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__scara_description__srv__SetJointConfig_Request() -> *const std::ffi::c_void;
}

#[link(name = "scara_description__rosidl_generator_c")]
extern "C" {
    fn scara_description__srv__SetJointConfig_Request__init(msg: *mut SetJointConfig_Request) -> bool;
    fn scara_description__srv__SetJointConfig_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointConfig_Request>, size: usize) -> bool;
    fn scara_description__srv__SetJointConfig_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointConfig_Request>);
    fn scara_description__srv__SetJointConfig_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointConfig_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointConfig_Request>) -> bool;
}

// Corresponds to scara_description__srv__SetJointConfig_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointConfig_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_1: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_2: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_3: f64,

}



impl Default for SetJointConfig_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !scara_description__srv__SetJointConfig_Request__init(&mut msg as *mut _) {
        panic!("Call to scara_description__srv__SetJointConfig_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointConfig_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__SetJointConfig_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__SetJointConfig_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__SetJointConfig_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointConfig_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointConfig_Request where Self: Sized {
  const TYPE_NAME: &'static str = "scara_description/srv/SetJointConfig_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__scara_description__srv__SetJointConfig_Request() }
  }
}


#[link(name = "scara_description__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__scara_description__srv__SetJointConfig_Response() -> *const std::ffi::c_void;
}

#[link(name = "scara_description__rosidl_generator_c")]
extern "C" {
    fn scara_description__srv__SetJointConfig_Response__init(msg: *mut SetJointConfig_Response) -> bool;
    fn scara_description__srv__SetJointConfig_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointConfig_Response>, size: usize) -> bool;
    fn scara_description__srv__SetJointConfig_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointConfig_Response>);
    fn scara_description__srv__SetJointConfig_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointConfig_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointConfig_Response>) -> bool;
}

// Corresponds to scara_description__srv__SetJointConfig_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointConfig_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetJointConfig_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !scara_description__srv__SetJointConfig_Response__init(&mut msg as *mut _) {
        panic!("Call to scara_description__srv__SetJointConfig_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointConfig_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__SetJointConfig_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__SetJointConfig_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__SetJointConfig_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointConfig_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointConfig_Response where Self: Sized {
  const TYPE_NAME: &'static str = "scara_description/srv/SetJointConfig_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__scara_description__srv__SetJointConfig_Response() }
  }
}


#[link(name = "scara_description__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__scara_description__srv__GetEndEffectorPose_Request() -> *const std::ffi::c_void;
}

#[link(name = "scara_description__rosidl_generator_c")]
extern "C" {
    fn scara_description__srv__GetEndEffectorPose_Request__init(msg: *mut GetEndEffectorPose_Request) -> bool;
    fn scara_description__srv__GetEndEffectorPose_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEndEffectorPose_Request>, size: usize) -> bool;
    fn scara_description__srv__GetEndEffectorPose_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEndEffectorPose_Request>);
    fn scara_description__srv__GetEndEffectorPose_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEndEffectorPose_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEndEffectorPose_Request>) -> bool;
}

// Corresponds to scara_description__srv__GetEndEffectorPose_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEndEffectorPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetEndEffectorPose_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !scara_description__srv__GetEndEffectorPose_Request__init(&mut msg as *mut _) {
        panic!("Call to scara_description__srv__GetEndEffectorPose_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEndEffectorPose_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__GetEndEffectorPose_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__GetEndEffectorPose_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__GetEndEffectorPose_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEndEffectorPose_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEndEffectorPose_Request where Self: Sized {
  const TYPE_NAME: &'static str = "scara_description/srv/GetEndEffectorPose_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__scara_description__srv__GetEndEffectorPose_Request() }
  }
}


#[link(name = "scara_description__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__scara_description__srv__GetEndEffectorPose_Response() -> *const std::ffi::c_void;
}

#[link(name = "scara_description__rosidl_generator_c")]
extern "C" {
    fn scara_description__srv__GetEndEffectorPose_Response__init(msg: *mut GetEndEffectorPose_Response) -> bool;
    fn scara_description__srv__GetEndEffectorPose_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetEndEffectorPose_Response>, size: usize) -> bool;
    fn scara_description__srv__GetEndEffectorPose_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetEndEffectorPose_Response>);
    fn scara_description__srv__GetEndEffectorPose_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetEndEffectorPose_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetEndEffectorPose_Response>) -> bool;
}

// Corresponds to scara_description__srv__GetEndEffectorPose_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEndEffectorPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::PoseStamped,

}



impl Default for GetEndEffectorPose_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !scara_description__srv__GetEndEffectorPose_Response__init(&mut msg as *mut _) {
        panic!("Call to scara_description__srv__GetEndEffectorPose_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetEndEffectorPose_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__GetEndEffectorPose_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__GetEndEffectorPose_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { scara_description__srv__GetEndEffectorPose_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetEndEffectorPose_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetEndEffectorPose_Response where Self: Sized {
  const TYPE_NAME: &'static str = "scara_description/srv/GetEndEffectorPose_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__scara_description__srv__GetEndEffectorPose_Response() }
  }
}






#[link(name = "scara_description__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__scara_description__srv__SetJointConfig() -> *const std::ffi::c_void;
}

// Corresponds to scara_description__srv__SetJointConfig
#[allow(missing_docs, non_camel_case_types)]
pub struct SetJointConfig;

impl rosidl_runtime_rs::Service for SetJointConfig {
    type Request = SetJointConfig_Request;
    type Response = SetJointConfig_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__scara_description__srv__SetJointConfig() }
    }
}




#[link(name = "scara_description__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__scara_description__srv__GetEndEffectorPose() -> *const std::ffi::c_void;
}

// Corresponds to scara_description__srv__GetEndEffectorPose
#[allow(missing_docs, non_camel_case_types)]
pub struct GetEndEffectorPose;

impl rosidl_runtime_rs::Service for GetEndEffectorPose {
    type Request = GetEndEffectorPose_Request;
    type Response = GetEndEffectorPose_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__scara_description__srv__GetEndEffectorPose() }
    }
}


