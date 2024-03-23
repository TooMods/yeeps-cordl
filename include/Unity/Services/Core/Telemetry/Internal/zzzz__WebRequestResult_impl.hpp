#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__WebRequestResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Telemetry::Internal::WebRequestResult::WebRequestResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::WebRequestResult::WebRequestResult() {}
constexpr ::Unity::Services::Core::Telemetry::Internal::WebRequestResult Unity::Services::Core::Telemetry::Internal::WebRequestResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Core::Telemetry::Internal::WebRequestResult Unity::Services::Core::Telemetry::Internal::WebRequestResult::ConnectionError{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Core::Telemetry::Internal::WebRequestResult Unity::Services::Core::Telemetry::Internal::WebRequestResult::ProtocolError{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Core::Telemetry::Internal::WebRequestResult Unity::Services::Core::Telemetry::Internal::WebRequestResult::UnknownError{ static_cast<int32_t>(0x3) };
