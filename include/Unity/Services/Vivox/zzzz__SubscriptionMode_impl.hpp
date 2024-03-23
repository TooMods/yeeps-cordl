#pragma once
#include "Unity/Services/Vivox/zzzz__SubscriptionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::SubscriptionMode::SubscriptionMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::SubscriptionMode::SubscriptionMode() {}
constexpr ::Unity::Services::Vivox::SubscriptionMode Unity::Services::Vivox::SubscriptionMode::Accept{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::SubscriptionMode Unity::Services::Vivox::SubscriptionMode::Block{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::SubscriptionMode Unity::Services::Vivox::SubscriptionMode::Defer{ static_cast<int32_t>(0x4) };
