#pragma once
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::WebSocketState::WebSocketState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocketState::WebSocketState() {}
constexpr ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::WebSocketState::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::WebSocketState::Connecting{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::WebSocketState::Open{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::WebSocketState::CloseSent{ static_cast<int32_t>(0x3) };
constexpr ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::WebSocketState::CloseReceived{ static_cast<int32_t>(0x4) };
constexpr ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::WebSocketState::Closed{ static_cast<int32_t>(0x5) };
constexpr ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::WebSocketState::Aborted{ static_cast<int32_t>(0x6) };
