#pragma once
#include "Unity/Services/Vivox/zzzz__vx_channel_type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_channel_type::vx_channel_type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_channel_type::vx_channel_type() {}
constexpr ::Unity::Services::Vivox::vx_channel_type Unity::Services::Vivox::vx_channel_type::channel_type_normal{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_channel_type Unity::Services::Vivox::vx_channel_type::channel_type_positional{ static_cast<int32_t>(0x2) };
