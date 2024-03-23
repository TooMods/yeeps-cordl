#pragma once
#include "Unity/Services/Vivox/zzzz__vx_bluetooth_profile_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_bluetooth_profile::vx_bluetooth_profile(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_bluetooth_profile::vx_bluetooth_profile() {}
constexpr ::Unity::Services::Vivox::vx_bluetooth_profile Unity::Services::Vivox::vx_bluetooth_profile::vx_bluetooth_profile_a2dp{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_bluetooth_profile Unity::Services::Vivox::vx_bluetooth_profile::vx_bluetooth_profile_hfp{ static_cast<int32_t>(0x1) };
