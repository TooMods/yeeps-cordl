#pragma once
#include "Unity/Services/Vivox/zzzz__vx_session_text_state_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_session_text_state::vx_session_text_state(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_session_text_state::vx_session_text_state() {}
constexpr ::Unity::Services::Vivox::vx_session_text_state Unity::Services::Vivox::vx_session_text_state::session_text_disconnected{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_session_text_state Unity::Services::Vivox::vx_session_text_state::session_text_connected{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_session_text_state Unity::Services::Vivox::vx_session_text_state::session_text_connecting{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_session_text_state Unity::Services::Vivox::vx_session_text_state::session_text_disconnecting{ static_cast<int32_t>(0x3) };
