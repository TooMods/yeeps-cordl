#pragma once
#include "GameAnalyticsSDK/zzzz__GAProgressionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GameAnalyticsSDK::GAProgressionStatus::GAProgressionStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::GAProgressionStatus::GAProgressionStatus() {}
constexpr ::GameAnalyticsSDK::GAProgressionStatus GameAnalyticsSDK::GAProgressionStatus::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::GameAnalyticsSDK::GAProgressionStatus GameAnalyticsSDK::GAProgressionStatus::Start{ static_cast<int32_t>(0x1) };
constexpr ::GameAnalyticsSDK::GAProgressionStatus GameAnalyticsSDK::GAProgressionStatus::Complete{ static_cast<int32_t>(0x2) };
constexpr ::GameAnalyticsSDK::GAProgressionStatus GameAnalyticsSDK::GAProgressionStatus::Fail{ static_cast<int32_t>(0x3) };
