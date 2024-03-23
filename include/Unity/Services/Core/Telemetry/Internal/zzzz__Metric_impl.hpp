#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricType_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__Metric_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ITelemetryEvent_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricType_def.hpp"
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent"
constexpr Unity::Services::Core::Telemetry::Internal::Metric::operator ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*() {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent"
constexpr ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent* Unity::Services::Core::Telemetry::Internal::Metric::i___Unity__Services__Core__Telemetry__Internal__ITelemetryEvent() {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Value", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Type", ty: "::Unity::Services::Core::Telemetry::Internal::MetricType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Tags", ty:
// "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Unity::Services::Core::Telemetry::Internal::Metric::Metric(::StringW Name, double_t Value, ::Unity::Services::Core::Telemetry::Internal::MetricType Type,
                                                                       ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Tags) noexcept {
  this->Name = Name;
  this->Value = Value;
  this->Type = Type;
  this->Tags = Tags;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::Metric::Metric() {}
