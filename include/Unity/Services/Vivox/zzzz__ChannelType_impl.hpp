#pragma once
#include "Unity/Services/Vivox/zzzz__ChannelType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::ChannelType::ChannelType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::ChannelType::ChannelType() {}
constexpr ::Unity::Services::Vivox::ChannelType Unity::Services::Vivox::ChannelType::NonPositional{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::ChannelType Unity::Services::Vivox::ChannelType::Positional{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::ChannelType Unity::Services::Vivox::ChannelType::Echo{ static_cast<int32_t>(0x2) };
