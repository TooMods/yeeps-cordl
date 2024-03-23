#pragma once
#include "GameAnalyticsSDK/zzzz__GAErrorSeverity_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GameAnalyticsSDK::GAErrorSeverity::GAErrorSeverity(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::GAErrorSeverity::GAErrorSeverity() {}
constexpr ::GameAnalyticsSDK::GAErrorSeverity GameAnalyticsSDK::GAErrorSeverity::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::GameAnalyticsSDK::GAErrorSeverity GameAnalyticsSDK::GAErrorSeverity::Debug{ static_cast<int32_t>(0x1) };
constexpr ::GameAnalyticsSDK::GAErrorSeverity GameAnalyticsSDK::GAErrorSeverity::Info{ static_cast<int32_t>(0x2) };
constexpr ::GameAnalyticsSDK::GAErrorSeverity GameAnalyticsSDK::GAErrorSeverity::Warning{ static_cast<int32_t>(0x3) };
constexpr ::GameAnalyticsSDK::GAErrorSeverity GameAnalyticsSDK::GAErrorSeverity::Error{ static_cast<int32_t>(0x4) };
constexpr ::GameAnalyticsSDK::GAErrorSeverity GameAnalyticsSDK::GAErrorSeverity::Critical{ static_cast<int32_t>(0x5) };
