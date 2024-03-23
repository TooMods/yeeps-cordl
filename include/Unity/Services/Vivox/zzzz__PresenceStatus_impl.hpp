#pragma once
#include "Unity/Services/Vivox/zzzz__PresenceStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::PresenceStatus::PresenceStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::PresenceStatus::PresenceStatus() {}
constexpr ::Unity::Services::Vivox::PresenceStatus Unity::Services::Vivox::PresenceStatus::Available{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::PresenceStatus Unity::Services::Vivox::PresenceStatus::DoNotDisturb{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::PresenceStatus Unity::Services::Vivox::PresenceStatus::Away{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Services::Vivox::PresenceStatus Unity::Services::Vivox::PresenceStatus::InACall{ static_cast<int32_t>(0x6) };
constexpr ::Unity::Services::Vivox::PresenceStatus Unity::Services::Vivox::PresenceStatus::Unavailable{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::PresenceStatus Unity::Services::Vivox::PresenceStatus::Chat{ static_cast<int32_t>(0xa) };
constexpr ::Unity::Services::Vivox::PresenceStatus Unity::Services::Vivox::PresenceStatus::ExtendedAway{ static_cast<int32_t>(0xb) };
