#pragma once
#include "Unity/Services/Vivox/zzzz__vx_text_mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_text_mode::vx_text_mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_text_mode::vx_text_mode() {}
constexpr ::Unity::Services::Vivox::vx_text_mode Unity::Services::Vivox::vx_text_mode::text_mode_disabled{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_text_mode Unity::Services::Vivox::vx_text_mode::text_mode_enabled{ static_cast<int32_t>(0x1) };
