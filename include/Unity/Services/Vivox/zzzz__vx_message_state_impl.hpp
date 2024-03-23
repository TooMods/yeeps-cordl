#pragma once
#include "Unity/Services/Vivox/zzzz__vx_message_state_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_message_state::vx_message_state(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_message_state::vx_message_state() {}
constexpr ::Unity::Services::Vivox::vx_message_state Unity::Services::Vivox::vx_message_state::message_none{ static_cast<int32_t>(0x0) };
