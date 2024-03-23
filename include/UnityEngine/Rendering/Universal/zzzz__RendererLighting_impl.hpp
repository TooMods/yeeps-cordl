#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RendererLighting_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IRenderPass2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LayerBatch_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightStats_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Renderer2DData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__BlendMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.GetRenderTextureFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)()>(
    &::UnityEngine::Rendering::Universal::RendererLighting::GetRenderTextureFormat)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2f3d400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(),
                                                                               "GetRenderTextureFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.CreateNormalMapRenderTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::CommandBuffer*, float_t)>(
        &::UnityEngine::Rendering::Universal::RendererLighting::CreateNormalMapRenderTexture)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x2f3d508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "CreateNormalMapRenderTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.GetBlendStyleRenderTextureDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (*)(
    ::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData)>(&::UnityEngine::Rendering::Universal::RendererLighting::GetBlendStyleRenderTextureDesc)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2f3bdc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetBlendStyleRenderTextureDesc",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.CreateCameraSortingLayerRenderTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData,
                                                                                           ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Downsampling)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::CreateCameraSortingLayerRenderTexture)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2f38328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "CreateCameraSortingLayerRenderTexture",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Downsampling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.EnableBlendStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, bool)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::EnableBlendStyle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2f3a6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "EnableBlendStyle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.DisableAllKeywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::DisableAllKeywords)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2f3c1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "DisableAllKeywords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.ReleaseRenderTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::ReleaseRenderTextures)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x2f3c294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "ReleaseRenderTextures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.DrawPointLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Light2D*, ::UnityEngine::Mesh*, ::UnityEngine::Material*)>(
        &::UnityEngine::Rendering::Universal::RendererLighting::DrawPointLight)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2f3d948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "DrawPointLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.CanCastShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::Light2D*, int32_t)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::CanCastShadows)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2f3da6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "CanCastShadows", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.CanCastVolumetricShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::Light2D*, int32_t)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::CanCastVolumetricShadows)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2f3daa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "CanCastVolumetricShadows", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.ShouldRenderLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::Light2D*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::ShouldRenderLight)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f3daf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "ShouldRenderLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.RenderLightSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData, int32_t, ::UnityEngine::Rendering::CommandBuffer*, int32_t,
                         ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*)>(
        &::UnityEngine::Rendering::Universal::RendererLighting::RenderLightSet)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x2f3dba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "RenderLightSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.RenderLightVolumes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::CommandBuffer*, int32_t, int32_t,
                         ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferStoreAction,
                         ::UnityEngine::Rendering::RenderBufferStoreAction, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*)>(
        &::UnityEngine::Rendering::Universal::RendererLighting::RenderLightVolumes)> {
  constexpr static std::size_t size = 0x808;
  constexpr static std::size_t addrs = 0x2f3a74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "RenderLightVolumes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.SetShapeLightShaderGlobals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::SetShapeLightShaderGlobals)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2f3ba28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "SetShapeLightShaderGlobals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.GetNormalizedInnerRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Rendering::Universal::Light2D*)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::GetNormalizedInnerRadius)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f3e994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetNormalizedInnerRadius", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.GetNormalizedAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::Universal::RendererLighting::GetNormalizedAngle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f3e9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetNormalizedAngle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.GetScaledLightInvMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::Light2D*, ByRef<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::GetScaledLightInvMatrix)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2f3e9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetScaledLightInvMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.SetGeneralLightShaderGlobals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Light2D*)>(
        &::UnityEngine::Rendering::Universal::RendererLighting::SetGeneralLightShaderGlobals)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2f3e484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "SetGeneralLightShaderGlobals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.SetPointLightShaderGlobals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Light2D*)>(
        &::UnityEngine::Rendering::Universal::RendererLighting::SetPointLightShaderGlobals)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x2f3e590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "SetPointLightShaderGlobals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.ClearDirtyLighting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::ClearDirtyLighting)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2f3eb18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "ClearDirtyLighting", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.RenderNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::RenderingData,
                         ::UnityEngine::Rendering::DrawingSettings, ::UnityEngine::Rendering::FilteringSettings, ::UnityEngine::Rendering::RenderTargetIdentifier,
                         ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::LightStats)>(&::UnityEngine::Rendering::Universal::RendererLighting::RenderNormals)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x2f39a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "RenderNormals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DrawingSettings>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FilteringSettings>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightStats>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.RenderLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::CommandBuffer*, int32_t,
    ByRef<::UnityEngine::Rendering::Universal::LayerBatch>, ByRef<::UnityEngine::RenderTextureDescriptor>)>(&::UnityEngine::Rendering::Universal::RendererLighting::RenderLights)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x2f3a070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "RenderLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LayerBatch>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.SetBlendModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Rendering::BlendMode, ::UnityEngine::Rendering::BlendMode)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::SetBlendModes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f3edf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "SetBlendModes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BlendMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BlendMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.GetLightMaterialIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::Rendering::Universal::Light2D*, bool)>(
    &::UnityEngine::Rendering::Universal::RendererLighting::GetLightMaterialIndex)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2f3ee90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetLightMaterialIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.CreateLightMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(
    ::UnityEngine::Rendering::Universal::Renderer2DData*, ::UnityEngine::Rendering::Universal::Light2D*, bool)>(&::UnityEngine::Rendering::Universal::RendererLighting::CreateLightMaterial)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2f3efe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "CreateLightMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RendererLighting.GetLightMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(
    ::UnityEngine::Rendering::Universal::Renderer2DData*, ::UnityEngine::Rendering::Universal::Light2D*, bool)>(&::UnityEngine::Rendering::Universal::RendererLighting::GetLightMaterial)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2f3e37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetLightMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSampler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::RendererLighting::getStaticF_m_ProfilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSampler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_NormalsRenderingPassName(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "k_NormalsRenderingPassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_NormalsRenderingPassName() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "k_NormalsRenderingPassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_NormalClearColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "k_NormalClearColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_NormalClearColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "k_NormalClearColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_SpriteLightKeyword(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_SpriteLightKeyword", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_SpriteLightKeyword() {
  return ::cordl_internals::getStaticField<::StringW, "k_SpriteLightKeyword", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_UsePointLightCookiesKeyword(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_UsePointLightCookiesKeyword", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_UsePointLightCookiesKeyword() {
  return ::cordl_internals::getStaticField<::StringW, "k_UsePointLightCookiesKeyword",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_LightQualityFastKeyword(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_LightQualityFastKeyword", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_LightQualityFastKeyword() {
  return ::cordl_internals::getStaticField<::StringW, "k_LightQualityFastKeyword",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_UseNormalMap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_UseNormalMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_UseNormalMap() {
  return ::cordl_internals::getStaticField<::StringW, "k_UseNormalMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_UseAdditiveBlendingKeyword(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_UseAdditiveBlendingKeyword", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_UseAdditiveBlendingKeyword() {
  return ::cordl_internals::getStaticField<::StringW, "k_UseAdditiveBlendingKeyword",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_UseBlendStyleKeywords(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_UseBlendStyleKeywords",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_UseBlendStyleKeywords() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_UseBlendStyleKeywords",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_BlendFactorsPropIDs(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_BlendFactorsPropIDs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_BlendFactorsPropIDs() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_BlendFactorsPropIDs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_MaskFilterPropIDs(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_MaskFilterPropIDs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_MaskFilterPropIDs() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_MaskFilterPropIDs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_InvertedFilterPropIDs(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_InvertedFilterPropIDs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_InvertedFilterPropIDs() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_InvertedFilterPropIDs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_s_RenderTextureFormatToUse(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::GraphicsFormat, "s_RenderTextureFormatToUse",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::GraphicsFormat>(value));
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::RendererLighting::getStaticF_s_RenderTextureFormatToUse() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::GraphicsFormat, "s_RenderTextureFormatToUse",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_s_HasSetupRenderTextureFormatToUse(bool value) {
  ::cordl_internals::setStaticField<bool, "s_HasSetupRenderTextureFormatToUse", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::RendererLighting::getStaticF_s_HasSetupRenderTextureFormatToUse() {
  return ::cordl_internals::getStaticField<bool, "s_HasSetupRenderTextureFormatToUse",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_SrcBlendID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_SrcBlendID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_SrcBlendID() {
  return ::cordl_internals::getStaticField<int32_t, "k_SrcBlendID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_DstBlendID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DstBlendID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_DstBlendID() {
  return ::cordl_internals::getStaticField<int32_t, "k_DstBlendID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_FalloffIntensityID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_FalloffIntensityID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_FalloffIntensityID() {
  return ::cordl_internals::getStaticField<int32_t, "k_FalloffIntensityID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_FalloffDistanceID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_FalloffDistanceID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_FalloffDistanceID() {
  return ::cordl_internals::getStaticField<int32_t, "k_FalloffDistanceID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_LightColorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_LightColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_LightColorID() {
  return ::cordl_internals::getStaticField<int32_t, "k_LightColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_VolumeOpacityID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_VolumeOpacityID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_VolumeOpacityID() {
  return ::cordl_internals::getStaticField<int32_t, "k_VolumeOpacityID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_CookieTexID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_CookieTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_CookieTexID() {
  return ::cordl_internals::getStaticField<int32_t, "k_CookieTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_FalloffLookupID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_FalloffLookupID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_FalloffLookupID() {
  return ::cordl_internals::getStaticField<int32_t, "k_FalloffLookupID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_LightPositionID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_LightPositionID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_LightPositionID() {
  return ::cordl_internals::getStaticField<int32_t, "k_LightPositionID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_LightInvMatrixID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_LightInvMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_LightInvMatrixID() {
  return ::cordl_internals::getStaticField<int32_t, "k_LightInvMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_InnerRadiusMultID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_InnerRadiusMultID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_InnerRadiusMultID() {
  return ::cordl_internals::getStaticField<int32_t, "k_InnerRadiusMultID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_OuterAngleID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_OuterAngleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_OuterAngleID() {
  return ::cordl_internals::getStaticField<int32_t, "k_OuterAngleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_InnerAngleMultID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_InnerAngleMultID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_InnerAngleMultID() {
  return ::cordl_internals::getStaticField<int32_t, "k_InnerAngleMultID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_LightLookupID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_LightLookupID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_LightLookupID() {
  return ::cordl_internals::getStaticField<int32_t, "k_LightLookupID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_IsFullSpotlightID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_IsFullSpotlightID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_IsFullSpotlightID() {
  return ::cordl_internals::getStaticField<int32_t, "k_IsFullSpotlightID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_LightZDistanceID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_LightZDistanceID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_LightZDistanceID() {
  return ::cordl_internals::getStaticField<int32_t, "k_LightZDistanceID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline void UnityEngine::Rendering::Universal::RendererLighting::setStaticF_k_PointLightCookieTexID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_PointLightCookieTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RendererLighting::getStaticF_k_PointLightCookieTexID() {
  return ::cordl_internals::getStaticField<int32_t, "k_PointLightCookieTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get>();
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::RendererLighting::GetRenderTextureFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(),
                                                                             "GetRenderTextureFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::CreateNormalMapRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* pass,
                                                                                              ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                                                                              ::UnityEngine::Rendering::CommandBuffer* cmd, float_t renderScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "CreateNormalMapRenderTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, renderingData, cmd, renderScale);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::RendererLighting::GetBlendStyleRenderTextureDesc(::UnityEngine::Rendering::Universal::IRenderPass2D* pass,
                                                                                                                                  ::UnityEngine::Rendering::Universal::RenderingData renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetBlendStyleRenderTextureDesc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor, false>(nullptr, ___internal_method, pass, renderingData);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::CreateCameraSortingLayerRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* pass,
                                                                                                       ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                                                                                       ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                       ::UnityEngine::Rendering::Universal::Downsampling downsamplingMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(),
                                               "CreateCameraSortingLayerRenderTexture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Downsampling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, renderingData, cmd, downsamplingMethod);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::EnableBlendStyle(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t blendStyleIndex, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "EnableBlendStyle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, blendStyleIndex, enabled);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::DisableAllKeywords(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "DisableAllKeywords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, cmd);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::ReleaseRenderTextures(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "ReleaseRenderTextures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, cmd);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::DrawPointLight(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Light2D* light,
                                                                                ::UnityEngine::Mesh* lightMesh, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "DrawPointLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, light, lightMesh, material);
}
inline bool UnityEngine::Rendering::Universal::RendererLighting::CanCastShadows(::UnityEngine::Rendering::Universal::Light2D* light, int32_t layerToRender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "CanCastShadows", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, light, layerToRender);
}
inline bool UnityEngine::Rendering::Universal::RendererLighting::CanCastVolumetricShadows(::UnityEngine::Rendering::Universal::Light2D* light, int32_t endLayerValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "CanCastVolumetricShadows", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, light, endLayerValue);
}
inline bool UnityEngine::Rendering::Universal::RendererLighting::ShouldRenderLight(::UnityEngine::Rendering::Universal::Light2D* light, int32_t blendStyleIndex, int32_t layerToRender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "ShouldRenderLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, light, blendStyleIndex, layerToRender);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::RenderLightSet(::UnityEngine::Rendering::Universal::IRenderPass2D* pass,
                                                                                ::UnityEngine::Rendering::Universal::RenderingData renderingData, int32_t blendStyleIndex,
                                                                                ::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender,
                                                                                ::UnityEngine::Rendering::RenderTargetIdentifier renderTexture,
                                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* lights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "RenderLightSet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, renderingData, blendStyleIndex, cmd, layerToRender, renderTexture, lights);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::RenderLightVolumes(::UnityEngine::Rendering::Universal::IRenderPass2D* pass,
                                                                                    ::UnityEngine::Rendering::Universal::RenderingData renderingData, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                    int32_t layerToRender, int32_t endLayerValue, ::UnityEngine::Rendering::RenderTargetIdentifier renderTexture,
                                                                                    ::UnityEngine::Rendering::RenderTargetIdentifier depthTexture,
                                                                                    ::UnityEngine::Rendering::RenderBufferStoreAction intermediateStoreAction,
                                                                                    ::UnityEngine::Rendering::RenderBufferStoreAction finalStoreAction, bool requiresRTInit,
                                                                                    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* lights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "RenderLightVolumes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, renderingData, cmd, layerToRender, endLayerValue, renderTexture, depthTexture, intermediateStoreAction,
                                                          finalStoreAction, requiresRTInit, lights);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::SetShapeLightShaderGlobals(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "SetShapeLightShaderGlobals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, cmd);
}
inline float_t UnityEngine::Rendering::Universal::RendererLighting::GetNormalizedInnerRadius(::UnityEngine::Rendering::Universal::Light2D* light) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetNormalizedInnerRadius", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, light);
}
inline float_t UnityEngine::Rendering::Universal::RendererLighting::GetNormalizedAngle(float_t angle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetNormalizedAngle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, angle);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::GetScaledLightInvMatrix(::UnityEngine::Rendering::Universal::Light2D* light, ByRef<::UnityEngine::Matrix4x4> retMatrix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetScaledLightInvMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, light, retMatrix);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::SetGeneralLightShaderGlobals(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                              ::UnityEngine::Rendering::Universal::Light2D* light) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "SetGeneralLightShaderGlobals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, cmd, light);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::SetPointLightShaderGlobals(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                            ::UnityEngine::Rendering::Universal::Light2D* light) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "SetPointLightShaderGlobals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, cmd, light);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::ClearDirtyLighting(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                    uint32_t blendStylesUsed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "ClearDirtyLighting", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, cmd, blendStylesUsed);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::RenderNormals(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                               ::UnityEngine::Rendering::Universal::RenderingData renderingData, ::UnityEngine::Rendering::DrawingSettings drawSettings,
                                                                               ::UnityEngine::Rendering::FilteringSettings filterSettings, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget,
                                                                               ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::LightStats lightStats) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "RenderNormals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DrawingSettings>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FilteringSettings>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightStats>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, context, renderingData, drawSettings, filterSettings, depthTarget, cmd, lightStats);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::RenderLights(::UnityEngine::Rendering::Universal::IRenderPass2D* pass,
                                                                              ::UnityEngine::Rendering::Universal::RenderingData renderingData, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                              int32_t layerToRender, ByRef<::UnityEngine::Rendering::Universal::LayerBatch> layerBatch,
                                                                              ByRef<::UnityEngine::RenderTextureDescriptor> rtDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "RenderLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LayerBatch>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, renderingData, cmd, layerToRender, layerBatch, rtDesc);
}
inline void UnityEngine::Rendering::Universal::RendererLighting::SetBlendModes(::UnityEngine::Material* material, ::UnityEngine::Rendering::BlendMode src, ::UnityEngine::Rendering::BlendMode dst) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "SetBlendModes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BlendMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BlendMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, material, src, dst);
}
inline uint32_t UnityEngine::Rendering::Universal::RendererLighting::GetLightMaterialIndex(::UnityEngine::Rendering::Universal::Light2D* light, bool isVolume) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetLightMaterialIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, light, isVolume);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::RendererLighting::CreateLightMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData,
                                                                                                                  ::UnityEngine::Rendering::Universal::Light2D* light, bool isVolume) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "CreateLightMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, rendererData, light, isVolume);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::RendererLighting::GetLightMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData,
                                                                                                               ::UnityEngine::Rendering::Universal::Light2D* light, bool isVolume) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RendererLighting*>::get(), "GetLightMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, rendererData, light, isVolume);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RendererLighting::RendererLighting() {}
