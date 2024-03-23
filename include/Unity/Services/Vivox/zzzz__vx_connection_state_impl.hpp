#pragma once
#include "Unity/Services/Vivox/zzzz__vx_connection_state_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_connection_state::vx_connection_state(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_connection_state::vx_connection_state() {}
constexpr ::Unity::Services::Vivox::vx_connection_state Unity::Services::Vivox::vx_connection_state::connection_state_disconnected{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_connection_state Unity::Services::Vivox::vx_connection_state::connection_state_connected{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_connection_state Unity::Services::Vivox::vx_connection_state::connection_state_recovering{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::vx_connection_state Unity::Services::Vivox::vx_connection_state::connection_state_failed_to_recover{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::vx_connection_state Unity::Services::Vivox::vx_connection_state::connection_state_recovered{ static_cast<int32_t>(0x5) };
