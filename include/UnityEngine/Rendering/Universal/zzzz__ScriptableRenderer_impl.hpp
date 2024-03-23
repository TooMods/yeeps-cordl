#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StoreActionsOptimization_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugHandler_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClearFlag_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GizmoSubset_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
inline void GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock::setStaticF_beforeRendering(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beforeRendering",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock::getStaticF_beforeRendering() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beforeRendering",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock*>::get>();
}
inline void GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock::setStaticF_mainRenderingOpaque(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "mainRenderingOpaque",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock::getStaticF_mainRenderingOpaque() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "mainRenderingOpaque",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock*>::get>();
}
inline void GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock::setStaticF_mainRenderingTransparent(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "mainRenderingTransparent",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock::getStaticF_mainRenderingTransparent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "mainRenderingTransparent",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock*>::get>();
}
inline void GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock::setStaticF_afterRendering(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "afterRendering",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock::getStaticF_afterRendering() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "afterRendering",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock*>::get>();
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScriptableRenderer__Profiling__RenderBlock::__ScriptableRenderer__Profiling__RenderBlock() {}
inline void GlobalNamespace::__ScriptableRenderer__Profiling__RenderPass::setStaticF_configure(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "configure",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderPass*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* GlobalNamespace::__ScriptableRenderer__Profiling__RenderPass::getStaticF_configure() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "configure",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__Profiling__RenderPass*>::get>();
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScriptableRenderer__Profiling__RenderPass::__ScriptableRenderer__Profiling__RenderPass() {}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_setMRTAttachmentsList(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setMRTAttachmentsList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_setMRTAttachmentsList() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setMRTAttachmentsList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_setAttachmentList(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setAttachmentList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_setAttachmentList() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setAttachmentList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_configure(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "configure",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_configure() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "configure",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_execute(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "execute",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_execute() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "execute",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_setupFrameData(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupFrameData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_setupFrameData() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupFrameData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_setPerCameraShaderVariables(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setPerCameraShaderVariables",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_setPerCameraShaderVariables() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setPerCameraShaderVariables",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_sortRenderPasses(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "sortRenderPasses",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_sortRenderPasses() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "sortRenderPasses",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_setupLights(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupLights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_setupLights() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupLights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_setupCamera(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupCamera",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_setupCamera() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupCamera",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_addRenderPasses(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "addRenderPasses",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_addRenderPasses() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "addRenderPasses",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_clearRenderingState(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "clearRenderingState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_clearRenderingState() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "clearRenderingState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_internalStartRendering(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "internalStartRendering",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_internalStartRendering() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "internalStartRendering",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_internalFinishRendering(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "internalFinishRendering",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_internalFinishRendering() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "internalFinishRendering",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::setStaticF_drawGizmos(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "drawGizmos",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::getStaticF_drawGizmos() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "drawGizmos",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__ScriptableRenderer__Profiling::__ScriptableRenderer__Profiling() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor::*)(
    int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e20114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor::_ctor(int32_t width, int32_t height, int32_t sampleCount, int32_t rtID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, sampleCount, rtID);
}
// Ctor Parameters [CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "samples", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor::__ScriptableRenderer__RenderPassDescriptor(int32_t w, int32_t h, int32_t samples, int32_t depthID) noexcept {
  this->w = w;
  this->h = h;
  this->samples = samples;
  this->depthID = depthID;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor::__ScriptableRenderer__RenderPassDescriptor() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures.get_cameraStacking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::*)()>(
    &::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::get_cameraStacking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e26e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get(),
                                                 "get_cameraStacking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures.set_cameraStacking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::*)(bool)>(
    &::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::set_cameraStacking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e26e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get(), "set_cameraStacking",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures.get_msaa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::*)()>(
    &::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::get_msaa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e26e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get(),
                                                 "get_msaa", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures.set_msaa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::*)(bool)>(
    &::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::set_msaa)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e26e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get(), "set_msaa",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::*)()>(
    &::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e21964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::__cordl_internal_get__cameraStacking_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraStacking_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::__cordl_internal_get__cameraStacking_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraStacking_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::__cordl_internal_set__cameraStacking_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraStacking_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::__cordl_internal_get__msaa_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____msaa_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::__cordl_internal_get__msaa_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____msaa_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::__cordl_internal_set__msaa_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____msaa_k__BackingField = value;
}
inline bool UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::get_cameraStacking() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get(),
                                               "get_cameraStacking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::set_cameraStacking(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get(), "set_cameraStacking",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::get_msaa() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get(), "get_msaa",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::set_msaa(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get(), "set_msaa",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>());
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures::__ScriptableRenderer__RenderingFeatures() {}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock::setStaticF_BeforeRendering(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BeforeRendering",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock::getStaticF_BeforeRendering() {
  return ::cordl_internals::getStaticField<int32_t, "BeforeRendering",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock::setStaticF_MainRenderingOpaque(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MainRenderingOpaque",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock::getStaticF_MainRenderingOpaque() {
  return ::cordl_internals::getStaticField<int32_t, "MainRenderingOpaque",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock::setStaticF_MainRenderingTransparent(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MainRenderingTransparent",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock::getStaticF_MainRenderingTransparent() {
  return ::cordl_internals::getStaticField<int32_t, "MainRenderingTransparent",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock::setStaticF_AfterRendering(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AfterRendering",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock::getStaticF_AfterRendering() {
  return ::cordl_internals::getStaticField<int32_t, "AfterRendering",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassBlock::__ScriptableRenderer__RenderPassBlock() {}
//  Writing Method size for method: ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::*)(int32_t, int32_t)>(
    &::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e27050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange (
    ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::*)()>(&::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e23d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange>::get(), "GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::*)()>(
    &::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e240d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::*)()>(
    &::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e2706c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::*)()>(
    &::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e27074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::_ctor(int32_t begin, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, begin, end);
}
inline ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange>::get(), "GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_End", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::__ScriptableRenderer__RenderBlocks__BlockRange(int32_t m_Current, int32_t m_End) noexcept {
  this->m_Current = m_Current;
  this->m_End = m_End;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange::__ScriptableRenderer__RenderBlocks__BlockRange() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*)>(&::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2e22ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::*)()>(
    &::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e26ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks.FillBlockRanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*)>(&::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::FillBlockRanges)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2e26ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>::get(), "FillBlockRanges",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks.GetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::GetLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e231ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>::get(), "GetLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks.GetRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange (
    ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::*)(int32_t)>(&::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::GetRange)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2e23d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>::get(), "GetRange",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::_ctor(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activeRenderPassQueue);
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::FillBlockRanges(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>::get(), "FillBlockRanges",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activeRenderPassQueue);
}
inline int32_t UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::GetLength(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>::get(), "GetLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline ::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::GetRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>::get(), "GetRange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ScriptableRenderer__RenderBlocks__BlockRange, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "m_BlockEventLimits", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_BlockRanges", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BlockRangeLengths", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::__ScriptableRenderer__RenderBlocks(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent> m_BlockEventLimits, ::Unity::Collections::NativeArray_1<int32_t> m_BlockRanges,
    ::Unity::Collections::NativeArray_1<int32_t> m_BlockRangeLengths) noexcept {
  this->m_BlockEventLimits = m_BlockEventLimits;
  this->m_BlockRanges = m_BlockRanges;
  this->m_BlockRangeLengths = m_BlockRangeLengths;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks::__ScriptableRenderer__RenderBlocks() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_cameraDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e1c68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "get_cameraDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ResetNativeRenderPassFrameData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::ResetNativeRenderPassFrameData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2e1c6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "ResetNativeRenderPassFrameData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupNativeRenderPassFrameData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::Universal::CameraData, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupNativeRenderPassFrameData)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x2e1c7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                 "SetupNativeRenderPassFrameData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.UpdateFinalStoreActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::ArrayW<int32_t, ::Array<int32_t>*>, ::UnityEngine::Rendering::Universal::CameraData)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::UpdateFinalStoreActions)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2e1d13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "UpdateFinalStoreActions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetNativeRenderPassMRTAttachmentList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ByRef<::UnityEngine::Rendering::Universal::CameraData>, bool, ::UnityEngine::Rendering::ClearFlag)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::SetNativeRenderPassMRTAttachmentList)> {
  constexpr static std::size_t size = 0xa34;
  constexpr static std::size_t addrs = 0x2e1d358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetNativeRenderPassMRTAttachmentList",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.IsDepthOnlyRenderTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::RenderTexture*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::IsDepthOnlyRenderTexture)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e1e2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "IsDepthOnlyRenderTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetNativeRenderPassAttachmentList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ByRef<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Rendering::RenderTargetIdentifier,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::SetNativeRenderPassAttachmentList)> {
  constexpr static std::size_t size = 0xb0c;
  constexpr static std::size_t addrs = 0x2e1e33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetNativeRenderPassAttachmentList",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ConfigureNativeRenderPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::CameraData)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureNativeRenderPass)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x2e1ef74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ConfigureNativeRenderPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ExecuteNativeRenderPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::CameraData,
    ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteNativeRenderPass)> {
  constexpr static std::size_t size = 0xa6c;
  constexpr static std::size_t addrs = 0x2e1f20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ExecuteNativeRenderPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupInputAttachmentIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupInputAttachmentIndices)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2e1dfe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetupInputAttachmentIndices",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupTransientInputAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupTransientInputAttachments)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2e1e1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetupTransientInputAttachments",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetSubPassAttachmentIndicesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::GetSubPassAttachmentIndicesCount)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2e1fc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetSubPassAttachmentIndicesCount",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.AreAttachmentIndicesCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(
        &::UnityEngine::Rendering::Universal::ScriptableRenderer::AreAttachmentIndicesCompatible)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2e1fddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "AreAttachmentIndicesCompatible",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetValidColorAttachmentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (*)(::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>)>(
        &::UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidColorAttachmentCount)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2e1ffa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetValidColorAttachmentCount",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetValidInputAttachmentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidInputAttachmentCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2e1fed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetValidInputAttachmentCount",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.FindAttachmentDescriptorIndexInList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    int32_t, ::UnityEngine::Rendering::AttachmentDescriptor, ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::FindAttachmentDescriptorIndexInList)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2e1ee48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "FindAttachmentDescriptorIndexInList",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::AttachmentDescriptor>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.FindAttachmentDescriptorIndexInList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>)>(
        &::UnityEngine::Rendering::Universal::ScriptableRenderer::FindAttachmentDescriptorIndexInList)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2e1de74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "FindAttachmentDescriptorIndexInList",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetValidPassIndexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidPassIndexCount)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e1d0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetValidPassIndexCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.PassHasInputAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::PassHasInputAttachments)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2e1df58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "PassHasInputAttachments", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.CreateRenderPassHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Hash128 (*)(int32_t, int32_t, int32_t, int32_t, uint32_t)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::CreateRenderPassHash)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2e200e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "CreateRenderPassHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.CreateRenderPassHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Hash128 (*)(
    ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor, uint32_t)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::CreateRenderPassHash)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2e1d04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "CreateRenderPassHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.InitializeRenderPassDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor (
    ::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::CameraData, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::InitializeRenderPassDescriptor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2e1cf60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "InitializeRenderPassDescriptor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetDefaultGraphicsFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Rendering::Universal::CameraData)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::GetDefaultGraphicsFormat)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2e1dd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetDefaultGraphicsFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SupportedCameraStackingTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::SupportedCameraStackingTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e20120;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SupportsCameraStackingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::Universal::CameraRenderType)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SupportsCameraStackingType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e20128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SupportsCameraStackingType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraRenderType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_profilingExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProfilingSampler* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::get_profilingExecute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e20158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "get_profilingExecute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_profilingExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ProfilingSampler*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::set_profilingExecute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e20160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_profilingExecute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_DebugHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugHandler* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::get_DebugHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e20168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "get_DebugHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetCameraMatrices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::CameraData>, bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::SetCameraMatrices)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x2e20170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetCameraMatrices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetPerCameraShaderVariables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraShaderVariables)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x2e20684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetPerCameraShaderVariables",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetPerCameraBillboardProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraBillboardProperties)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2e20c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetPerCameraBillboardProperties",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.CalculateBillboardProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>,
                                                                                           ByRef<float_t>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::CalculateBillboardProperties)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2e20e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                 "CalculateBillboardProperties", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetPerCameraClippingPlaneProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraClippingPlaneProperties)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2e21210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetPerCameraClippingPlaneProperties",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetShaderTimeValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, float_t, float_t, float_t)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetShaderTimeValues)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2e214b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetShaderTimeValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_cameraColorTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraColorTarget)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2e1b7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "get_cameraColorTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetCameraColorFrontBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraColorFrontBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2e21694;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_cameraDepthTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepthTarget)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e216d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "get_cameraDepthTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_rendererFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* (
    ::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_rendererFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e2175c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "get_rendererFeatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_activeRenderPassQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* (
    ::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_activeRenderPassQueue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e21764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "get_activeRenderPassQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_supportedRenderingFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* (
    ::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_supportedRenderingFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e2176c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "get_supportedRenderingFeatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_supportedRenderingFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::set_supportedRenderingFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e21774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_supportedRenderingFeatures",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_unsupportedGraphicsDeviceTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> (
    ::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_unsupportedGraphicsDeviceTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e2177c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                 "get_unsupportedGraphicsDeviceTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_unsupportedGraphicsDeviceTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*>)>(
        &::UnityEngine::Rendering::Universal::ScriptableRenderer::set_unsupportedGraphicsDeviceTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e21784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_unsupportedGraphicsDeviceTypes",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ConfigureActiveTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureActiveTarget)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2e2178c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ConfigureActiveTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_useDepthPriming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::get_useDepthPriming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e21928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "get_useDepthPriming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_useDepthPriming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::set_useDepthPriming)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e21930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_useDepthPriming",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_stripShadowsOffVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::get_stripShadowsOffVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e2193c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "get_stripShadowsOffVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_stripShadowsOffVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::set_stripShadowsOffVariants)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e21944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_stripShadowsOffVariants",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_stripAdditionalLightOffVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::get_stripAdditionalLightOffVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e21950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                 "get_stripAdditionalLightOffVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_stripAdditionalLightOffVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::set_stripAdditionalLightOffVariants)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e21958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_stripAdditionalLightOffVariants",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRendererData*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::_ctor)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x2e1ba88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRendererData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::Dispose)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2e21bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e21ce0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ConfigureCameraTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraTarget)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e21ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ConfigureCameraTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ConfigureCameraTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2e21d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ConfigureCameraTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ConfigureCameraColorTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraColorTarget)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e21d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ConfigureCameraColorTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::Setup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupLights)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e21d60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupCullingParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ByRef<::UnityEngine::Rendering::ScriptableCullingParameters>, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupCullingParameters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e21d64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.FinishRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::FinishRendering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e21d68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::Execute)> {
  constexpr static std::size_t size = 0xc74;
  constexpr static std::size_t addrs = 0x2e21d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.EnqueuePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::EnqueuePass)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2e236cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "EnqueuePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetCameraClearFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ClearFlag (*)(ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraClearFlag)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2e23780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetCameraClearFlag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.OnPreCullRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::OnPreCullRenderPasses)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e238dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "OnPreCullRenderPasses", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.AddRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::AddRenderPasses)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x2e239a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "AddRenderPasses", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ClearRenderingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::ClearRenderingState)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x2e22bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ClearRenderingState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::Universal::CameraRenderType)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::Clear)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2e21974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraRenderType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ExecuteBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    int32_t, ByRef<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>, ::UnityEngine::Rendering::ScriptableRenderContext,
    ByRef<::UnityEngine::Rendering::Universal::RenderingData>, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteBlock)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2e231b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ExecuteBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.IsRenderPassEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::IsRenderPassEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e240ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "IsRenderPassEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ExecuteRenderPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteRenderPass)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x2e23d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ExecuteRenderPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetRenderPassAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderPassAttachments)> {
  constexpr static std::size_t size = 0x10cc;
  constexpr static std::size_t addrs = 0x2e2411c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderPassAttachments", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.BeginXRRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::BeginXRRendering)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e232c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "BeginXRRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.EndXRRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::EndXRRendering)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2e23380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "EndXRRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier,
                         ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2e1b460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier,
                         ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(
        &::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2e25308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2e25808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag,
    ::UnityEngine::Color)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2e25620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2e251e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SwapColorBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::SwapColorBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e258ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.EnableSwapBufferMSAA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::EnableSwapBufferMSAA)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e258f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.DrawGizmos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*, ::UnityEngine::Rendering::GizmoSubset)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::DrawGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e258f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "DrawGizmos", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GizmoSubset>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.DrawWireOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::DrawWireOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e258f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "DrawWireOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.InternalStartRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::InternalStartRendering)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2e229e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "InternalStartRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.InternalFinishRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::InternalFinishRendering)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2e2342c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "InternalFinishRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SortStable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderer::SortStable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2e22ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SortStable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::ScriptableRenderer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::ScriptableRenderer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_LastBeginSubpassPassIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastBeginSubpassPassIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_LastBeginSubpassPassIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastBeginSubpassPassIndex;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_LastBeginSubpassPassIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastBeginSubpassPassIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>*&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_MergeableRenderPassesMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MergeableRenderPassesMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>*> const&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_MergeableRenderPassesMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MergeableRenderPassesMap;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_MergeableRenderPassesMap(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MergeableRenderPassesMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_MergeableRenderPassesMapArrays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MergeableRenderPassesMapArrays;
}
constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_MergeableRenderPassesMapArrays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MergeableRenderPassesMapArrays;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_MergeableRenderPassesMapArrays(
    ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MergeableRenderPassesMapArrays)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*>& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_PassIndexToPassHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassIndexToPassHash;
}
constexpr ::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*> const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_PassIndexToPassHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassIndexToPassHash;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_PassIndexToPassHash(::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassIndexToPassHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_RenderPassesAttachmentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPassesAttachmentCount;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>*> const&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_RenderPassesAttachmentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPassesAttachmentCount;
}
constexpr void
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_RenderPassesAttachmentCount(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderPassesAttachmentCount)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveColorAttachmentDescriptors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveColorAttachmentDescriptors;
}
constexpr ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> const&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveColorAttachmentDescriptors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveColorAttachmentDescriptors;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_ActiveColorAttachmentDescriptors(
    ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActiveColorAttachmentDescriptors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::AttachmentDescriptor& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveDepthAttachmentDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveDepthAttachmentDescriptor;
}
constexpr ::UnityEngine::Rendering::AttachmentDescriptor const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveDepthAttachmentDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveDepthAttachmentDescriptor;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_ActiveDepthAttachmentDescriptor(::UnityEngine::Rendering::AttachmentDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveDepthAttachmentDescriptor = value;
}
constexpr ::ArrayW<bool, ::Array<bool>*>& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_IsActiveColorAttachmentTransient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsActiveColorAttachmentTransient;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_IsActiveColorAttachmentTransient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsActiveColorAttachmentTransient;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_IsActiveColorAttachmentTransient(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IsActiveColorAttachmentTransient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FinalColorStoreAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalColorStoreAction;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> const&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FinalColorStoreAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalColorStoreAction;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_FinalColorStoreAction(
    ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FinalColorStoreAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FinalDepthStoreAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalDepthStoreAction;
}
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FinalDepthStoreAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalDepthStoreAction;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_FinalDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FinalDepthStoreAction = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__profilingExecute_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profilingExecute_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__profilingExecute_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profilingExecute_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__profilingExecute_k__BackingField(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____profilingExecute_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__DebugHandler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DebugHandler_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugHandler*> const&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__DebugHandler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DebugHandler_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__DebugHandler_k__BackingField(::UnityEngine::Rendering::Universal::DebugHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DebugHandler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__supportedRenderingFeatures_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedRenderingFeatures_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*> const&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__supportedRenderingFeatures_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedRenderingFeatures_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__supportedRenderingFeatures_k__BackingField(
    ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____supportedRenderingFeatures_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*>&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unsupportedGraphicsDeviceTypes_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> const&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unsupportedGraphicsDeviceTypes_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__unsupportedGraphicsDeviceTypes_k__BackingField(
    ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unsupportedGraphicsDeviceTypes_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_StoreActionsOptimizationSetting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StoreActionsOptimizationSetting;
}
constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_StoreActionsOptimizationSetting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StoreActionsOptimizationSetting;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_StoreActionsOptimizationSetting(::UnityEngine::Rendering::Universal::StoreActionsOptimization value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StoreActionsOptimizationSetting = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveRenderPassQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveRenderPassQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*> const&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveRenderPassQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveRenderPassQueue;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_ActiveRenderPassQueue(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActiveRenderPassQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_RendererFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererFeatures;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*> const&
UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_RendererFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererFeatures;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_RendererFeatures(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RendererFeatures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraColorTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraColorTarget;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraColorTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraColorTarget;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_CameraColorTarget(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraColorTarget = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraDepthTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthTarget;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraDepthTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthTarget;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_CameraDepthTarget(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraDepthTarget = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraResolveTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraResolveTarget;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraResolveTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraResolveTarget;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_CameraResolveTarget(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraResolveTarget = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FirstTimeCameraColorTargetIsBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstTimeCameraColorTargetIsBound;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FirstTimeCameraColorTargetIsBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstTimeCameraColorTargetIsBound;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_FirstTimeCameraColorTargetIsBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstTimeCameraColorTargetIsBound = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstTimeCameraDepthTargetIsBound;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstTimeCameraDepthTargetIsBound;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_FirstTimeCameraDepthTargetIsBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstTimeCameraDepthTargetIsBound = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_IsPipelineExecuting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsPipelineExecuting;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_IsPipelineExecuting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsPipelineExecuting;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_IsPipelineExecuting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsPipelineExecuting = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_isCameraColorTargetValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCameraColorTargetValid;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_isCameraColorTargetValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCameraColorTargetValid;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_isCameraColorTargetValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCameraColorTargetValid = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_disableNativeRenderPassInFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableNativeRenderPassInFeatures;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_disableNativeRenderPassInFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableNativeRenderPassInFeatures;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_disableNativeRenderPassInFeatures(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disableNativeRenderPassInFeatures = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_useRenderPassEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useRenderPassEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_useRenderPassEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useRenderPassEnabled;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_useRenderPassEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useRenderPassEnabled = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__useDepthPriming_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDepthPriming_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__useDepthPriming_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDepthPriming_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__useDepthPriming_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useDepthPriming_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__stripShadowsOffVariants_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stripShadowsOffVariants_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__stripShadowsOffVariants_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stripShadowsOffVariants_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__stripShadowsOffVariants_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stripShadowsOffVariants_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stripAdditionalLightOffVariants_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stripAdditionalLightOffVariants_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__stripAdditionalLightOffVariants_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stripAdditionalLightOffVariants_k__BackingField = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_current(::UnityEngine::Rendering::Universal::ScriptableRenderer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::ScriptableRenderer*, "current",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(value));
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_current() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::ScriptableRenderer*, "current",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_UseOptimizedStoreActions(bool value) {
  ::cordl_internals::setStaticField<bool, "m_UseOptimizedStoreActions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_UseOptimizedStoreActions() {
  return ::cordl_internals::getStaticField<bool, "m_UseOptimizedStoreActions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_ActiveColorAttachments(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>, "m_ActiveColorAttachments",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>(
      std::forward<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>
UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_ActiveColorAttachments() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>, "m_ActiveColorAttachments",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_ActiveDepthAttachment(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderTargetIdentifier, "m_ActiveDepthAttachment",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>(
      std::forward<::UnityEngine::Rendering::RenderTargetIdentifier>(value));
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_ActiveDepthAttachment() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderTargetIdentifier, "m_ActiveDepthAttachment",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_ActiveColorStoreActions(
    ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>, "m_ActiveColorStoreActions",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>(
      std::forward<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>
UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_ActiveColorStoreActions() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>, "m_ActiveColorStoreActions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_ActiveDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderBufferStoreAction, "m_ActiveDepthStoreAction",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>(
      std::forward<::UnityEngine::Rendering::RenderBufferStoreAction>(value));
}
inline ::UnityEngine::Rendering::RenderBufferStoreAction UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_ActiveDepthStoreAction() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderBufferStoreAction, "m_ActiveDepthStoreAction",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_TrimmedColorAttachmentCopies(
    ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
             ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>
        value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                                             ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>,
                                    "m_TrimmedColorAttachmentCopies", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>(
      std::forward<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                            ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>
UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_TrimmedColorAttachmentCopies() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                                                    ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>,
                                           "m_TrimmedColorAttachmentCopies", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_s_Planes(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>, "s_Planes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>(
      std::forward<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>(value));
}
inline ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_s_Planes() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>, "s_Planes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_s_VectorPlanes(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, "s_VectorPlanes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_s_VectorPlanes() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, "s_VectorPlanes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get>();
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "get_cameraDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ResetNativeRenderPassFrameData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "ResetNativeRenderPassFrameData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupNativeRenderPassFrameData(::UnityEngine::Rendering::Universal::CameraData cameraData, bool isRenderPassEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                               "SetupNativeRenderPassFrameData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData, isRenderPassEnabled);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::UpdateFinalStoreActions(::ArrayW<int32_t, ::Array<int32_t>*> currentMergeablePasses,
                                                                                           ::UnityEngine::Rendering::Universal::CameraData cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "UpdateFinalStoreActions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentMergeablePasses, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetNativeRenderPassMRTAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                                                                                        ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                                                                                        bool needCustomCameraColorClear, ::UnityEngine::Rendering::ClearFlag clearFlag) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetNativeRenderPassMRTAttachmentList",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderPass, cameraData, needCustomCameraColorClear, clearFlag);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::IsDepthOnlyRenderTexture(::UnityEngine::RenderTexture* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "IsDepthOnlyRenderTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetNativeRenderPassAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                                                                                     ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                                                                                     ::UnityEngine::Rendering::RenderTargetIdentifier passColorAttachment,
                                                                                                     ::UnityEngine::Rendering::RenderTargetIdentifier passDepthAttachment,
                                                                                                     ::UnityEngine::Rendering::ClearFlag finalClearFlag, ::UnityEngine::Color finalClearColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetNativeRenderPassAttachmentList",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderPass, cameraData, passColorAttachment, passDepthAttachment, finalClearFlag, finalClearColor);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureNativeRenderPass(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                             ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                                                                             ::UnityEngine::Rendering::Universal::CameraData cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ConfigureNativeRenderPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderPass, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteNativeRenderPass(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                           ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                                                                           ::UnityEngine::Rendering::Universal::CameraData cameraData,
                                                                                           ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ExecuteNativeRenderPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderPass, cameraData, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupInputAttachmentIndices(::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetupInputAttachmentIndices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pass);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupTransientInputAttachments(int32_t attachmentCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetupTransientInputAttachments",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attachmentCount);
}
inline uint32_t UnityEngine::Rendering::Universal::ScriptableRenderer::GetSubPassAttachmentIndicesCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetSubPassAttachmentIndicesCount",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, pass);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::AreAttachmentIndicesCompatible(::UnityEngine::Rendering::Universal::ScriptableRenderPass* lastSubPass,
                                                                                                  ::UnityEngine::Rendering::Universal::ScriptableRenderPass* currentSubPass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "AreAttachmentIndicesCompatible",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lastSubPass, currentSubPass);
}
inline uint32_t UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidColorAttachmentCount(
    ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> colorAttachments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetValidColorAttachmentCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, colorAttachments);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidInputAttachmentCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetValidInputAttachmentCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, renderPass);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer::FindAttachmentDescriptorIndexInList(
    int32_t attachmentIdx, ::UnityEngine::Rendering::AttachmentDescriptor attachmentDescriptor,
    ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> attachmentDescriptors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "FindAttachmentDescriptorIndexInList",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::AttachmentDescriptor>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, attachmentIdx, attachmentDescriptor, attachmentDescriptors);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer::FindAttachmentDescriptorIndexInList(
    ::UnityEngine::Rendering::RenderTargetIdentifier target, ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> attachmentDescriptors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "FindAttachmentDescriptorIndexInList",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, target, attachmentDescriptors);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidPassIndexCount(::ArrayW<int32_t, ::Array<int32_t>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetValidPassIndexCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::PassHasInputAttachments(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "PassHasInputAttachments", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, renderPass);
}
inline ::UnityEngine::Hash128 UnityEngine::Rendering::Universal::ScriptableRenderer::CreateRenderPassHash(int32_t width, int32_t height, int32_t depthID, int32_t sample, uint32_t hashIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "CreateRenderPassHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128, false>(nullptr, ___internal_method, width, height, depthID, sample, hashIndex);
}
inline ::UnityEngine::Hash128 UnityEngine::Rendering::Universal::ScriptableRenderer::CreateRenderPassHash(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor desc,
                                                                                                          uint32_t hashIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "CreateRenderPassHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128, false>(nullptr, ___internal_method, desc, hashIndex);
}
inline ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor
UnityEngine::Rendering::Universal::ScriptableRenderer::InitializeRenderPassDescriptor(::UnityEngine::Rendering::Universal::CameraData cameraData,
                                                                                      ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "InitializeRenderPassDescriptor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderPassDescriptor, false>(this, ___internal_method, cameraData, renderPass);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat
UnityEngine::Rendering::Universal::ScriptableRenderer::GetDefaultGraphicsFormat(::UnityEngine::Rendering::Universal::CameraData cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetDefaultGraphicsFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat, false>(nullptr, ___internal_method, cameraData);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer::SupportedCameraStackingTypes() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::SupportsCameraStackingType(::UnityEngine::Rendering::Universal::CameraRenderType cameraRenderType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SupportsCameraStackingType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraRenderType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cameraRenderType);
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer::get_profilingExecute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "get_profilingExecute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProfilingSampler*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_profilingExecute(::UnityEngine::Rendering::ProfilingSampler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_profilingExecute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugHandler* UnityEngine::Rendering::Universal::ScriptableRenderer::get_DebugHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "get_DebugHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugHandler*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                                                                     bool setInverseMatrices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetCameraMatrices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, cameraData, setInverseMatrices);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraShaderVariables(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                               ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetPerCameraShaderVariables", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraBillboardProperties(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                   ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetPerCameraBillboardProperties",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::CalculateBillboardProperties(ByRef<::UnityEngine::Matrix4x4> worldToCameraMatrix, ByRef<::UnityEngine::Vector3> billboardTangent,
                                                                                                ByRef<::UnityEngine::Vector3> billboardNormal, ByRef<float_t> cameraXZAngle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "CalculateBillboardProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, worldToCameraMatrix, billboardTangent, billboardNormal, cameraXZAngle);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraClippingPlaneProperties(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                       ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetPerCameraClippingPlaneProperties",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetShaderTimeValues(::UnityEngine::Rendering::CommandBuffer* cmd, float_t time, float_t deltaTime, float_t smoothDeltaTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetShaderTimeValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, time, deltaTime, smoothDeltaTime);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraColorTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "get_cameraColorTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepthTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "get_cameraDepthTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* UnityEngine::Rendering::Universal::ScriptableRenderer::get_rendererFeatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "get_rendererFeatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* UnityEngine::Rendering::Universal::ScriptableRenderer::get_activeRenderPassQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "get_activeRenderPassQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* UnityEngine::Rendering::Universal::ScriptableRenderer::get_supportedRenderingFeatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "get_supportedRenderingFeatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_supportedRenderingFeatures(::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_supportedRenderingFeatures",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderingFeatures*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*>
UnityEngine::Rendering::Universal::ScriptableRenderer::get_unsupportedGraphicsDeviceTypes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                               "get_unsupportedGraphicsDeviceTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_unsupportedGraphicsDeviceTypes(
    ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_unsupportedGraphicsDeviceTypes",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureActiveTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment,
                                                                                         ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ConfigureActiveTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, colorAttachment, depthAttachment);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::get_useDepthPriming() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "get_useDepthPriming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_useDepthPriming(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_useDepthPriming",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::get_stripShadowsOffVariants() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "get_stripShadowsOffVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_stripShadowsOffVariants(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_stripShadowsOffVariants",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::get_stripAdditionalLightOffVariants() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                               "get_stripAdditionalLightOffVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_stripAdditionalLightOffVariants(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "set_stripAdditionalLightOffVariants",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::ScriptableRenderer::New_ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(data));
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::_ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRendererData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorTarget,
                                                                                         ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ConfigureCameraTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorTarget, depthTarget);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorTarget,
                                                                                         ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget,
                                                                                         ::UnityEngine::Rendering::RenderTargetIdentifier resolveTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ConfigureCameraTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorTarget, depthTarget, resolveTarget);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraColorTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ConfigureCameraColorTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorTarget);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::Setup(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                         ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                               ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupCullingParameters(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                                                          ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cullingParameters, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                           ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::EnqueuePass(::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "EnqueuePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pass);
}
inline ::UnityEngine::Rendering::ClearFlag UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraClearFlag(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "GetCameraClearFlag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ClearFlag, false>(nullptr, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::OnPreCullRenderPasses(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "OnPreCullRenderPasses", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::AddRenderPasses(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "AddRenderPasses", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ClearRenderingState(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ClearRenderingState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::Clear(::UnityEngine::Rendering::Universal::CameraRenderType cameraType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraRenderType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraType);
}
/// @param submit: bool (default: false)
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteBlock(int32_t blockIndex, ByRef<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks> renderBlocks,
                                                                                ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, bool submit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ExecuteBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::__ScriptableRenderer__RenderBlocks>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, blockIndex, renderBlocks, context, renderingData, submit);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::IsRenderPassEnabled(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "IsRenderPassEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, renderPass);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteRenderPass(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                     ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                                                                     ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "ExecuteRenderPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderPass, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderPassAttachments(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                            ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                                                                            ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderPassAttachments", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderPass, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::BeginXRRendering(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                    ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "BeginXRRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, context, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::EndXRRendering(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                  ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "EndXRRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, context, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment,
                                                                                   ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                                                   ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorAttachment, depthAttachment, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment,
                                                                                   ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                                                   ::UnityEngine::Color clearColor, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                                                   ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorAttachment, depthAttachment, clearFlag, clearColor, colorStoreAction, depthStoreAction);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment,
                                                                                   ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                                                                   ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlags,
                                                                                   ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorAttachment, colorLoadAction, colorStoreAction, clearFlags, clearColor);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment,
                                                                                   ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                                                                   ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                                                   ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment,
                                                                                   ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                                                   ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlags,
                                                                                   ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorAttachment, colorLoadAction, colorStoreAction, depthAttachment, depthLoadAction, depthStoreAction,
                                                          clearFlags, clearColor);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(
    ::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorAttachments,
    ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ClearFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, colorAttachments, depthAttachment, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::EnableSwapBufferMSAA(bool enable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enable);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::DrawGizmos(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera,
                                                                              ::UnityEngine::Rendering::GizmoSubset gizmoSubset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "DrawGizmos", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GizmoSubset>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, camera, gizmoSubset);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::DrawWireOverlay(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "DrawWireOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, camera);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::InternalStartRendering(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                          ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "InternalStartRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::InternalFinishRendering(::UnityEngine::Rendering::ScriptableRenderContext context, bool resolveFinalTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "InternalFinishRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, resolveFinalTarget);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SortStable(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(), "SortStable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer::ScriptableRenderer() {}
