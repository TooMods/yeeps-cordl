#pragma once
#include "Unity/Services/Vivox/zzzz__VXA_ERROR_CODES_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES::VXA_ERROR_CODES(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES::VXA_ERROR_CODES() {}
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES Unity::Services::Vivox::VXA_ERROR_CODES::VXA_SUCCESS{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES Unity::Services::Vivox::VXA_ERROR_CODES::VXA_INVALID_PARAMETER{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES Unity::Services::Vivox::VXA_ERROR_CODES::VXA_DEVICE_DOES_NOT_EXIST{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES Unity::Services::Vivox::VXA_ERROR_CODES::VXA_INTERNAL_ERROR{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES Unity::Services::Vivox::VXA_ERROR_CODES::VXA_OUT_OF_MEMORY{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES Unity::Services::Vivox::VXA_ERROR_CODES::VXA_INVALID_STATE{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES Unity::Services::Vivox::VXA_ERROR_CODES::VXA_NO_MORE_DATA{ static_cast<int32_t>(0x6) };
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES Unity::Services::Vivox::VXA_ERROR_CODES::VXA_FEATURE_NOT_SUPPORTED{ static_cast<int32_t>(0x7) };
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES Unity::Services::Vivox::VXA_ERROR_CODES::VXA_MAX_DEVICES_EXCEEDED{ static_cast<int32_t>(0x8) };
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES Unity::Services::Vivox::VXA_ERROR_CODES::VXA_NO_BUFFERS_AVAILABLE{ static_cast<int32_t>(0x9) };
constexpr ::Unity::Services::Vivox::VXA_ERROR_CODES Unity::Services::Vivox::VXA_ERROR_CODES::VXA_ACCESS_DENIED{ static_cast<int32_t>(0xa) };
