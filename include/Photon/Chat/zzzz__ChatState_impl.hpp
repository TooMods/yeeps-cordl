#pragma once
#include "Photon/Chat/zzzz__ChatState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Chat::ChatState::ChatState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Chat::ChatState::ChatState() {}
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::Uninitialized{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::ConnectingToNameServer{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::ConnectedToNameServer{ static_cast<int32_t>(0x2) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::Authenticating{ static_cast<int32_t>(0x3) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::Authenticated{ static_cast<int32_t>(0x4) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::DisconnectingFromNameServer{ static_cast<int32_t>(0x5) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::ConnectingToFrontEnd{ static_cast<int32_t>(0x6) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::ConnectedToFrontEnd{ static_cast<int32_t>(0x7) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::DisconnectingFromFrontEnd{ static_cast<int32_t>(0x8) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::QueuedComingFromFrontEnd{ static_cast<int32_t>(0x9) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::Disconnecting{ static_cast<int32_t>(0xa) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::Disconnected{ static_cast<int32_t>(0xb) };
constexpr ::Photon::Chat::ChatState Photon::Chat::ChatState::ConnectWithFallbackProtocol{ static_cast<int32_t>(0xc) };
