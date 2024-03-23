#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowDrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ExtractDirectionalLightMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::UnityEngine::Rendering::CullingResults>, ByRef<::UnityEngine::Rendering::Universal::ShadowData>, int32_t, int32_t, int32_t, int32_t, int32_t, float_t,
                         ByRef<::UnityEngine::Vector4>, ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>)>(
        &::UnityEngine::Rendering::Universal::ShadowUtils::ExtractDirectionalLightMatrix)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2731444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "ExtractDirectionalLightMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ExtractDirectionalLightMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ByRef<::UnityEngine::Rendering::CullingResults>, ByRef<::UnityEngine::Rendering::Universal::ShadowData>, int32_t, int32_t, int32_t, int32_t, int32_t, float_t, ByRef<::UnityEngine::Vector4>,
    ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>)>(&::UnityEngine::Rendering::Universal::ShadowUtils::ExtractDirectionalLightMatrix)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2731574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "ExtractDirectionalLightMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ExtractSpotLightMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ByRef<::UnityEngine::Rendering::CullingResults>, ByRef<::UnityEngine::Rendering::Universal::ShadowData>, int32_t, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>,
    ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Rendering::ShadowSplitData>)>(&::UnityEngine::Rendering::Universal::ShadowUtils::ExtractSpotLightMatrix)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x27319f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "ExtractSpotLightMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ShadowSplitData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ExtractPointLightMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ByRef<::UnityEngine::Rendering::CullingResults>, ByRef<::UnityEngine::Rendering::Universal::ShadowData>, int32_t, ::UnityEngine::CubemapFace, float_t, ByRef<::UnityEngine::Matrix4x4>,
    ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Rendering::ShadowSplitData>)>(&::UnityEngine::Rendering::Universal::ShadowUtils::ExtractPointLightMatrix)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2731b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "ExtractPointLightMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ShadowSplitData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.RenderShadowSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::ScriptableRenderContext>, ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>,
    ByRef<::UnityEngine::Rendering::ShadowDrawingSettings>, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2731c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "RenderShadowSlice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ScriptableRenderContext>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ShadowDrawingSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.RenderShadowSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::ScriptableRenderContext>, ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>,
                         ByRef<::UnityEngine::Rendering::ShadowDrawingSettings>)>(&::UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2731d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "RenderShadowSlice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ScriptableRenderContext>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ShadowDrawingSettings>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetMaxTileResolutionInAtlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::GetMaxTileResolutionInAtlas)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2731e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "GetMaxTileResolutionInAtlas", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ApplySliceTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::ApplySliceTransform)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x27318b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "ApplySliceTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetShadowBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector4 (*)(ByRef<::UnityEngine::Rendering::VisibleLight>, int32_t, ByRef<::UnityEngine::Rendering::Universal::ShadowData>, ::UnityEngine::Matrix4x4, float_t)>(
        &::UnityEngine::Rendering::Universal::ShadowUtils::GetShadowBias)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x2731e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "GetShadowBias", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::VisibleLight>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetScaleAndBiasForLinearDistanceFade
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, ByRef<float_t>, ByRef<float_t>)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::GetScaleAndBiasForLinearDistanceFade)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27321d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(),
                                                                               "GetScaleAndBiasForLinearDistanceFade", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SetupShadowCasterConstantBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::VisibleLight>, ::UnityEngine::Vector4)>(
        &::UnityEngine::Rendering::Universal::ShadowUtils::SetupShadowCasterConstantBuffer)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2732228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "SetupShadowCasterConstantBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::VisibleLight>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetTemporaryShadowTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::GetTemporaryShadowTexture)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x273239c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "GetTemporaryShadowTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetShadowTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::GetShadowTransform)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x273173c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "GetShadowTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ShadowUtils::setStaticF_m_ForceShadowPointSampling(bool value) {
  ::cordl_internals::setStaticField<bool, "m_ForceShadowPointSampling", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::getStaticF_m_ForceShadowPointSampling() {
  return ::cordl_internals::getStaticField<bool, "m_ForceShadowPointSampling", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get>();
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ExtractDirectionalLightMatrix(ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                          ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData, int32_t shadowLightIndex,
                                                                                          int32_t cascadeIndex, int32_t shadowmapWidth, int32_t shadowmapHeight, int32_t shadowResolution,
                                                                                          float_t shadowNearPlane, ByRef<::UnityEngine::Vector4> cascadeSplitDistance,
                                                                                          ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData,
                                                                                          ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "ExtractDirectionalLightMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cullResults, shadowData, shadowLightIndex, cascadeIndex, shadowmapWidth, shadowmapHeight, shadowResolution,
                                                          shadowNearPlane, cascadeSplitDistance, shadowSliceData, viewMatrix, projMatrix);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ExtractDirectionalLightMatrix(ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                          ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData, int32_t shadowLightIndex,
                                                                                          int32_t cascadeIndex, int32_t shadowmapWidth, int32_t shadowmapHeight, int32_t shadowResolution,
                                                                                          float_t shadowNearPlane, ByRef<::UnityEngine::Vector4> cascadeSplitDistance,
                                                                                          ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "ExtractDirectionalLightMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cullResults, shadowData, shadowLightIndex, cascadeIndex, shadowmapWidth, shadowmapHeight, shadowResolution,
                                                          shadowNearPlane, cascadeSplitDistance, shadowSliceData);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ExtractSpotLightMatrix(ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                   ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData, int32_t shadowLightIndex,
                                                                                   ByRef<::UnityEngine::Matrix4x4> shadowMatrix, ByRef<::UnityEngine::Matrix4x4> viewMatrix,
                                                                                   ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> splitData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "ExtractSpotLightMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ShadowSplitData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cullResults, shadowData, shadowLightIndex, shadowMatrix, viewMatrix, projMatrix, splitData);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ExtractPointLightMatrix(ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                    ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData, int32_t shadowLightIndex,
                                                                                    ::UnityEngine::CubemapFace cubemapFace, float_t fovBias, ByRef<::UnityEngine::Matrix4x4> shadowMatrix,
                                                                                    ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                                                                    ByRef<::UnityEngine::Rendering::ShadowSplitData> splitData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "ExtractPointLightMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ShadowSplitData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cullResults, shadowData, shadowLightIndex, cubemapFace, fovBias, shadowMatrix, viewMatrix, projMatrix,
                                                          splitData);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context,
                                                                              ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData,
                                                                              ByRef<::UnityEngine::Rendering::ShadowDrawingSettings> settings, ::UnityEngine::Matrix4x4 proj,
                                                                              ::UnityEngine::Matrix4x4 view) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "RenderShadowSlice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ScriptableRenderContext>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ShadowDrawingSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, context, shadowSliceData, settings, proj, view);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context,
                                                                              ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData,
                                                                              ByRef<::UnityEngine::Rendering::ShadowDrawingSettings> settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "RenderShadowSlice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ScriptableRenderContext>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ShadowDrawingSettings>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, context, shadowSliceData, settings);
}
inline int32_t UnityEngine::Rendering::Universal::ShadowUtils::GetMaxTileResolutionInAtlas(int32_t atlasWidth, int32_t atlasHeight, int32_t tileCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "GetMaxTileResolutionInAtlas", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, atlasWidth, atlasHeight, tileCount);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::ApplySliceTransform(ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData, int32_t atlasWidth, int32_t atlasHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "ApplySliceTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, shadowSliceData, atlasWidth, atlasHeight);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::ShadowUtils::GetShadowBias(ByRef<::UnityEngine::Rendering::VisibleLight> shadowLight, int32_t shadowLightIndex,
                                                                                            ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData,
                                                                                            ::UnityEngine::Matrix4x4 lightProjectionMatrix, float_t shadowResolution) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "GetShadowBias", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::VisibleLight>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, shadowLight, shadowLightIndex, shadowData, lightProjectionMatrix, shadowResolution);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::GetScaleAndBiasForLinearDistanceFade(float_t fadeDistance, float_t border, ByRef<float_t> scale, ByRef<float_t> bias) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(),
                                                                             "GetScaleAndBiasForLinearDistanceFade", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fadeDistance, border, scale, bias);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::SetupShadowCasterConstantBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::VisibleLight> shadowLight,
                                                                                            ::UnityEngine::Vector4 shadowBias) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "SetupShadowCasterConstantBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::VisibleLight>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, shadowLight, shadowBias);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::Universal::ShadowUtils::GetTemporaryShadowTexture(int32_t width, int32_t height, int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "GetTemporaryShadowTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(nullptr, ___internal_method, width, height, bits);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::ShadowUtils::GetShadowTransform(::UnityEngine::Matrix4x4 proj, ::UnityEngine::Matrix4x4 view) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtils*>::get(), "GetShadowTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method, proj, view);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowUtils::ShadowUtils() {}
