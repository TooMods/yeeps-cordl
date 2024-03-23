#pragma once
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamHeaderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType::EventStreamHeaderType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType::EventStreamHeaderType() {}
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType Amazon::Runtime::EventStreams::EventStreamHeaderType::BoolTrue{ static_cast<uint8_t>(0x0u) };
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType Amazon::Runtime::EventStreams::EventStreamHeaderType::BoolFalse{ static_cast<uint8_t>(0x1u) };
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType Amazon::Runtime::EventStreams::EventStreamHeaderType::Byte{ static_cast<uint8_t>(0x2u) };
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType Amazon::Runtime::EventStreams::EventStreamHeaderType::Int16{ static_cast<uint8_t>(0x3u) };
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType Amazon::Runtime::EventStreams::EventStreamHeaderType::Int32{ static_cast<uint8_t>(0x4u) };
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType Amazon::Runtime::EventStreams::EventStreamHeaderType::Int64{ static_cast<uint8_t>(0x5u) };
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType Amazon::Runtime::EventStreams::EventStreamHeaderType::ByteBuf{ static_cast<uint8_t>(0x6u) };
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType Amazon::Runtime::EventStreams::EventStreamHeaderType::String{ static_cast<uint8_t>(0x7u) };
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType Amazon::Runtime::EventStreams::EventStreamHeaderType::Timestamp{ static_cast<uint8_t>(0x8u) };
constexpr ::Amazon::Runtime::EventStreams::EventStreamHeaderType Amazon::Runtime::EventStreams::EventStreamHeaderType::UUID{ static_cast<uint8_t>(0x9u) };
