#pragma once
#include "Unity/Services/Vivox/zzzz__vx_connector_mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_connector_mode::vx_connector_mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_connector_mode::vx_connector_mode() {}
constexpr ::Unity::Services::Vivox::vx_connector_mode Unity::Services::Vivox::vx_connector_mode::connector_mode_normal{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_connector_mode Unity::Services::Vivox::vx_connector_mode::connector_mode_legacy{ static_cast<int32_t>(0x1) };
