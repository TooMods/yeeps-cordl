#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPasses_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__AdditionalLightsShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ColorGradingLutPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyColorPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DepthNormalOnlyPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DepthOnlyPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__FinalBlitPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ForwardLights_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__GBufferPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__MainLightShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__MotionVectorRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__PostProcessPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__RenderTargetBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__TileDepthRangePass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CapturePass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DrawSkyboxPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__InvokeOnRenderObjectCallbackPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TransparentSettingsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XROcclusionMeshPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
inline void UnityEngine::Rendering::Universal::__UniversalRenderer__Profiling::setStaticF_createCameraRenderTarget(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "createCameraRenderTarget",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRenderer__Profiling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::__UniversalRenderer__Profiling::getStaticF_createCameraRenderTarget() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "createCameraRenderTarget",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRenderer__Profiling*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__UniversalRenderer__Profiling::__UniversalRenderer__Profiling() {}
// Ctor Parameters [CppParam { name: "requiresDepthTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "requiresDepthPrepass", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "requiresNormalsTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "requiresColorTexture", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "requiresColorTextureCreated", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "requiresMotionVectors", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "requiresDepthNormalAtEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "requiresDepthTextureEarliestEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary::__UniversalRenderer__RenderPassInputSummary(
    bool requiresDepthTexture, bool requiresDepthPrepass, bool requiresNormalsTexture, bool requiresColorTexture, bool requiresColorTextureCreated, bool requiresMotionVectors,
    ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalAtEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthTextureEarliestEvent) noexcept {
  this->requiresDepthTexture = requiresDepthTexture;
  this->requiresDepthPrepass = requiresDepthPrepass;
  this->requiresNormalsTexture = requiresNormalsTexture;
  this->requiresColorTexture = requiresColorTexture;
  this->requiresColorTextureCreated = requiresColorTextureCreated;
  this->requiresMotionVectors = requiresMotionVectors;
  this->requiresDepthNormalAtEvent = requiresDepthNormalAtEvent;
  this->requiresDepthTextureEarliestEvent = requiresDepthTextureEarliestEvent;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary::__UniversalRenderer__RenderPassInputSummary() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__UniversalRenderer____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__UniversalRenderer____c::*)()>(
    &::UnityEngine::Rendering::Universal::__UniversalRenderer____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28829ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__UniversalRenderer____c._Setup_b__80_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::__UniversalRenderer____c::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::__UniversalRenderer____c::_Setup_b__80_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28829f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*>::get(), "<Setup>b__80_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::__UniversalRenderer____c::setStaticF___9(::UnityEngine::Rendering::Universal::__UniversalRenderer____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*>(value));
}
inline ::UnityEngine::Rendering::Universal::__UniversalRenderer____c* UnityEngine::Rendering::Universal::__UniversalRenderer____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*>::get>();
}
inline void UnityEngine::Rendering::Universal::__UniversalRenderer____c::setStaticF___9__80_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__80_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*>::get>(
      std::forward<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* UnityEngine::Rendering::Universal::__UniversalRenderer____c::getStaticF___9__80_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__80_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*>::get>();
}
inline ::UnityEngine::Rendering::Universal::__UniversalRenderer____c* UnityEngine::Rendering::Universal::__UniversalRenderer____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*>());
}
inline void UnityEngine::Rendering::Universal::__UniversalRenderer____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::__UniversalRenderer____c::_Setup_b__80_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRenderer____c*>::get(), "<Setup>b__80_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__UniversalRenderer____c::__UniversalRenderer____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SupportedCameraStackingTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SupportedCameraStackingTypes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2734e60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_renderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_renderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                               "get_renderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_actualRenderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_actualRenderingMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x272a3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                               "get_actualRenderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_accurateGbufferNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_accurateGbufferNormals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2734e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                               "get_accurateGbufferNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_depthPrimingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DepthPrimingMode (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_depthPrimingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                               "get_depthPrimingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.set_depthPrimingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::DepthPrimingMode)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::set_depthPrimingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "set_depthPrimingMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DepthPrimingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_colorGradingLutPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* (
    ::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::get_colorGradingLutPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                               "get_colorGradingLutPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_postProcessPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Internal::PostProcessPass* (
    ::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::get_postProcessPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                               "get_postProcessPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_finalPostProcessPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Internal::PostProcessPass* (
    ::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::get_finalPostProcessPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                               "get_finalPostProcessPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_colorGradingLut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (
    ::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::get_colorGradingLut)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2734ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                               "get_colorGradingLut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_deferredLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Internal::DeferredLights* (
    ::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::get_deferredLights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2734ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                               "get_deferredLights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsRunningXRMobile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::IsRunningXRMobile)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2734ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                               "IsRunningXRMobile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalRendererData*)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::_ctor)> {
  constexpr static std::size_t size = 0xe00;
  constexpr static std::size_t addrs = 0x2735044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::Dispose)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2735e44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupFinalPassDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::SetupFinalPassDebug)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2735f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "SetupFinalPassDebug", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsDepthPrimingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::IsDepthPrimingEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2736184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "IsDepthPrimingEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::Setup)> {
  constexpr static std::size_t size = 0x1934;
  constexpr static std::size_t addrs = 0x27362f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::SetupLights)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27388f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupCullingParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters>, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderer::SetupCullingParameters)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2738954;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.FinishRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::FinishRendering)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2738b2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.EnqueueDeferred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ByRef<::UnityEngine::Rendering::Universal::RenderingData>, bool, bool, bool, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::EnqueueDeferred)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2738628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "EnqueueDeferred", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.GetRenderPassInputs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary (
    ::UnityEngine::Rendering::Universal::UniversalRenderer::*)(ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::GetRenderPassInputs)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2737c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "GetRenderPassInputs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsGLESDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::IsGLESDevice)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2738cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                               "IsGLESDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateCameraRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::RenderTextureDescriptor>, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraRenderTarget)> {
  constexpr static std::size_t size = 0x684;
  constexpr static std::size_t addrs = 0x2737fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "CreateCameraRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.PlatformRequiresExplicitMsaaResolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::PlatformRequiresExplicitMsaaResolve)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2738cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                 "PlatformRequiresExplicitMsaaResolve", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RequiresIntermediateColorTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::RequiresIntermediateColorTexture)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2737df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "RequiresIntermediateColorTexture",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CanCopyDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CanCopyDepth)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2736214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "CanCopyDepth", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SwapColorBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SwapColorBuffer)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2738d28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.GetCameraColorFrontBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::GetCameraColorFrontBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2738f98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.EnableSwapBufferMSAA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::EnableSwapBufferMSAA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738fe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 13));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrepass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrepass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrepass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrepass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DepthPrepass(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DepthPrepass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthNormalPrepass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthNormalPrepass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthNormalPrepass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthNormalPrepass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DepthNormalPrepass(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DepthNormalPrepass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_PrimedDepthCopyPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimedDepthCopyPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_PrimedDepthCopyPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimedDepthCopyPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_PrimedDepthCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PrimedDepthCopyPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MotionVectorPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MotionVectorPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_MotionVectorPass(::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MotionVectorPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MainLightShadowCasterPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowCasterPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MainLightShadowCasterPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowCasterPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_MainLightShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MainLightShadowCasterPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_AdditionalLightsShadowCasterPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowCasterPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_AdditionalLightsShadowCasterPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowCasterPass;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_AdditionalLightsShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightsShadowCasterPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_GBufferPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::GBufferPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_GBufferPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_GBufferPass(::UnityEngine::Rendering::Universal::Internal::GBufferPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GBufferPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_GBufferCopyDepthPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferCopyDepthPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_GBufferCopyDepthPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferCopyDepthPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_GBufferCopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GBufferCopyDepthPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TileDepthRangePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDepthRangePass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TileDepthRangePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDepthRangePass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_TileDepthRangePass(::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TileDepthRangePass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TileDepthRangeExtraPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDepthRangeExtraPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TileDepthRangeExtraPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDepthRangeExtraPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_TileDepthRangeExtraPass(::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TileDepthRangeExtraPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DeferredPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DeferredPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DeferredPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DeferredPass(::UnityEngine::Rendering::Universal::Internal::DeferredPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeferredPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderOpaqueForwardOnlyPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOpaqueForwardOnlyPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderOpaqueForwardOnlyPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOpaqueForwardOnlyPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderOpaqueForwardOnlyPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderOpaqueForwardOnlyPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderOpaqueForwardPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOpaqueForwardPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderOpaqueForwardPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOpaqueForwardPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderOpaqueForwardPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderOpaqueForwardPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DrawSkyboxPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DrawSkyboxPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSkyboxPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DrawSkyboxPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DrawSkyboxPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSkyboxPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DrawSkyboxPass(::UnityEngine::Rendering::Universal::DrawSkyboxPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DrawSkyboxPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyDepthPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyDepthPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CopyDepthPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyColorPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyColorPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyColorPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyColorPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CopyColorPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CopyColorPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::TransparentSettingsPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TransparentSettingsPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparentSettingsPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TransparentSettingsPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TransparentSettingsPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparentSettingsPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_TransparentSettingsPass(::UnityEngine::Rendering::Universal::TransparentSettingsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransparentSettingsPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderTransparentForwardPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderTransparentForwardPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderTransparentForwardPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderTransparentForwardPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderTransparentForwardPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderTransparentForwardPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_OnRenderObjectCallbackPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRenderObjectCallbackPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_OnRenderObjectCallbackPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRenderObjectCallbackPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_OnRenderObjectCallbackPass(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnRenderObjectCallbackPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_FinalBlitPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalBlitPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_FinalBlitPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalBlitPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_FinalBlitPass(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FinalBlitPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::CapturePass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CapturePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CapturePass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::CapturePass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CapturePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CapturePass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CapturePass(::UnityEngine::Rendering::Universal::CapturePass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CapturePass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_XROcclusionMeshPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XROcclusionMeshPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_XROcclusionMeshPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XROcclusionMeshPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_XROcclusionMeshPass(::UnityEngine::Rendering::Universal::XROcclusionMeshPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_XROcclusionMeshPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_XRCopyDepthPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRCopyDepthPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_XRCopyDepthPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRCopyDepthPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_XRCopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_XRCopyDepthPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ColorBufferSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorBufferSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ColorBufferSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorBufferSystem;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ColorBufferSystem(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ColorBufferSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ActiveCameraColorAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCameraColorAttachment;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ActiveCameraColorAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCameraColorAttachment;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ActiveCameraColorAttachment(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveCameraColorAttachment = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ColorFrontBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorFrontBuffer;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ColorFrontBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorFrontBuffer;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ColorFrontBuffer(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorFrontBuffer = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ActiveCameraDepthAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCameraDepthAttachment;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ActiveCameraDepthAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCameraDepthAttachment;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ActiveCameraDepthAttachment(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveCameraDepthAttachment = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraDepthAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthAttachment;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraDepthAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthAttachment;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CameraDepthAttachment(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraDepthAttachment = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTexture;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DepthTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthTexture = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_NormalsTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalsTexture;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_NormalsTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalsTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_NormalsTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NormalsTexture = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_OpaqueColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueColor;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_OpaqueColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueColor;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_OpaqueColor(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpaqueColor = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthInfoTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthInfoTexture;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthInfoTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthInfoTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DepthInfoTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthInfoTexture = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TileDepthInfoTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDepthInfoTexture;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TileDepthInfoTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDepthInfoTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_TileDepthInfoTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TileDepthInfoTexture = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ForwardLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardLights;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::ForwardLights*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ForwardLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardLights;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ForwardLights(::UnityEngine::Rendering::Universal::Internal::ForwardLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ForwardLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DeferredLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DeferredLights*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DeferredLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeferredLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingMode;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderingMode(::UnityEngine::Rendering::Universal::RenderingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrimingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingMode;
}
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrimingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthPrimingMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyDepthMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMode;
}
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyDepthMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CopyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyDepthMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrimingRecommended() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingRecommended;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrimingRecommended() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingRecommended;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DepthPrimingRecommended(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthPrimingRecommended = value;
}
constexpr ::UnityEngine::Rendering::StencilState& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DefaultStencilState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr ::UnityEngine::Rendering::StencilState const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DefaultStencilState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::StencilState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultStencilState = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_LightCookieManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LightCookieManager*> const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_LightCookieManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LightCookieManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_IntermediateTextureMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntermediateTextureMode;
}
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_IntermediateTextureMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntermediateTextureMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_IntermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IntermediateTextureMode = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_BlitMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_BlitMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BlitMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyDepthMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyDepthMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CopyDepthMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CopyDepthMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_SamplingMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_SamplingMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SamplingMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TileDepthInfoMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDepthInfoMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TileDepthInfoMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDepthInfoMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_TileDepthInfoMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TileDepthInfoMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TileDeferredMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDeferredMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TileDeferredMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileDeferredMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_TileDeferredMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TileDeferredMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_StencilDeferredMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_StencilDeferredMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_StencilDeferredMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StencilDeferredMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraMotionVecMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraMotionVecMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraMotionVecMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraMotionVecMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CameraMotionVecMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraMotionVecMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ObjectMotionVecMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectMotionVecMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ObjectMotionVecMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectMotionVecMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ObjectMotionVecMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ObjectMotionVecMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_PostProcessPasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessPasses;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_PostProcessPasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessPasses;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_PostProcessPasses(::UnityEngine::Rendering::Universal::PostProcessPasses value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostProcessPasses = value;
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_k_DepthNormalsOnly(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "k_DepthNormalsOnly",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_k_DepthNormalsOnly() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "k_DepthNormalsOnly",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_displaySubsystemList(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "displaySubsystemList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_displaySubsystemList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "displaySubsystemList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get>();
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderer::SupportedCameraStackingTypes() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::UniversalRenderer::get_renderingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                             "get_renderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::UniversalRenderer::get_actualRenderingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                             "get_actualRenderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::get_accurateGbufferNormals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                             "get_accurateGbufferNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DepthPrimingMode UnityEngine::Rendering::Universal::UniversalRenderer::get_depthPrimingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                             "get_depthPrimingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DepthPrimingMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "set_depthPrimingMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DepthPrimingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* UnityEngine::Rendering::Universal::UniversalRenderer::get_colorGradingLutPass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                             "get_colorGradingLutPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* UnityEngine::Rendering::Universal::UniversalRenderer::get_postProcessPass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                             "get_postProcessPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* UnityEngine::Rendering::Universal::UniversalRenderer::get_finalPostProcessPass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                             "get_finalPostProcessPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::UniversalRenderer::get_colorGradingLut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                             "get_colorGradingLut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights* UnityEngine::Rendering::Universal::UniversalRenderer::get_deferredLights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                             "get_deferredLights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::DeferredLights*, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsRunningXRMobile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                             "IsRunningXRMobile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer* UnityEngine::Rendering::Universal::UniversalRenderer::New_ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::UniversalRenderer*>(data));
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::_ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupFinalPassDebug(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "SetupFinalPassDebug", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsDepthPrimingEnabled(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "IsDepthPrimingEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::Setup(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                        ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                              ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupCullingParameters(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                                                         ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cullingParameters, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::EnqueueDeferred(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, bool hasDepthPrepass, bool hasNormalPrepass,
                                                                                  bool applyMainShadow, bool applyAdditionalShadow) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "EnqueueDeferred", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderingData, hasDepthPrepass, hasNormalPrepass, applyMainShadow, applyAdditionalShadow);
}
inline ::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary
UnityEngine::Rendering::Universal::UniversalRenderer::GetRenderPassInputs(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "GetRenderPassInputs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary, false>(this, ___internal_method, renderingData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsGLESDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                                                             "IsGLESDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraRenderTarget(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                           ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, bool primedDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "CreateCameraRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, descriptor, primedDepth);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::PlatformRequiresExplicitMsaaResolve() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
                                               "PlatformRequiresExplicitMsaaResolve", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::RequiresIntermediateColorTexture(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "RequiresIntermediateColorTexture",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cameraData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::CanCopyDepth(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), "CanCopyDepth", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::UniversalRenderer::GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::EnableSwapBufferMSAA(bool enable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enable);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer::UniversalRenderer() {}
