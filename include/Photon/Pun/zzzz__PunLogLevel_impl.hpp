#pragma once
#include "Photon/Pun/zzzz__PunLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::PunLogLevel::PunLogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::PunLogLevel::PunLogLevel() {}
constexpr ::Photon::Pun::PunLogLevel Photon::Pun::PunLogLevel::ErrorsOnly{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::PunLogLevel Photon::Pun::PunLogLevel::Informational{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::PunLogLevel Photon::Pun::PunLogLevel::Full{ static_cast<int32_t>(0x2) };
