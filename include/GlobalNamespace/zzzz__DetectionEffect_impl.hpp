#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DetectionEffect_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DetectionEffect.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DetectionEffect::*)(float_t, bool)>(&::GlobalNamespace::DetectionEffect::Initialize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x29c3844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DetectionEffect*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DetectionEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DetectionEffect::*)()>(&::GlobalNamespace::DetectionEffect::Update)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x29c3a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DetectionEffect*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DetectionEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DetectionEffect::*)()>(&::GlobalNamespace::DetectionEffect::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29c3b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DetectionEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::DetectionEffect::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr float_t const& GlobalNamespace::DetectionEffect::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void GlobalNamespace::DetectionEffect::__cordl_internal_set_p(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr float_t& GlobalNamespace::DetectionEffect::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr float_t const& GlobalNamespace::DetectionEffect::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void GlobalNamespace::DetectionEffect::__cordl_internal_set_r(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr float_t& GlobalNamespace::DetectionEffect::__cordl_internal_get_radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr float_t const& GlobalNamespace::DetectionEffect::__cordl_internal_get_radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr void GlobalNamespace::DetectionEffect::__cordl_internal_set_radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radius = value;
}
constexpr ::StringW& GlobalNamespace::DetectionEffect::__cordl_internal_get_detectSoundEffectKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectSoundEffectKey;
}
constexpr ::StringW const& GlobalNamespace::DetectionEffect::__cordl_internal_get_detectSoundEffectKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectSoundEffectKey;
}
constexpr void GlobalNamespace::DetectionEffect::__cordl_internal_set_detectSoundEffectKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___detectSoundEffectKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::DetectionEffect::__cordl_internal_get_noDetectSoundEffectKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noDetectSoundEffectKey;
}
constexpr ::StringW const& GlobalNamespace::DetectionEffect::__cordl_internal_get_noDetectSoundEffectKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noDetectSoundEffectKey;
}
constexpr void GlobalNamespace::DetectionEffect::__cordl_internal_set_noDetectSoundEffectKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___noDetectSoundEffectKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DetectionEffect::__cordl_internal_get_noDetectAlphaMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noDetectAlphaMul;
}
constexpr float_t const& GlobalNamespace::DetectionEffect::__cordl_internal_get_noDetectAlphaMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noDetectAlphaMul;
}
constexpr void GlobalNamespace::DetectionEffect::__cordl_internal_set_noDetectAlphaMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noDetectAlphaMul = value;
}
constexpr float_t& GlobalNamespace::DetectionEffect::__cordl_internal_get_detectFresnelPower() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectFresnelPower;
}
constexpr float_t const& GlobalNamespace::DetectionEffect::__cordl_internal_get_detectFresnelPower() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectFresnelPower;
}
constexpr void GlobalNamespace::DetectionEffect::__cordl_internal_set_detectFresnelPower(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___detectFresnelPower = value;
}
constexpr float_t& GlobalNamespace::DetectionEffect::__cordl_internal_get_noDetectFresnelPower() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noDetectFresnelPower;
}
constexpr float_t const& GlobalNamespace::DetectionEffect::__cordl_internal_get_noDetectFresnelPower() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noDetectFresnelPower;
}
constexpr void GlobalNamespace::DetectionEffect::__cordl_internal_set_noDetectFresnelPower(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noDetectFresnelPower = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DetectionEffect::__cordl_internal_get_mat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DetectionEffect::__cordl_internal_get_mat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mat;
}
constexpr void GlobalNamespace::DetectionEffect::__cordl_internal_set_mat(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::DetectionEffect::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DetectionEffect::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::DetectionEffect::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr float_t& GlobalNamespace::DetectionEffect::__cordl_internal_get_maxAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAlpha;
}
constexpr float_t const& GlobalNamespace::DetectionEffect::__cordl_internal_get_maxAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAlpha;
}
constexpr void GlobalNamespace::DetectionEffect::__cordl_internal_set_maxAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAlpha = value;
}
inline void GlobalNamespace::DetectionEffect::Initialize(float_t radius, bool didDetect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DetectionEffect*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, radius, didDetect);
}
inline void GlobalNamespace::DetectionEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DetectionEffect*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DetectionEffect* GlobalNamespace::DetectionEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DetectionEffect*>());
}
inline void GlobalNamespace::DetectionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DetectionEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DetectionEffect::DetectionEffect() {}
