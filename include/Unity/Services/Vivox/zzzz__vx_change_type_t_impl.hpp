#pragma once
#include "Unity/Services/Vivox/zzzz__vx_change_type_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_change_type_t::vx_change_type_t(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_change_type_t::vx_change_type_t() {}
constexpr ::Unity::Services::Vivox::vx_change_type_t Unity::Services::Vivox::vx_change_type_t::change_type_set{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_change_type_t Unity::Services::Vivox::vx_change_type_t::change_type_delete{ static_cast<int32_t>(0x2) };
