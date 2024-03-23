#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ZBin_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ForwardLights_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ForwardLights_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
inline void UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::setStaticF__MainLightPosition(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightPosition",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::getStaticF__MainLightPosition() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightPosition",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::setStaticF__MainLightColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightColor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::getStaticF__MainLightColor() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::setStaticF__MainLightOcclusionProbesChannel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightOcclusionProbesChannel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::getStaticF__MainLightOcclusionProbesChannel() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightOcclusionProbesChannel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::setStaticF__MainLightLayerMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightLayerMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::getStaticF__MainLightLayerMask() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightLayerMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::setStaticF__AdditionalLightsCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsCount",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::getStaticF__AdditionalLightsCount() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsCount",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::setStaticF__AdditionalLightsPosition(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsPosition",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::getStaticF__AdditionalLightsPosition() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsPosition",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::setStaticF__AdditionalLightsColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsColor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::getStaticF__AdditionalLightsColor() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::setStaticF__AdditionalLightsAttenuation(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsAttenuation",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::getStaticF__AdditionalLightsAttenuation() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsAttenuation",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::setStaticF__AdditionalLightsSpotDir(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsSpotDir",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::getStaticF__AdditionalLightsSpotDir() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsSpotDir",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::setStaticF__AdditionalLightOcclusionProbeChannel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightOcclusionProbeChannel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::getStaticF__AdditionalLightOcclusionProbeChannel() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightOcclusionProbeChannel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::setStaticF__AdditionalLightsLayerMasks(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsLayerMasks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::getStaticF__AdditionalLightsLayerMasks() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsLayerMasks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer::__ForwardLights__LightConstantBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams.GetDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams (*)()>(
    &::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams::GetDefault)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x29ae920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams>::get(),
                                                 "GetDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams::GetDefault() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams>::get(), "GetDefault",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "lightCookieManager", ty: "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "clusteredRendering", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "tileSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams::__ForwardLights__InitParams(::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager,
                                                                                                                  bool clusteredRendering, int32_t tileSize) noexcept {
  this->lightCookieManager = lightCookieManager;
  this->clusteredRendering = clusteredRendering;
  this->tileSize = tileSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams::__ForwardLights__InitParams() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29ae8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::_ctor)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x29aea40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.ProcessLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::ProcessLights)> {
  constexpr static std::size_t size = 0x15a4;
  constexpr static std::size_t addrs = 0x29aeed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "ProcessLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::Setup)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x29b047c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::Cleanup)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29b0c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.InitializeLightConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, int32_t, ByRef<::UnityEngine::Vector4>, ByRef<::UnityEngine::Vector4>, ByRef<::UnityEngine::Vector4>,
    ByRef<::UnityEngine::Vector4>, ByRef<::UnityEngine::Vector4>, ByRef<uint32_t>)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::InitializeLightConstants)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x29b0c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "InitializeLightConstants",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.SetupShaderLightConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupShaderLightConstants)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x29b0bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "SetupShaderLightConstants",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.SetupMainLightConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::LightData>)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupMainLightConstants)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x29b0e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "SetupMainLightConstants",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LightData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.SetupAdditionalLightConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
        &::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupAdditionalLightConstants)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x29b0f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "SetupAdditionalLightConstants",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.SetupPerObjectLightIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::CullingResults, ByRef<::UnityEngine::Rendering::Universal::LightData>)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupPerObjectLightIndices)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x29b1424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "SetupPerObjectLightIndices",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CullingResults>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LightData>>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsBufferId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsBufferId;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsBufferId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsBufferId;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightsBufferId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsBufferId = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsIndicesId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsIndicesId;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsIndicesId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsIndicesId;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightsIndicesId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsIndicesId = value;
}
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_MixedLightingSetup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixedLightingSetup;
}
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_MixedLightingSetup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixedLightingSetup;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_MixedLightingSetup(::UnityEngine::Rendering::Universal::MixedLightingSetup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MixedLightingSetup = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightPositions;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightPositions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightColors;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightColors;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightAttenuations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightAttenuations;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightAttenuations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightAttenuations;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightAttenuations(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightAttenuations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightSpotDirections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightSpotDirections;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightSpotDirections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightSpotDirections;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightSpotDirections(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightSpotDirections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>&
UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightOcclusionProbeChannels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightOcclusionProbeChannels;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightOcclusionProbeChannels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightOcclusionProbeChannels;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightOcclusionProbeChannels(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightOcclusionProbeChannels)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsLayerMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsLayerMasks;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsLayerMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsLayerMasks;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightsLayerMasks(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightsLayerMasks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_UseStructuredBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStructuredBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_UseStructuredBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStructuredBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_UseStructuredBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseStructuredBuffer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_UseClusteredRendering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseClusteredRendering;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_UseClusteredRendering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseClusteredRendering;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_UseClusteredRendering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseClusteredRendering = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_DirectionalLightCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirectionalLightCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_DirectionalLightCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirectionalLightCount;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_DirectionalLightCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DirectionalLightCount = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ActualTileWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActualTileWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ActualTileWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActualTileWidth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_ActualTileWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActualTileWidth = value;
}
constexpr ::Unity::Mathematics::int2& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileResolution;
}
constexpr ::Unity::Mathematics::int2 const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileResolution;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_TileResolution(::Unity::Mathematics::int2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TileResolution = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_RequestedTileWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedTileWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_RequestedTileWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedTileWidth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_RequestedTileWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestedTileWidth = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinFactor;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinFactor;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_ZBinFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ZBinFactor = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinOffset;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinOffset;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_ZBinOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ZBinOffset = value;
}
constexpr ::Unity::Jobs::JobHandle& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_CullingHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingHandle;
}
constexpr ::Unity::Jobs::JobHandle const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_CullingHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingHandle;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_CullingHandle(::Unity::Jobs::JobHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CullingHandle = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBins() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBins;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBins() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBins;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_ZBins(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ZBins = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint32_t>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileLightMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileLightMasks;
}
constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileLightMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileLightMasks;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_TileLightMasks(::Unity::Collections::NativeArray_1<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TileLightMasks = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_ZBinBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ZBinBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_TileBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TileBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_LightCookieManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LightCookieManager*> const&
UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_LightCookieManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LightCookieManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSampler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::ForwardLights::getStaticF_m_ProfilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSampler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get>();
}
inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights* UnityEngine::Rendering::Universal::Internal::ForwardLights::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>());
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights*
UnityEngine::Rendering::Universal::Internal::ForwardLights::New_ctor(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams initParams) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(initParams));
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::_ctor(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams initParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initParams);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::ProcessLights(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "ProcessLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::Setup(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                              ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "Cleanup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::InitializeLightConstants(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights, int32_t lightIndex,
                                                                                                 ByRef<::UnityEngine::Vector4> lightPos, ByRef<::UnityEngine::Vector4> lightColor,
                                                                                                 ByRef<::UnityEngine::Vector4> lightAttenuation, ByRef<::UnityEngine::Vector4> lightSpotDir,
                                                                                                 ByRef<::UnityEngine::Vector4> lightOcclusionProbeChannel, ByRef<uint32_t> lightLayerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "InitializeLightConstants",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lights, lightIndex, lightPos, lightColor, lightAttenuation, lightSpotDir, lightOcclusionProbeChannel,
                                                          lightLayerMask);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupShaderLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                  ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "SetupShaderLightConstants",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupMainLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                ByRef<::UnityEngine::Rendering::Universal::LightData> lightData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "SetupMainLightConstants", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LightData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupAdditionalLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                      ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "SetupAdditionalLightConstants",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupPerObjectLightIndices(::UnityEngine::Rendering::CullingResults cullResults,
                                                                                                      ByRef<::UnityEngine::Rendering::Universal::LightData> lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>::get(), "SetupPerObjectLightIndices",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CullingResults>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LightData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cullResults, lightData);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights::ForwardLights() {}
