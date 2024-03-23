#pragma once
#include "ExitGames/Client/Photon/StructWrapping/zzzz__Pooling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling::Pooling(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling::Pooling() {}
constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling ExitGames::Client::Photon::StructWrapping::Pooling::Disconnected{ static_cast<int32_t>(0x0) };
constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling ExitGames::Client::Photon::StructWrapping::Pooling::Connected{ static_cast<int32_t>(0x1) };
constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling ExitGames::Client::Photon::StructWrapping::Pooling::ReleaseOnUnwrap{ static_cast<int32_t>(0x2) };
constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling ExitGames::Client::Photon::StructWrapping::Pooling::Readonly{ static_cast<int32_t>(0x4) };
constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling ExitGames::Client::Photon::StructWrapping::Pooling::CheckedOut{ static_cast<int32_t>(0x8) };
