#pragma once
#include "Amazon/Runtime/zzzz__ErrorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::ErrorType::ErrorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::ErrorType::ErrorType() {}
constexpr ::Amazon::Runtime::ErrorType Amazon::Runtime::ErrorType::Sender{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::ErrorType Amazon::Runtime::ErrorType::Receiver{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::Runtime::ErrorType Amazon::Runtime::ErrorType::Unknown{ static_cast<int32_t>(0x2) };
