#pragma once
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPassCreateInfo_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "multipassId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPassId", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "renderTarget", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "renderTargetDesc", ty:
// "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTargetIsRenderTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "cullingParameters", ty: "::UnityEngine::Rendering::ScriptableCullingParameters", modifiers: "", def_value: Some("{}") }, CppParam { name: "customMirrorView", ty:
// "::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Rendering::Universal::XRPassCreateInfo::XRPassCreateInfo(int32_t multipassId, int32_t cullingPassId, ::UnityW<::UnityEngine::RenderTexture> renderTarget,
                                                                                  ::UnityEngine::RenderTextureDescriptor renderTargetDesc, bool renderTargetIsRenderTexture,
                                                                                  ::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters,
                                                                                  ::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView* customMirrorView) noexcept {
  this->multipassId = multipassId;
  this->cullingPassId = cullingPassId;
  this->renderTarget = renderTarget;
  this->renderTargetDesc = renderTargetDesc;
  this->renderTargetIsRenderTexture = renderTargetIsRenderTexture;
  this->cullingParameters = cullingParameters;
  this->customMirrorView = customMirrorView;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRPassCreateInfo::XRPassCreateInfo() {}
