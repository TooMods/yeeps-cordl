#pragma once
#include "GlobalNamespace/zzzz__PrivateRoomPermissions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PrivateRoomPermissions::PrivateRoomPermissions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrivateRoomPermissions::PrivateRoomPermissions() {}
constexpr ::GlobalNamespace::PrivateRoomPermissions GlobalNamespace::PrivateRoomPermissions::closed{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PrivateRoomPermissions GlobalNamespace::PrivateRoomPermissions::openToFriends{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PrivateRoomPermissions GlobalNamespace::PrivateRoomPermissions::openToAll{ static_cast<int32_t>(0x2) };
