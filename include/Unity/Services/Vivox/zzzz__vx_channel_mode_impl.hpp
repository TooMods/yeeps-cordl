#pragma once
#include "Unity/Services/Vivox/zzzz__vx_channel_mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_channel_mode::vx_channel_mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_channel_mode::vx_channel_mode() {}
constexpr ::Unity::Services::Vivox::vx_channel_mode Unity::Services::Vivox::vx_channel_mode::channel_mode_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_channel_mode Unity::Services::Vivox::vx_channel_mode::channel_mode_normal{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_channel_mode Unity::Services::Vivox::vx_channel_mode::channel_mode_presentation{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_channel_mode Unity::Services::Vivox::vx_channel_mode::channel_mode_lecture{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::vx_channel_mode Unity::Services::Vivox::vx_channel_mode::channel_mode_open{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::vx_channel_mode Unity::Services::Vivox::vx_channel_mode::channel_mode_auditorium{ static_cast<int32_t>(0x5) };
