#pragma once
#include "Unity/Services/Vivox/zzzz__vx_message_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_message_type::vx_message_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_message_type::vx_message_type() {}
constexpr ::Unity::Services::Vivox::vx_message_type Unity::Services::Vivox::vx_message_type::msg_none{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_message_type Unity::Services::Vivox::vx_message_type::msg_request{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_message_type Unity::Services::Vivox::vx_message_type::msg_response{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_message_type Unity::Services::Vivox::vx_message_type::msg_event{ static_cast<int32_t>(0x3) };
