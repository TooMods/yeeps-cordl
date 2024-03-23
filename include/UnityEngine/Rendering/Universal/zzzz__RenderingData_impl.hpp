#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessingData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_def.hpp"
// Ctor Parameters [CppParam { name: "cullResults", ty: "::UnityEngine::Rendering::CullingResults", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraData", ty:
// "::UnityEngine::Rendering::Universal::CameraData", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightData", ty: "::UnityEngine::Rendering::Universal::LightData", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "shadowData", ty: "::UnityEngine::Rendering::Universal::ShadowData", modifiers: "", def_value: Some("{}") }, CppParam { name: "postProcessingData", ty:
// "::UnityEngine::Rendering::Universal::PostProcessingData", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportsDynamicBatching", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "perObjectData", ty: "::UnityEngine::Rendering::PerObjectData", modifiers: "", def_value: Some("{}") }, CppParam { name: "postProcessingEnabled", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RenderingData::RenderingData(::UnityEngine::Rendering::CullingResults cullResults, ::UnityEngine::Rendering::Universal::CameraData cameraData,
                                                                            ::UnityEngine::Rendering::Universal::LightData lightData, ::UnityEngine::Rendering::Universal::ShadowData shadowData,
                                                                            ::UnityEngine::Rendering::Universal::PostProcessingData postProcessingData, bool supportsDynamicBatching,
                                                                            ::UnityEngine::Rendering::PerObjectData perObjectData, bool postProcessingEnabled) noexcept {
  this->cullResults = cullResults;
  this->cameraData = cameraData;
  this->lightData = lightData;
  this->shadowData = shadowData;
  this->postProcessingData = postProcessingData;
  this->supportsDynamicBatching = supportsDynamicBatching;
  this->perObjectData = perObjectData;
  this->postProcessingEnabled = postProcessingEnabled;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderingData::RenderingData() {}
