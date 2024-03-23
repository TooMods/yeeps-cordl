#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__MainLightShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__MainLightShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__WorldToShadow(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_WorldToShadow",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__WorldToShadow() {
  return ::cordl_internals::getStaticField<
      int32_t, "_WorldToShadow",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__ShadowParams(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_ShadowParams",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__ShadowParams() {
  return ::cordl_internals::getStaticField<
      int32_t, "_ShadowParams",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__CascadeShadowSplitSpheres0(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_CascadeShadowSplitSpheres0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__CascadeShadowSplitSpheres0() {
  return ::cordl_internals::getStaticField<
      int32_t, "_CascadeShadowSplitSpheres0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__CascadeShadowSplitSpheres1(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_CascadeShadowSplitSpheres1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__CascadeShadowSplitSpheres1() {
  return ::cordl_internals::getStaticField<
      int32_t, "_CascadeShadowSplitSpheres1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__CascadeShadowSplitSpheres2(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_CascadeShadowSplitSpheres2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__CascadeShadowSplitSpheres2() {
  return ::cordl_internals::getStaticField<
      int32_t, "_CascadeShadowSplitSpheres2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__CascadeShadowSplitSpheres3(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_CascadeShadowSplitSpheres3",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__CascadeShadowSplitSpheres3() {
  return ::cordl_internals::getStaticField<
      int32_t, "_CascadeShadowSplitSpheres3",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__CascadeShadowSplitSphereRadii(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_CascadeShadowSplitSphereRadii",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__CascadeShadowSplitSphereRadii() {
  return ::cordl_internals::getStaticField<
      int32_t, "_CascadeShadowSplitSphereRadii",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__ShadowOffset0(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_ShadowOffset0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__ShadowOffset0() {
  return ::cordl_internals::getStaticField<
      int32_t, "_ShadowOffset0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__ShadowOffset1(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_ShadowOffset1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__ShadowOffset1() {
  return ::cordl_internals::getStaticField<
      int32_t, "_ShadowOffset1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__ShadowOffset2(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_ShadowOffset2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__ShadowOffset2() {
  return ::cordl_internals::getStaticField<
      int32_t, "_ShadowOffset2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__ShadowOffset3(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_ShadowOffset3",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__ShadowOffset3() {
  return ::cordl_internals::getStaticField<
      int32_t, "_ShadowOffset3",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::setStaticF__ShadowmapSize(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_ShadowmapSize",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::getStaticF__ShadowmapSize() {
  return ::cordl_internals::getStaticField<
      int32_t, "_ShadowmapSize",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__MainLightShadowCasterPass__MainLightShadowConstantBuffer::__MainLightShadowCasterPass__MainLightShadowConstantBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::_ctor)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x29b8cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Setup)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x29b9040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.SetupForEmptyRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetupForEmptyRendering)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29b944c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "SetupForEmptyRendering",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.Configure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Configure)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29b9630;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Execute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x29b96c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29b9e54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Clear)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x29b94e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.SetEmptyMainLightCascadeShadowmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ByRef<::UnityEngine::Rendering::ScriptableRenderContext>)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetEmptyMainLightCascadeShadowmap)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x29b96fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                    "SetEmptyMainLightCascadeShadowmap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ScriptableRenderContext>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.RenderMainLightCascadeShadowmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ByRef<::UnityEngine::Rendering::ScriptableRenderContext>, ByRef<::UnityEngine::Rendering::CullingResults>, ByRef<::UnityEngine::Rendering::Universal::LightData>,
    ByRef<::UnityEngine::Rendering::Universal::ShadowData>)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::RenderMainLightCascadeShadowmap)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x29b9918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                    "RenderMainLightCascadeShadowmap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ScriptableRenderContext>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LightData>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.SetupMainLightShadowReceiverConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::VisibleLight, bool)>(
        &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetupMainLightShadowReceiverConstants)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x29b9f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                                 "SetupMainLightShadowReceiverConstants", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VisibleLight>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeBorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeBorder;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeBorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeBorder;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_CascadeBorder(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CascadeBorder = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MaxShadowDistanceSq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxShadowDistanceSq;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MaxShadowDistanceSq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxShadowDistanceSq;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_MaxShadowDistanceSq(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxShadowDistanceSq = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_ShadowCasterCascadesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowCasterCascadesCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_ShadowCasterCascadesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowCasterCascadesCount;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_ShadowCasterCascadesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowCasterCascadesCount = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowmap;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowmap;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_MainLightShadowmap(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MainLightShadowmap = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowmapTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowmapTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowmapTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowmapTexture;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_MainLightShadowmapTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MainLightShadowmapTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowMatrices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowMatrices;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowMatrices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowMatrices;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_MainLightShadowMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MainLightShadowMatrices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*>&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeSlices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeSlices;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeSlices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeSlices;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_CascadeSlices(
    ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CascadeSlices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeSplitDistances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeSplitDistances;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeSplitDistances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeSplitDistances;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_CascadeSplitDistances(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CascadeSplitDistances)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CreateEmptyShadowmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateEmptyShadowmap;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CreateEmptyShadowmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateEmptyShadowmap;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_CreateEmptyShadowmap(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CreateEmptyShadowmap = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_ProfilingSetupSampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSetupSampler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_ProfilingSetupSampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSetupSampler;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_ProfilingSetupSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSetupSampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>(evt));
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline bool UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Setup(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, renderingData);
}
inline bool UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetupForEmptyRendering(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "SetupForEmptyRendering",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Configure(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                              ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                            ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetEmptyMainLightCascadeShadowmap(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                  "SetEmptyMainLightCascadeShadowmap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ScriptableRenderContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::RenderMainLightCascadeShadowmap(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context,
                                                                                                                    ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                                    ByRef<::UnityEngine::Rendering::Universal::LightData> lightData,
                                                                                                                    ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                  "RenderMainLightCascadeShadowmap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ScriptableRenderContext>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LightData>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ShadowData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cullResults, lightData, shadowData);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetupMainLightShadowReceiverConstants(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                                          ::UnityEngine::Rendering::VisibleLight shadowLight,
                                                                                                                          bool supportsSoftShadows) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                               "SetupMainLightShadowReceiverConstants", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VisibleLight>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, shadowLight, supportsSoftShadows);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::MainLightShadowCasterPass() {}
