#pragma once
#include "Photon/Realtime/zzzz__ServerConnection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::ServerConnection::ServerConnection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ServerConnection::ServerConnection() {}
constexpr ::Photon::Realtime::ServerConnection Photon::Realtime::ServerConnection::MasterServer{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Realtime::ServerConnection Photon::Realtime::ServerConnection::GameServer{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Realtime::ServerConnection Photon::Realtime::ServerConnection::NameServer{ static_cast<int32_t>(0x2) };
