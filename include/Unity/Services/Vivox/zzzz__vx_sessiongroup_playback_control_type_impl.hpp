#pragma once
#include "Unity/Services/Vivox/zzzz__vx_sessiongroup_playback_control_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_sessiongroup_playback_control_type::vx_sessiongroup_playback_control_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_sessiongroup_playback_control_type::vx_sessiongroup_playback_control_type() {}
constexpr ::Unity::Services::Vivox::vx_sessiongroup_playback_control_type Unity::Services::Vivox::vx_sessiongroup_playback_control_type::VX_SESSIONGROUP_PLAYBACK_CONTROL_STOP{ static_cast<int32_t>(
    0x0) };
constexpr ::Unity::Services::Vivox::vx_sessiongroup_playback_control_type Unity::Services::Vivox::vx_sessiongroup_playback_control_type::VX_SESSIONGROUP_PLAYBACK_CONTROL_START{ static_cast<int32_t>(
    0x1) };
constexpr ::Unity::Services::Vivox::vx_sessiongroup_playback_control_type Unity::Services::Vivox::vx_sessiongroup_playback_control_type::VX_SESSIONGROUP_PLAYBACK_CONTROL_PAUSE{ static_cast<int32_t>(
    0x3) };
constexpr ::Unity::Services::Vivox::vx_sessiongroup_playback_control_type Unity::Services::Vivox::vx_sessiongroup_playback_control_type::VX_SESSIONGROUP_PLAYBACK_CONTROL_UNPAUSE{ static_cast<int32_t>(
    0x4) };
