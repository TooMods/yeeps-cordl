#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_impl.hpp"
#include "UnityEngine/zzzz__TransparencySortMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Renderer2DData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ILight2DCullResult_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2DBlendStyle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Renderer2DData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TransparencySortMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType::__Renderer2DData__Renderer2DDefaultMaterialType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType::__Renderer2DData__Renderer2DDefaultMaterialType() {}
constexpr ::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType::Lit{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType::Unlit{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType UnityEngine::Rendering::Universal::__Renderer2DData__Renderer2DDefaultMaterialType::Custom{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_hdrEmulationScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_hdrEmulationScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_hdrEmulationScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_lightRenderTextureScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_lightRenderTextureScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_lightRenderTextureScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_lightBlendStyles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_lightBlendStyles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_lightBlendStyles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_useDepthStencilBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_useDepthStencilBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_useDepthStencilBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_fallOffLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_fallOffLookup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_fallOffLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_shapeLightShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_shapeLightShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_shapeLightShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_shapeLightVolumeShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_shapeLightVolumeShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_shapeLightVolumeShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_pointLightShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_pointLightShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_pointLightShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_pointLightVolumeShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_pointLightVolumeShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_pointLightVolumeShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_blitShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_blitShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_blitShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_samplingShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_samplingShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_samplingShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_postProcessData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> (
    ::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(&::UnityEngine::Rendering::Universal::Renderer2DData::get_postProcessData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_postProcessData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.set_postProcessData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2DData::*)(::UnityEngine::Rendering::Universal::PostProcessData*)>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::set_postProcessData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_postProcessData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_spriteShadowShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_spriteShadowShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_spriteShadowShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_spriteUnshadowShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_spriteUnshadowShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_spriteUnshadowShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_geometryUnshadowShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_geometryUnshadowShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_geometryUnshadowShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_projectedShadowShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_projectedShadowShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_projectedShadowShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_transparencySortMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TransparencySortMode (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_transparencySortMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_transparencySortMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_transparencySortAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_transparencySortAxis)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f41cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_transparencySortAxis", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_lightRenderTextureMemoryBudget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_lightRenderTextureMemoryBudget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                 "get_lightRenderTextureMemoryBudget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_shadowRenderTextureMemoryBudget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_shadowRenderTextureMemoryBudget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                 "get_shadowRenderTextureMemoryBudget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_useCameraSortingLayerTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_useCameraSortingLayerTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                 "get_useCameraSortingLayerTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_cameraSortingLayerTextureBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_cameraSortingLayerTextureBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                 "get_cameraSortingLayerTextureBound", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_cameraSortingLayerDownsamplingMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Downsampling (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_cameraSortingLayerDownsamplingMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                 "get_cameraSortingLayerDownsamplingMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f41d24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::OnEnable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2f41d84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_lightMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>* (
    ::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(&::UnityEngine::Rendering::Universal::Renderer2DData::get_lightMaterials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_lightMaterials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_spriteSelfShadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> (
    ::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(&::UnityEngine::Rendering::Universal::Renderer2DData::get_spriteSelfShadowMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_spriteSelfShadowMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.set_spriteSelfShadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2DData::*)(
    ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>)>(&::UnityEngine::Rendering::Universal::Renderer2DData::set_spriteSelfShadowMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_spriteSelfShadowMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_spriteUnshadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> (
    ::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(&::UnityEngine::Rendering::Universal::Renderer2DData::get_spriteUnshadowMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_spriteUnshadowMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.set_spriteUnshadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2DData::*)(
    ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>)>(&::UnityEngine::Rendering::Universal::Renderer2DData::set_spriteUnshadowMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_spriteUnshadowMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_geometryUnshadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> (
    ::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(&::UnityEngine::Rendering::Universal::Renderer2DData::get_geometryUnshadowMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_geometryUnshadowMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.set_geometryUnshadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2DData::*)(
    ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>)>(&::UnityEngine::Rendering::Universal::Renderer2DData::set_geometryUnshadowMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_geometryUnshadowMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_projectedShadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> (
    ::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(&::UnityEngine::Rendering::Universal::Renderer2DData::get_projectedShadowMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_projectedShadowMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.set_projectedShadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2DData::*)(
    ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>)>(&::UnityEngine::Rendering::Universal::Renderer2DData::set_projectedShadowMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_projectedShadowMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_stencilOnlyShadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> (
    ::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(&::UnityEngine::Rendering::Universal::Renderer2DData::get_stencilOnlyShadowMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_stencilOnlyShadowMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.set_stencilOnlyShadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2DData::*)(
    ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>)>(&::UnityEngine::Rendering::Universal::Renderer2DData::set_stencilOnlyShadowMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_stencilOnlyShadowMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_isNormalsRenderTargetValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_isNormalsRenderTargetValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_isNormalsRenderTargetValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.set_isNormalsRenderTargetValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2DData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::set_isNormalsRenderTargetValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f41f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_isNormalsRenderTargetValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_normalsRenderTargetScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_normalsRenderTargetScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_normalsRenderTargetScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.set_normalsRenderTargetScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2DData::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::set_normalsRenderTargetScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_normalsRenderTargetScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.get_lightCullResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ILight2DCullResult* (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::get_lightCullResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               "get_lightCullResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData.set_lightCullResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2DData::*)(
    ::UnityEngine::Rendering::Universal::ILight2DCullResult*)>(&::UnityEngine::Rendering::Universal::Renderer2DData::set_lightCullResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f41f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_lightCullResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Renderer2DData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Renderer2DData::*)()>(
    &::UnityEngine::Rendering::Universal::Renderer2DData::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2f41f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TransparencySortMode& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_TransparencySortMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparencySortMode;
}
constexpr ::UnityEngine::TransparencySortMode const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_TransparencySortMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparencySortMode;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_TransparencySortMode(::UnityEngine::TransparencySortMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransparencySortMode = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_TransparencySortAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparencySortAxis;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_TransparencySortAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparencySortAxis;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_TransparencySortAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransparencySortAxis = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_HDREmulationScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HDREmulationScale;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_HDREmulationScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HDREmulationScale;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_HDREmulationScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HDREmulationScale = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_LightRenderTextureScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightRenderTextureScale;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_LightRenderTextureScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightRenderTextureScale;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_LightRenderTextureScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightRenderTextureScale = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*>&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_LightBlendStyles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightBlendStyles;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*> const&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_LightBlendStyles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightBlendStyles;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_LightBlendStyles(
    ::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LightBlendStyles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_UseDepthStencilBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseDepthStencilBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_UseDepthStencilBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseDepthStencilBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_UseDepthStencilBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseDepthStencilBuffer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_UseCameraSortingLayersTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseCameraSortingLayersTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_UseCameraSortingLayersTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseCameraSortingLayersTexture;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_UseCameraSortingLayersTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseCameraSortingLayersTexture = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_CameraSortingLayersTextureBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraSortingLayersTextureBound;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_CameraSortingLayersTextureBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraSortingLayersTextureBound;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_CameraSortingLayersTextureBound(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraSortingLayersTextureBound = value;
}
constexpr ::UnityEngine::Rendering::Universal::Downsampling& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_CameraSortingLayerDownsamplingMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraSortingLayerDownsamplingMethod;
}
constexpr ::UnityEngine::Rendering::Universal::Downsampling const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_CameraSortingLayerDownsamplingMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraSortingLayerDownsamplingMethod;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_CameraSortingLayerDownsamplingMethod(::UnityEngine::Rendering::Universal::Downsampling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraSortingLayerDownsamplingMethod = value;
}
constexpr uint32_t& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_MaxLightRenderTextureCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLightRenderTextureCount;
}
constexpr uint32_t const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_MaxLightRenderTextureCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLightRenderTextureCount;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_MaxLightRenderTextureCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxLightRenderTextureCount = value;
}
constexpr uint32_t& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_MaxShadowRenderTextureCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxShadowRenderTextureCount;
}
constexpr uint32_t const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_MaxShadowRenderTextureCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxShadowRenderTextureCount;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_MaxShadowRenderTextureCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxShadowRenderTextureCount = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_ShapeLightShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_ShapeLightShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightShader;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_ShapeLightShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShapeLightShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_ShapeLightVolumeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightVolumeShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_ShapeLightVolumeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeLightVolumeShader;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_ShapeLightVolumeShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShapeLightVolumeShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_PointLightShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_PointLightShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightShader;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_PointLightShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PointLightShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_PointLightVolumeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightVolumeShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_PointLightVolumeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointLightVolumeShader;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_PointLightVolumeShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PointLightVolumeShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_BlitShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_BlitShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitShader;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_BlitShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BlitShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_SamplingShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_SamplingShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingShader;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_SamplingShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SamplingShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_ProjectedShadowShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProjectedShadowShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_ProjectedShadowShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProjectedShadowShader;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_ProjectedShadowShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProjectedShadowShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_SpriteShadowShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteShadowShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_SpriteShadowShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteShadowShader;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_SpriteShadowShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SpriteShadowShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_SpriteUnshadowShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteUnshadowShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_SpriteUnshadowShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteUnshadowShader;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_SpriteUnshadowShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SpriteUnshadowShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_GeometryUnshadowShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryUnshadowShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_GeometryUnshadowShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryUnshadowShader;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_GeometryUnshadowShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GeometryUnshadowShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_FallbackErrorShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackErrorShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_FallbackErrorShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackErrorShader;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_FallbackErrorShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FallbackErrorShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_PostProcessData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_PostProcessData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessData;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_PostProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PostProcessData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_FallOffLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallOffLookup;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_m_FallOffLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallOffLookup;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_m_FallOffLookup(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FallOffLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>*&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__lightMaterials_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightMaterials_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>*> const&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__lightMaterials_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightMaterials_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set__lightMaterials_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightMaterials_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__spriteSelfShadowMaterial_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteSelfShadowMaterial_k__BackingField;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__spriteSelfShadowMaterial_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteSelfShadowMaterial_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set__spriteSelfShadowMaterial_k__BackingField(
    ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteSelfShadowMaterial_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__spriteUnshadowMaterial_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteUnshadowMaterial_k__BackingField;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__spriteUnshadowMaterial_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteUnshadowMaterial_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set__spriteUnshadowMaterial_k__BackingField(
    ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteUnshadowMaterial_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__geometryUnshadowMaterial_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geometryUnshadowMaterial_k__BackingField;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__geometryUnshadowMaterial_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geometryUnshadowMaterial_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set__geometryUnshadowMaterial_k__BackingField(
    ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____geometryUnshadowMaterial_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__projectedShadowMaterial_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____projectedShadowMaterial_k__BackingField;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__projectedShadowMaterial_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____projectedShadowMaterial_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set__projectedShadowMaterial_k__BackingField(
    ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____projectedShadowMaterial_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__stencilOnlyShadowMaterial_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stencilOnlyShadowMaterial_k__BackingField;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__stencilOnlyShadowMaterial_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stencilOnlyShadowMaterial_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set__stencilOnlyShadowMaterial_k__BackingField(
    ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stencilOnlyShadowMaterial_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__isNormalsRenderTargetValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isNormalsRenderTargetValid_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__isNormalsRenderTargetValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isNormalsRenderTargetValid_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set__isNormalsRenderTargetValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isNormalsRenderTargetValid_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__normalsRenderTargetScale_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalsRenderTargetScale_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__normalsRenderTargetScale_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalsRenderTargetScale_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set__normalsRenderTargetScale_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalsRenderTargetScale_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_normalsRenderTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalsRenderTarget;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_normalsRenderTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalsRenderTarget;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_normalsRenderTarget(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalsRenderTarget = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_shadowsRenderTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowsRenderTarget;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_shadowsRenderTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowsRenderTarget;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_shadowsRenderTarget(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadowsRenderTarget = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_cameraSortingLayerRenderTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraSortingLayerRenderTarget;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get_cameraSortingLayerRenderTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraSortingLayerRenderTarget;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set_cameraSortingLayerRenderTarget(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraSortingLayerRenderTarget = value;
}
constexpr ::UnityEngine::Rendering::Universal::ILight2DCullResult*& UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__lightCullResult_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightCullResult_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::ILight2DCullResult*> const&
UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_get__lightCullResult_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightCullResult_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Renderer2DData::__cordl_internal_set__lightCullResult_k__BackingField(::UnityEngine::Rendering::Universal::ILight2DCullResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightCullResult_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t UnityEngine::Rendering::Universal::Renderer2DData::get_hdrEmulationScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_hdrEmulationScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::Renderer2DData::get_lightRenderTextureScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_lightRenderTextureScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*>
UnityEngine::Rendering::Universal::Renderer2DData::get_lightBlendStyles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_lightBlendStyles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::Universal::Light2DBlendStyle, ::Array<::UnityEngine::Rendering::Universal::Light2DBlendStyle>*>, false>(
      this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Renderer2DData::get_useDepthStencilBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_useDepthStencilBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::Universal::Renderer2DData::get_fallOffLookup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_fallOffLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::Renderer2DData::get_shapeLightShader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_shapeLightShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::Renderer2DData::get_shapeLightVolumeShader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_shapeLightVolumeShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::Renderer2DData::get_pointLightShader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_pointLightShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::Renderer2DData::get_pointLightVolumeShader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_pointLightVolumeShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::Renderer2DData::get_blitShader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_blitShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::Renderer2DData::get_samplingShader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_samplingShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> UnityEngine::Rendering::Universal::Renderer2DData::get_postProcessData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_postProcessData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Renderer2DData::set_postProcessData(::UnityEngine::Rendering::Universal::PostProcessData* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_postProcessData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::Renderer2DData::get_spriteShadowShader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_spriteShadowShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::Renderer2DData::get_spriteUnshadowShader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_spriteUnshadowShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::Renderer2DData::get_geometryUnshadowShader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_geometryUnshadowShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::Renderer2DData::get_projectedShadowShader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_projectedShadowShader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::UnityEngine::TransparencySortMode UnityEngine::Rendering::Universal::Renderer2DData::get_transparencySortMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_transparencySortMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TransparencySortMode, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::Renderer2DData::get_transparencySortAxis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_transparencySortAxis", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::Rendering::Universal::Renderer2DData::get_lightRenderTextureMemoryBudget() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                               "get_lightRenderTextureMemoryBudget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::Rendering::Universal::Renderer2DData::get_shadowRenderTextureMemoryBudget() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                               "get_shadowRenderTextureMemoryBudget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Renderer2DData::get_useCameraSortingLayerTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_useCameraSortingLayerTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Renderer2DData::get_cameraSortingLayerTextureBound() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                               "get_cameraSortingLayerTextureBound", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Downsampling UnityEngine::Rendering::Universal::Renderer2DData::get_cameraSortingLayerDownsamplingMethod() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                               "get_cameraSortingLayerDownsamplingMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Downsampling, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::Renderer2DData::Create() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Renderer2DData::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>* UnityEngine::Rendering::Universal::Renderer2DData::get_lightMaterials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_lightMaterials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityW<::UnityEngine::Material>>*, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> UnityEngine::Rendering::Universal::Renderer2DData::get_spriteSelfShadowMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_spriteSelfShadowMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Renderer2DData::set_spriteSelfShadowMaterial(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_spriteSelfShadowMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> UnityEngine::Rendering::Universal::Renderer2DData::get_spriteUnshadowMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_spriteUnshadowMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Renderer2DData::set_spriteUnshadowMaterial(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_spriteUnshadowMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> UnityEngine::Rendering::Universal::Renderer2DData::get_geometryUnshadowMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_geometryUnshadowMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Renderer2DData::set_geometryUnshadowMaterial(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_geometryUnshadowMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> UnityEngine::Rendering::Universal::Renderer2DData::get_projectedShadowMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_projectedShadowMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Renderer2DData::set_projectedShadowMaterial(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_projectedShadowMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> UnityEngine::Rendering::Universal::Renderer2DData::get_stencilOnlyShadowMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_stencilOnlyShadowMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Renderer2DData::set_stencilOnlyShadowMaterial(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_stencilOnlyShadowMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Renderer2DData::get_isNormalsRenderTargetValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_isNormalsRenderTargetValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Renderer2DData::set_isNormalsRenderTargetValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_isNormalsRenderTargetValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::Renderer2DData::get_normalsRenderTargetScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_normalsRenderTargetScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Renderer2DData::set_normalsRenderTargetScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_normalsRenderTargetScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::ILight2DCullResult* UnityEngine::Rendering::Universal::Renderer2DData::get_lightCullResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             "get_lightCullResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ILight2DCullResult*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Renderer2DData::set_lightCullResult(::UnityEngine::Rendering::Universal::ILight2DCullResult* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(), "set_lightCullResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::Renderer2DData* UnityEngine::Rendering::Universal::Renderer2DData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Renderer2DData*>());
}
inline void UnityEngine::Rendering::Universal::Renderer2DData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Renderer2DData::Renderer2DData() {}
