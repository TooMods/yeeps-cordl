#pragma once
#include "Photon/Realtime/zzzz__EventCaching_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::EventCaching::EventCaching(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::EventCaching::EventCaching() {}
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::DoNotCache{ static_cast<uint8_t>(0x0u) };
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::MergeCache{ static_cast<uint8_t>(0x1u) };
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::ReplaceCache{ static_cast<uint8_t>(0x2u) };
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::RemoveCache{ static_cast<uint8_t>(0x3u) };
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::AddToRoomCache{ static_cast<uint8_t>(0x4u) };
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::AddToRoomCacheGlobal{ static_cast<uint8_t>(0x5u) };
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::RemoveFromRoomCache{ static_cast<uint8_t>(0x6u) };
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::RemoveFromRoomCacheForActorsLeft{ static_cast<uint8_t>(0x7u) };
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::SliceIncreaseIndex{ static_cast<uint8_t>(0xau) };
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::SliceSetIndex{ static_cast<uint8_t>(0xbu) };
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::SlicePurgeIndex{ static_cast<uint8_t>(0xcu) };
constexpr ::Photon::Realtime::EventCaching Photon::Realtime::EventCaching::SlicePurgeUpToIndex{ static_cast<uint8_t>(0xdu) };
