#pragma once
#include "Unity/Services/Vivox/zzzz__ConnectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::ConnectionState::ConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::ConnectionState::ConnectionState() {}
constexpr ::Unity::Services::Vivox::ConnectionState Unity::Services::Vivox::ConnectionState::Disconnected{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::ConnectionState Unity::Services::Vivox::ConnectionState::Connecting{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::ConnectionState Unity::Services::Vivox::ConnectionState::Connected{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::ConnectionState Unity::Services::Vivox::ConnectionState::Disconnecting{ static_cast<int32_t>(0x3) };
