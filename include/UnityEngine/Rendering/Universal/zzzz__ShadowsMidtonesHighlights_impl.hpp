#pragma once
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowsMidtonesHighlights_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__MinFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__Vector4Parameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsActive)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27273a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>::get(), "IsActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights.IsTileCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272744c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>::get(), "IsTileCompatible",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2727454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent*
UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadows;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadows;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_shadows(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadows)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_midtones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___midtones;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_midtones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___midtones;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_midtones(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___midtones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlights;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const&
UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlights;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_highlights(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___highlights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadowsStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowsStart;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const&
UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadowsStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowsStart;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_shadowsStart(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadowsStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadowsEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowsEnd;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const&
UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_shadowsEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowsEnd;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_shadowsEnd(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadowsEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlightsStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlightsStart;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const&
UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlightsStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlightsStart;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_highlightsStart(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___highlightsStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlightsEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlightsEnd;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const&
UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_get_highlightsEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlightsEnd;
}
constexpr void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::__cordl_internal_set_highlightsEnd(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___highlightsEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsActive() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>::get(), "IsActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::IsTileCompatible() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>::get(), "IsTileCompatible",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights* UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>());
}
inline void UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights::ShadowsMidtonesHighlights() {}
