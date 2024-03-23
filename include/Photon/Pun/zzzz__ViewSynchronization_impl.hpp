#pragma once
#include "Photon/Pun/zzzz__ViewSynchronization_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::ViewSynchronization::ViewSynchronization(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::ViewSynchronization::ViewSynchronization() {}
constexpr ::Photon::Pun::ViewSynchronization Photon::Pun::ViewSynchronization::Off{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::ViewSynchronization Photon::Pun::ViewSynchronization::ReliableDeltaCompressed{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::ViewSynchronization Photon::Pun::ViewSynchronization::Unreliable{ static_cast<int32_t>(0x2) };
constexpr ::Photon::Pun::ViewSynchronization Photon::Pun::ViewSynchronization::UnreliableOnChange{ static_cast<int32_t>(0x3) };
