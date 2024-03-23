#pragma once
#include "ExitGames/Client/Photon/zzzz__DeliveryMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::DeliveryMode::DeliveryMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::DeliveryMode::DeliveryMode() {}
constexpr ::ExitGames::Client::Photon::DeliveryMode ExitGames::Client::Photon::DeliveryMode::Unreliable{ static_cast<int32_t>(0x0) };
constexpr ::ExitGames::Client::Photon::DeliveryMode ExitGames::Client::Photon::DeliveryMode::Reliable{ static_cast<int32_t>(0x1) };
constexpr ::ExitGames::Client::Photon::DeliveryMode ExitGames::Client::Photon::DeliveryMode::UnreliableUnsequenced{ static_cast<int32_t>(0x2) };
constexpr ::ExitGames::Client::Photon::DeliveryMode ExitGames::Client::Photon::DeliveryMode::ReliableUnsequenced{ static_cast<int32_t>(0x3) };
