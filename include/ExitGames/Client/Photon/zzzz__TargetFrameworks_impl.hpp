#pragma once
#include "ExitGames/Client/Photon/zzzz__TargetFrameworks_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::TargetFrameworks::TargetFrameworks(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::TargetFrameworks::TargetFrameworks() {}
constexpr ::ExitGames::Client::Photon::TargetFrameworks ExitGames::Client::Photon::TargetFrameworks::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::ExitGames::Client::Photon::TargetFrameworks ExitGames::Client::Photon::TargetFrameworks::Net35{ static_cast<int32_t>(0x1) };
constexpr ::ExitGames::Client::Photon::TargetFrameworks ExitGames::Client::Photon::TargetFrameworks::NetStandard20{ static_cast<int32_t>(0x2) };
constexpr ::ExitGames::Client::Photon::TargetFrameworks ExitGames::Client::Photon::TargetFrameworks::Metro{ static_cast<int32_t>(0x3) };
