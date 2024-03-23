#pragma once
#include "GameAnalyticsSDK/zzzz__GAAdType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GameAnalyticsSDK::GAAdType::GAAdType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::GAAdType::GAAdType() {}
constexpr ::GameAnalyticsSDK::GAAdType GameAnalyticsSDK::GAAdType::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::GameAnalyticsSDK::GAAdType GameAnalyticsSDK::GAAdType::Video{ static_cast<int32_t>(0x1) };
constexpr ::GameAnalyticsSDK::GAAdType GameAnalyticsSDK::GAAdType::RewardedVideo{ static_cast<int32_t>(0x2) };
constexpr ::GameAnalyticsSDK::GAAdType GameAnalyticsSDK::GAAdType::Playable{ static_cast<int32_t>(0x3) };
constexpr ::GameAnalyticsSDK::GAAdType GameAnalyticsSDK::GAAdType::Interstitial{ static_cast<int32_t>(0x4) };
constexpr ::GameAnalyticsSDK::GAAdType GameAnalyticsSDK::GAAdType::OfferWall{ static_cast<int32_t>(0x5) };
constexpr ::GameAnalyticsSDK::GAAdType GameAnalyticsSDK::GAAdType::Banner{ static_cast<int32_t>(0x6) };
