#pragma once
#include "Amazon/Runtime/Internal/Auth/zzzz__ClientProtocol_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::Auth::ClientProtocol::ClientProtocol(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Auth::ClientProtocol::ClientProtocol() {}
constexpr ::Amazon::Runtime::Internal::Auth::ClientProtocol Amazon::Runtime::Internal::Auth::ClientProtocol::QueryStringProtocol{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::Internal::Auth::ClientProtocol Amazon::Runtime::Internal::Auth::ClientProtocol::RestProtocol{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::Runtime::Internal::Auth::ClientProtocol Amazon::Runtime::Internal::Auth::ClientProtocol::Unknown{ static_cast<int32_t>(0x2) };
