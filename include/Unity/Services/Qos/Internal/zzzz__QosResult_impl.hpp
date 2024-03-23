#pragma once
#include "Unity/Services/Qos/Internal/zzzz__QosResult_def.hpp"
// Ctor Parameters [CppParam { name: "Region", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "AverageLatencyMs", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "PacketLossPercent", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Qos::Internal::QosResult::QosResult(::StringW Region, int32_t AverageLatencyMs, float_t PacketLossPercent) noexcept {
  this->Region = Region;
  this->AverageLatencyMs = AverageLatencyMs;
  this->PacketLossPercent = PacketLossPercent;
}
// Ctor Parameters []
constexpr ::Unity::Services::Qos::Internal::QosResult::QosResult() {}
