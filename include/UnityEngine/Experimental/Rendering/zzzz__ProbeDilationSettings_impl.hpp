#pragma once
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeDilationSettings_def.hpp"
// Ctor Parameters [CppParam { name: "enableDilation", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "dilationDistance", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "dilationValidityThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dilationIterations", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "squaredDistWeighting", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::ProbeDilationSettings::ProbeDilationSettings(bool enableDilation, float_t dilationDistance, float_t dilationValidityThreshold,
                                                                                               int32_t dilationIterations, bool squaredDistWeighting) noexcept {
  this->enableDilation = enableDilation;
  this->dilationDistance = dilationDistance;
  this->dilationValidityThreshold = dilationValidityThreshold;
  this->dilationIterations = dilationIterations;
  this->squaredDistWeighting = squaredDistWeighting;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeDilationSettings::ProbeDilationSettings() {}
