#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Render2DLightingPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugHandler_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IRenderPass2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LayerBatch_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Render2DLightingPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Renderer2DData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingSettings_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__Render2DLightingPass____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__Render2DLightingPass____c::*)()>(
    &::UnityEngine::Rendering::Universal::__Render2DLightingPass____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f3ca8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__Render2DLightingPass____c._Render_b__26_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__Render2DLightingPass____c::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>, ByRef<::UnityEngine::Rendering::DrawingSettings>,
    ByRef<::UnityEngine::Rendering::FilteringSettings>, ByRef<::UnityEngine::Rendering::RenderStateBlock>)>(&::UnityEngine::Rendering::Universal::__Render2DLightingPass____c::_Render_b__26_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f3ca94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*>::get(), "<Render>b__26_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::__Render2DLightingPass____c::setStaticF___9(::UnityEngine::Rendering::Universal::__Render2DLightingPass____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*>(value));
}
inline ::UnityEngine::Rendering::Universal::__Render2DLightingPass____c* UnityEngine::Rendering::Universal::__Render2DLightingPass____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*>::get>();
}
inline void UnityEngine::Rendering::Universal::__Render2DLightingPass____c::setStaticF___9__26_0(::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction*, "<>9__26_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction*>(value));
}
inline ::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* UnityEngine::Rendering::Universal::__Render2DLightingPass____c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction*, "<>9__26_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*>::get>();
}
inline ::UnityEngine::Rendering::Universal::__Render2DLightingPass____c* UnityEngine::Rendering::Universal::__Render2DLightingPass____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*>());
}
inline void UnityEngine::Rendering::Universal::__Render2DLightingPass____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::__Render2DLightingPass____c::_Render_b__26_0(::UnityEngine::Rendering::ScriptableRenderContext ctx,
                                                                                            ByRef<::UnityEngine::Rendering::Universal::RenderingData> data,
                                                                                            ByRef<::UnityEngine::Rendering::DrawingSettings> ds, ByRef<::UnityEngine::Rendering::FilteringSettings> fs,
                                                                                            ByRef<::UnityEngine::Rendering::RenderStateBlock> rsb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*>::get(), "<Render>b__26_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, data, ds, fs, rsb);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Render2DLightingPass____c::__Render2DLightingPass____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Render2DLightingPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Render2DLightingPass::*)(
    ::UnityEngine::Rendering::Universal::Renderer2DData*, ::UnityEngine::Material*, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::Render2DLightingPass::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f37e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Render2DLightingPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Render2DLightingPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Render2DLightingPass::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f37fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), "Setup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Render2DLightingPass.GetTransparencySortingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Render2DLightingPass::*)(
    ::UnityEngine::Camera*, ByRef<::UnityEngine::Rendering::SortingSettings>)>(&::UnityEngine::Rendering::Universal::Render2DLightingPass::GetTransparencySortingMode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2f37fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), "GetTransparencySortingMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::SortingSettings>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Render2DLightingPass.CopyCameraSortingLayerRenderTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Render2DLightingPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::RenderBufferStoreAction)>(
    &::UnityEngine::Rendering::Universal::Render2DLightingPass::CopyCameraSortingLayerRenderTexture)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x2f38054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), "CopyCameraSortingLayerRenderTexture",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Render2DLightingPass.GetCameraSortingLayerBoundsIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::UnityEngine::Rendering::Universal::Render2DLightingPass::*)()>(
    &::UnityEngine::Rendering::Universal::Render2DLightingPass::GetCameraSortingLayerBoundsIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2f37ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(),
                                                 "GetCameraSortingLayerBoundsIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Render2DLightingPass.DetermineWhenToResolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Render2DLightingPass::*)(
    int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>, ByRef<int32_t>, ByRef<bool>)>(
    &::UnityEngine::Rendering::Universal::Render2DLightingPass::DetermineWhenToResolve)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2f38508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), "DetermineWhenToResolve", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Render2DLightingPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Render2DLightingPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>,
    ByRef<::UnityEngine::Rendering::FilteringSettings>, ::UnityEngine::Rendering::DrawingSettings)>(&::UnityEngine::Rendering::Universal::Render2DLightingPass::Render)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2f3879c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DrawingSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Render2DLightingPass.DrawLayerBatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Render2DLightingPass::*)(
    ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>, int32_t, int32_t, ::UnityEngine::Rendering::CommandBuffer*,
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>, ByRef<::UnityEngine::Rendering::FilteringSettings>,
    ByRef<::UnityEngine::Rendering::DrawingSettings>, ByRef<::UnityEngine::Rendering::DrawingSettings>, ByRef<::UnityEngine::RenderTextureDescriptor>)>(
    &::UnityEngine::Rendering::Universal::Render2DLightingPass::DrawLayerBatches)> {
  constexpr static std::size_t size = 0x1154;
  constexpr static std::size_t addrs = 0x2f38944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), "DrawLayerBatches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Render2DLightingPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Render2DLightingPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Render2DLightingPass::Execute)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x2f3afb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Render2DLightingPass.UnityEngine_Rendering_Universal_IRenderPass2D_get_rendererData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> (
    ::UnityEngine::Rendering::Universal::Render2DLightingPass::*)()>(&::UnityEngine::Rendering::Universal::Render2DLightingPass::UnityEngine_Rendering_Universal_IRenderPass2D_get_rendererData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f3c4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(),
                                    "UnityEngine.Rendering.Universal.IRenderPass2D.get_rendererData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IRenderPass2D"
constexpr UnityEngine::Rendering::Universal::Render2DLightingPass::operator ::UnityEngine::Rendering::Universal::IRenderPass2D*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IRenderPass2D*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IRenderPass2D"
constexpr ::UnityEngine::Rendering::Universal::IRenderPass2D* UnityEngine::Rendering::Universal::Render2DLightingPass::i___UnityEngine__Rendering__Universal__IRenderPass2D() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IRenderPass2D*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_get_m_BlitMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_get_m_BlitMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BlitMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_get_m_SamplingMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_get_m_SamplingMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SamplingMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData>& UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_get_m_Renderer2DData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderer2DData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> const& UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_get_m_Renderer2DData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderer2DData;
}
constexpr void UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_set_m_Renderer2DData(::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Renderer2DData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_get_m_NeedsDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsDepth;
}
constexpr bool const& UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_get_m_NeedsDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsDepth;
}
constexpr void UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_set_m_NeedsDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedsDepth = value;
}
constexpr int16_t& UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_get_m_CameraSortingLayerBoundsIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraSortingLayerBoundsIndex;
}
constexpr int16_t const& UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_get_m_CameraSortingLayerBoundsIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraSortingLayerBoundsIndex;
}
constexpr void UnityEngine::Rendering::Universal::Render2DLightingPass::__cordl_internal_set_m_CameraSortingLayerBoundsIndex(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraSortingLayerBoundsIndex = value;
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_k_HDREmulationScaleID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_HDREmulationScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_k_HDREmulationScaleID() {
  return ::cordl_internals::getStaticField<int32_t, "k_HDREmulationScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_k_InverseHDREmulationScaleID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_InverseHDREmulationScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_k_InverseHDREmulationScaleID() {
  return ::cordl_internals::getStaticField<int32_t, "k_InverseHDREmulationScaleID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_k_UseSceneLightingID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_UseSceneLightingID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_k_UseSceneLightingID() {
  return ::cordl_internals::getStaticField<int32_t, "k_UseSceneLightingID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_k_RendererColorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_RendererColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_k_RendererColorID() {
  return ::cordl_internals::getStaticField<int32_t, "k_RendererColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_k_CameraSortingLayerTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_CameraSortingLayerTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_k_CameraSortingLayerTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "k_CameraSortingLayerTextureID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_k_ShapeLightTextureIDs(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_ShapeLightTextureIDs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_k_ShapeLightTextureIDs() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_ShapeLightTextureIDs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_k_CombinedRenderingPassName(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "k_CombinedRenderingPassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_k_CombinedRenderingPassName() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "k_CombinedRenderingPassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_k_NormalsRenderingPassName(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "k_NormalsRenderingPassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_k_NormalsRenderingPassName() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "k_NormalsRenderingPassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_k_LegacyPassName(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "k_LegacyPassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_k_LegacyPassName() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "k_LegacyPassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_k_ShaderTags(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "k_ShaderTags",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_k_ShaderTags() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "k_ShaderTags",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_m_ProfilingDrawLights(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDrawLights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_m_ProfilingDrawLights() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDrawLights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_m_ProfilingDrawLightTextures(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDrawLightTextures",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_m_ProfilingDrawLightTextures() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDrawLightTextures",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_m_ProfilingDrawRenderers(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDrawRenderers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_m_ProfilingDrawRenderers() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDrawRenderers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_m_ProfilingDrawLayerBatch(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDrawLayerBatch",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_m_ProfilingDrawLayerBatch() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDrawLayerBatch",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::setStaticF_m_ProfilingSamplerUnlit(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerUnlit",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Render2DLightingPass::getStaticF_m_ProfilingSamplerUnlit() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerUnlit",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get>();
}
inline ::UnityEngine::Rendering::Universal::Render2DLightingPass* UnityEngine::Rendering::Universal::Render2DLightingPass::New_ctor(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData,
                                                                                                                                    ::UnityEngine::Material* blitMaterial,
                                                                                                                                    ::UnityEngine::Material* samplingMaterial) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Render2DLightingPass*>(rendererData, blitMaterial, samplingMaterial));
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::_ctor(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, ::UnityEngine::Material* blitMaterial,
                                                                           ::UnityEngine::Material* samplingMaterial) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererData, blitMaterial, samplingMaterial);
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::Setup(bool useDepth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), "Setup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useDepth);
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::GetTransparencySortingMode(::UnityEngine::Camera* camera, ByRef<::UnityEngine::Rendering::SortingSettings> sortingSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), "GetTransparencySortingMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::SortingSettings>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, sortingSettings);
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::CopyCameraSortingLayerRenderTexture(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                         ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                                                                                         ::UnityEngine::Rendering::RenderBufferStoreAction mainTargetStoreAction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(),
                                               "CopyCameraSortingLayerRenderTexture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData, mainTargetStoreAction);
}
inline int16_t UnityEngine::Rendering::Universal::Render2DLightingPass::GetCameraSortingLayerBoundsIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(),
                                                                             "GetCameraSortingLayerBoundsIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::DetermineWhenToResolve(
    int32_t startIndex, int32_t batchesDrawn, int32_t batchCount, ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*> layerBatches,
    ByRef<int32_t> resolveDuringBatch, ByRef<bool> resolveIsAfterCopy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), "DetermineWhenToResolve", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, batchesDrawn, batchCount, layerBatches, resolveDuringBatch, resolveIsAfterCopy);
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::Render(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                            ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                            ByRef<::UnityEngine::Rendering::FilteringSettings> filterSettings, ::UnityEngine::Rendering::DrawingSettings drawSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DrawingSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cmd, renderingData, filterSettings, drawSettings);
}
inline int32_t UnityEngine::Rendering::Universal::Render2DLightingPass::DrawLayerBatches(
    ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*> layerBatches, int32_t batchCount, int32_t startIndex,
    ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
    ByRef<::UnityEngine::Rendering::FilteringSettings> filterSettings, ByRef<::UnityEngine::Rendering::DrawingSettings> normalsDrawSettings,
    ByRef<::UnityEngine::Rendering::DrawingSettings> drawSettings, ByRef<::UnityEngine::RenderTextureDescriptor> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), "DrawLayerBatches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, layerBatches, batchCount, startIndex, cmd, context, renderingData, filterSettings, normalsDrawSettings,
                                                             drawSettings, desc);
}
inline void UnityEngine::Rendering::Universal::Render2DLightingPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                             ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> UnityEngine::Rendering::Universal::Render2DLightingPass::UnityEngine_Rendering_Universal_IRenderPass2D_get_rendererData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Render2DLightingPass*>::get(),
                                               "UnityEngine.Rendering.Universal.IRenderPass2D.get_rendererData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Render2DLightingPass::Render2DLightingPass() {}
