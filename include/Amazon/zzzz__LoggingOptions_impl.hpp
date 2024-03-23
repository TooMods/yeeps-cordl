#pragma once
#include "Amazon/zzzz__LoggingOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::LoggingOptions::LoggingOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::LoggingOptions::LoggingOptions() {}
constexpr ::Amazon::LoggingOptions Amazon::LoggingOptions::None{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::LoggingOptions Amazon::LoggingOptions::Log4Net{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::LoggingOptions Amazon::LoggingOptions::SystemDiagnostics{ static_cast<int32_t>(0x2) };
constexpr ::Amazon::LoggingOptions Amazon::LoggingOptions::Console{ static_cast<int32_t>(0x10) };
