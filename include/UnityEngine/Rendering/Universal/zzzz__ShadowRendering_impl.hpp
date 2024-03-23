#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowRendering_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IRenderPass2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Renderer2DData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCaster2D_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.get_maxTextureCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::UnityEngine::Rendering::Universal::ShadowRendering::get_maxTextureCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c560f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(),
                                                                               "get_maxTextureCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.set_maxTextureCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&::UnityEngine::Rendering::Universal::ShadowRendering::set_maxTextureCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c56148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "set_maxTextureCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.InitializeBudget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&::UnityEngine::Rendering::Universal::ShadowRendering::InitializeBudget)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2c561a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "InitializeBudget",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.CreateMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> (*)(
    ::UnityEngine::Shader*, int32_t)>(&::UnityEngine::Rendering::Universal::ShadowRendering::CreateMaterials)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2c56410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(),
                                                                               "CreateMaterials", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.GetProjectedShadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Rendering::Universal::Renderer2DData*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowRendering::GetProjectedShadowMaterial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c56570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "GetProjectedShadowMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.GetStencilOnlyShadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Rendering::Universal::Renderer2DData*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowRendering::GetStencilOnlyShadowMaterial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c56674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "GetStencilOnlyShadowMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.GetSpriteSelfShadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Rendering::Universal::Renderer2DData*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowRendering::GetSpriteSelfShadowMaterial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c56778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "GetSpriteSelfShadowMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.GetSpriteUnshadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Rendering::Universal::Renderer2DData*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowRendering::GetSpriteUnshadowMaterial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c5687c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "GetSpriteUnshadowMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.GetGeometryUnshadowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Rendering::Universal::Renderer2DData*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowRendering::GetGeometryUnshadowMaterial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c56980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "GetGeometryUnshadowMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.CreateShadowRenderTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::CommandBuffer*, int32_t)>(
        &::UnityEngine::Rendering::Universal::ShadowRendering::CreateShadowRenderTexture)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2c56a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "CreateShadowRenderTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.PrerenderShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::CommandBuffer*, int32_t,
                         ::UnityEngine::Rendering::Universal::Light2D*, int32_t, float_t)>(&::UnityEngine::Rendering::Universal::ShadowRendering::PrerenderShadows)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2c56d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "PrerenderShadows", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.SetGlobalShadowTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Light2D*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowRendering::SetGlobalShadowTexture)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2c57c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "SetGlobalShadowTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.DisableGlobalShadowTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::ShadowRendering::DisableGlobalShadowTexture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2c57e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "DisableGlobalShadowTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.CreateShadowRenderTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderTargetHandle,
                                                                                           ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::ShadowRendering::CreateShadowRenderTexture)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2c56b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "CreateShadowRenderTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.ReleaseShadowRenderTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowRendering::ReleaseShadowRenderTexture)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c57ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "ReleaseShadowRenderTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.SetShadowProjectionGlobals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::ShadowCaster2D*)>(
    &::UnityEngine::Rendering::Universal::ShadowRendering::SetShadowProjectionGlobals)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2c57f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "SetShadowProjectionGlobals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowRendering.RenderShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData, ::UnityEngine::Rendering::CommandBuffer*, int32_t,
    ::UnityEngine::Rendering::Universal::Light2D*, float_t, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t)>(&::UnityEngine::Rendering::Universal::ShadowRendering::RenderShadows)> {
  constexpr static std::size_t size = 0xcb0;
  constexpr static std::size_t addrs = 0x2c56fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "RenderShadows", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_k_LightPosID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_LightPosID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_k_LightPosID() {
  return ::cordl_internals::getStaticField<int32_t, "k_LightPosID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_k_SelfShadowingID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_SelfShadowingID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_k_SelfShadowingID() {
  return ::cordl_internals::getStaticField<int32_t, "k_SelfShadowingID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_k_ShadowStencilGroupID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShadowStencilGroupID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_k_ShadowStencilGroupID() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShadowStencilGroupID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_k_ShadowIntensityID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShadowIntensityID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_k_ShadowIntensityID() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShadowIntensityID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_k_ShadowVolumeIntensityID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShadowVolumeIntensityID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_k_ShadowVolumeIntensityID() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShadowVolumeIntensityID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_k_ShadowRadiusID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShadowRadiusID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_k_ShadowRadiusID() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShadowRadiusID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_k_ShadowColorMaskID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShadowColorMaskID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_k_ShadowColorMaskID() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShadowColorMaskID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_k_ShadowModelMatrixID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShadowModelMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_k_ShadowModelMatrixID() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShadowModelMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_k_ShadowModelInvMatrixID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShadowModelInvMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_k_ShadowModelInvMatrixID() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShadowModelInvMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_k_ShadowModelScaleID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShadowModelScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_k_ShadowModelScaleID() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShadowModelScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_m_ProfilingSamplerShadows(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerShadows",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_m_ProfilingSamplerShadows() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerShadows",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_m_ProfilingSamplerShadowsA(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerShadowsA",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_m_ProfilingSamplerShadowsA() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerShadowsA",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_m_ProfilingSamplerShadowsR(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerShadowsR",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_m_ProfilingSamplerShadowsR() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerShadowsR",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_m_ProfilingSamplerShadowsG(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerShadowsG",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_m_ProfilingSamplerShadowsG() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerShadowsG",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_m_ProfilingSamplerShadowsB(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerShadowsB",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_m_ProfilingSamplerShadowsB() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerShadowsB",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_m_RenderTargets(
    ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*>, "m_RenderTargets",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*>
UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_m_RenderTargets() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::Universal::RenderTargetHandle, ::Array<::UnityEngine::Rendering::Universal::RenderTargetHandle>*>, "m_RenderTargets",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_m_LightInputTextures(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>, "m_LightInputTextures",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>
UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_m_LightInputTextures() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>, "m_LightInputTextures",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_k_ColorLookup(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, "k_ColorLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>(value));
}
inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_k_ColorLookup() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, "k_ColorLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF_m_ProfilingSamplerShadowColorsLookup(
    ::ArrayW<::UnityEngine::Rendering::ProfilingSampler*, ::Array<::UnityEngine::Rendering::ProfilingSampler*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::ProfilingSampler*, ::Array<::UnityEngine::Rendering::ProfilingSampler*>*>, "m_ProfilingSamplerShadowColorsLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<::ArrayW<::UnityEngine::Rendering::ProfilingSampler*, ::Array<::UnityEngine::Rendering::ProfilingSampler*>*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::ProfilingSampler*, ::Array<::UnityEngine::Rendering::ProfilingSampler*>*>
UnityEngine::Rendering::Universal::ShadowRendering::getStaticF_m_ProfilingSamplerShadowColorsLookup() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::ProfilingSampler*, ::Array<::UnityEngine::Rendering::ProfilingSampler*>*>, "m_ProfilingSamplerShadowColorsLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::setStaticF__maxTextureCount_k__BackingField(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "<maxTextureCount>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>(
      std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::Rendering::Universal::ShadowRendering::getStaticF__maxTextureCount_k__BackingField() {
  return ::cordl_internals::getStaticField<uint32_t, "<maxTextureCount>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get>();
}
inline uint32_t UnityEngine::Rendering::Universal::ShadowRendering::get_maxTextureCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(),
                                                                             "get_maxTextureCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::set_maxTextureCount(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "set_maxTextureCount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::InitializeBudget(uint32_t maxTextureCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "InitializeBudget",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, maxTextureCount);
}
/// @param pass: int32_t (default: static_cast<int32_t>(0x0))
inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> UnityEngine::Rendering::Universal::ShadowRendering::CreateMaterials(::UnityEngine::Shader* shader,
                                                                                                                                                                    int32_t pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(),
                                                                             "CreateMaterials", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>, false>(nullptr, ___internal_method, shader, pass);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::ShadowRendering::GetProjectedShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData,
                                                                                                                        int32_t colorIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "GetProjectedShadowMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, rendererData, colorIndex);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::ShadowRendering::GetStencilOnlyShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData,
                                                                                                                          int32_t colorIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "GetStencilOnlyShadowMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, rendererData, colorIndex);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::ShadowRendering::GetSpriteSelfShadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData,
                                                                                                                         int32_t colorIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "GetSpriteSelfShadowMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, rendererData, colorIndex);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::ShadowRendering::GetSpriteUnshadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData,
                                                                                                                       int32_t colorIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "GetSpriteUnshadowMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, rendererData, colorIndex);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::ShadowRendering::GetGeometryUnshadowMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData,
                                                                                                                         int32_t colorIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "GetGeometryUnshadowMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Renderer2DData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, rendererData, colorIndex);
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::CreateShadowRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* pass,
                                                                                          ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                                                                          ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int32_t shadowIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "CreateShadowRenderTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, renderingData, cmdBuffer, shadowIndex);
}
inline bool UnityEngine::Rendering::Universal::ShadowRendering::PrerenderShadows(::UnityEngine::Rendering::Universal::IRenderPass2D* pass,
                                                                                 ::UnityEngine::Rendering::Universal::RenderingData renderingData, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer,
                                                                                 int32_t layerToRender, ::UnityEngine::Rendering::Universal::Light2D* light, int32_t shadowIndex,
                                                                                 float_t shadowIntensity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "PrerenderShadows", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pass, renderingData, cmdBuffer, layerToRender, light, shadowIndex, shadowIntensity);
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::SetGlobalShadowTexture(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::UnityEngine::Rendering::Universal::Light2D* light,
                                                                                       int32_t shadowIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "SetGlobalShadowTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmdBuffer, light, shadowIndex);
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::DisableGlobalShadowTexture(::UnityEngine::Rendering::CommandBuffer* cmdBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "DisableGlobalShadowTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmdBuffer);
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::CreateShadowRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* pass,
                                                                                          ::UnityEngine::Rendering::Universal::RenderTargetHandle rtHandle,
                                                                                          ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                                                                          ::UnityEngine::Rendering::CommandBuffer* cmdBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "CreateShadowRenderTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pass, rtHandle, renderingData, cmdBuffer);
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::ReleaseShadowRenderTexture(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int32_t shadowIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "ReleaseShadowRenderTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmdBuffer, shadowIndex);
}
inline void UnityEngine::Rendering::Universal::ShadowRendering::SetShadowProjectionGlobals(::UnityEngine::Rendering::CommandBuffer* cmdBuffer,
                                                                                           ::UnityEngine::Rendering::Universal::ShadowCaster2D* shadowCaster) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "SetShadowProjectionGlobals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmdBuffer, shadowCaster);
}
inline bool UnityEngine::Rendering::Universal::ShadowRendering::RenderShadows(::UnityEngine::Rendering::Universal::IRenderPass2D* pass,
                                                                              ::UnityEngine::Rendering::Universal::RenderingData renderingData, ::UnityEngine::Rendering::CommandBuffer* cmdBuffer,
                                                                              int32_t layerToRender, ::UnityEngine::Rendering::Universal::Light2D* light, float_t shadowIntensity,
                                                                              ::UnityEngine::Rendering::RenderTargetIdentifier renderTexture, int32_t colorBit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowRendering*>::get(), "RenderShadows", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingData>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pass, renderingData, cmdBuffer, layerToRender, light, shadowIntensity, renderTexture, colorBit);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowRendering::ShadowRendering() {}
