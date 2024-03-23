#pragma once
#include "GameAnalyticsSDK/zzzz__GAAdAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GameAnalyticsSDK::GAAdAction::GAAdAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::GAAdAction::GAAdAction() {}
constexpr ::GameAnalyticsSDK::GAAdAction GameAnalyticsSDK::GAAdAction::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::GameAnalyticsSDK::GAAdAction GameAnalyticsSDK::GAAdAction::Clicked{ static_cast<int32_t>(0x1) };
constexpr ::GameAnalyticsSDK::GAAdAction GameAnalyticsSDK::GAAdAction::Show{ static_cast<int32_t>(0x2) };
constexpr ::GameAnalyticsSDK::GAAdAction GameAnalyticsSDK::GAAdAction::FailedShow{ static_cast<int32_t>(0x3) };
constexpr ::GameAnalyticsSDK::GAAdAction GameAnalyticsSDK::GAAdAction::RewardReceived{ static_cast<int32_t>(0x4) };
constexpr ::GameAnalyticsSDK::GAAdAction GameAnalyticsSDK::GAAdAction::Request{ static_cast<int32_t>(0x5) };
constexpr ::GameAnalyticsSDK::GAAdAction GameAnalyticsSDK::GAAdAction::Loaded{ static_cast<int32_t>(0x6) };
