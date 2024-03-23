#pragma once
#include "GameAnalyticsSDK/zzzz__GAAdError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GameAnalyticsSDK::GAAdError::GAAdError(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::GAAdError::GAAdError() {}
constexpr ::GameAnalyticsSDK::GAAdError GameAnalyticsSDK::GAAdError::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::GameAnalyticsSDK::GAAdError GameAnalyticsSDK::GAAdError::Unknown{ static_cast<int32_t>(0x1) };
constexpr ::GameAnalyticsSDK::GAAdError GameAnalyticsSDK::GAAdError::Offline{ static_cast<int32_t>(0x2) };
constexpr ::GameAnalyticsSDK::GAAdError GameAnalyticsSDK::GAAdError::NoFill{ static_cast<int32_t>(0x3) };
constexpr ::GameAnalyticsSDK::GAAdError GameAnalyticsSDK::GAAdError::InternalError{ static_cast<int32_t>(0x4) };
constexpr ::GameAnalyticsSDK::GAAdError GameAnalyticsSDK::GAAdError::InvalidRequest{ static_cast<int32_t>(0x5) };
constexpr ::GameAnalyticsSDK::GAAdError GameAnalyticsSDK::GAAdError::UnableToPrecache{ static_cast<int32_t>(0x6) };
