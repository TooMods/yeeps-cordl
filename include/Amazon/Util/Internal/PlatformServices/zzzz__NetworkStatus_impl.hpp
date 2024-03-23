#pragma once
#include "Amazon/Util/Internal/PlatformServices/zzzz__NetworkStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Util::Internal::PlatformServices::NetworkStatus::NetworkStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::PlatformServices::NetworkStatus::NetworkStatus() {}
constexpr ::Amazon::Util::Internal::PlatformServices::NetworkStatus Amazon::Util::Internal::PlatformServices::NetworkStatus::NotReachable{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Util::Internal::PlatformServices::NetworkStatus Amazon::Util::Internal::PlatformServices::NetworkStatus::ReachableViaCarrierDataNetwork{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::Util::Internal::PlatformServices::NetworkStatus Amazon::Util::Internal::PlatformServices::NetworkStatus::ReachableViaWiFiNetwork{ static_cast<int32_t>(0x2) };
