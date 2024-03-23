#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightData_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
// Ctor Parameters [CppParam { name: "mainLightIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "additionalLightsCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "maxPerObjectAdditionalLightsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleLights", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>", modifiers: "", def_value: Some("{}") }, CppParam { name: "originalIndices", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "shadeAdditionalLightsPerVertex", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "supportsMixedLighting", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "reflectionProbeBoxProjection", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "reflectionProbeBlending", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportsLightLayers", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "supportsAdditionalLights", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LightData::LightData(int32_t mainLightIndex, int32_t additionalLightsCount, int32_t maxPerObjectAdditionalLightsCount,
                                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights,
                                                                    ::Unity::Collections::NativeArray_1<int32_t> originalIndices, bool shadeAdditionalLightsPerVertex, bool supportsMixedLighting,
                                                                    bool reflectionProbeBoxProjection, bool reflectionProbeBlending, bool supportsLightLayers, bool supportsAdditionalLights) noexcept {
  this->mainLightIndex = mainLightIndex;
  this->additionalLightsCount = additionalLightsCount;
  this->maxPerObjectAdditionalLightsCount = maxPerObjectAdditionalLightsCount;
  this->visibleLights = visibleLights;
  this->originalIndices = originalIndices;
  this->shadeAdditionalLightsPerVertex = shadeAdditionalLightsPerVertex;
  this->supportsMixedLighting = supportsMixedLighting;
  this->reflectionProbeBoxProjection = reflectionProbeBoxProjection;
  this->reflectionProbeBlending = reflectionProbeBlending;
  this->supportsLightLayers = supportsLightLayers;
  this->supportsAdditionalLights = supportsAdditionalLights;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightData::LightData() {}
