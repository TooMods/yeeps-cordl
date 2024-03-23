#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_def.hpp"
// Ctor Parameters [CppParam { name: "gradingMode", ty: "::UnityEngine::Rendering::Universal::ColorGradingMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "lutSize", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "useFastSRGBLinearConversion", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::PostProcessingData::PostProcessingData(::UnityEngine::Rendering::Universal::ColorGradingMode gradingMode, int32_t lutSize,
                                                                                      bool useFastSRGBLinearConversion) noexcept {
  this->gradingMode = gradingMode;
  this->lutSize = lutSize;
  this->useFastSRGBLinearConversion = useFastSRGBLinearConversion;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessingData::PostProcessingData() {}
