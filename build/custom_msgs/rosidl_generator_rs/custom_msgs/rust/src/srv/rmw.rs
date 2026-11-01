#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__CheckEvenOdd_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__srv__CheckEvenOdd_Request__init(msg: *mut CheckEvenOdd_Request) -> bool;
    fn custom_msgs__srv__CheckEvenOdd_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CheckEvenOdd_Request>, size: usize) -> bool;
    fn custom_msgs__srv__CheckEvenOdd_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CheckEvenOdd_Request>);
    fn custom_msgs__srv__CheckEvenOdd_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CheckEvenOdd_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CheckEvenOdd_Request>) -> bool;
}

// Corresponds to custom_msgs__srv__CheckEvenOdd_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckEvenOdd_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub number: i64,

}



impl Default for CheckEvenOdd_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__srv__CheckEvenOdd_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__srv__CheckEvenOdd_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CheckEvenOdd_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__CheckEvenOdd_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__CheckEvenOdd_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__CheckEvenOdd_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CheckEvenOdd_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CheckEvenOdd_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/srv/CheckEvenOdd_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__CheckEvenOdd_Request() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__CheckEvenOdd_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__srv__CheckEvenOdd_Response__init(msg: *mut CheckEvenOdd_Response) -> bool;
    fn custom_msgs__srv__CheckEvenOdd_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CheckEvenOdd_Response>, size: usize) -> bool;
    fn custom_msgs__srv__CheckEvenOdd_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CheckEvenOdd_Response>);
    fn custom_msgs__srv__CheckEvenOdd_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CheckEvenOdd_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CheckEvenOdd_Response>) -> bool;
}

// Corresponds to custom_msgs__srv__CheckEvenOdd_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckEvenOdd_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: rosidl_runtime_rs::String,

}



impl Default for CheckEvenOdd_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__srv__CheckEvenOdd_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__srv__CheckEvenOdd_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CheckEvenOdd_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__CheckEvenOdd_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__CheckEvenOdd_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__CheckEvenOdd_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CheckEvenOdd_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CheckEvenOdd_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/srv/CheckEvenOdd_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__CheckEvenOdd_Response() }
  }
}






#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__CheckEvenOdd() -> *const std::ffi::c_void;
}

// Corresponds to custom_msgs__srv__CheckEvenOdd
#[allow(missing_docs, non_camel_case_types)]
pub struct CheckEvenOdd;

impl rosidl_runtime_rs::Service for CheckEvenOdd {
    type Request = CheckEvenOdd_Request;
    type Response = CheckEvenOdd_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__CheckEvenOdd() }
    }
}


