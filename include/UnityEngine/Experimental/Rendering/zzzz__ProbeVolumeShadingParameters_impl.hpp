#pragma once
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeShadingParameters_def.hpp"
// Ctor Parameters [CppParam { name: "normalBias", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewBias", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "scaleBiasByMinDistanceBetweenProbes", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "samplingNoise", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters::ProbeVolumeShadingParameters(float_t normalBias, float_t viewBias, bool scaleBiasByMinDistanceBetweenProbes,
                                                                                                             float_t samplingNoise) noexcept {
  this->normalBias = normalBias;
  this->viewBias = viewBias;
  this->scaleBiasByMinDistanceBetweenProbes = scaleBiasByMinDistanceBetweenProbes;
  this->samplingNoise = samplingNoise;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters::ProbeVolumeShadingParameters() {}
