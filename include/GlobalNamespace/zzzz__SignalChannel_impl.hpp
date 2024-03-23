#pragma once
#include "GlobalNamespace/zzzz__SignalChannel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SignalChannel::SignalChannel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SignalChannel::SignalChannel() {}
constexpr ::GlobalNamespace::SignalChannel GlobalNamespace::SignalChannel::none{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SignalChannel GlobalNamespace::SignalChannel::bombs{ static_cast<int32_t>(0x1) };
