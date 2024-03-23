#pragma once
#include "Unity/Services/Vivox/zzzz__vx_session_media_state_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_session_media_state::vx_session_media_state(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_session_media_state::vx_session_media_state() {}
constexpr ::Unity::Services::Vivox::vx_session_media_state Unity::Services::Vivox::vx_session_media_state::session_media_disconnected{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_session_media_state Unity::Services::Vivox::vx_session_media_state::session_media_connected{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_session_media_state Unity::Services::Vivox::vx_session_media_state::session_media_ringing{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::vx_session_media_state Unity::Services::Vivox::vx_session_media_state::session_media_connecting{ static_cast<int32_t>(0x6) };
constexpr ::Unity::Services::Vivox::vx_session_media_state Unity::Services::Vivox::vx_session_media_state::session_media_disconnecting{ static_cast<int32_t>(0x7) };
