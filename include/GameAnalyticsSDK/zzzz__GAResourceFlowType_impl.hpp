#pragma once
#include "GameAnalyticsSDK/zzzz__GAResourceFlowType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GameAnalyticsSDK::GAResourceFlowType::GAResourceFlowType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::GAResourceFlowType::GAResourceFlowType() {}
constexpr ::GameAnalyticsSDK::GAResourceFlowType GameAnalyticsSDK::GAResourceFlowType::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::GameAnalyticsSDK::GAResourceFlowType GameAnalyticsSDK::GAResourceFlowType::Source{ static_cast<int32_t>(0x1) };
constexpr ::GameAnalyticsSDK::GAResourceFlowType GameAnalyticsSDK::GAResourceFlowType::Sink{ static_cast<int32_t>(0x2) };
