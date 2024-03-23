#pragma once
#include "GlobalNamespace/zzzz__FatalErrorTestType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FatalErrorTestType::FatalErrorTestType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FatalErrorTestType::FatalErrorTestType() {}
constexpr ::GlobalNamespace::FatalErrorTestType GlobalNamespace::FatalErrorTestType::none{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::FatalErrorTestType GlobalNamespace::FatalErrorTestType::noInternet{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::FatalErrorTestType GlobalNamespace::FatalErrorTestType::failedToFetchOculusAccount{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::FatalErrorTestType GlobalNamespace::FatalErrorTestType::failedToFetchGameAccount{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::FatalErrorTestType GlobalNamespace::FatalErrorTestType::failedToConnectToPhoton{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::FatalErrorTestType GlobalNamespace::FatalErrorTestType::failedToLoadGameRoom{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::FatalErrorTestType GlobalNamespace::FatalErrorTestType::failedToTransitionGameRooms{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::FatalErrorTestType GlobalNamespace::FatalErrorTestType::timeout{ static_cast<int32_t>(0x7) };
