#pragma once
#include "Photon/Realtime/zzzz__AuthModeOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::AuthModeOption::AuthModeOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::AuthModeOption::AuthModeOption() {}
constexpr ::Photon::Realtime::AuthModeOption Photon::Realtime::AuthModeOption::Auth{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Realtime::AuthModeOption Photon::Realtime::AuthModeOption::AuthOnce{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Realtime::AuthModeOption Photon::Realtime::AuthModeOption::AuthOnceWss{ static_cast<int32_t>(0x2) };
