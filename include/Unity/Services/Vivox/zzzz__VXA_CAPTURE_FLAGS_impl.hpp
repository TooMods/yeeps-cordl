#pragma once
#include "Unity/Services/Vivox/zzzz__VXA_CAPTURE_FLAGS_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::VXA_CAPTURE_FLAGS::VXA_CAPTURE_FLAGS(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::VXA_CAPTURE_FLAGS::VXA_CAPTURE_FLAGS() {}
constexpr ::Unity::Services::Vivox::VXA_CAPTURE_FLAGS Unity::Services::Vivox::VXA_CAPTURE_FLAGS::VXA_CAPTURE_OPEN_FLAG_USE_AEC{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::VXA_CAPTURE_FLAGS Unity::Services::Vivox::VXA_CAPTURE_FLAGS::VXA_CAPTURE_OPEN_FLAG_USE_AGC{ static_cast<int32_t>(0x2) };
