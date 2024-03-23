#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieFormat_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieResolution_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightRenderingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MsaaQuality_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PipelineDebugLevel_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RendererType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderVariantLogLevel_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCascadesOption_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowQuality_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowResolution_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StoreActionsOptimization_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UpscalingFilterSelection_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeFrameworkUpdateMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineAsset_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineAsset_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DefaultMaterialType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightRenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PipelineDebugLevel_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RendererType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderVariantLogLevel_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCascadesOption_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StoreActionsOptimization_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UpscalingFilterSelection_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeFrameworkUpdateMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.LoadBuiltinRendererData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(::UnityEngine::Rendering::Universal::RendererType)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::LoadBuiltinRendererData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c59d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "LoadBuiltinRendererData",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RendererType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.CreatePipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderPipeline* (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::CreatePipeline)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2c59d44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.DestroyRenderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::DestroyRenderers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c5a0a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "DestroyRenderers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.DestroyRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(
    ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::DestroyRenderer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c5a108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "DestroyRenderer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::OnValidate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c5a12c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c5a148;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.CreateRenderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::CreateRenderers)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2c59f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "CreateRenderers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.GetMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(
    ::UnityEngine::Rendering::Universal::DefaultMaterialType)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::GetMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5a164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "GetMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DefaultMaterialType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_scriptableRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_scriptableRenderer)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2c5a16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_scriptableRenderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.GetRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::GetRenderer)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2c5a458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "GetRenderer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_scriptableRendererData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_scriptableRendererData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c5a398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_scriptableRendererData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_additionalLightsCookieFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsCookieFormat)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2c5a70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_additionalLightsCookieFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_additionalLightsCookieResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsCookieResolution)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5a93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_additionalLightsCookieResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_rendererIndexList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_rendererIndexList)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2c5a948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_rendererIndexList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_supportsCameraDepthTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsCameraDepthTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5a9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_supportsCameraDepthTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_supportsCameraDepthTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsCameraDepthTexture)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5a9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsCameraDepthTexture",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_supportsCameraOpaqueTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsCameraOpaqueTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5a9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_supportsCameraOpaqueTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_supportsCameraOpaqueTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsCameraOpaqueTexture)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5aa00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsCameraOpaqueTexture",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_opaqueDownsampling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Downsampling (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_opaqueDownsampling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aa0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_opaqueDownsampling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_supportsTerrainHoles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsTerrainHoles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aa14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_supportsTerrainHoles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_storeActionsOptimization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::StoreActionsOptimization (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_storeActionsOptimization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aa1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_storeActionsOptimization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_storeActionsOptimization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(
    ::UnityEngine::Rendering::Universal::StoreActionsOptimization)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_storeActionsOptimization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aa24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_storeActionsOptimization",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::StoreActionsOptimization>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_supportsHDR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsHDR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aa2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_supportsHDR",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_supportsHDR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsHDR)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5aa34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsHDR",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_msaaSampleCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_msaaSampleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aa40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_msaaSampleCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_msaaSampleCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_msaaSampleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aa48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_msaaSampleCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_renderScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_renderScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aa50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_renderScale",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_renderScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_renderScale)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c5aa58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_renderScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_upscalingFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::UpscalingFilterSelection (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_upscalingFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_upscalingFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_upscalingFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(
    ::UnityEngine::Rendering::Universal::UpscalingFilterSelection)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_upscalingFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aaf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_upscalingFilter",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UpscalingFilterSelection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_fsrOverrideSharpness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_fsrOverrideSharpness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_fsrOverrideSharpness", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_fsrOverrideSharpness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_fsrOverrideSharpness)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5ab04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_fsrOverrideSharpness",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_fsrSharpness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_fsrSharpness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ab10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_fsrSharpness",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_fsrSharpness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_fsrSharpness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ab18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_fsrSharpness",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_mainLightRenderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LightRenderingMode (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_mainLightRenderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ab20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_mainLightRenderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_mainLightRenderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(
    ::UnityEngine::Rendering::Universal::LightRenderingMode)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_mainLightRenderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ab28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_mainLightRenderingMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightRenderingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_supportsMainLightShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsMainLightShadows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ab30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_supportsMainLightShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_supportsMainLightShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsMainLightShadows)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5ab38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsMainLightShadows",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_mainLightShadowmapResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_mainLightShadowmapResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ab44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_mainLightShadowmapResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_mainLightShadowmapResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_mainLightShadowmapResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ab4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_mainLightShadowmapResolution",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_additionalLightsRenderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LightRenderingMode (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsRenderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ab54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_additionalLightsRenderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_additionalLightsRenderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(
    ::UnityEngine::Rendering::Universal::LightRenderingMode)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_additionalLightsRenderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ab5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                    "set_additionalLightsRenderingMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightRenderingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_maxAdditionalLightsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_maxAdditionalLightsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ab64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_maxAdditionalLightsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_maxAdditionalLightsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_maxAdditionalLightsCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c5ab6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_maxAdditionalLightsCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_supportsAdditionalLightShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsAdditionalLightShadows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ac24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_supportsAdditionalLightShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_supportsAdditionalLightShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsAdditionalLightShadows)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5ac2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsAdditionalLightShadows",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_additionalLightsShadowmapResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsShadowmapResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ac38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_additionalLightsShadowmapResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_additionalLightsShadowmapResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_additionalLightsShadowmapResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ac40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_additionalLightsShadowmapResolution",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_additionalLightsShadowResolutionTierLow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsShadowResolutionTierLow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ac48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_additionalLightsShadowResolutionTierLow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_additionalLightsShadowResolutionTierLow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_additionalLightsShadowResolutionTierLow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ac50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_additionalLightsShadowResolutionTierLow",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_additionalLightsShadowResolutionTierMedium
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsShadowResolutionTierMedium)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ac58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_additionalLightsShadowResolutionTierMedium", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_additionalLightsShadowResolutionTierMedium
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_additionalLightsShadowResolutionTierMedium)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ac60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_additionalLightsShadowResolutionTierMedium",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_additionalLightsShadowResolutionTierHigh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsShadowResolutionTierHigh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ac68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_additionalLightsShadowResolutionTierHigh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_additionalLightsShadowResolutionTierHigh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_additionalLightsShadowResolutionTierHigh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ac70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_additionalLightsShadowResolutionTierHigh",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.GetAdditionalLightsShadowResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::GetAdditionalLightsShadowResolution)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2c5ac78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "GetAdditionalLightsShadowResolution",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_reflectionProbeBlending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_reflectionProbeBlending)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ad40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_reflectionProbeBlending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_reflectionProbeBlending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_reflectionProbeBlending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5ad48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_reflectionProbeBlending",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_reflectionProbeBoxProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_reflectionProbeBoxProjection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ad54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_reflectionProbeBoxProjection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_reflectionProbeBoxProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_reflectionProbeBoxProjection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5ad5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_reflectionProbeBoxProjection",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_shadowDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shadowDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ad68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_shadowDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_shadowDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shadowDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c5ad70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shadowDistance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_shadowCascadeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shadowCascadeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ad80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_shadowCascadeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_shadowCascadeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shadowCascadeCount)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c5ad88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shadowCascadeCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_cascade2Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_cascade2Split)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ae70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_cascade2Split",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_cascade2Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_cascade2Split)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ae78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_cascade2Split",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_cascade3Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_cascade3Split)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ae80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_cascade3Split",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_cascade3Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_cascade3Split)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ae88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_cascade3Split",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_cascade4Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_cascade4Split)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5ae90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_cascade4Split",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_cascade4Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_cascade4Split)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5ae9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_cascade4Split",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_cascadeBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_cascadeBorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_cascadeBorder",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_cascadeBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_cascadeBorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aeb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_cascadeBorder",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_shadowDepthBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shadowDepthBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5aeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_shadowDepthBias", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_shadowDepthBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shadowDepthBias)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c5aec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shadowDepthBias",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_shadowNormalBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shadowNormalBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5af48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_shadowNormalBias", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_shadowNormalBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shadowNormalBias)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c5af50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shadowNormalBias",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_supportsSoftShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsSoftShadows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5af68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_supportsSoftShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_supportsSoftShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsSoftShadows)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5af70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsSoftShadows",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_supportsDynamicBatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsDynamicBatching)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5af7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_supportsDynamicBatching", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_supportsDynamicBatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsDynamicBatching)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5af84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsDynamicBatching",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_supportsMixedLighting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsMixedLighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5af90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_supportsMixedLighting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_supportsLightLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsLightLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5af98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_supportsLightLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_shaderVariantLogLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ShaderVariantLogLevel (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shaderVariantLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5afa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_shaderVariantLogLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_shaderVariantLogLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(
    ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shaderVariantLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5afa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shaderVariantLogLevel",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ShaderVariantLogLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_volumeFrameworkUpdateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_volumeFrameworkUpdateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5afb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_volumeFrameworkUpdateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_debugLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::PipelineDebugLevel (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_debugLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5afb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_debugLevel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_useSRPBatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_useSRPBatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5afc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_useSRPBatcher",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_useSRPBatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_useSRPBatcher)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5afc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_useSRPBatcher",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_colorGradingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ColorGradingMode (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_colorGradingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5afd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_colorGradingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_colorGradingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(
    ::UnityEngine::Rendering::Universal::ColorGradingMode)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_colorGradingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5afdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_colorGradingMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ColorGradingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_colorGradingLutSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_colorGradingLutSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5afe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_colorGradingLutSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_colorGradingLutSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_colorGradingLutSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c5afec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_colorGradingLutSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_useFastSRGBLinearConversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_useFastSRGBLinearConversion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_useFastSRGBLinearConversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_useAdaptivePerformance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_useAdaptivePerformance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_useAdaptivePerformance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_useAdaptivePerformance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_useAdaptivePerformance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5b01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_useAdaptivePerformance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_conservativeEnclosingSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_conservativeEnclosingSphere)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_conservativeEnclosingSphere", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_conservativeEnclosingSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_conservativeEnclosingSphere)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5b030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_conservativeEnclosingSphere",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_numIterationsEnclosingSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_numIterationsEnclosingSphere)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_numIterationsEnclosingSphere", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_numIterationsEnclosingSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_numIterationsEnclosingSphere)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_numIterationsEnclosingSphere",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_defaultMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b04c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_defaultParticleMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultParticleMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_defaultLineMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultLineMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b05c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_defaultTerrainMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultTerrainMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b064;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_defaultUIMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultUIMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b06c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_defaultUIOverdrawMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultUIOverdrawMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_defaultUIETC1SupportedMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultUIETC1SupportedMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b07c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_default2DMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_default2DMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b084;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_default2DMaskMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_default2DMaskMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b08c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_decalMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_decalMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5b094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_decalMaterial",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_defaultShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultShader)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2c5b09c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_renderingLayerMaskNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_renderingLayerMaskNames)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c5b148;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_prefixedRenderingLayerMaskNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_prefixedRenderingLayerMaskNames)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c5b1a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_lightLayerMaskNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_lightLayerMaskNames)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c5b208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_lightLayerMaskNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c5b268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "OnBeforeSerialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2c5b26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.ValidateShadowBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::ValidateShadowBias)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c5aed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "ValidateShadowBias",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.ValidatePerObjectLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::ValidatePerObjectLights)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2c5ab84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "ValidatePerObjectLights",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.ValidateRenderScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::ValidateRenderScale)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c5aa70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "ValidateRenderScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.ValidateRendererDataList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::ValidateRendererDataList)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c5b4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "ValidateRendererDataList",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.ValidateRendererData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::ValidateRendererData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c5b52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "ValidateRendererData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.get_shadowCascadeOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ShadowCascadesOption (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shadowCascadeOption)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c5b5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                                 "get_shadowCascadeOption", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset.set_shadowCascadeOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)(
    ::UnityEngine::Rendering::Universal::ShadowCascadesOption)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shadowCascadeOption)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c5b658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shadowCascadeOption",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ShadowCascadesOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2c5b6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_DefaultShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_DefaultShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultShader;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_DefaultShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*>&
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_Renderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderers;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*> const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_Renderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderers;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_Renderers(
    ::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Renderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_k_AssetVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_AssetVersion;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_k_AssetVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_AssetVersion;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_k_AssetVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k_AssetVersion = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_k_AssetPreviousVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_AssetPreviousVersion;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_k_AssetPreviousVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_AssetPreviousVersion;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_k_AssetPreviousVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k_AssetPreviousVersion = value;
}
constexpr ::UnityEngine::Rendering::Universal::RendererType& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RendererType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererType;
}
constexpr ::UnityEngine::Rendering::Universal::RendererType const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RendererType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererType;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_RendererType(::UnityEngine::Rendering::Universal::RendererType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RendererType = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RendererData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RendererData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererData;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_RendererData(::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RendererData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*>&
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RendererDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererDataList;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*> const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RendererDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererDataList;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_RendererDataList(
    ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RendererDataList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_DefaultRendererIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultRendererIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_DefaultRendererIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultRendererIndex;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_DefaultRendererIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultRendererIndex = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RequireDepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequireDepthTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RequireDepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequireDepthTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_RequireDepthTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequireDepthTexture = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RequireOpaqueTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequireOpaqueTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RequireOpaqueTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequireOpaqueTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_RequireOpaqueTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequireOpaqueTexture = value;
}
constexpr ::UnityEngine::Rendering::Universal::Downsampling& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_OpaqueDownsampling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueDownsampling;
}
constexpr ::UnityEngine::Rendering::Universal::Downsampling const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_OpaqueDownsampling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueDownsampling;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_OpaqueDownsampling(::UnityEngine::Rendering::Universal::Downsampling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpaqueDownsampling = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_SupportsTerrainHoles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsTerrainHoles;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_SupportsTerrainHoles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsTerrainHoles;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_SupportsTerrainHoles(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportsTerrainHoles = value;
}
constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_StoreActionsOptimization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StoreActionsOptimization;
}
constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_StoreActionsOptimization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StoreActionsOptimization;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_StoreActionsOptimization(::UnityEngine::Rendering::Universal::StoreActionsOptimization value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StoreActionsOptimization = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_SupportsHDR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsHDR;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_SupportsHDR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsHDR;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_SupportsHDR(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportsHDR = value;
}
constexpr ::UnityEngine::Rendering::Universal::MsaaQuality& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MSAA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MSAA;
}
constexpr ::UnityEngine::Rendering::Universal::MsaaQuality const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MSAA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MSAA;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_MSAA(::UnityEngine::Rendering::Universal::MsaaQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MSAA = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RenderScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderScale;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_RenderScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderScale;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_RenderScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderScale = value;
}
constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_UpscalingFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpscalingFilter;
}
constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_UpscalingFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpscalingFilter;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_UpscalingFilter(::UnityEngine::Rendering::Universal::UpscalingFilterSelection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpscalingFilter = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_FsrOverrideSharpness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FsrOverrideSharpness;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_FsrOverrideSharpness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FsrOverrideSharpness;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_FsrOverrideSharpness(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FsrOverrideSharpness = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_FsrSharpness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FsrSharpness;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_FsrSharpness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FsrSharpness;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_FsrSharpness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FsrSharpness = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MainLightRenderingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightRenderingMode;
}
constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MainLightRenderingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightRenderingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_MainLightRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MainLightRenderingMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MainLightShadowsSupported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowsSupported;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MainLightShadowsSupported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowsSupported;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_MainLightShadowsSupported(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MainLightShadowsSupported = value;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MainLightShadowmapResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowmapResolution;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MainLightShadowmapResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowmapResolution;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_MainLightShadowmapResolution(::UnityEngine::Rendering::Universal::ShadowResolution value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MainLightShadowmapResolution = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsRenderingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsRenderingMode;
}
constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsRenderingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsRenderingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_AdditionalLightsRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsRenderingMode = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsPerObjectLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsPerObjectLimit;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsPerObjectLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsPerObjectLimit;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_AdditionalLightsPerObjectLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsPerObjectLimit = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightShadowsSupported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightShadowsSupported;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightShadowsSupported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightShadowsSupported;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_AdditionalLightShadowsSupported(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightShadowsSupported = value;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsShadowmapResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowmapResolution;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsShadowmapResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowmapResolution;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_AdditionalLightsShadowmapResolution(::UnityEngine::Rendering::Universal::ShadowResolution value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsShadowmapResolution = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsShadowResolutionTierLow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowResolutionTierLow;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsShadowResolutionTierLow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowResolutionTierLow;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_AdditionalLightsShadowResolutionTierLow(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsShadowResolutionTierLow = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsShadowResolutionTierMedium() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowResolutionTierMedium;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsShadowResolutionTierMedium() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowResolutionTierMedium;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_AdditionalLightsShadowResolutionTierMedium(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsShadowResolutionTierMedium = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsShadowResolutionTierHigh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowResolutionTierHigh;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsShadowResolutionTierHigh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowResolutionTierHigh;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_AdditionalLightsShadowResolutionTierHigh(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsShadowResolutionTierHigh = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ReflectionProbeBlending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReflectionProbeBlending;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ReflectionProbeBlending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReflectionProbeBlending;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ReflectionProbeBlending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReflectionProbeBlending = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ReflectionProbeBoxProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReflectionProbeBoxProjection;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ReflectionProbeBoxProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReflectionProbeBoxProjection;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ReflectionProbeBoxProjection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReflectionProbeBoxProjection = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowDistance;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ShadowDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowDistance = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowCascadeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowCascadeCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowCascadeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowCascadeCount;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ShadowCascadeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowCascadeCount = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_Cascade2Split() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cascade2Split;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_Cascade2Split() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cascade2Split;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_Cascade2Split(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cascade2Split = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_Cascade3Split() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cascade3Split;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_Cascade3Split() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cascade3Split;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_Cascade3Split(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cascade3Split = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_Cascade4Split() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cascade4Split;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_Cascade4Split() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cascade4Split;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_Cascade4Split(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cascade4Split = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_CascadeBorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeBorder;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_CascadeBorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeBorder;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_CascadeBorder(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CascadeBorder = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowDepthBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowDepthBias;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowDepthBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowDepthBias;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ShadowDepthBias(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowDepthBias = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowNormalBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowNormalBias;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowNormalBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowNormalBias;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ShadowNormalBias(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowNormalBias = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_SoftShadowsSupported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SoftShadowsSupported;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_SoftShadowsSupported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SoftShadowsSupported;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_SoftShadowsSupported(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SoftShadowsSupported = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ConservativeEnclosingSphere() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConservativeEnclosingSphere;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ConservativeEnclosingSphere() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConservativeEnclosingSphere;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ConservativeEnclosingSphere(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConservativeEnclosingSphere = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_NumIterationsEnclosingSphere() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumIterationsEnclosingSphere;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_NumIterationsEnclosingSphere() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumIterationsEnclosingSphere;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_NumIterationsEnclosingSphere(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NumIterationsEnclosingSphere = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieResolution& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsCookieResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsCookieResolution;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieResolution const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsCookieResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsCookieResolution;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_AdditionalLightsCookieResolution(::UnityEngine::Rendering::Universal::LightCookieResolution value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsCookieResolution = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsCookieFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsCookieFormat;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_AdditionalLightsCookieFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsCookieFormat;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_AdditionalLightsCookieFormat(::UnityEngine::Rendering::Universal::LightCookieFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsCookieFormat = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_UseSRPBatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseSRPBatcher;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_UseSRPBatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseSRPBatcher;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_UseSRPBatcher(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseSRPBatcher = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_SupportsDynamicBatching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsDynamicBatching;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_SupportsDynamicBatching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsDynamicBatching;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_SupportsDynamicBatching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportsDynamicBatching = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MixedLightingSupported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixedLightingSupported;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MixedLightingSupported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixedLightingSupported;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_MixedLightingSupported(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MixedLightingSupported = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_SupportsLightLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsLightLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_SupportsLightLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsLightLayers;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_SupportsLightLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportsLightLayers = value;
}
constexpr ::UnityEngine::Rendering::Universal::PipelineDebugLevel& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_DebugLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugLevel;
}
constexpr ::UnityEngine::Rendering::Universal::PipelineDebugLevel const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_DebugLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugLevel;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_DebugLevel(::UnityEngine::Rendering::Universal::PipelineDebugLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugLevel = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_UseAdaptivePerformance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseAdaptivePerformance;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_UseAdaptivePerformance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseAdaptivePerformance;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_UseAdaptivePerformance(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseAdaptivePerformance = value;
}
constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ColorGradingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradingMode;
}
constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ColorGradingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ColorGradingMode(::UnityEngine::Rendering::Universal::ColorGradingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorGradingMode = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ColorGradingLutSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradingLutSize;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ColorGradingLutSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradingLutSize;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ColorGradingLutSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorGradingLutSize = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_UseFastSRGBLinearConversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseFastSRGBLinearConversion;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_UseFastSRGBLinearConversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseFastSRGBLinearConversion;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_UseFastSRGBLinearConversion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseFastSRGBLinearConversion = value;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowQuality& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowType;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowQuality const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowType;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ShadowType(::UnityEngine::Rendering::Universal::ShadowQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowType = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_LocalShadowsSupported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalShadowsSupported;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_LocalShadowsSupported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalShadowsSupported;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_LocalShadowsSupported(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocalShadowsSupported = value;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_LocalShadowsAtlasResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalShadowsAtlasResolution;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_LocalShadowsAtlasResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalShadowsAtlasResolution;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_LocalShadowsAtlasResolution(::UnityEngine::Rendering::Universal::ShadowResolution value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocalShadowsAtlasResolution = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MaxPixelLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxPixelLights;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_MaxPixelLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxPixelLights;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_MaxPixelLights(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxPixelLights = value;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowAtlasResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowAtlasResolution;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowAtlasResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowAtlasResolution;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ShadowAtlasResolution(::UnityEngine::Rendering::Universal::ShadowResolution value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowAtlasResolution = value;
}
constexpr ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShaderVariantLogLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderVariantLogLevel;
}
constexpr ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShaderVariantLogLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderVariantLogLevel;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ShaderVariantLogLevel(::UnityEngine::Rendering::Universal::ShaderVariantLogLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderVariantLogLevel = value;
}
constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_VolumeFrameworkUpdateMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeFrameworkUpdateMode;
}
constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_VolumeFrameworkUpdateMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeFrameworkUpdateMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_VolumeFrameworkUpdateMode(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VolumeFrameworkUpdateMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowCascadesOption& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowCascades() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowCascades;
}
constexpr ::UnityEngine::Rendering::Universal::ShadowCascadesOption const& UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_get_m_ShadowCascades() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowCascades;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::__cordl_internal_set_m_ShadowCascades(::UnityEngine::Rendering::Universal::ShadowCascadesOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowCascades = value;
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::setStaticF_AdditionalLightsDefaultShadowResolutionTierLow(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AdditionalLightsDefaultShadowResolutionTierLow",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::getStaticF_AdditionalLightsDefaultShadowResolutionTierLow() {
  return ::cordl_internals::getStaticField<int32_t, "AdditionalLightsDefaultShadowResolutionTierLow",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::setStaticF_AdditionalLightsDefaultShadowResolutionTierMedium(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AdditionalLightsDefaultShadowResolutionTierMedium",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::getStaticF_AdditionalLightsDefaultShadowResolutionTierMedium() {
  return ::cordl_internals::getStaticField<int32_t, "AdditionalLightsDefaultShadowResolutionTierMedium",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::setStaticF_AdditionalLightsDefaultShadowResolutionTierHigh(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AdditionalLightsDefaultShadowResolutionTierHigh",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::getStaticF_AdditionalLightsDefaultShadowResolutionTierHigh() {
  return ::cordl_internals::getStaticField<int32_t, "AdditionalLightsDefaultShadowResolutionTierHigh",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::setStaticF_s_LightCookieFormatList(
    ::ArrayW<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>,
             ::Array<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>*>
        value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>,
                                             ::Array<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>*>,
                                    "s_LightCookieFormatList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get>(
      std::forward<::ArrayW<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>,
                            ::Array<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>,
                ::Array<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>*>
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::getStaticF_s_LightCookieFormatList() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>,
                                                    ::Array<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>*>,
                                           "s_LightCookieFormatList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get>();
}
/// @param type: ::UnityEngine::Rendering::Universal::RendererType (default: static_cast<int32_t>(0x1))
inline ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>
UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::LoadBuiltinRendererData(::UnityEngine::Rendering::Universal::RendererType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "LoadBuiltinRendererData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RendererType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, false>(this, ___internal_method, type);
}
inline ::UnityEngine::Rendering::RenderPipeline* UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::CreatePipeline() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderPipeline*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::DestroyRenderers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "DestroyRenderers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::DestroyRenderer(ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> renderer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "DestroyRenderer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::OnValidate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::CreateRenderers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "CreateRenderers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::GetMaterial(::UnityEngine::Rendering::Universal::DefaultMaterialType materialType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "GetMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DefaultMaterialType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method, materialType);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_scriptableRenderer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_scriptableRenderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::GetRenderer(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "GetRenderer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*, false>(this, ___internal_method, index);
}
inline ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_scriptableRendererData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_scriptableRendererData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsCookieFormat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_additionalLightsCookieFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsCookieResolution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_additionalLightsCookieResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_rendererIndexList() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_rendererIndexList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsCameraDepthTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_supportsCameraDepthTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsCameraDepthTexture(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsCameraDepthTexture",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsCameraOpaqueTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_supportsCameraOpaqueTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsCameraOpaqueTexture(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsCameraOpaqueTexture",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::Downsampling UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_opaqueDownsampling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_opaqueDownsampling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Downsampling, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsTerrainHoles() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_supportsTerrainHoles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::StoreActionsOptimization UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_storeActionsOptimization() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_storeActionsOptimization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::StoreActionsOptimization, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_storeActionsOptimization(::UnityEngine::Rendering::Universal::StoreActionsOptimization value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_storeActionsOptimization",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::StoreActionsOptimization>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsHDR() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_supportsHDR",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsHDR(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsHDR",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_msaaSampleCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_msaaSampleCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_msaaSampleCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_msaaSampleCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_renderScale() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_renderScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_renderScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_renderScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::UpscalingFilterSelection UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_upscalingFilter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_upscalingFilter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UpscalingFilterSelection, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_upscalingFilter(::UnityEngine::Rendering::Universal::UpscalingFilterSelection value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_upscalingFilter",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UpscalingFilterSelection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_fsrOverrideSharpness() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_fsrOverrideSharpness", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_fsrOverrideSharpness(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_fsrOverrideSharpness",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_fsrSharpness() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_fsrSharpness",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_fsrSharpness(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_fsrSharpness",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::LightRenderingMode UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_mainLightRenderingMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_mainLightRenderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LightRenderingMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_mainLightRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_mainLightRenderingMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightRenderingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsMainLightShadows() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_supportsMainLightShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsMainLightShadows(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsMainLightShadows",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_mainLightShadowmapResolution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_mainLightShadowmapResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_mainLightShadowmapResolution(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_mainLightShadowmapResolution",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::LightRenderingMode UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsRenderingMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_additionalLightsRenderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LightRenderingMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_additionalLightsRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                  "set_additionalLightsRenderingMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightRenderingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_maxAdditionalLightsCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_maxAdditionalLightsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_maxAdditionalLightsCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_maxAdditionalLightsCount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsAdditionalLightShadows() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_supportsAdditionalLightShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsAdditionalLightShadows(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsAdditionalLightShadows",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsShadowmapResolution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_additionalLightsShadowmapResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_additionalLightsShadowmapResolution(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_additionalLightsShadowmapResolution",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsShadowResolutionTierLow() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_additionalLightsShadowResolutionTierLow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_additionalLightsShadowResolutionTierLow(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_additionalLightsShadowResolutionTierLow",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsShadowResolutionTierMedium() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_additionalLightsShadowResolutionTierMedium", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_additionalLightsShadowResolutionTierMedium(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_additionalLightsShadowResolutionTierMedium",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_additionalLightsShadowResolutionTierHigh() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_additionalLightsShadowResolutionTierHigh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_additionalLightsShadowResolutionTierHigh(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_additionalLightsShadowResolutionTierHigh",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::GetAdditionalLightsShadowResolution(int32_t additionalLightsShadowResolutionTier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "GetAdditionalLightsShadowResolution",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, additionalLightsShadowResolutionTier);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_reflectionProbeBlending() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_reflectionProbeBlending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_reflectionProbeBlending(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_reflectionProbeBlending",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_reflectionProbeBoxProjection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_reflectionProbeBoxProjection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_reflectionProbeBoxProjection(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_reflectionProbeBoxProjection",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shadowDistance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_shadowDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shadowDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shadowDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shadowCascadeCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_shadowCascadeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shadowCascadeCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shadowCascadeCount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_cascade2Split() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_cascade2Split",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_cascade2Split(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_cascade2Split",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_cascade3Split() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_cascade3Split",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_cascade3Split(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_cascade3Split", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_cascade4Split() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_cascade4Split",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_cascade4Split(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_cascade4Split", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_cascadeBorder() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_cascadeBorder",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_cascadeBorder(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_cascadeBorder",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shadowDepthBias() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_shadowDepthBias",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shadowDepthBias(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shadowDepthBias",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shadowNormalBias() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_shadowNormalBias", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shadowNormalBias(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shadowNormalBias",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsSoftShadows() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_supportsSoftShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsSoftShadows(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsSoftShadows",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsDynamicBatching() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_supportsDynamicBatching", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_supportsDynamicBatching(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_supportsDynamicBatching",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsMixedLighting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_supportsMixedLighting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_supportsLightLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_supportsLightLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shaderVariantLogLevel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_shaderVariantLogLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ShaderVariantLogLevel, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shaderVariantLogLevel(::UnityEngine::Rendering::Universal::ShaderVariantLogLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shaderVariantLogLevel",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ShaderVariantLogLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_volumeFrameworkUpdateMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_volumeFrameworkUpdateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PipelineDebugLevel UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_debugLevel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_debugLevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::PipelineDebugLevel, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_useSRPBatcher() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_useSRPBatcher",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_useSRPBatcher(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_useSRPBatcher",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::ColorGradingMode UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_colorGradingMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_colorGradingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ColorGradingMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_colorGradingMode(::UnityEngine::Rendering::Universal::ColorGradingMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_colorGradingMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ColorGradingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_colorGradingLutSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_colorGradingLutSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_colorGradingLutSize(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_colorGradingLutSize",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_useFastSRGBLinearConversion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_useFastSRGBLinearConversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_useAdaptivePerformance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_useAdaptivePerformance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_useAdaptivePerformance(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_useAdaptivePerformance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_conservativeEnclosingSphere() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_conservativeEnclosingSphere", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_conservativeEnclosingSphere(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_conservativeEnclosingSphere",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_numIterationsEnclosingSphere() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_numIterationsEnclosingSphere", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_numIterationsEnclosingSphere(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_numIterationsEnclosingSphere",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultMaterial() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultParticleMaterial() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultLineMaterial() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultTerrainMaterial() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultUIMaterial() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultUIOverdrawMaterial() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultUIETC1SupportedMaterial() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_default2DMaterial() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_default2DMaskMaterial() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_decalMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "get_decalMaterial",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_defaultShader() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_renderingLayerMaskNames() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_prefixedRenderingLayerMaskNames() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_lightLayerMaskNames() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_lightLayerMaskNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "OnBeforeSerialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "OnAfterDeserialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::ValidateShadowBias(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "ValidateShadowBias",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::ValidatePerObjectLights(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "ValidatePerObjectLights",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::ValidateRenderScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "ValidateRenderScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value);
}
/// @param partial: bool (default: false)
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::ValidateRendererDataList(bool partial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "ValidateRendererDataList",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, partial);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::ValidateRendererData(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "ValidateRendererData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline ::UnityEngine::Rendering::Universal::ShadowCascadesOption UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::get_shadowCascadeOption() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(),
                                               "get_shadowCascadeOption", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ShadowCascadesOption, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::set_shadowCascadeOption(::UnityEngine::Rendering::Universal::ShadowCascadesOption value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), "set_shadowCascadeOption",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ShadowCascadesOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>());
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset::UniversalRenderPipelineAsset() {}
