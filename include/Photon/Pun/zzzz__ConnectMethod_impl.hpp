#pragma once
#include "Photon/Pun/zzzz__ConnectMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::ConnectMethod::ConnectMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::ConnectMethod::ConnectMethod() {}
constexpr ::Photon::Pun::ConnectMethod Photon::Pun::ConnectMethod::NotCalled{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::ConnectMethod Photon::Pun::ConnectMethod::ConnectToMaster{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::ConnectMethod Photon::Pun::ConnectMethod::ConnectToRegion{ static_cast<int32_t>(0x2) };
constexpr ::Photon::Pun::ConnectMethod Photon::Pun::ConnectMethod::ConnectToBest{ static_cast<int32_t>(0x3) };
