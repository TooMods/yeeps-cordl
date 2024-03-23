#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricType::MetricType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricType::MetricType() {}
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricType Unity::Services::Core::Telemetry::Internal::MetricType::Gauge{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricType Unity::Services::Core::Telemetry::Internal::MetricType::Sum{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricType Unity::Services::Core::Telemetry::Internal::MetricType::Histogram{ static_cast<int32_t>(0x2) };
