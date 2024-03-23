#pragma once
#include "Amazon/zzzz__LogMetricsFormatOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::LogMetricsFormatOption::LogMetricsFormatOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::LogMetricsFormatOption::LogMetricsFormatOption() {}
constexpr ::Amazon::LogMetricsFormatOption Amazon::LogMetricsFormatOption::Standard{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::LogMetricsFormatOption Amazon::LogMetricsFormatOption::JSON{ static_cast<int32_t>(0x1) };
