#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__LightStats_def.hpp"
// Ctor Parameters [CppParam { name: "totalLights", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalNormalMapUsage", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "totalVolumetricUsage", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "blendStylesUsed", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "blendStylesWithLights", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LightStats::LightStats(int32_t totalLights, int32_t totalNormalMapUsage, int32_t totalVolumetricUsage, uint32_t blendStylesUsed,
                                                                      uint32_t blendStylesWithLights) noexcept {
  this->totalLights = totalLights;
  this->totalNormalMapUsage = totalNormalMapUsage;
  this->totalVolumetricUsage = totalVolumetricUsage;
  this->blendStylesUsed = blendStylesUsed;
  this->blendStylesWithLights = blendStylesWithLights;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightStats::LightStats() {}
