#pragma once
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "supportsMainLightShadows", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "requiresScreenSpaceShadowResolve", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "mainLightShadowmapWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mainLightShadowmapHeight", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "mainLightShadowCascadesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mainLightShadowCascadesSplit", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "mainLightShadowCascadeBorder", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "supportsAdditionalLightShadows", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "additionalLightsShadowmapWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "additionalLightsShadowmapHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportsSoftShadows", ty: "bool", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "shadowmapDepthBufferBits", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bias", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::Vector4>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "resolution", ty:
// "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isKeywordAdditionalLightShadowsEnabled", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "isKeywordSoftShadowsEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShadowData::ShadowData(bool supportsMainLightShadows, bool requiresScreenSpaceShadowResolve, int32_t mainLightShadowmapWidth,
                                                                      int32_t mainLightShadowmapHeight, int32_t mainLightShadowCascadesCount, ::UnityEngine::Vector3 mainLightShadowCascadesSplit,
                                                                      float_t mainLightShadowCascadeBorder, bool supportsAdditionalLightShadows, int32_t additionalLightsShadowmapWidth,
                                                                      int32_t additionalLightsShadowmapHeight, bool supportsSoftShadows, int32_t shadowmapDepthBufferBits,
                                                                      ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* bias, ::System::Collections::Generic::List_1<int32_t>* resolution,
                                                                      bool isKeywordAdditionalLightShadowsEnabled, bool isKeywordSoftShadowsEnabled) noexcept {
  this->supportsMainLightShadows = supportsMainLightShadows;
  this->requiresScreenSpaceShadowResolve = requiresScreenSpaceShadowResolve;
  this->mainLightShadowmapWidth = mainLightShadowmapWidth;
  this->mainLightShadowmapHeight = mainLightShadowmapHeight;
  this->mainLightShadowCascadesCount = mainLightShadowCascadesCount;
  this->mainLightShadowCascadesSplit = mainLightShadowCascadesSplit;
  this->mainLightShadowCascadeBorder = mainLightShadowCascadeBorder;
  this->supportsAdditionalLightShadows = supportsAdditionalLightShadows;
  this->additionalLightsShadowmapWidth = additionalLightsShadowmapWidth;
  this->additionalLightsShadowmapHeight = additionalLightsShadowmapHeight;
  this->supportsSoftShadows = supportsSoftShadows;
  this->shadowmapDepthBufferBits = shadowmapDepthBufferBits;
  this->bias = bias;
  this->resolution = resolution;
  this->isKeywordAdditionalLightShadowsEnabled = isKeywordAdditionalLightShadowsEnabled;
  this->isKeywordSoftShadowsEnabled = isKeywordSoftShadowsEnabled;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowData::ShadowData() {}
