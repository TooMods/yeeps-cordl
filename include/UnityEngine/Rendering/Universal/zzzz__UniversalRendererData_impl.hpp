#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TileSize_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StencilStateData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TileSize_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRSystemData_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::*)()>(
    &::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_blitPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blitPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_blitPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blitPS;
}
constexpr void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_set_blitPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blitPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_copyDepthPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyDepthPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_copyDepthPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyDepthPS;
}
constexpr void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_set_copyDepthPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___copyDepthPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_screenSpaceShadowPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceShadowPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_screenSpaceShadowPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceShadowPS;
}
constexpr void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_set_screenSpaceShadowPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___screenSpaceShadowPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_samplingPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplingPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_samplingPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplingPS;
}
constexpr void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_set_samplingPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___samplingPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_stencilDeferredPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilDeferredPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_stencilDeferredPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilDeferredPS;
}
constexpr void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_set_stencilDeferredPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilDeferredPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_fallbackErrorPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackErrorPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_fallbackErrorPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackErrorPS;
}
constexpr void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_set_fallbackErrorPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fallbackErrorPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_materialErrorPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialErrorPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_materialErrorPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialErrorPS;
}
constexpr void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_set_materialErrorPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___materialErrorPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_coreBlitPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreBlitPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_coreBlitPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreBlitPS;
}
constexpr void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_set_coreBlitPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coreBlitPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_coreBlitColorAndDepthPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreBlitColorAndDepthPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_coreBlitColorAndDepthPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreBlitColorAndDepthPS;
}
constexpr void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_set_coreBlitColorAndDepthPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coreBlitColorAndDepthPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_cameraMotionVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMotionVector;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_cameraMotionVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMotionVector;
}
constexpr void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_set_cameraMotionVector(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraMotionVector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_objectMotionVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectMotionVector;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_get_objectMotionVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectMotionVector;
}
constexpr void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__cordl_internal_set_objectMotionVector(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectMotionVector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources* UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources*>());
}
inline void UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources::__UniversalRendererData__ShaderResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (
    ::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(&::UnityEngine::Rendering::Universal::UniversalRendererData::Create)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2882a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "get_opaqueLayerMask",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2882a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_opaqueLayerMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_transparentLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_transparentLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "get_transparentLayerMask",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_transparentLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_transparentLayerMask)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2882abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_transparentLayerMask",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_defaultStencilState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::StencilStateData* (
    ::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(&::UnityEngine::Rendering::Universal::UniversalRendererData::get_defaultStencilState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "get_defaultStencilState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_defaultStencilState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(
    ::UnityEngine::Rendering::Universal::StencilStateData*)>(&::UnityEngine::Rendering::Universal::UniversalRendererData::set_defaultStencilState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2882aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_defaultStencilState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::StencilStateData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_shadowTransparentReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_shadowTransparentReceive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                 "get_shadowTransparentReceive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_shadowTransparentReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_shadowTransparentReceive)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2882b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_shadowTransparentReceive",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_renderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_renderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "get_renderingMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_renderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(
    ::UnityEngine::Rendering::Universal::RenderingMode)>(&::UnityEngine::Rendering::Universal::UniversalRendererData::set_renderingMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2882b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_renderingMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_depthPrimingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DepthPrimingMode (
    ::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(&::UnityEngine::Rendering::Universal::UniversalRendererData::get_depthPrimingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "get_depthPrimingMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_depthPrimingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(
    ::UnityEngine::Rendering::Universal::DepthPrimingMode)>(&::UnityEngine::Rendering::Universal::UniversalRendererData::set_depthPrimingMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2882b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_depthPrimingMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DepthPrimingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_copyDepthMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::CopyDepthMode (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_copyDepthMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "get_copyDepthMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_copyDepthMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(
    ::UnityEngine::Rendering::Universal::CopyDepthMode)>(&::UnityEngine::Rendering::Universal::UniversalRendererData::set_copyDepthMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2882bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_copyDepthMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CopyDepthMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_accurateGbufferNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_accurateGbufferNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                 "get_accurateGbufferNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_accurateGbufferNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_accurateGbufferNormals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2882bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_accurateGbufferNormals",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_clusteredRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_clusteredRendering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "get_clusteredRendering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_clusteredRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_clusteredRendering)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2882c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_clusteredRendering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_tileSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::TileSize (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_tileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "get_tileSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_tileSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::Rendering::Universal::TileSize)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_tileSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2882c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_tileSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TileSize>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_intermediateTextureMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::IntermediateTextureMode (
    ::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(&::UnityEngine::Rendering::Universal::UniversalRendererData::get_intermediateTextureMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                 "get_intermediateTextureMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_intermediateTextureMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(
    ::UnityEngine::Rendering::Universal::IntermediateTextureMode)>(&::UnityEngine::Rendering::Universal::UniversalRendererData::set_intermediateTextureMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2882c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_intermediateTextureMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntermediateTextureMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::OnValidate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2882c94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2882cc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.ReloadAllNullProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::ReloadAllNullProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2882a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "ReloadAllNullProperties",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2882ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2882cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                    "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2882d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::Universal::UniversalRendererData::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::Universal::UniversalRendererData::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_postProcessData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_postProcessData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessData;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_postProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___postProcessData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData>& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_xrSystemData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrSystemData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_xrSystemData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrSystemData;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_xrSystemData(::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xrSystemData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources*& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_shaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaders;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources*> const&
UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_shaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaders;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_shaders(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_AssetVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetVersion;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_AssetVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetVersion;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_AssetVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetVersion = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_OpaqueLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_OpaqueLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_OpaqueLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpaqueLayerMask = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_TransparentLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparentLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_TransparentLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparentLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_TransparentLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransparentLayerMask = value;
}
constexpr ::UnityEngine::Rendering::Universal::StencilStateData*& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DefaultStencilState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::StencilStateData*> const&
UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DefaultStencilState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultStencilState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_ShadowTransparentReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowTransparentReceive;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_ShadowTransparentReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowTransparentReceive;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_ShadowTransparentReceive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowTransparentReceive = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_RenderingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingMode;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_RenderingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_RenderingMode(::UnityEngine::Rendering::Universal::RenderingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DepthPrimingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingMode;
}
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DepthPrimingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthPrimingMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_CopyDepthMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMode;
}
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_CopyDepthMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_CopyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyDepthMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_AccurateGbufferNormals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccurateGbufferNormals;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_AccurateGbufferNormals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccurateGbufferNormals;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_AccurateGbufferNormals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AccurateGbufferNormals = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_ClusteredRendering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClusteredRendering;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_ClusteredRendering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClusteredRendering;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_ClusteredRendering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClusteredRendering = value;
}
constexpr ::UnityEngine::Rendering::Universal::TileSize& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_TileSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileSize;
}
constexpr ::UnityEngine::Rendering::Universal::TileSize const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_TileSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileSize;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_TileSize(::UnityEngine::Rendering::Universal::TileSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TileSize = value;
}
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_IntermediateTextureMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntermediateTextureMode;
}
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_IntermediateTextureMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntermediateTextureMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_IntermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IntermediateTextureMode = value;
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::UniversalRendererData::Create() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*, false>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalRendererData::get_opaqueLayerMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "get_opaqueLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_opaqueLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_opaqueLayerMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalRendererData::get_transparentLayerMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "get_transparentLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_transparentLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_transparentLayerMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::StencilStateData* UnityEngine::Rendering::Universal::UniversalRendererData::get_defaultStencilState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "get_defaultStencilState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::StencilStateData*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_defaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_defaultStencilState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::StencilStateData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRendererData::get_shadowTransparentReceive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "get_shadowTransparentReceive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_shadowTransparentReceive(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_shadowTransparentReceive",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::UniversalRendererData::get_renderingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "get_renderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_renderingMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DepthPrimingMode UnityEngine::Rendering::Universal::UniversalRendererData::get_depthPrimingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "get_depthPrimingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DepthPrimingMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_depthPrimingMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DepthPrimingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::CopyDepthMode UnityEngine::Rendering::Universal::UniversalRendererData::get_copyDepthMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "get_copyDepthMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::CopyDepthMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_copyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_copyDepthMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CopyDepthMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRendererData::get_accurateGbufferNormals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "get_accurateGbufferNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_accurateGbufferNormals(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_accurateGbufferNormals",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRendererData::get_clusteredRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "get_clusteredRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_clusteredRendering(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_clusteredRendering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::TileSize UnityEngine::Rendering::Universal::UniversalRendererData::get_tileSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "get_tileSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::TileSize, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_tileSize(::UnityEngine::Rendering::Universal::TileSize value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_tileSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TileSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::IntermediateTextureMode UnityEngine::Rendering::Universal::UniversalRendererData::get_intermediateTextureMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "get_intermediateTextureMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::IntermediateTextureMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_intermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), "set_intermediateTextureMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntermediateTextureMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::OnValidate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::ReloadAllNullProperties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             "ReloadAllNullProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRendererData* UnityEngine::Rendering::Universal::UniversalRendererData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::UniversalRendererData*>());
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRendererData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRendererData::UniversalRendererData() {}
constexpr ::UnityEngine::Rendering::Universal::TileSize UnityEngine::Rendering::Universal::UniversalRendererData::k_DefaultTileSize{ static_cast<int32_t>(0x20) };
