#pragma once
#include "Unity/Services/Vivox/zzzz__LoginState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::LoginState::LoginState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::LoginState::LoginState() {}
constexpr ::Unity::Services::Vivox::LoginState Unity::Services::Vivox::LoginState::LoggedOut{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::LoginState Unity::Services::Vivox::LoginState::LoggedIn{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::LoginState Unity::Services::Vivox::LoginState::LoggingIn{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::LoginState Unity::Services::Vivox::LoginState::LoggingOut{ static_cast<int32_t>(0x3) };
