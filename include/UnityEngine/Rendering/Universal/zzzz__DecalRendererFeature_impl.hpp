#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechnique_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalRendererFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCreateDrawCallSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawDBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawErrorSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawFowardEmissiveSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawGBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawScreenSpaceSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalForwardEmissivePass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalGBufferRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalPreviewPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSkipCulledSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechnique_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCachedSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCulledSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCullingGroupSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SharedDecalEntityManager_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.get_sharedDecalEntityManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::SharedDecalEntityManager* (*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::get_sharedDecalEntityManager)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27298c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                 "get_sharedDecalEntityManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.get_intermediateRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::get_intermediateRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2729918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "get_intermediateRendering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::Create)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2729928;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.GetDBufferSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DBufferSettings* (
    ::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(&::UnityEngine::Rendering::Universal::DecalRendererFeature::GetDBufferSettings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2729990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "GetDBufferSettings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.GetScreenSpaceSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* (
    ::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(&::UnityEngine::Rendering::Universal::DecalRendererFeature::GetScreenSpaceSettings)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2729a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "GetScreenSpaceSettings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.GetTechnique
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DecalTechnique (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRendererData*)>(&::UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2729a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "GetTechnique", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRendererData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.GetTechnique
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DecalTechnique (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*)>(&::UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2729d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "GetTechnique", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.GetTechnique
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DecalTechnique (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(
    bool)>(&::UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2729bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "GetTechnique",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.IsAutomaticDBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::IsAutomaticDBuffer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2729dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "IsAutomaticDBuffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.RecreateSystemsIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(
        &::UnityEngine::Rendering::Universal::DecalRendererFeature::RecreateSystemsIfNeeded)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x2729e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "RecreateSystemsIfNeeded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.OnCameraPreCull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::DecalRendererFeature::OnCameraPreCull)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x272a428;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x272a510;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.SupportsNativeRenderPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::SupportsNativeRenderPass)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x272a7b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x272a7cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.ChangeAdaptivePerformanceDrawDistances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::ChangeAdaptivePerformanceDrawDistances)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x272a8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                 "ChangeAdaptivePerformanceDrawDistances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x272a8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalSettings*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalSettings*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DecalSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_CopyDepthPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_CopyDepthPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPS;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_CopyDepthPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CopyDepthPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferClear;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferClear;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DBufferClear(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DBufferClear)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_Technique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Technique;
}
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_Technique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Technique;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_Technique(::UnityEngine::Rendering::Universal::DecalTechnique value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Technique = value;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferSettings;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DBufferSettings*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DBufferSettings(::UnityEngine::Rendering::Universal::DBufferSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DBufferSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ScreenSpaceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceSettings;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ScreenSpaceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_ScreenSpaceSettings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScreenSpaceSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_RecreateSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecreateSystems;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_RecreateSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecreateSystems;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_RecreateSystems(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RecreateSystems = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_CopyDepthPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_CopyDepthPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_CopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CopyDepthPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalPreviewPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalPreviewPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalPreviewPass*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalPreviewPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalPreviewPass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalPreviewPass(::UnityEngine::Rendering::Universal::DecalPreviewPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalPreviewPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_CopyDepthMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_CopyDepthMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMaterial;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_CopyDepthMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CopyDepthMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalEntityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalEntityManager;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalEntityManager*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalEntityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalEntityManager;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalEntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalEntityManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCachedSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCachedSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCachedSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCachedSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalUpdateCachedSystem(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalUpdateCachedSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCullingGroupSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCullingGroupSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCullingGroupSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCullingGroupSystem;
}
constexpr void
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalUpdateCullingGroupSystem(::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalUpdateCullingGroupSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCulledSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCulledSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCulledSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCulledSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalUpdateCulledSystem(::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalUpdateCulledSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalCreateDrawCallSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalCreateDrawCallSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalCreateDrawCallSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalCreateDrawCallSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalCreateDrawCallSystem(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalCreateDrawCallSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DrawErrorSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawErrorSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DrawErrorSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawErrorSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DrawErrorSystem(::UnityEngine::Rendering::Universal::DecalDrawErrorSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DrawErrorSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DBufferRenderPass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferRenderPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DBufferRenderPass*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferRenderPass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DBufferRenderPass(::UnityEngine::Rendering::Universal::DBufferRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DBufferRenderPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ForwardEmissivePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardEmissivePass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ForwardEmissivePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardEmissivePass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_ForwardEmissivePass(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ForwardEmissivePass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawDBufferSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawDBufferSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawDBufferSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawDBufferSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalDrawDBufferSystem(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalDrawDBufferSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawForwardEmissiveSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawForwardEmissiveSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawForwardEmissiveSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawForwardEmissiveSystem;
}
constexpr void
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalDrawForwardEmissiveSystem(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalDrawForwardEmissiveSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferClearMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferClearMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferClearMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferClearMaterial;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DBufferClearMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DBufferClearMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ScreenSpaceDecalRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceDecalRenderPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ScreenSpaceDecalRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceDecalRenderPass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_ScreenSpaceDecalRenderPass(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScreenSpaceDecalRenderPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawScreenSpaceSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawScreenSpaceSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawScreenSpaceSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawScreenSpaceSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalDrawScreenSpaceSystem(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalDrawScreenSpaceSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalSkipCulledSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalSkipCulledSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalSkipCulledSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalSkipCulledSystem*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalSkipCulledSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalSkipCulledSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalSkipCulledSystem(::UnityEngine::Rendering::Universal::DecalSkipCulledSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DecalSkipCulledSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_GBufferRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferRenderPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_GBufferRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferRenderPass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_GBufferRenderPass(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GBufferRenderPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DrawGBufferSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawGBufferSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DrawGBufferSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawGBufferSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DrawGBufferSystem(::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DrawGBufferSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DeferredLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DeferredLights*> const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DeferredLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeferredLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::setStaticF__sharedDecalEntityManager_k__BackingField(::UnityEngine::Rendering::Universal::SharedDecalEntityManager* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*, "<sharedDecalEntityManager>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(value));
}
inline ::UnityEngine::Rendering::Universal::SharedDecalEntityManager* UnityEngine::Rendering::Universal::DecalRendererFeature::getStaticF__sharedDecalEntityManager_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*, "<sharedDecalEntityManager>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get>();
}
inline ::UnityEngine::Rendering::Universal::SharedDecalEntityManager* UnityEngine::Rendering::Universal::DecalRendererFeature::get_sharedDecalEntityManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                                             "get_sharedDecalEntityManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DecalRendererFeature::get_intermediateRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                                             "get_intermediateRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DBufferSettings* UnityEngine::Rendering::Universal::DecalRendererFeature::GetDBufferSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                                             "GetDBufferSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DBufferSettings*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* UnityEngine::Rendering::Universal::DecalRendererFeature::GetScreenSpaceSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                                             "GetScreenSpaceSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalTechnique
UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique(::UnityEngine::Rendering::Universal::ScriptableRendererData* renderer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "GetTechnique", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRendererData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalTechnique, false>(this, ___internal_method, renderer);
}
inline ::UnityEngine::Rendering::Universal::DecalTechnique UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "GetTechnique", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalTechnique, false>(this, ___internal_method, renderer);
}
inline ::UnityEngine::Rendering::Universal::DecalTechnique UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique(bool isDeferred) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "GetTechnique",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalTechnique, false>(this, ___internal_method, isDeferred);
}
inline bool UnityEngine::Rendering::Universal::DecalRendererFeature::IsAutomaticDBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                                             "IsAutomaticDBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::RecreateSystemsIfNeeded(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                             ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), "RecreateSystemsIfNeeded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, cameraData);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::OnCameraPreCull(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                     ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, cameraData);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                     ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, renderingData);
}
inline bool UnityEngine::Rendering::Universal::DecalRendererFeature::SupportsNativeRenderPass() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::ChangeAdaptivePerformanceDrawDistances() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                               "ChangeAdaptivePerformanceDrawDistances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalRendererFeature* UnityEngine::Rendering::Universal::DecalRendererFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalRendererFeature*>());
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalRendererFeature*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalRendererFeature::DecalRendererFeature() {}
