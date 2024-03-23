#pragma once
#include "Amazon/Runtime/zzzz__SigningAlgorithm_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::SigningAlgorithm::SigningAlgorithm(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::SigningAlgorithm::SigningAlgorithm() {}
constexpr ::Amazon::Runtime::SigningAlgorithm Amazon::Runtime::SigningAlgorithm::HmacSHA1{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::SigningAlgorithm Amazon::Runtime::SigningAlgorithm::HmacSHA256{ static_cast<int32_t>(0x1) };
