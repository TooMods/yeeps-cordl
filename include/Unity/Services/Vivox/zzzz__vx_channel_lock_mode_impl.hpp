#pragma once
#include "Unity/Services/Vivox/zzzz__vx_channel_lock_mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_channel_lock_mode::vx_channel_lock_mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_channel_lock_mode::vx_channel_lock_mode() {}
constexpr ::Unity::Services::Vivox::vx_channel_lock_mode Unity::Services::Vivox::vx_channel_lock_mode::channel_unlock{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_channel_lock_mode Unity::Services::Vivox::vx_channel_lock_mode::channel_lock{ static_cast<int32_t>(0x1) };
