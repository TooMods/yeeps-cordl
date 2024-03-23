#pragma once
#include "Photon/Realtime/zzzz__RoomOptionBit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::RoomOptionBit::RoomOptionBit(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::RoomOptionBit::RoomOptionBit() {}
constexpr ::Photon::Realtime::RoomOptionBit Photon::Realtime::RoomOptionBit::CheckUserOnJoin{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Realtime::RoomOptionBit Photon::Realtime::RoomOptionBit::DeleteCacheOnLeave{ static_cast<int32_t>(0x2) };
constexpr ::Photon::Realtime::RoomOptionBit Photon::Realtime::RoomOptionBit::SuppressRoomEvents{ static_cast<int32_t>(0x4) };
constexpr ::Photon::Realtime::RoomOptionBit Photon::Realtime::RoomOptionBit::PublishUserId{ static_cast<int32_t>(0x8) };
constexpr ::Photon::Realtime::RoomOptionBit Photon::Realtime::RoomOptionBit::DeleteNullProps{ static_cast<int32_t>(0x10) };
constexpr ::Photon::Realtime::RoomOptionBit Photon::Realtime::RoomOptionBit::BroadcastPropsChangeToAll{ static_cast<int32_t>(0x20) };
constexpr ::Photon::Realtime::RoomOptionBit Photon::Realtime::RoomOptionBit::SuppressPlayerInfo{ static_cast<int32_t>(0x40) };
