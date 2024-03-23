#pragma once
#include "ExitGames/Client/Photon/zzzz__EgMessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::EgMessageType::EgMessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::EgMessageType::EgMessageType() {}
constexpr ::ExitGames::Client::Photon::EgMessageType ExitGames::Client::Photon::EgMessageType::Init{ static_cast<uint8_t>(0x0u) };
constexpr ::ExitGames::Client::Photon::EgMessageType ExitGames::Client::Photon::EgMessageType::InitResponse{ static_cast<uint8_t>(0x1u) };
constexpr ::ExitGames::Client::Photon::EgMessageType ExitGames::Client::Photon::EgMessageType::Operation{ static_cast<uint8_t>(0x2u) };
constexpr ::ExitGames::Client::Photon::EgMessageType ExitGames::Client::Photon::EgMessageType::OperationResponse{ static_cast<uint8_t>(0x3u) };
constexpr ::ExitGames::Client::Photon::EgMessageType ExitGames::Client::Photon::EgMessageType::Event{ static_cast<uint8_t>(0x4u) };
constexpr ::ExitGames::Client::Photon::EgMessageType ExitGames::Client::Photon::EgMessageType::DisconnectReason{ static_cast<uint8_t>(0x5u) };
constexpr ::ExitGames::Client::Photon::EgMessageType ExitGames::Client::Photon::EgMessageType::InternalOperationRequest{ static_cast<uint8_t>(0x6u) };
constexpr ::ExitGames::Client::Photon::EgMessageType ExitGames::Client::Photon::EgMessageType::InternalOperationResponse{ static_cast<uint8_t>(0x7u) };
constexpr ::ExitGames::Client::Photon::EgMessageType ExitGames::Client::Photon::EgMessageType::Message{ static_cast<uint8_t>(0x8u) };
constexpr ::ExitGames::Client::Photon::EgMessageType ExitGames::Client::Photon::EgMessageType::RawMessage{ static_cast<uint8_t>(0x9u) };
