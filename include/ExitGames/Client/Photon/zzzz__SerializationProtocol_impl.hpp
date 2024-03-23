#pragma once
#include "ExitGames/Client/Photon/zzzz__SerializationProtocol_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::SerializationProtocol::SerializationProtocol(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SerializationProtocol::SerializationProtocol() {}
constexpr ::ExitGames::Client::Photon::SerializationProtocol ExitGames::Client::Photon::SerializationProtocol::GpBinaryV16{ static_cast<int32_t>(0x0) };
constexpr ::ExitGames::Client::Photon::SerializationProtocol ExitGames::Client::Photon::SerializationProtocol::GpBinaryV18{ static_cast<int32_t>(0x1) };
