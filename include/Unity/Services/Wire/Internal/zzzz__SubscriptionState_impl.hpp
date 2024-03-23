#pragma once
#include "Unity/Services/Wire/Internal/zzzz__SubscriptionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Wire::Internal::SubscriptionState::SubscriptionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Wire::Internal::SubscriptionState::SubscriptionState() {}
constexpr ::Unity::Services::Wire::Internal::SubscriptionState Unity::Services::Wire::Internal::SubscriptionState::Unsubscribed{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Wire::Internal::SubscriptionState Unity::Services::Wire::Internal::SubscriptionState::Synced{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Wire::Internal::SubscriptionState Unity::Services::Wire::Internal::SubscriptionState::Unsynced{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Wire::Internal::SubscriptionState Unity::Services::Wire::Internal::SubscriptionState::Error{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Wire::Internal::SubscriptionState Unity::Services::Wire::Internal::SubscriptionState::Subscribing{ static_cast<int32_t>(0x4) };
