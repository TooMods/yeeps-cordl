#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusion_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusion_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses() {}
constexpr ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses
    GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses::AO{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses
    GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses::BlurHorizontal{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses
    GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses::BlurVertical{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses
    GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses::BlurFinal{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses
    GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses::AfterOpaque{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass.get_isRendererDeferred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::*)()>(
    &::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::get_isRendererDeferred)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x272b250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(),
                                    "get_isRendererDeferred", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::*)()>(
    &::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::_ctor)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x272aab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*, ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::Setup)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x272b000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(), "Setup",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0xaac;
  constexpr static std::size_t addrs = 0x272b2bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::Execute)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x272bd68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses)>(
    &::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::Render)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x272c444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(), "Render",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass.RenderAndSetBaseMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier,
    ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses)>(
    &::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::RenderAndSetBaseMap)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x272c58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(), "RenderAndSetBaseMap",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x272cc44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(), 7));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SupportsR8RenderTextureFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsR8RenderTextureFormat;
}
constexpr bool const& UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SupportsR8RenderTextureFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsR8RenderTextureFormat;
}
constexpr void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_SupportsR8RenderTextureFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportsR8RenderTextureFormat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraTopLeftCorner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraTopLeftCorner;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraTopLeftCorner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraTopLeftCorner;
}
constexpr void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraTopLeftCorner(
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraTopLeftCorner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraXExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraXExtent;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraXExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraXExtent;
}
constexpr void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraXExtent(
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraXExtent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraYExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraYExtent;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraYExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraYExtent;
}
constexpr void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraYExtent(
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraYExtent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraZExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraZExtent;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraZExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraZExtent;
}
constexpr void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraZExtent(
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraZExtent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraViewProjections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraViewProjections;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraViewProjections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraViewProjections;
}
constexpr void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraViewProjections(
    ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraViewProjections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_ProfilingSampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_ProfilingSampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr void
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_Renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::ScriptableRenderer*> const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_Renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderer;
}
constexpr void
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_Renderer(::UnityEngine::Rendering::Universal::ScriptableRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTexture1Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTexture1Target;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTexture1Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTexture1Target;
}
constexpr void
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_SSAOTexture1Target(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SSAOTexture1Target = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTexture2Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTexture2Target;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTexture2Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTexture2Target;
}
constexpr void
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_SSAOTexture2Target(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SSAOTexture2Target = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTexture3Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTexture3Target;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTexture3Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTexture3Target;
}
constexpr void
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_SSAOTexture3Target(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SSAOTexture3Target = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTextureFinalTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTextureFinalTarget;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTextureFinalTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTextureFinalTarget;
}
constexpr void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_SSAOTextureFinalTarget(
    ::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SSAOTextureFinalTarget = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_AOPassDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AOPassDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_AOPassDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AOPassDescriptor;
}
constexpr void
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_AOPassDescriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AOPassDescriptor = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_BlurPassesDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlurPassesDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_BlurPassesDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlurPassesDescriptor;
}
constexpr void
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_BlurPassesDescriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlurPassesDescriptor = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_FinalDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_FinalDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalDescriptor;
}
constexpr void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_FinalDescriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FinalDescriptor = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CurrentSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSettings;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> const&
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CurrentSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSettings;
}
constexpr void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CurrentSettings(
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_BaseMapID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_BaseMapID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_BaseMapID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_BaseMapID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_SSAOParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOParamsID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_SSAOParamsID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_SSAOParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_SSAOTexture1ID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOTexture1ID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_SSAOTexture1ID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_SSAOTexture1ID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_SSAOTexture2ID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOTexture2ID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_SSAOTexture2ID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_SSAOTexture2ID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_SSAOTexture3ID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOTexture3ID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_SSAOTexture3ID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_SSAOTexture3ID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_SSAOTextureFinalID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOTextureFinalID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_SSAOTextureFinalID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_SSAOTextureFinalID",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewXExtentID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewXExtentID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewXExtentID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_CameraViewXExtentID",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewYExtentID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewYExtentID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewYExtentID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_CameraViewYExtentID",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewZExtentID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewZExtentID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewZExtentID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_CameraViewZExtentID",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_ProjectionParams2ID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ProjectionParams2ID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_ProjectionParams2ID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_ProjectionParams2ID",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewProjectionsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewProjectionsID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewProjectionsID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_CameraViewProjectionsID",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewTopLeftCornerID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewTopLeftCornerID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewTopLeftCornerID() {
  return ::cordl_internals::getStaticField<
      int32_t, "s_CameraViewTopLeftCornerID",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline bool UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::get_isRendererDeferred() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(),
                                  "get_isRendererDeferred", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*
UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>());
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::Setup(
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* featureSettings, ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(), "Setup",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScriptableRenderer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, featureSettings, renderer, material);
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                                             ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                                       ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::Render(
    ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier target,
    ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses pass) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(),
                                 "Render", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, target, pass);
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::RenderAndSetBaseMap(
    ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier baseMap, ::UnityEngine::Rendering::RenderTargetIdentifier target,
    ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses pass) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(),
                                 "RenderAndSetBaseMap", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, baseMap, target, pass);
}
inline void UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion.get_afterOpaque
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::get_afterOpaque)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x272aa34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), "get_afterOpaque",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::Create)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x272aa50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion.AddRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::AddRenderPasses)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x272ae88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x272b160;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion.GetMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::GetMaterial)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x272ad3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), "GetMaterial",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x272b1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_get_m_Shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_get_m_Shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Shader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_get_m_SSAOPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOPass;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*> const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_get_m_SSAOPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOPass;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::__cordl_internal_set_m_SSAOPass(
    ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SSAOPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::get_afterOpaque() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), "get_afterOpaque",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::Create() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                            ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::GetMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), "GetMaterial",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>());
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion::ScreenSpaceAmbientOcclusion() {}
