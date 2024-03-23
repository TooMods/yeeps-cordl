#pragma once
#include "Unity/Services/Vivox/zzzz__vx_conversation_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_conversation_type::vx_conversation_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_conversation_type::vx_conversation_type() {}
constexpr ::Unity::Services::Vivox::vx_conversation_type Unity::Services::Vivox::vx_conversation_type::vx_conversation_channel{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_conversation_type Unity::Services::Vivox::vx_conversation_type::vx_conversation_direct{ static_cast<int32_t>(0x1) };
