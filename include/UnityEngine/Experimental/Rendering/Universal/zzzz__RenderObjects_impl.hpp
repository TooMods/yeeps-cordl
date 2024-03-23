#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__RenderQueueType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__RenderObjects_def.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__RenderObjectsPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__RenderObjects_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StencilStateData_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1e2144c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_passTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passTag;
}
constexpr ::StringW const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_passTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passTag;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_set_passTag(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_Event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Event;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_Event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Event;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_set_Event(::UnityEngine::Rendering::Universal::RenderPassEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Event = value;
}
constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings*&
UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_filterSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filterSettings;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings*> const&
UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_filterSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filterSettings;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_set_filterSettings(
    ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___filterSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_overrideMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_overrideMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideMaterial;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_set_overrideMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_overrideMaterialPassIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideMaterialPassIndex;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_overrideMaterialPassIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideMaterialPassIndex;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_set_overrideMaterialPassIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideMaterialPassIndex = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_overrideDepthState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDepthState;
}
constexpr bool const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_overrideDepthState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDepthState;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_set_overrideDepthState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideDepthState = value;
}
constexpr ::UnityEngine::Rendering::CompareFunction& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_depthCompareFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthCompareFunction;
}
constexpr ::UnityEngine::Rendering::CompareFunction const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_depthCompareFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthCompareFunction;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_set_depthCompareFunction(::UnityEngine::Rendering::CompareFunction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthCompareFunction = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_enableWrite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableWrite;
}
constexpr bool const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_enableWrite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableWrite;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_set_enableWrite(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableWrite = value;
}
constexpr ::UnityEngine::Rendering::Universal::StencilStateData*& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_stencilSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilSettings;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::StencilStateData*> const&
UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_stencilSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilSettings;
}
constexpr void
UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_set_stencilSettings(::UnityEngine::Rendering::Universal::StencilStateData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*&
UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_cameraSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraSettings;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*> const&
UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_get_cameraSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraSettings;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__cordl_internal_set_cameraSettings(
    ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings* UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings*>());
}
inline void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings::__RenderObjects__RenderObjectsSettings() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1e21574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::__cordl_internal_get_RenderQueueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RenderQueueType;
}
constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType const&
UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::__cordl_internal_get_RenderQueueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RenderQueueType;
}
constexpr void
UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::__cordl_internal_set_RenderQueueType(::UnityEngine::Experimental::Rendering::Universal::RenderQueueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RenderQueueType = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::__cordl_internal_get_LayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::__cordl_internal_get_LayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LayerMask;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::__cordl_internal_set_LayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LayerMask = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::__cordl_internal_get_PassNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::__cordl_internal_get_PassNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassNames;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::__cordl_internal_set_PassNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PassNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings* UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings*>());
}
inline void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings::__RenderObjects__FilterSettings() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1e215a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_get_overrideCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideCamera;
}
constexpr bool const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_get_overrideCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideCamera;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_set_overrideCamera(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideCamera = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_get_restoreCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restoreCamera;
}
constexpr bool const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_get_restoreCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restoreCamera;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_set_restoreCamera(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___restoreCamera = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_set_offset(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr float_t& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_get_cameraFieldOfView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraFieldOfView;
}
constexpr float_t const& UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_get_cameraFieldOfView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraFieldOfView;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__cordl_internal_set_cameraFieldOfView(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraFieldOfView = value;
}
inline ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*>());
}
inline void UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings::__RenderObjects__CustomCameraSettings() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjects.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::RenderObjects::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::RenderObjects::Create)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1e21258;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjects.AddRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::RenderObjects::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Experimental::Rendering::Universal::RenderObjects::AddRenderPasses)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1e213a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjects.SupportsNativeRenderPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::Universal::RenderObjects::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::RenderObjects::SupportsNativeRenderPass)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1e213c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjects._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::RenderObjects::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::RenderObjects::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1e213e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings*& UnityEngine::Experimental::Rendering::Universal::RenderObjects::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings*> const&
UnityEngine::Experimental::Rendering::Universal::RenderObjects::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void
UnityEngine::Experimental::Rendering::Universal::RenderObjects::__cordl_internal_set_settings(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*& UnityEngine::Experimental::Rendering::Universal::RenderObjects::__cordl_internal_get_renderObjectsPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderObjectsPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*> const&
UnityEngine::Experimental::Rendering::Universal::RenderObjects::__cordl_internal_get_renderObjectsPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderObjectsPass;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::RenderObjects::__cordl_internal_set_renderObjectsPass(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderObjectsPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Experimental::Rendering::Universal::RenderObjects::Create() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::RenderObjects::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                            ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, renderingData);
}
inline bool UnityEngine::Experimental::Rendering::Universal::RenderObjects::SupportsNativeRenderPass() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::Universal::RenderObjects* UnityEngine::Experimental::Rendering::Universal::RenderObjects::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>());
}
inline void UnityEngine::Experimental::Rendering::Universal::RenderObjects::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjects*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderObjects::RenderObjects() {}
