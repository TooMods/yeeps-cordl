#pragma once
#include "Unity/Services/Vivox/zzzz__vx_session_notification_state_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_session_notification_state::vx_session_notification_state(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_session_notification_state::vx_session_notification_state() {}
constexpr ::Unity::Services::Vivox::vx_session_notification_state Unity::Services::Vivox::vx_session_notification_state::session_notification_none{ static_cast<int32_t>(0x0) };
