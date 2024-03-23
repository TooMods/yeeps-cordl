#pragma once
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::PhotonSocketError::PhotonSocketError(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PhotonSocketError::PhotonSocketError() {}
constexpr ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::PhotonSocketError::Success{ static_cast<int32_t>(0x0) };
constexpr ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::PhotonSocketError::Skipped{ static_cast<int32_t>(0x1) };
constexpr ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::PhotonSocketError::NoData{ static_cast<int32_t>(0x2) };
constexpr ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::PhotonSocketError::Exception{ static_cast<int32_t>(0x3) };
constexpr ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::PhotonSocketError::Busy{ static_cast<int32_t>(0x4) };
