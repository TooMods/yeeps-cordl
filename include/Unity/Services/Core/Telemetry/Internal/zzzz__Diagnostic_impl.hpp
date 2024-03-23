#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__Diagnostic_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ITelemetryEvent_def.hpp"
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent"
constexpr Unity::Services::Core::Telemetry::Internal::Diagnostic::operator ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*() {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent"
constexpr ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent* Unity::Services::Core::Telemetry::Internal::Diagnostic::i___Unity__Services__Core__Telemetry__Internal__ITelemetryEvent() {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Content", ty: "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Unity::Services::Core::Telemetry::Internal::Diagnostic::Diagnostic(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Content) noexcept {
  this->Content = Content;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::Diagnostic::Diagnostic() {}
