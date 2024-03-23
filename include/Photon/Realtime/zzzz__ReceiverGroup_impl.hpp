#pragma once
#include "Photon/Realtime/zzzz__ReceiverGroup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::ReceiverGroup::ReceiverGroup(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ReceiverGroup::ReceiverGroup() {}
constexpr ::Photon::Realtime::ReceiverGroup Photon::Realtime::ReceiverGroup::Others{ static_cast<uint8_t>(0x0u) };
constexpr ::Photon::Realtime::ReceiverGroup Photon::Realtime::ReceiverGroup::All{ static_cast<uint8_t>(0x1u) };
constexpr ::Photon::Realtime::ReceiverGroup Photon::Realtime::ReceiverGroup::MasterClient{ static_cast<uint8_t>(0x2u) };
