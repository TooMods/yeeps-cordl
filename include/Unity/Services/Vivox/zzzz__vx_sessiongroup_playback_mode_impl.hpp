#pragma once
#include "Unity/Services/Vivox/zzzz__vx_sessiongroup_playback_mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_sessiongroup_playback_mode::vx_sessiongroup_playback_mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_sessiongroup_playback_mode::vx_sessiongroup_playback_mode() {}
constexpr ::Unity::Services::Vivox::vx_sessiongroup_playback_mode Unity::Services::Vivox::vx_sessiongroup_playback_mode::VX_SESSIONGROUP_PLAYBACK_MODE_NORMAL{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_sessiongroup_playback_mode Unity::Services::Vivox::vx_sessiongroup_playback_mode::VX_SESSIONGROUP_PLAYBACK_MODE_VOX{ static_cast<int32_t>(0x1) };
