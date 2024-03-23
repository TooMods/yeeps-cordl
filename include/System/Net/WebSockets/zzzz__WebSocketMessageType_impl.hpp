#pragma once
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::WebSocketMessageType::WebSocketMessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocketMessageType::WebSocketMessageType() {}
constexpr ::System::Net::WebSockets::WebSocketMessageType System::Net::WebSockets::WebSocketMessageType::Text{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::WebSockets::WebSocketMessageType System::Net::WebSockets::WebSocketMessageType::Binary{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::WebSockets::WebSocketMessageType System::Net::WebSockets::WebSocketMessageType::Close{ static_cast<int32_t>(0x2) };
