#pragma once
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::WebSocketCloseStatus::WebSocketCloseStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocketCloseStatus::WebSocketCloseStatus() {}
constexpr ::System::Net::WebSockets::WebSocketCloseStatus System::Net::WebSockets::WebSocketCloseStatus::NormalClosure{ static_cast<int32_t>(0x3e8) };
constexpr ::System::Net::WebSockets::WebSocketCloseStatus System::Net::WebSockets::WebSocketCloseStatus::EndpointUnavailable{ static_cast<int32_t>(0x3e9) };
constexpr ::System::Net::WebSockets::WebSocketCloseStatus System::Net::WebSockets::WebSocketCloseStatus::ProtocolError{ static_cast<int32_t>(0x3ea) };
constexpr ::System::Net::WebSockets::WebSocketCloseStatus System::Net::WebSockets::WebSocketCloseStatus::InvalidMessageType{ static_cast<int32_t>(0x3eb) };
constexpr ::System::Net::WebSockets::WebSocketCloseStatus System::Net::WebSockets::WebSocketCloseStatus::Empty{ static_cast<int32_t>(0x3ed) };
constexpr ::System::Net::WebSockets::WebSocketCloseStatus System::Net::WebSockets::WebSocketCloseStatus::InvalidPayloadData{ static_cast<int32_t>(0x3ef) };
constexpr ::System::Net::WebSockets::WebSocketCloseStatus System::Net::WebSockets::WebSocketCloseStatus::PolicyViolation{ static_cast<int32_t>(0x3f0) };
constexpr ::System::Net::WebSockets::WebSocketCloseStatus System::Net::WebSockets::WebSocketCloseStatus::MessageTooBig{ static_cast<int32_t>(0x3f1) };
constexpr ::System::Net::WebSockets::WebSocketCloseStatus System::Net::WebSockets::WebSocketCloseStatus::MandatoryExtension{ static_cast<int32_t>(0x3f2) };
constexpr ::System::Net::WebSockets::WebSocketCloseStatus System::Net::WebSockets::WebSocketCloseStatus::InternalServerError{ static_cast<int32_t>(0x3f3) };
