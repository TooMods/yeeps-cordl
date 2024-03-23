#pragma once
#include "System/Net/WebSockets/zzzz__WebSocketError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::WebSocketError::WebSocketError(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocketError::WebSocketError() {}
constexpr ::System::Net::WebSockets::WebSocketError System::Net::WebSockets::WebSocketError::Success{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::WebSockets::WebSocketError System::Net::WebSockets::WebSocketError::InvalidMessageType{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::WebSockets::WebSocketError System::Net::WebSockets::WebSocketError::Faulted{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::WebSockets::WebSocketError System::Net::WebSockets::WebSocketError::NativeError{ static_cast<int32_t>(0x3) };
constexpr ::System::Net::WebSockets::WebSocketError System::Net::WebSockets::WebSocketError::NotAWebSocket{ static_cast<int32_t>(0x4) };
constexpr ::System::Net::WebSockets::WebSocketError System::Net::WebSockets::WebSocketError::UnsupportedVersion{ static_cast<int32_t>(0x5) };
constexpr ::System::Net::WebSockets::WebSocketError System::Net::WebSockets::WebSocketError::UnsupportedProtocol{ static_cast<int32_t>(0x6) };
constexpr ::System::Net::WebSockets::WebSocketError System::Net::WebSockets::WebSocketError::HeaderError{ static_cast<int32_t>(0x7) };
constexpr ::System::Net::WebSockets::WebSocketError System::Net::WebSockets::WebSocketError::ConnectionClosedPrematurely{ static_cast<int32_t>(0x8) };
constexpr ::System::Net::WebSockets::WebSocketError System::Net::WebSockets::WebSocketError::InvalidState{ static_cast<int32_t>(0x9) };
