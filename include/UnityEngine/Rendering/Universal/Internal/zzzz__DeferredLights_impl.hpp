#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredTiler_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__AdditionalLightsShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__BitArray_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredTiler_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LitStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LitStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_LitStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LitStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LitStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LitStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LitStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SimpleLitStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SimpleLitStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SimpleLitStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SimpleLitStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SimpleLitStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SimpleLitStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__StencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__StencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__StencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__StencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__StencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__StencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LitPunctualStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitPunctualStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LitPunctualStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_LitPunctualStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LitPunctualStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitPunctualStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LitPunctualStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitPunctualStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LitPunctualStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitPunctualStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LitPunctualStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitPunctualStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SimpleLitPunctualStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitPunctualStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SimpleLitPunctualStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitPunctualStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SimpleLitPunctualStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitPunctualStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SimpleLitPunctualStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitPunctualStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SimpleLitPunctualStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitPunctualStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SimpleLitPunctualStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitPunctualStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LitDirStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitDirStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LitDirStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_LitDirStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LitDirStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitDirStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LitDirStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitDirStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LitDirStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitDirStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LitDirStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitDirStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SimpleLitDirStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitDirStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SimpleLitDirStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitDirStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SimpleLitDirStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitDirStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SimpleLitDirStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitDirStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SimpleLitDirStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitDirStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SimpleLitDirStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitDirStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__ClearStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ClearStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__ClearStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_ClearStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__ClearStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ClearStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__ClearStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_ClearStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__ClearStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ClearStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__ClearStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_ClearStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF_UDepthRanges(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "UDepthRanges",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF_UDepthRanges() {
  return ::cordl_internals::getStaticField<int32_t, "UDepthRanges",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__DepthRanges(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DepthRanges",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__DepthRanges() {
  return ::cordl_internals::getStaticField<int32_t, "_DepthRanges",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__DownsamplingWidth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DownsamplingWidth",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__DownsamplingWidth() {
  return ::cordl_internals::getStaticField<int32_t, "_DownsamplingWidth",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__DownsamplingHeight(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DownsamplingHeight",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__DownsamplingHeight() {
  return ::cordl_internals::getStaticField<int32_t, "_DownsamplingHeight",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SourceShiftX(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SourceShiftX",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SourceShiftX() {
  return ::cordl_internals::getStaticField<int32_t, "_SourceShiftX",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SourceShiftY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SourceShiftY",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SourceShiftY() {
  return ::cordl_internals::getStaticField<int32_t, "_SourceShiftY",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__TileShiftX(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TileShiftX",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__TileShiftX() {
  return ::cordl_internals::getStaticField<int32_t, "_TileShiftX",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__TileShiftY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TileShiftY",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__TileShiftY() {
  return ::cordl_internals::getStaticField<int32_t, "_TileShiftY",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__tileXCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_tileXCount",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__tileXCount() {
  return ::cordl_internals::getStaticField<int32_t, "_tileXCount",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__DepthRangeOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DepthRangeOffset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__DepthRangeOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_DepthRangeOffset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__BitmaskTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BitmaskTex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__BitmaskTex() {
  return ::cordl_internals::getStaticField<int32_t, "_BitmaskTex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF_UTileList(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "UTileList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF_UTileList() {
  return ::cordl_internals::getStaticField<int32_t, "UTileList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__TileList(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TileList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__TileList() {
  return ::cordl_internals::getStaticField<int32_t, "_TileList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF_UPunctualLightBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "UPunctualLightBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF_UPunctualLightBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "UPunctualLightBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__PunctualLightBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_PunctualLightBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__PunctualLightBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_PunctualLightBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF_URelLightList(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "URelLightList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF_URelLightList() {
  return ::cordl_internals::getStaticField<int32_t, "URelLightList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__RelLightList(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_RelLightList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__RelLightList() {
  return ::cordl_internals::getStaticField<int32_t, "_RelLightList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__TilePixelWidth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TilePixelWidth",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__TilePixelWidth() {
  return ::cordl_internals::getStaticField<int32_t, "_TilePixelWidth",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__TilePixelHeight(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TilePixelHeight",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__TilePixelHeight() {
  return ::cordl_internals::getStaticField<int32_t, "_TilePixelHeight",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__InstanceOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InstanceOffset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__InstanceOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_InstanceOffset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__DepthTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DepthTex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__DepthTex() {
  return ::cordl_internals::getStaticField<int32_t, "_DepthTex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__DepthTexSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DepthTexSize",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__DepthTexSize() {
  return ::cordl_internals::getStaticField<int32_t, "_DepthTexSize",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__ScreenToWorld(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ScreenToWorld",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__ScreenToWorld() {
  return ::cordl_internals::getStaticField<int32_t, "_ScreenToWorld",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__unproject0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_unproject0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__unproject0() {
  return ::cordl_internals::getStaticField<int32_t, "_unproject0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__unproject1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_unproject1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__unproject1() {
  return ::cordl_internals::getStaticField<int32_t, "_unproject1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__MainLightPosition(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightPosition",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__MainLightPosition() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightPosition",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__MainLightColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightColor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__MainLightColor() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__MainLightLayerMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightLayerMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__MainLightLayerMask() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightLayerMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SpotLightScale(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SpotLightScale",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SpotLightScale() {
  return ::cordl_internals::getStaticField<int32_t, "_SpotLightScale",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SpotLightBias(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SpotLightBias",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SpotLightBias() {
  return ::cordl_internals::getStaticField<int32_t, "_SpotLightBias",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__SpotLightGuard(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SpotLightGuard",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__SpotLightGuard() {
  return ::cordl_internals::getStaticField<int32_t, "_SpotLightGuard",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LightPosWS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightPosWS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LightPosWS() {
  return ::cordl_internals::getStaticField<int32_t, "_LightPosWS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LightColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightColor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LightColor() {
  return ::cordl_internals::getStaticField<int32_t, "_LightColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LightAttenuation(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightAttenuation",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LightAttenuation() {
  return ::cordl_internals::getStaticField<int32_t, "_LightAttenuation",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LightOcclusionProbInfo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightOcclusionProbInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LightOcclusionProbInfo() {
  return ::cordl_internals::getStaticField<int32_t, "_LightOcclusionProbInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LightDirection(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightDirection",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LightDirection() {
  return ::cordl_internals::getStaticField<int32_t, "_LightDirection",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LightFlags(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightFlags",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LightFlags() {
  return ::cordl_internals::getStaticField<int32_t, "_LightFlags",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__ShadowLightIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ShadowLightIndex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__ShadowLightIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_ShadowLightIndex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__LightLayerMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightLayerMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__LightLayerMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LightLayerMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::setStaticF__CookieLightIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CookieLightIndex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::getStaticF__CookieLightIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_CookieLightIndex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__ShaderConstants::__DeferredLights__ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob::Execute)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ad6cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob>::get(),
                                                 "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "tiler", ty: "::UnityEngine::Rendering::Universal::Internal::DeferredTiler", modifiers: "", def_value: Some("{}") }, CppParam { name: "prePunctualLights", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>", modifiers: "", def_value: Some("{}") }, CppParam { name: "coarseTiles", ty:
// "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "coarseTileHeaders", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "coarseHeaderOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "istart", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "iend", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jstart", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jend", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob::__DeferredLights__CullLightsJob(
    ::UnityEngine::Rendering::Universal::Internal::DeferredTiler tiler,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight> prePunctualLights, ::Unity::Collections::NativeArray_1<uint16_t> coarseTiles,
    ::Unity::Collections::NativeArray_1<uint32_t> coarseTileHeaders, int32_t coarseHeaderOffset, int32_t istart, int32_t iend, int32_t jstart, int32_t jend) noexcept {
  this->tiler = tiler;
  this->prePunctualLights = prePunctualLights;
  this->coarseTiles = coarseTiles;
  this->coarseTileHeaders = coarseTileHeaders;
  this->coarseHeaderOffset = coarseHeaderOffset;
  this->istart = istart;
  this->iend = iend;
  this->jstart = jstart;
  this->jend = jend;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__CullLightsJob::__DeferredLights__CullLightsJob() {}
// Ctor Parameters [CppParam { name: "tileList", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "punctualLightBuffer", ty:
// "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "relLightList", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "tileListSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "punctualLightBufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "relLightListSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "instanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall::__DeferredLights__DrawCall(::UnityEngine::ComputeBuffer* tileList,
                                                                                                                ::UnityEngine::ComputeBuffer* punctualLightBuffer,
                                                                                                                ::UnityEngine::ComputeBuffer* relLightList, int32_t tileListSize,
                                                                                                                int32_t punctualLightBufferSize, int32_t relLightListSize, int32_t instanceOffset,
                                                                                                                int32_t instanceCount) noexcept {
  this->tileList = tileList;
  this->punctualLightBuffer = punctualLightBuffer;
  this->relLightList = relLightList;
  this->tileListSize = tileListSize;
  this->punctualLightBufferSize = punctualLightBufferSize;
  this->relLightListSize = relLightListSize;
  this->instanceOffset = instanceOffset;
  this->instanceCount = instanceCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__DrawCall::__DeferredLights__DrawCall() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses::__DeferredLights__TileDeferredPasses(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses::__DeferredLights__TileDeferredPasses() {}
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses::PunctualLit{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses UnityEngine::Rendering::Universal::Internal::__DeferredLights__TileDeferredPasses::PunctualSimpleLit{
  static_cast<int32_t>(0x1)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses::__DeferredLights__StencilDeferredPasses(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses::__DeferredLights__StencilDeferredPasses() {}
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses::StencilVolume{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses::PunctualLit{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses
    UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses::PunctualSimpleLit{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses::DirectionalLit{
  static_cast<int32_t>(0x3)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses
    UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses::DirectionalSimpleLit{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses
    UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses::ClearStencilPartial{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses::Fog{
  static_cast<int32_t>(0x6)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::__DeferredLights__StencilDeferredPasses::SSAOOnly{
  static_cast<int32_t>(0x7)
};
// Ctor Parameters [CppParam { name: "tileDepthInfoMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "tileDeferredMaterial", ty:
// "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "stencilDeferredMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "lightCookieManager", ty: "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams::__DeferredLights__InitParams(
    ::UnityW<::UnityEngine::Material> tileDepthInfoMaterial, ::UnityW<::UnityEngine::Material> tileDeferredMaterial, ::UnityW<::UnityEngine::Material> stencilDeferredMaterial,
    ::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager) noexcept {
  this->tileDepthInfoMaterial = tileDepthInfoMaterial;
  this->tileDeferredMaterial = tileDeferredMaterial;
  this->stencilDeferredMaterial = stencilDeferredMaterial;
  this->lightCookieManager = lightCookieManager;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams::__DeferredLights__InitParams() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferAlbedoIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferAlbedoIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GBufferAlbedoIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferSpecularMetallicIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSpecularMetallicIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GBufferSpecularMetallicIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferNormalSmoothnessIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferNormalSmoothnessIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GBufferNormalSmoothnessIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferLightingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferLightingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GBufferLightingIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferDepthIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferDepthIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GbufferDepthIndex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferShadowMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferShadowMask)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ad3a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GBufferShadowMask",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferRenderingLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferRenderingLayers)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ad3a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GBufferRenderingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferSliceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSliceCount)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ad3b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GBufferSliceCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.GetGBufferFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(int32_t)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::GetGBufferFormat)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2ad3b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "GetGBufferFormat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseShadowMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseShadowMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ad3a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseShadowMask",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseRenderingLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseRenderingLayers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ad3abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_UseRenderingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseRenderPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseRenderPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseRenderPass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_UseRenderPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseRenderPass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad3c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_UseRenderPass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_HasDepthPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasDepthPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_HasDepthPrepass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_HasDepthPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasDepthPrepass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad3c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_HasDepthPrepass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_HasNormalPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasNormalPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_HasNormalPrepass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_HasNormalPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasNormalPrepass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad3c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_HasNormalPrepass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_IsOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_IsOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_IsOverlay",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_IsOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_IsOverlay)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad3c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_IsOverlay",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_AccurateGbufferNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_AccurateGbufferNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_AccurateGbufferNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_AccurateGbufferNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_AccurateGbufferNormals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2ad3c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_AccurateGbufferNormals",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_TiledDeferredShading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_TiledDeferredShading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_TiledDeferredShading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_TiledDeferredShading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_TiledDeferredShading)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad3d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_TiledDeferredShading",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_MixedLightingSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::MixedLightingSetup (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_MixedLightingSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_MixedLightingSetup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_MixedLightingSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::MixedLightingSetup)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_MixedLightingSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_MixedLightingSetup",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::MixedLightingSetup>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseJobSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseJobSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseJobSystem",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_UseJobSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseJobSystem)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad3d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_UseJobSystem",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_RenderWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_RenderWidth",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_RenderWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_RenderWidth",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_RenderHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_RenderHeight",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_RenderHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_RenderHeight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> (
        ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GbufferAttachments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_GbufferAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "set_GbufferAttachments", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DeferredInputAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_DeferredInputAttachments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DeferredInputAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DeferredInputAttachments",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DeferredInputIsTransient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool, ::Array<bool>*> (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputIsTransient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_DeferredInputIsTransient", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DeferredInputIsTransient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::ArrayW<bool, ::Array<bool>*>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputIsTransient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DeferredInputIsTransient",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthAttachment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachment)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_DepthAttachment",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthAttachment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::RenderTargetHandle)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachment)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthAttachment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthCopyTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthCopyTexture)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_DepthCopyTexture",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthCopyTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::RenderTargetHandle)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthCopyTexture)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthCopyTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthInfoTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthInfoTexture)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_DepthInfoTexture",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthInfoTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::RenderTargetHandle)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthInfoTexture)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthInfoTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_TileDepthInfoTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_TileDepthInfoTexture)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_TileDepthInfoTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_TileDepthInfoTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::RenderTargetHandle)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_TileDepthInfoTexture)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_TileDepthInfoTexture",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferAttachmentIdentifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferAttachmentIdentifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GbufferAttachmentIdentifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_GbufferAttachmentIdentifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferAttachmentIdentifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_GbufferAttachmentIdentifiers",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferFormats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> (
        ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferFormats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GbufferFormats",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_GbufferFormats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferFormats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_GbufferFormats", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthAttachmentIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachmentIdentifier)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_DepthAttachmentIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthAttachmentIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachmentIdentifier)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthAttachmentIdentifier",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthCopyTextureIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthCopyTextureIdentifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad3e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_DepthCopyTextureIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthCopyTextureIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthCopyTextureIdentifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad3ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthCopyTextureIdentifier",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthInfoTextureIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthInfoTextureIdentifier)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_DepthInfoTextureIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthInfoTextureIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthInfoTextureIdentifier)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthInfoTextureIdentifier",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_TileDepthInfoTextureIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_TileDepthInfoTextureIdentifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad3ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_TileDepthInfoTextureIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_TileDepthInfoTextureIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_TileDepthInfoTextureIdentifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad3f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_TileDepthInfoTextureIdentifier",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams, bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::_ctor)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x2ad3f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.GetTiler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::UnityEngine::Rendering::Universal::Internal::DeferredTiler> (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(int32_t)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::GetTiler)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ad4b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "GetTiler",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupLights)> {
  constexpr static std::size_t size = 0xdbc;
  constexpr static std::size_t addrs = 0x2ad4b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ResolveMixedLightingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::ResolveMixedLightingMode)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2ad764c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ResolveMixedLightingMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.DisableFramebufferFetchInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::DisableFramebufferFetchInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad78f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "DisableFramebufferFetchInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateGbufferAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateGbufferAttachments)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2ad77c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "CreateGbufferAttachments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.IsRuntimeSupportedThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::IsRuntimeSupportedThisFrame)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ad7900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "IsRuntimeSupportedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ByRef<::UnityEngine::Rendering::Universal::RenderingData>, ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*, bool, bool,
    ::UnityEngine::Rendering::Universal::RenderTargetHandle, ::UnityEngine::Rendering::Universal::RenderTargetHandle, ::UnityEngine::Rendering::Universal::RenderTargetHandle,
    ::UnityEngine::Rendering::Universal::RenderTargetHandle, ::UnityEngine::Rendering::Universal::RenderTargetHandle)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::Setup)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x2ad79b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::OnCameraCleanup)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2ad81d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OnCameraCleanup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.OverwriteStencil
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::StencilState (*)(::UnityEngine::Rendering::StencilState, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2ad84f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OverwriteStencil", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilState>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.OverwriteStencil
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderStateBlock (*)(::UnityEngine::Rendering::RenderStateBlock, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2ad86a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OverwriteStencil", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderStateBlock>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.HasTileLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::HasTileLights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad8900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "HasTileLights",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.HasTileDepthRangeExtraPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::HasTileDepthRangeExtraPass)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ad8908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "HasTileDepthRangeExtraPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ExecuteTileDepthInfoPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
        &::UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteTileDepthInfoPass)> {
  constexpr static std::size_t size = 0xb70;
  constexpr static std::size_t addrs = 0x2ad8998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ExecuteTileDepthInfoPass",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ExecuteDownsampleBitmaskPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
        &::UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteDownsampleBitmaskPass)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x2ad9508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ExecuteDownsampleBitmaskPass",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ClearStencilPartial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::ClearStencilPartial)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2ad9ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ClearStencilPartial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ExecuteDeferredPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
        &::UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteDeferredPass)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2ad9de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ExecuteDeferredPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupShaderLightConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupShaderLightConstants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad6bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupShaderLightConstants",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupMainLightConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::LightData>)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMainLightConstants)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2adbc88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupMainLightConstants",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LightData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupMatrixConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMatrixConstants)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x2ada0f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupMatrixConstants", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SortLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::SortLights)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2ad6bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SortLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CheckHasTileLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::CheckHasTileLights)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2ad806c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CheckHasTileLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.PrecomputeLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>>, ByRef<::Unity::Collections::NativeArray_1<uint16_t>>,
    ByRef<::Unity::Collections::NativeArray_1<uint16_t>>, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>, bool, ::UnityEngine::Matrix4x4, bool, float_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::PrecomputeLights)> {
  constexpr static std::size_t size = 0x854;
  constexpr static std::size_t addrs = 0x2ad6398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "PrecomputeLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderTileLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderTileLights)> {
  constexpr static std::size_t size = 0x115c;
  constexpr static std::size_t addrs = 0x2ada934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderTileLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.HasStencilLightsOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::LightType)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::HasStencilLightsOfType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ada4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "HasStencilLightsOfType",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilLights)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2ada698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilDirectionalLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilDirectionalLights)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x2adc374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilDirectionalLights",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilPointLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilPointLights)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x2adc9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilPointLights",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilSpotLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilSpotLights)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x2add088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilSpotLights",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderSSAOBeforeShading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderSSAOBeforeShading)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2ada554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderSSAOBeforeShading",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderFog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderFog)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2adba90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderFog", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.TrimLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ByRef<::Unity::Collections::NativeArray_1<uint16_t>>, ByRef<::Unity::Collections::NativeArray_1<uint16_t>>, int32_t, int32_t, ByRef<::UnityEngine::Rendering::Universal::Internal::BitArray>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::TrimLights)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2adbf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "TrimLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::Internal::BitArray>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.StorePunctualLightData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>>, int32_t, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::StorePunctualLightData)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2adbfd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "StorePunctualLightData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.StoreTileData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>>, int32_t, uint32_t, uint32_t, uint16_t, uint16_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::StoreTileData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2adbfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "StoreTileData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.IsTileLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::VisibleLight)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::IsTileLight)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2ade4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "IsTileLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VisibleLight>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.InitTileDeferredMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::InitTileDeferredMaterial)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2ad44f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "InitTileDeferredMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.InitStencilDeferredMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::InitStencilDeferredMaterial)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2ad472c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "InitStencilDeferredMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateSphereMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateSphereMesh)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x2add848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateSphereMesh",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateHemisphereMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateHemisphereMesh)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x2adde2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateHemisphereMesh",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateFullscreenMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateFullscreenMesh)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2ad9c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateFullscreenMesh",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.Align
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::Align)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2adbf78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "Align", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.PackTileID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::PackTileID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2adbfb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "PackTileID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.FloatToUInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(float_t)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::FloatToUInt)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2ade3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "FloatToUInt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.Half2ToUInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::Half2ToUInt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2ade5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "Half2ToUInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__UseRenderPass_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseRenderPass_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__UseRenderPass_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseRenderPass_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__UseRenderPass_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseRenderPass_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__HasDepthPrepass_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasDepthPrepass_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__HasDepthPrepass_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasDepthPrepass_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__HasDepthPrepass_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HasDepthPrepass_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__HasNormalPrepass_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasNormalPrepass_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__HasNormalPrepass_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasNormalPrepass_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__HasNormalPrepass_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HasNormalPrepass_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__IsOverlay_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsOverlay_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__IsOverlay_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsOverlay_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__IsOverlay_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsOverlay_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_AccurateGbufferNormals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccurateGbufferNormals;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_AccurateGbufferNormals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccurateGbufferNormals;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_AccurateGbufferNormals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AccurateGbufferNormals = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__TiledDeferredShading_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TiledDeferredShading_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__TiledDeferredShading_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TiledDeferredShading_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__TiledDeferredShading_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TiledDeferredShading_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__MixedLightingSetup_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MixedLightingSetup_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__MixedLightingSetup_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MixedLightingSetup_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__MixedLightingSetup_k__BackingField(::UnityEngine::Rendering::Universal::MixedLightingSetup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MixedLightingSetup_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__UseJobSystem_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseJobSystem_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__UseJobSystem_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseJobSystem_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__UseJobSystem_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseJobSystem_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__RenderWidth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RenderWidth_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__RenderWidth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RenderWidth_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__RenderWidth_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RenderWidth_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__RenderHeight_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RenderHeight_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__RenderHeight_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RenderHeight_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__RenderHeight_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RenderHeight_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*>&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferAttachments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferAttachments_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferAttachments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferAttachments_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__GbufferAttachments_k__BackingField(
    ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GbufferAttachments_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputAttachments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputAttachments_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputAttachments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputAttachments_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DeferredInputAttachments_k__BackingField(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DeferredInputAttachments_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputIsTransient_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputIsTransient_k__BackingField;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputIsTransient_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputIsTransient_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DeferredInputIsTransient_k__BackingField(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DeferredInputIsTransient_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthAttachment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthAttachment_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthAttachment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthAttachment_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DepthAttachment_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DepthAttachment_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthCopyTexture_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthCopyTexture_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthCopyTexture_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthCopyTexture_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DepthCopyTexture_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DepthCopyTexture_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthInfoTexture_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthInfoTexture_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthInfoTexture_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthInfoTexture_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DepthInfoTexture_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DepthInfoTexture_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__TileDepthInfoTexture_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TileDepthInfoTexture_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__TileDepthInfoTexture_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TileDepthInfoTexture_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__TileDepthInfoTexture_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TileDepthInfoTexture_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferAttachmentIdentifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferAttachmentIdentifiers_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferAttachmentIdentifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferAttachmentIdentifiers_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__GbufferAttachmentIdentifiers_k__BackingField(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GbufferAttachmentIdentifiers_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferFormats_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferFormats_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferFormats_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferFormats_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__GbufferFormats_k__BackingField(
    ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GbufferFormats_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthAttachmentIdentifier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthAttachmentIdentifier_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthAttachmentIdentifier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthAttachmentIdentifier_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DepthAttachmentIdentifier_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DepthAttachmentIdentifier_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthCopyTextureIdentifier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthCopyTextureIdentifier_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthCopyTextureIdentifier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthCopyTextureIdentifier_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DepthCopyTextureIdentifier_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DepthCopyTextureIdentifier_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthInfoTextureIdentifier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthInfoTextureIdentifier_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthInfoTextureIdentifier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthInfoTextureIdentifier_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DepthInfoTextureIdentifier_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DepthInfoTextureIdentifier_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__TileDepthInfoTextureIdentifier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TileDepthInfoTextureIdentifier_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__TileDepthInfoTextureIdentifier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TileDepthInfoTextureIdentifier_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__TileDepthInfoTextureIdentifier_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TileDepthInfoTextureIdentifier_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_CachedRenderWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedRenderWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_CachedRenderWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedRenderWidth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_CachedRenderWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedRenderWidth = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_CachedRenderHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedRenderHeight;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_CachedRenderHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedRenderHeight;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_CachedRenderHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedRenderHeight = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_CachedProjectionMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedProjectionMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_CachedProjectionMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedProjectionMatrix;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_CachedProjectionMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedProjectionMatrix = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Internal::DeferredTiler, ::Array<::UnityEngine::Rendering::Universal::Internal::DeferredTiler>*>&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_Tilers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tilers;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Internal::DeferredTiler, ::Array<::UnityEngine::Rendering::Universal::Internal::DeferredTiler>*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_Tilers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tilers;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_Tilers(
    ::ArrayW<::UnityEngine::Rendering::Universal::Internal::DeferredTiler, ::Array<::UnityEngine::Rendering::Universal::Internal::DeferredTiler>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Tilers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_TileDataCapacities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDataCapacities;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_TileDataCapacities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDataCapacities;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_TileDataCapacities(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TileDataCapacities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_HasTileVisLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasTileVisLights;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_HasTileVisLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasTileVisLights;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_HasTileVisLights(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasTileVisLights = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_stencilVisLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stencilVisLights;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_stencilVisLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stencilVisLights;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_stencilVisLights(::Unity::Collections::NativeArray_1<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_stencilVisLights = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_stencilVisLightOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stencilVisLightOffsets;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_stencilVisLightOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stencilVisLightOffsets;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_stencilVisLightOffsets(::Unity::Collections::NativeArray_1<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_stencilVisLightOffsets = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_AdditionalLightsShadowCasterPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowCasterPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_AdditionalLightsShadowCasterPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowCasterPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_AdditionalLightsShadowCasterPass(
    ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightsShadowCasterPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_SphereMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SphereMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_SphereMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SphereMesh;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_SphereMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SphereMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_HemisphereMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HemisphereMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_HemisphereMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HemisphereMesh;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_HemisphereMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HemisphereMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_FullscreenMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullscreenMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_FullscreenMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullscreenMesh;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_FullscreenMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FullscreenMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_MaxDepthRangePerBatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxDepthRangePerBatch;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_MaxDepthRangePerBatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxDepthRangePerBatch;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_MaxDepthRangePerBatch(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxDepthRangePerBatch = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_MaxTilesPerBatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxTilesPerBatch;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_MaxTilesPerBatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxTilesPerBatch;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_MaxTilesPerBatch(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxTilesPerBatch = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_MaxPunctualLightPerBatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxPunctualLightPerBatch;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_MaxPunctualLightPerBatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxPunctualLightPerBatch;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_MaxPunctualLightPerBatch(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxPunctualLightPerBatch = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_MaxRelLightIndicesPerBatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxRelLightIndicesPerBatch;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_MaxRelLightIndicesPerBatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxRelLightIndicesPerBatch;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_MaxRelLightIndicesPerBatch(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxRelLightIndicesPerBatch = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_TileDepthInfoMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDepthInfoMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_TileDepthInfoMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDepthInfoMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_TileDepthInfoMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TileDepthInfoMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_TileDeferredMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDeferredMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_TileDeferredMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDeferredMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_TileDeferredMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TileDeferredMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_StencilDeferredMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_StencilDeferredMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_StencilDeferredMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StencilDeferredMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_StencilDeferredPasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredPasses;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_StencilDeferredPasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredPasses;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_StencilDeferredPasses(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StencilDeferredPasses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_TileDeferredPasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDeferredPasses;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_TileDeferredPasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDeferredPasses;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_TileDeferredPasses(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TileDeferredPasses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ScreenToWorld() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenToWorld;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ScreenToWorld() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenToWorld;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_ScreenToWorld(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScreenToWorld)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerDeferredTiledPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerDeferredTiledPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerDeferredTiledPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerDeferredTiledPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_ProfilingSamplerDeferredTiledPass(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSamplerDeferredTiledPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerDeferredStencilPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerDeferredStencilPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerDeferredStencilPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerDeferredStencilPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_ProfilingSamplerDeferredStencilPass(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSamplerDeferredStencilPass)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerDeferredFogPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerDeferredFogPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerDeferredFogPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerDeferredFogPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_ProfilingSamplerDeferredFogPass(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSamplerDeferredFogPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerClearStencilPartialPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerClearStencilPartialPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerClearStencilPartialPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerClearStencilPartialPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_ProfilingSamplerClearStencilPartialPass(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSamplerClearStencilPartialPass)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_LightCookieManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LightCookieManager*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_LightCookieManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LightCookieManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_GBufferNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_GBufferNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_GBufferNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_GBufferNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_TileDeferredPassNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_TileDeferredPassNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_TileDeferredPassNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_TileDeferredPassNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_StencilDeferredPassNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_StencilDeferredPassNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_StencilDeferredPassNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_StencilDeferredPassNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_InvalidLightOffset(uint16_t value) {
  ::cordl_internals::setStaticField<uint16_t, "k_InvalidLightOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<uint16_t>(value));
}
inline uint16_t UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_InvalidLightOffset() {
  return ::cordl_internals::getStaticField<uint16_t, "k_InvalidLightOffset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_SetupLights(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_SetupLights", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_SetupLights() {
  return ::cordl_internals::getStaticField<::StringW, "k_SetupLights", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_DeferredPass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DeferredPass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_DeferredPass() {
  return ::cordl_internals::getStaticField<::StringW, "k_DeferredPass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_TileDepthInfo(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_TileDepthInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_TileDepthInfo() {
  return ::cordl_internals::getStaticField<::StringW, "k_TileDepthInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_DeferredTiledPass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DeferredTiledPass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_DeferredTiledPass() {
  return ::cordl_internals::getStaticField<::StringW, "k_DeferredTiledPass",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_DeferredStencilPass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DeferredStencilPass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_DeferredStencilPass() {
  return ::cordl_internals::getStaticField<::StringW, "k_DeferredStencilPass",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_DeferredFogPass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DeferredFogPass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_DeferredFogPass() {
  return ::cordl_internals::getStaticField<::StringW, "k_DeferredFogPass",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_ClearStencilPartial(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_ClearStencilPartial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_ClearStencilPartial() {
  return ::cordl_internals::getStaticField<::StringW, "k_ClearStencilPartial",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_SetupLightConstants(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_SetupLightConstants", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_SetupLightConstants() {
  return ::cordl_internals::getStaticField<::StringW, "k_SetupLightConstants",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_kStencilShapeGuard(float_t value) {
  ::cordl_internals::setStaticField<float_t, "kStencilShapeGuard", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<float_t>(value));
}
inline float_t UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_kStencilShapeGuard() {
  return ::cordl_internals::getStaticField<float_t, "kStencilShapeGuard",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_m_ProfilingSetupLights(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_m_ProfilingSetupLights() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_m_ProfilingDeferredPass(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDeferredPass",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_m_ProfilingDeferredPass() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDeferredPass",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_m_ProfilingTileDepthInfo(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingTileDepthInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_m_ProfilingTileDepthInfo() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingTileDepthInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_m_ProfilingSetupLightConstants(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLightConstants",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_m_ProfilingSetupLightConstants() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLightConstants",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferAlbedoIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GBufferAlbedoIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSpecularMetallicIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_GBufferSpecularMetallicIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferNormalSmoothnessIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_GBufferNormalSmoothnessIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferLightingIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_GBufferLightingIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferDepthIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GbufferDepthIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferShadowMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GBufferShadowMask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferRenderingLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_GBufferRenderingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSliceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GBufferSliceCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::Internal::DeferredLights::GetGBufferFormat(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "GetGBufferFormat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat, false>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseShadowMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseShadowMask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseRenderingLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseRenderingLayers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseRenderPass() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseRenderPass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseRenderPass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_UseRenderPass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasDepthPrepass() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_HasDepthPrepass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasDepthPrepass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_HasDepthPrepass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasNormalPrepass() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_HasNormalPrepass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasNormalPrepass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_HasNormalPrepass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_IsOverlay() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_IsOverlay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_IsOverlay(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_IsOverlay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_AccurateGbufferNormals() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_AccurateGbufferNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_AccurateGbufferNormals(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_AccurateGbufferNormals",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_TiledDeferredShading() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_TiledDeferredShading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_TiledDeferredShading(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_TiledDeferredShading",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::MixedLightingSetup UnityEngine::Rendering::Universal::Internal::DeferredLights::get_MixedLightingSetup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_MixedLightingSetup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::MixedLightingSetup, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_MixedLightingSetup(::UnityEngine::Rendering::Universal::MixedLightingSetup value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_MixedLightingSetup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::MixedLightingSetup>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseJobSystem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseJobSystem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseJobSystem(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_UseJobSystem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderWidth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_RenderWidth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderWidth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_RenderWidth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderHeight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_RenderHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderHeight(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_RenderHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*>
UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GbufferAttachments",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*>, false>(
      this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferAttachments(
    ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_GbufferAttachments", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>
UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_DeferredInputAttachments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputAttachments(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DeferredInputAttachments",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<bool, ::Array<bool>*> UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputIsTransient() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_DeferredInputIsTransient", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool, ::Array<bool>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputIsTransient(::ArrayW<bool, ::Array<bool>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DeferredInputIsTransient",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachment() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_DepthAttachment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachment(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthAttachment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthCopyTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_DepthCopyTexture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthCopyTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthCopyTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthInfoTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_DepthInfoTexture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthInfoTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthInfoTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Internal::DeferredLights::get_TileDepthInfoTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_TileDepthInfoTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_TileDepthInfoTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_TileDepthInfoTexture",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>
UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferAttachmentIdentifiers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_GbufferAttachmentIdentifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferAttachmentIdentifiers(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_GbufferAttachmentIdentifiers",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferFormats() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GbufferFormats",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>, false>(
      this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferFormats(
    ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_GbufferFormats", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachmentIdentifier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_DepthAttachmentIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachmentIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthAttachmentIdentifier",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthCopyTextureIdentifier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_DepthCopyTextureIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthCopyTextureIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthCopyTextureIdentifier",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthInfoTextureIdentifier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_DepthInfoTextureIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthInfoTextureIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthInfoTextureIdentifier",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::Internal::DeferredLights::get_TileDepthInfoTextureIdentifier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_TileDepthInfoTextureIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_TileDepthInfoTextureIdentifier(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_TileDepthInfoTextureIdentifier",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param useNativeRenderPass: bool (default: false)
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights*
UnityEngine::Rendering::Universal::Internal::DeferredLights::New_ctor(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams initParams, bool useNativeRenderPass) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(initParams, useNativeRenderPass));
}
/// @param useNativeRenderPass: bool (default: false)
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::_ctor(::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams initParams, bool useNativeRenderPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::__DeferredLights__InitParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initParams, useNativeRenderPass);
}
inline ByRef<::UnityEngine::Rendering::Universal::Internal::DeferredTiler> UnityEngine::Rendering::Universal::Internal::DeferredLights::GetTiler(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "GetTiler",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<ByRef<::UnityEngine::Rendering::Universal::Internal::DeferredTiler>, false>(this, ___internal_method, i);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                     ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ResolveMixedLightingMode(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ResolveMixedLightingMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::DisableFramebufferFetchInput() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "DisableFramebufferFetchInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateGbufferAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "CreateGbufferAttachments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::IsRuntimeSupportedThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "IsRuntimeSupportedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::Setup(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                               ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* additionalLightsShadowCasterPass,
                                                                               bool hasDepthPrepass, bool hasNormalPrepass, ::UnityEngine::Rendering::Universal::RenderTargetHandle depthCopyTexture,
                                                                               ::UnityEngine::Rendering::Universal::RenderTargetHandle depthInfoTexture,
                                                                               ::UnityEngine::Rendering::Universal::RenderTargetHandle tileDepthInfoTexture,
                                                                               ::UnityEngine::Rendering::Universal::RenderTargetHandle depthAttachment,
                                                                               ::UnityEngine::Rendering::Universal::RenderTargetHandle colorAttachment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderingData, additionalLightsShadowCasterPass, hasDepthPrepass, hasNormalPrepass, depthCopyTexture,
                                                          depthInfoTexture, tileDepthInfoTexture, depthAttachment, colorAttachment);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OnCameraCleanup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::StencilState UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil(::UnityEngine::Rendering::StencilState s, int32_t stencilWriteMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OverwriteStencil", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::StencilState, false>(nullptr, ___internal_method, s, stencilWriteMask);
}
inline ::UnityEngine::Rendering::RenderStateBlock UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil(::UnityEngine::Rendering::RenderStateBlock block,
                                                                                                                                int32_t stencilWriteMask, int32_t stencilRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OverwriteStencil", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderStateBlock>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderStateBlock, false>(nullptr, ___internal_method, block, stencilWriteMask, stencilRef);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::HasTileLights() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "HasTileLights",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::HasTileDepthRangeExtraPass() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "HasTileDepthRangeExtraPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteTileDepthInfoPass(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                  ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ExecuteTileDepthInfoPass",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteDownsampleBitmaskPass(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                      ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ExecuteDownsampleBitmaskPass",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ClearStencilPartial(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ClearStencilPartial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteDeferredPass(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                             ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ExecuteDeferredPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupShaderLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                   ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupShaderLightConstants",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMainLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                 ByRef<::UnityEngine::Rendering::Universal::LightData> lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupMainLightConstants",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LightData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMatrixConstants(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                              ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupMatrixConstants", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SortLights(
    ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>> prePunctualLights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SortLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prePunctualLights);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::CheckHasTileLights(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> visibleLights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CheckHasTileLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, visibleLights);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::PrecomputeLights(
    ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>> prePunctualLights,
    ByRef<::Unity::Collections::NativeArray_1<uint16_t>> stencilVisLights, ByRef<::Unity::Collections::NativeArray_1<uint16_t>> stencilVisLightOffsets,
    ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> visibleLights, bool hasAdditionalLights, ::UnityEngine::Matrix4x4 view, bool isOrthographic, float_t zNear) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "PrecomputeLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prePunctualLights, stencilVisLights, stencilVisLightOffsets, visibleLights, hasAdditionalLights, view,
                                                          isOrthographic, zNear);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderTileLights(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                          ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderTileLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cmd, renderingData);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::HasStencilLightsOfType(::UnityEngine::LightType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "HasStencilLightsOfType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilLights(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                             ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilDirectionalLights(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                        ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights,
                                                                                                        int32_t mainLightIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilDirectionalLights",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData, visibleLights, mainLightIndex);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilPointLights(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                  ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilPointLights",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData, visibleLights);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilSpotLights(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                 ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilSpotLights",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData, visibleLights);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderSSAOBeforeShading(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                 ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderSSAOBeforeShading",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderFog(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                   ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderFog", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cmd, renderingData);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::TrimLights(ByRef<::Unity::Collections::NativeArray_1<uint16_t>> trimmedLights,
                                                                                       ByRef<::Unity::Collections::NativeArray_1<uint16_t>> tiles, int32_t offset, int32_t lightCount,
                                                                                       ByRef<::UnityEngine::Rendering::Universal::Internal::BitArray> usedLights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "TrimLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::Internal::BitArray>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, trimmedLights, tiles, offset, lightCount, usedLights);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::StorePunctualLightData(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>> punctualLightBuffer,
                                                                                                int32_t storeIndex,
                                                                                                ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> visibleLights,
                                                                                                int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "StorePunctualLightData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, punctualLightBuffer, storeIndex, visibleLights, index);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::StoreTileData(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>> tileList, int32_t storeIndex,
                                                                                       uint32_t tileID, uint32_t listBitMask, uint16_t relLightOffset, uint16_t lightCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "StoreTileData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tileList, storeIndex, tileID, listBitMask, relLightOffset, lightCount);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::IsTileLight(::UnityEngine::Rendering::VisibleLight visibleLight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "IsTileLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VisibleLight>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, visibleLight);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::InitTileDeferredMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "InitTileDeferredMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::InitStencilDeferredMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "InitStencilDeferredMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateSphereMesh() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateSphereMesh",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateHemisphereMesh() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateHemisphereMesh",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateFullscreenMesh() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateFullscreenMesh",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::Align(int32_t s, int32_t alignment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "Align", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, alignment);
}
inline uint32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::PackTileID(uint32_t i, uint32_t j) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "PackTileID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, i, j);
}
inline uint32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::FloatToUInt(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "FloatToUInt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, val);
}
inline uint32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::Half2ToUInt(float_t x, float_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "Half2ToUInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, x, y);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights::DeferredLights() {}
