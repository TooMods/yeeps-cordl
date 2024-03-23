#pragma once
#include "Unity/Services/Vivox/zzzz__vx_font_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_font_type::vx_font_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_font_type::vx_font_type() {}
constexpr ::Unity::Services::Vivox::vx_font_type Unity::Services::Vivox::vx_font_type::type_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_font_type Unity::Services::Vivox::vx_font_type::type_root{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_font_type Unity::Services::Vivox::vx_font_type::type_user{ static_cast<int32_t>(0x2) };
