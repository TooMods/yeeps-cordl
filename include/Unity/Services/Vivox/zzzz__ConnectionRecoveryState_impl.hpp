#pragma once
#include "Unity/Services/Vivox/zzzz__ConnectionRecoveryState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::ConnectionRecoveryState::ConnectionRecoveryState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::ConnectionRecoveryState::ConnectionRecoveryState() {}
constexpr ::Unity::Services::Vivox::ConnectionRecoveryState Unity::Services::Vivox::ConnectionRecoveryState::Disconnected{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::ConnectionRecoveryState Unity::Services::Vivox::ConnectionRecoveryState::Connected{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::ConnectionRecoveryState Unity::Services::Vivox::ConnectionRecoveryState::Recovering{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Services::Vivox::ConnectionRecoveryState Unity::Services::Vivox::ConnectionRecoveryState::FailedToRecover{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Services::Vivox::ConnectionRecoveryState Unity::Services::Vivox::ConnectionRecoveryState::Recovered{ static_cast<int32_t>(0x5) };
