#pragma once
#include "Unity/Services/Vivox/zzzz__vx_device_type_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_device_type_t::vx_device_type_t(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_device_type_t::vx_device_type_t() {}
constexpr ::Unity::Services::Vivox::vx_device_type_t Unity::Services::Vivox::vx_device_type_t::vx_device_type_specific_device{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_device_type_t Unity::Services::Vivox::vx_device_type_t::vx_device_type_default_system{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_device_type_t Unity::Services::Vivox::vx_device_type_t::vx_device_type_null{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_device_type_t Unity::Services::Vivox::vx_device_type_t::vx_device_type_default_communication{ static_cast<int32_t>(0x3) };
