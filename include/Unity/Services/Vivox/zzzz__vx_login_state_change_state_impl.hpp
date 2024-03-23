#pragma once
#include "Unity/Services/Vivox/zzzz__vx_login_state_change_state_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_login_state_change_state::vx_login_state_change_state(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_login_state_change_state::vx_login_state_change_state() {}
constexpr ::Unity::Services::Vivox::vx_login_state_change_state Unity::Services::Vivox::vx_login_state_change_state::login_state_logged_out{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_login_state_change_state Unity::Services::Vivox::vx_login_state_change_state::login_state_logged_in{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_login_state_change_state Unity::Services::Vivox::vx_login_state_change_state::login_state_logging_in{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_login_state_change_state Unity::Services::Vivox::vx_login_state_change_state::login_state_logging_out{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::vx_login_state_change_state Unity::Services::Vivox::vx_login_state_change_state::login_state_resetting{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::vx_login_state_change_state Unity::Services::Vivox::vx_login_state_change_state::login_state_error{ static_cast<int32_t>(0x64) };
