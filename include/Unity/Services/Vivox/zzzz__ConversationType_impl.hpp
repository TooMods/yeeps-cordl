#pragma once
#include "Unity/Services/Vivox/zzzz__ConversationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::ConversationType::ConversationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::ConversationType::ConversationType() {}
constexpr ::Unity::Services::Vivox::ConversationType Unity::Services::Vivox::ConversationType::ChannelConversation{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::ConversationType Unity::Services::Vivox::ConversationType::DirectedMessageConversation{ static_cast<int32_t>(0x1) };
