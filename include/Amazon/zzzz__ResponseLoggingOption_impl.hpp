#pragma once
#include "Amazon/zzzz__ResponseLoggingOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::ResponseLoggingOption::ResponseLoggingOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::ResponseLoggingOption::ResponseLoggingOption() {}
constexpr ::Amazon::ResponseLoggingOption Amazon::ResponseLoggingOption::Never{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::ResponseLoggingOption Amazon::ResponseLoggingOption::OnError{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::ResponseLoggingOption Amazon::ResponseLoggingOption::Always{ static_cast<int32_t>(0x2) };
