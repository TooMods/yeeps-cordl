#pragma once
#include "Amazon/Runtime/zzzz__RequestRetryMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::RequestRetryMode::RequestRetryMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::RequestRetryMode::RequestRetryMode() {}
constexpr ::Amazon::Runtime::RequestRetryMode Amazon::Runtime::RequestRetryMode::Legacy{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::RequestRetryMode Amazon::Runtime::RequestRetryMode::Standard{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::Runtime::RequestRetryMode Amazon::Runtime::RequestRetryMode::Adaptive{ static_cast<int32_t>(0x2) };
