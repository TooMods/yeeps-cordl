#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__PostProcessPass_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__PostProcessPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Bloom_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ChromaticAberration_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorAdjustments_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorLookup_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthOfField_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FilmGrain_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LensDistortion_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlur_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PaniniProjection_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Tonemapping_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Vignette_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__BuiltinRenderTextureType_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::*)(
    ::UnityEngine::Rendering::Universal::PostProcessData*)>(&::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x16133a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::*)(::UnityEngine::Shader*)>(
        &::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::Load)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x16134ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*>::get(), "Load",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::Cleanup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x16136c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*>::get(),
                                                 "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_stopNaN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaN;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_stopNaN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaN;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_stopNaN(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stopNaN)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_subpixelMorphologicalAntialiasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpixelMorphologicalAntialiasing;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_subpixelMorphologicalAntialiasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpixelMorphologicalAntialiasing;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_subpixelMorphologicalAntialiasing(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subpixelMorphologicalAntialiasing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_gaussianDepthOfField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfField;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_gaussianDepthOfField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_gaussianDepthOfField(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gaussianDepthOfField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_bokehDepthOfField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfField;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_bokehDepthOfField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_bokehDepthOfField(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bokehDepthOfField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_cameraMotionBlur() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMotionBlur;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_cameraMotionBlur() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMotionBlur;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_cameraMotionBlur(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraMotionBlur)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_paniniProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniProjection;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_paniniProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniProjection;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_paniniProjection(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___paniniProjection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_bloom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloom;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_bloom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloom;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_bloom(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bloom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_scalingSetup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scalingSetup;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_scalingSetup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scalingSetup;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_scalingSetup(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scalingSetup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_easu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easu;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_easu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easu;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_easu(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___easu)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_uber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uber;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_uber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uber;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_uber(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_finalPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalPass;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_finalPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_finalPass(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finalPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_lensFlareDataDriven() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareDataDriven;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_get_lensFlareDataDriven() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareDataDriven;
}
constexpr void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__cordl_internal_set_lensFlareDataDriven(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lensFlareDataDriven)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*
UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::New_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*>(data));
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::Load(::UnityEngine::Shader* shader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*>::get(), "Load",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method, shader);
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*>::get(),
                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary::__PostProcessPass__MaterialLibrary() {}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__TempTarget(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TempTarget",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__TempTarget() {
  return ::cordl_internals::getStaticField<int32_t, "_TempTarget",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__TempTarget2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TempTarget2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__TempTarget2() {
  return ::cordl_internals::getStaticField<int32_t, "_TempTarget2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__StencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__StencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__StencilMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__StencilMask() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FullCoCTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FullCoCTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FullCoCTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_FullCoCTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__HalfCoCTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_HalfCoCTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__HalfCoCTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_HalfCoCTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__DofTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DofTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__DofTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_DofTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__CoCParams(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CoCParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__CoCParams() {
  return ::cordl_internals::getStaticField<int32_t, "_CoCParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__BokehKernel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BokehKernel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__BokehKernel() {
  return ::cordl_internals::getStaticField<int32_t, "_BokehKernel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__BokehConstants(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BokehConstants",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__BokehConstants() {
  return ::cordl_internals::getStaticField<int32_t, "_BokehConstants",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__PongTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_PongTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__PongTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_PongTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__PingTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_PingTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__PingTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_PingTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__Metrics(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Metrics",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__Metrics() {
  return ::cordl_internals::getStaticField<int32_t, "_Metrics",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__AreaTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AreaTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__AreaTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_AreaTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__SearchTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SearchTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__SearchTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_SearchTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__EdgeTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_EdgeTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__EdgeTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_EdgeTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__BlendTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BlendTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__BlendTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_BlendTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__ColorTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ColorTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__ColorTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_ColorTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Params",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Params",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__SourceTexLowMip(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SourceTexLowMip",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__SourceTexLowMip() {
  return ::cordl_internals::getStaticField<int32_t, "_SourceTexLowMip",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__Bloom_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Bloom_Params",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__Bloom_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Bloom_Params",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__Bloom_RGBM(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Bloom_RGBM",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__Bloom_RGBM() {
  return ::cordl_internals::getStaticField<int32_t, "_Bloom_RGBM",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__Bloom_Texture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Bloom_Texture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__Bloom_Texture() {
  return ::cordl_internals::getStaticField<int32_t, "_Bloom_Texture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__LensDirt_Texture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensDirt_Texture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__LensDirt_Texture() {
  return ::cordl_internals::getStaticField<int32_t, "_LensDirt_Texture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__LensDirt_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensDirt_Params",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__LensDirt_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_LensDirt_Params",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__LensDirt_Intensity(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensDirt_Intensity",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__LensDirt_Intensity() {
  return ::cordl_internals::getStaticField<int32_t, "_LensDirt_Intensity",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__Distortion_Params1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Distortion_Params1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__Distortion_Params1() {
  return ::cordl_internals::getStaticField<int32_t, "_Distortion_Params1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__Distortion_Params2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Distortion_Params2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__Distortion_Params2() {
  return ::cordl_internals::getStaticField<int32_t, "_Distortion_Params2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__Chroma_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Chroma_Params",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__Chroma_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Chroma_Params",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__Vignette_Params1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Vignette_Params1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__Vignette_Params1() {
  return ::cordl_internals::getStaticField<int32_t, "_Vignette_Params1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__Vignette_Params2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Vignette_Params2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__Vignette_Params2() {
  return ::cordl_internals::getStaticField<int32_t, "_Vignette_Params2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__Lut_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Lut_Params",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__Lut_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Lut_Params",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__UserLut_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_UserLut_Params",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__UserLut_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_UserLut_Params",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__InternalLut(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InternalLut",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__InternalLut() {
  return ::cordl_internals::getStaticField<int32_t, "_InternalLut",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__UserLut(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_UserLut",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__UserLut() {
  return ::cordl_internals::getStaticField<int32_t, "_UserLut",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__DownSampleScaleFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DownSampleScaleFactor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__DownSampleScaleFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_DownSampleScaleFactor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FlareOcclusionTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareOcclusionTex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FlareOcclusionTex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareOcclusionTex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FlareOcclusionIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareOcclusionIndex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FlareOcclusionIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareOcclusionIndex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FlareTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareTex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FlareTex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareTex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FlareColorValue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareColorValue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FlareColorValue() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareColorValue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FlareData0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FlareData0() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FlareData1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FlareData1() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FlareData2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FlareData2() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FlareData3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FlareData3() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FlareData4(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FlareData4() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FlareData5(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData5",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FlareData5() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__FullscreenProjMat(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FullscreenProjMat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__FullscreenProjMat() {
  return ::cordl_internals::getStaticField<int32_t, "_FullscreenProjMat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__ScalingSetupTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ScalingSetupTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__ScalingSetupTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_ScalingSetupTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__UpscaledTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_UpscaledTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__UpscaledTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_UpscaledTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__BloomMipUp(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "_BloomMipUp",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__BloomMipUp() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "_BloomMipUp",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::setStaticF__BloomMipDown(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "_BloomMipDown",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::getStaticF__BloomMipDown() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "_BloomMipDown",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__ShaderConstants::__PostProcessPass__ShaderConstants() {}
// Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityEngine::Rendering::Universal::Internal::PostProcessPass*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "destination", ty:
// "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "cmd", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "tempTargetUsed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "tempTarget2Used", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "amountOfPassesRemaining", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0::__PostProcessPass____c__DisplayClass57_0(
    ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* __4__this, ::UnityEngine::Rendering::RenderTargetIdentifier destination,
    ::UnityEngine::Rendering::CommandBuffer* cmd, bool tempTargetUsed, bool tempTarget2Used, int32_t amountOfPassesRemaining) noexcept {
  this->source = source;
  this->__4__this = __4__this;
  this->destination = destination;
  this->cmd = cmd;
  this->tempTargetUsed = tempTargetUsed;
  this->tempTarget2Used = tempTarget2Used;
  this->amountOfPassesRemaining = amountOfPassesRemaining;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0::__PostProcessPass____c__DisplayClass57_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16140c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c._DoLensFlareDatadriven_b__66_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::*)(
    ::UnityEngine::Light*, ::UnityEngine::Camera*, ::UnityEngine::Vector3)>(&::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::_DoLensFlareDatadriven_b__66_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x16140c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*>::get(),
                                                 "<DoLensFlareDatadriven>b__66_0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c* UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::setStaticF___9__66_0(
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__66_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*>::get>(
      std::forward<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*
UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::getStaticF___9__66_0() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__66_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*>::get>();
}
inline ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c* UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*>());
}
inline void UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::_DoLensFlareDatadriven_b__66_0(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c*>::get(),
                                               "<DoLensFlareDatadriven>b__66_0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, light, cam, wo);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c::__PostProcessPass____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::Universal::PostProcessData*, ::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::_ctor)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x29bb018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::Cleanup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29bb388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ByRef<::UnityEngine::RenderTextureDescriptor>, ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>, bool, ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>,
    ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>, bool, bool)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::Setup)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x29bb3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ByRef<::UnityEngine::RenderTextureDescriptor>, ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>, ::UnityEngine::Rendering::Universal::RenderTargetHandle,
    ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>, ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>, bool, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::Setup)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x29bb500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.SetupFinalPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>, bool)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupFinalPass)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x29bb608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupFinalPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x29bb6c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x29bb8b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.ResetHistory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::ResetHistory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29bb990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "ResetHistory",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.CanRunOnTile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::CanRunOnTile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29bb99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "CanRunOnTile",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::Execute)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x29bb9a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.GetCompatibleDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::GetCompatibleDescriptor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29bb814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                                 "GetCompatibleDescriptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.GetCompatibleDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::GetCompatibleDescriptor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29beac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "GetCompatibleDescriptor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.RequireSRGBConversionBlitToBackBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::Universal::CameraData)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::RequireSRGBConversionBlitToBackBuffer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x29beb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                                 "RequireSRGBConversionBlitToBackBuffer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.Blit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::Blit)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x29beb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "Blit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.DrawFullscreenMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::DrawFullscreenMesh)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x29beda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DrawFullscreenMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::Render)> {
  constexpr static std::size_t size = 0x1f50;
  constexpr static std::size_t addrs = 0x29bcb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.BlitDstDiscardContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::BuiltinRenderTextureType (
    ::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::BlitDstDiscardContent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x29c1c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "BlitDstDiscardContent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.DoSubpixelMorphologicalAntialiasing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ByRef<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier,
    ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoSubpixelMorphologicalAntialiasing)> {
  constexpr static std::size_t size = 0x854;
  constexpr static std::size_t addrs = 0x29bf338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                    "DoSubpixelMorphologicalAntialiasing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.DoDepthOfField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rect)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoDepthOfField)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x29bfb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DoDepthOfField", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.DoGaussianDepthOfField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rect)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoGaussianDepthOfField)> {
  constexpr static std::size_t size = 0xa90;
  constexpr static std::size_t addrs = 0x29c1ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                                 "DoGaussianDepthOfField", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.PrepareBokehKernel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(float_t, float_t)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::PrepareBokehKernel)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x29c2f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "PrepareBokehKernel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.GetMaxBokehRadiusInPixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::GetMaxBokehRadiusInPixels)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29c3158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "GetMaxBokehRadiusInPixels",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.DoBokehDepthOfField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rect)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoBokehDepthOfField)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x29c2770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DoBokehDepthOfField", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.GetLensFlareLightAttenuation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Light*, ::UnityEngine::Camera*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::GetLensFlareLightAttenuation)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x29c3170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                                 "GetLensFlareLightAttenuation", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.DoLensFlareDatadriven
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, bool, float_t, float_t)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoLensFlareDatadriven)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x29c00f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DoLensFlareDatadriven",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.UpdateMotionBlurMatrices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(ByRef<::UnityEngine::Material*>, ::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::XRPass*)>(
        &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::UpdateMotionBlurMatrices)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x29c3378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                                 "UpdateMotionBlurMatrices", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Material*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.DoMotionBlur
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::Universal::CameraData, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoMotionBlur)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x29bfcb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DoMotionBlur", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.DoPaniniProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoPaniniProjection)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x29bfe94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DoPaniniProjection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.CalcViewExtents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::CalcViewExtents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29c3608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "CalcViewExtents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.CalcCropExtents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Camera*, float_t)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::CalcCropExtents)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29c3664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "CalcCropExtents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.SetupBloom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupBloom)> {
  constexpr static std::size_t size = 0xd24;
  constexpr static std::size_t addrs = 0x29c0550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupBloom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.SetupLensDistortion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(::UnityEngine::Material*, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupLensDistortion)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x29c1274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupLensDistortion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.SetupChromaticAberration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupChromaticAberration)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x29c1548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupChromaticAberration",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.SetupVignette
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupVignette)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x29c1638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupVignette", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.SetupColorGrading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>, ::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupColorGrading)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x29c17d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupColorGrading", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.SetupGrain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ByRef<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupGrain)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29c1b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupGrain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.SetupDithering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ByRef<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupDithering)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x29c1bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupDithering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass.RenderFinalPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::RenderFinalPass)> {
  constexpr static std::size_t size = 0xdbc;
  constexpr static std::size_t addrs = 0x29bbdb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "RenderFinalPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass._Render_g__GetSource_57_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0>)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::_Render_g__GetSource_57_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29bef68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "<Render>g__GetSource|57_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass._Render_g__GetDestination_57_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0>)>(&::UnityEngine::Rendering::Universal::Internal::PostProcessPass::_Render_g__GetDestination_57_1)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x29bef7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "<Render>g__GetDestination|57_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::PostProcessPass._Render_g__Swap_57_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::PostProcessPass::*)(
    ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>, ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0>)>(
    &::UnityEngine::Rendering::Universal::Internal::PostProcessPass::_Render_g__Swap_57_2)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x29bf1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "<Render>g__Swap|57_2",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Descriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Descriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptor;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_Descriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Descriptor = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_Source(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Source = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Destination;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Destination;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_Destination(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Destination = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Depth;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Depth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_Depth(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Depth = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_InternalLut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalLut;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_InternalLut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalLut;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_InternalLut(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InternalLut = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Materials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Materials;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary*> const&
UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Materials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Materials;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_Materials(::UnityEngine::Rendering::Universal::Internal::__PostProcessPass__MaterialLibrary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Materials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_Data(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_DepthOfField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthOfField;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_DepthOfField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthOfField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_DepthOfField(::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DepthOfField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_MotionBlur() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionBlur;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_MotionBlur() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionBlur;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_MotionBlur(::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MotionBlur)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_PaniniProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PaniniProjection;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_PaniniProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PaniniProjection;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_PaniniProjection(::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PaniniProjection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Bloom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bloom;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Bloom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bloom;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_Bloom(::UnityW<::UnityEngine::Rendering::Universal::Bloom> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Bloom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_LensDistortion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensDistortion;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_LensDistortion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensDistortion;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_LensDistortion(::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LensDistortion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_ChromaticAberration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChromaticAberration;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_ChromaticAberration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChromaticAberration;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_ChromaticAberration(::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ChromaticAberration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Vignette() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vignette;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Vignette() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vignette;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_Vignette(::UnityW<::UnityEngine::Rendering::Universal::Vignette> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Vignette)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_ColorLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorLookup;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_ColorLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorLookup;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_ColorLookup(::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ColorLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_ColorAdjustments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAdjustments;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_ColorAdjustments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAdjustments;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_ColorAdjustments(::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ColorAdjustments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Tonemapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tonemapping;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_Tonemapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tonemapping;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_Tonemapping(::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Tonemapping)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_FilmGrain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilmGrain;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_FilmGrain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilmGrain;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_FilmGrain(::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FilmGrain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_DefaultHDRFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultHDRFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_DefaultHDRFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultHDRFormat;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_DefaultHDRFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultHDRFormat = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_UseRGBM() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseRGBM;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_UseRGBM() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseRGBM;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_UseRGBM(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseRGBM = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_SMAAEdgeFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SMAAEdgeFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_SMAAEdgeFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SMAAEdgeFormat;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_SMAAEdgeFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SMAAEdgeFormat = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_GaussianCoCFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GaussianCoCFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_GaussianCoCFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GaussianCoCFormat;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_GaussianCoCFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GaussianCoCFormat = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_ResetHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetHistory;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_ResetHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetHistory;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_ResetHistory(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResetHistory = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_DitheringTextureIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DitheringTextureIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_DitheringTextureIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DitheringTextureIndex;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_DitheringTextureIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DitheringTextureIndex = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>&
UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_MRT2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MRT2;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const&
UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_MRT2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MRT2;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_MRT2(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MRT2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_BokehKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehKernel;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_BokehKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehKernel;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_BokehKernel(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BokehKernel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_BokehHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehHash;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_BokehHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehHash;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_BokehHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BokehHash = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_BokehMaxRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehMaxRadius;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_BokehMaxRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehMaxRadius;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_BokehMaxRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BokehMaxRadius = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_BokehRCPAspect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehRCPAspect;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_BokehRCPAspect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehRCPAspect;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_BokehRCPAspect(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BokehRCPAspect = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_IsFinalPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFinalPass;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_IsFinalPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFinalPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_IsFinalPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsFinalPass = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_HasFinalPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFinalPass;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_HasFinalPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFinalPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_HasFinalPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasFinalPass = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_EnableSRGBConversionIfNeeded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableSRGBConversionIfNeeded;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_EnableSRGBConversionIfNeeded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableSRGBConversionIfNeeded;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_EnableSRGBConversionIfNeeded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableSRGBConversionIfNeeded = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_UseDrawProcedural() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseDrawProcedural;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_UseDrawProcedural() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseDrawProcedural;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_UseDrawProcedural(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseDrawProcedural = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_UseFastSRGBLinearConversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseFastSRGBLinearConversion;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_UseFastSRGBLinearConversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseFastSRGBLinearConversion;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_UseFastSRGBLinearConversion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseFastSRGBLinearConversion = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_ResolveToScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResolveToScreen;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_ResolveToScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResolveToScreen;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_ResolveToScreen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResolveToScreen = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_UseSwapBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseSwapBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_UseSwapBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseSwapBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_UseSwapBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseSwapBuffer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_BlitMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_get_m_BlitMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::PostProcessPass::__cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BlitMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::setStaticF_m_ProfilingRenderPostProcessing(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingRenderPostProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::PostProcessPass::getStaticF_m_ProfilingRenderPostProcessing() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingRenderPostProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::setStaticF_m_ProfilingRenderFinalPostProcessing(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingRenderFinalPostProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::PostProcessPass::getStaticF_m_ProfilingRenderFinalPostProcessing() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingRenderFinalPostProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::setStaticF_kShaderPropertyId_ViewProjM(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kShaderPropertyId_ViewProjM",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::PostProcessPass::getStaticF_kShaderPropertyId_ViewProjM() {
  return ::cordl_internals::getStaticField<int32_t, "kShaderPropertyId_ViewProjM",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::setStaticF_kShaderPropertyId_PrevViewProjM(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kShaderPropertyId_PrevViewProjM",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::PostProcessPass::getStaticF_kShaderPropertyId_PrevViewProjM() {
  return ::cordl_internals::getStaticField<int32_t, "kShaderPropertyId_PrevViewProjM",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::setStaticF_kShaderPropertyId_ViewProjMStereo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kShaderPropertyId_ViewProjMStereo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::PostProcessPass::getStaticF_kShaderPropertyId_ViewProjMStereo() {
  return ::cordl_internals::getStaticField<int32_t, "kShaderPropertyId_ViewProjMStereo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::setStaticF_kShaderPropertyId_PrevViewProjMStereo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kShaderPropertyId_PrevViewProjMStereo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::PostProcessPass::getStaticF_kShaderPropertyId_PrevViewProjMStereo() {
  return ::cordl_internals::getStaticField<int32_t, "kShaderPropertyId_PrevViewProjMStereo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get>();
}
inline ::UnityEngine::Rendering::Universal::Internal::PostProcessPass*
UnityEngine::Rendering::Universal::Internal::PostProcessPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                                       ::UnityEngine::Material* blitMaterial) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>(evt, data, blitMaterial));
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                                                ::UnityEngine::Material* blitMaterial) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, data, blitMaterial);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "Cleanup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::Setup(ByRef<::UnityEngine::RenderTextureDescriptor> baseDescriptor,
                                                                                ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> source, bool resolveToScreen,
                                                                                ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> depth,
                                                                                ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> internalLut, bool hasFinalPass,
                                                                                bool enableSRGBConversion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseDescriptor, source, resolveToScreen, depth, internalLut, hasFinalPass, enableSRGBConversion);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::Setup(ByRef<::UnityEngine::RenderTextureDescriptor> baseDescriptor,
                                                                                ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> source,
                                                                                ::UnityEngine::Rendering::Universal::RenderTargetHandle destination,
                                                                                ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> depth,
                                                                                ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> internalLut, bool hasFinalPass,
                                                                                bool enableSRGBConversion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseDescriptor, source, destination, depth, internalLut, hasFinalPass, enableSRGBConversion);
}
/// @param useSwapBuffer: bool (default: false)
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupFinalPass(ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> source, bool useSwapBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupFinalPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, useSwapBuffer);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                        ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::ResetHistory() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "ResetHistory",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::PostProcessPass::CanRunOnTile() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "CanRunOnTile",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                  ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::Internal::PostProcessPass::GetCompatibleDescriptor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                               "GetCompatibleDescriptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor, false>(this, ___internal_method);
}
/// @param depthBufferBits: int32_t (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::Internal::PostProcessPass::GetCompatibleDescriptor(int32_t width, int32_t height,
                                                                                                                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                                                                    int32_t depthBufferBits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "GetCompatibleDescriptor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor, false>(this, ___internal_method, width, height, format, depthBufferBits);
}
inline bool UnityEngine::Rendering::Universal::Internal::PostProcessPass::RequireSRGBConversionBlitToBackBuffer(::UnityEngine::Rendering::Universal::CameraData cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "RequireSRGBConversionBlitToBackBuffer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cameraData);
}
/// @param passIndex: int32_t (default: static_cast<int32_t>(0x0))
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                               ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Material* material, int32_t passIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "Blit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, source, destination, material, passIndex);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::DrawFullscreenMesh(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* material, int32_t passIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DrawFullscreenMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, material, passIndex);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::Render(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                 ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline ::UnityEngine::Rendering::BuiltinRenderTextureType UnityEngine::Rendering::Universal::Internal::PostProcessPass::BlitDstDiscardContent(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                                                              ::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "BlitDstDiscardContent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BuiltinRenderTextureType, false>(this, ___internal_method, cmd, rt);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoSubpixelMorphologicalAntialiasing(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                                                                                              ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                              ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                                                              ::UnityEngine::Rendering::RenderTargetIdentifier destination) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                               "DoSubpixelMorphologicalAntialiasing", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData, cmd, source, destination);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoDepthOfField(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                         ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                                         ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Rect pixelRect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DoDepthOfField", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, cmd, source, destination, pixelRect);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoGaussianDepthOfField(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                 ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                                                 ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Rect pixelRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DoGaussianDepthOfField",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, cmd, source, destination, pixelRect);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::PrepareBokehKernel(float_t maxRadius, float_t rcpAspect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "PrepareBokehKernel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxRadius, rcpAspect);
}
inline float_t UnityEngine::Rendering::Universal::Internal::PostProcessPass::GetMaxBokehRadiusInPixels(float_t viewportHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "GetMaxBokehRadiusInPixels",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, viewportHeight);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoBokehDepthOfField(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                                              ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Rect pixelRect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DoBokehDepthOfField", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, source, destination, pixelRect);
}
inline float_t UnityEngine::Rendering::Universal::Internal::PostProcessPass::GetLensFlareLightAttenuation(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                               "GetLensFlareLightAttenuation", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, light, cam, wo);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoLensFlareDatadriven(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                ::UnityEngine::Rendering::RenderTargetIdentifier source, bool usePanini, float_t paniniDistance,
                                                                                                float_t paniniCropToFit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DoLensFlareDatadriven", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, cmd, source, usePanini, paniniDistance, paniniCropToFit);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::UpdateMotionBlurMatrices(ByRef<::UnityEngine::Material*> material, ::UnityEngine::Camera* camera,
                                                                                                   ::UnityEngine::Rendering::Universal::XRPass* xr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(),
                                               "UpdateMotionBlurMatrices", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Material*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material, camera, xr);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoMotionBlur(::UnityEngine::Rendering::Universal::CameraData cameraData, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                       ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                                       ::UnityEngine::Rendering::RenderTargetIdentifier destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DoMotionBlur", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData, cmd, source, destination);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::DoPaniniProjection(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                             ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                                             ::UnityEngine::Rendering::RenderTargetIdentifier destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "DoPaniniProjection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, cmd, source, destination);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::Internal::PostProcessPass::CalcViewExtents(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "CalcViewExtents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, camera);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::Internal::PostProcessPass::CalcCropExtents(::UnityEngine::Camera* camera, float_t d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "CalcCropExtents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, camera, d);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupBloom(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                                     ::UnityEngine::Material* uberMaterial) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupBloom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, source, uberMaterial);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupLensDistortion(::UnityEngine::Material* material, bool isSceneView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupLensDistortion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material, isSceneView);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupChromaticAberration(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupChromaticAberration",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupVignette(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupVignette", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupColorGrading(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                            ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                                            ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupColorGrading", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData, material);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupGrain(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupGrain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData, material);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::SetupDithering(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "SetupDithering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData, material);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::RenderFinalPass(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                          ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "RenderFinalPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::Internal::PostProcessPass::_Render_g__GetSource_57_0(
    ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "<Render>g__GetSource|57_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::Internal::PostProcessPass::_Render_g__GetDestination_57_1(
    ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "<Render>g__GetDestination|57_1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void UnityEngine::Rendering::Universal::Internal::PostProcessPass::_Render_g__Swap_57_2(
    ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> r,
    ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::PostProcessPass*>::get(), "<Render>g__Swap|57_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::Internal::__PostProcessPass____c__DisplayClass57_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::PostProcessPass::PostProcessPass() {}
