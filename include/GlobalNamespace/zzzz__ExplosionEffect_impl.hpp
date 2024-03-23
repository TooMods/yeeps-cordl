#pragma once
#include "GlobalNamespace/zzzz__Player_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ExplosionEffect_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExplosionEffect.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExplosionEffect::*)(bool, float_t, float_t)>(
    &::GlobalNamespace::ExplosionEffect::Initialize)> {
  constexpr static std::size_t size = 0xa7c;
  constexpr static std::size_t addrs = 0x29c4a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplosionEffect*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExplosionEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExplosionEffect::*)()>(&::GlobalNamespace::ExplosionEffect::Update)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x29c5fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplosionEffect*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExplosionEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExplosionEffect::*)()>(&::GlobalNamespace::ExplosionEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c6140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplosionEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::ExplosionEffect::__cordl_internal_get_mapObjectLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_mapObjectLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectLayerMask;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_mapObjectLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mapObjectLayerMask = value;
}
constexpr bool& GlobalNamespace::ExplosionEffect::__cordl_internal_get_destroysStuffedMapObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destroysStuffedMapObjects;
}
constexpr bool const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_destroysStuffedMapObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destroysStuffedMapObjects;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_destroysStuffedMapObjects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destroysStuffedMapObjects = value;
}
constexpr bool& GlobalNamespace::ExplosionEffect::__cordl_internal_get_doPlayerKnockback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doPlayerKnockback;
}
constexpr bool const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_doPlayerKnockback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doPlayerKnockback;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_doPlayerKnockback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doPlayerKnockback = value;
}
constexpr ::GlobalNamespace::__Player__StatusEffect& GlobalNamespace::ExplosionEffect::__cordl_internal_get_statusEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffect;
}
constexpr ::GlobalNamespace::__Player__StatusEffect const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_statusEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffect;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_statusEffect(::GlobalNamespace::__Player__StatusEffect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___statusEffect = value;
}
constexpr float_t& GlobalNamespace::ExplosionEffect::__cordl_internal_get_statusEffectDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffectDuration;
}
constexpr float_t const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_statusEffectDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffectDuration;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_statusEffectDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___statusEffectDuration = value;
}
constexpr ::StringW& GlobalNamespace::ExplosionEffect::__cordl_internal_get_soundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soundKey;
}
constexpr ::StringW const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_soundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soundKey;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_soundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___soundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::ExplosionEffect::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr float_t const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_p(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr float_t& GlobalNamespace::ExplosionEffect::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr float_t const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_r(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr float_t& GlobalNamespace::ExplosionEffect::__cordl_internal_get_radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr float_t const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radius = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ExplosionEffect::__cordl_internal_get_explosionMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explosionMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_explosionMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explosionMat;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_explosionMat(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___explosionMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::ExplosionEffect::__cordl_internal_get_explosionColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explosionColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_explosionColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explosionColor;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_explosionColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___explosionColor = value;
}
constexpr float_t& GlobalNamespace::ExplosionEffect::__cordl_internal_get_explosionColorAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explosionColorAlpha;
}
constexpr float_t const& GlobalNamespace::ExplosionEffect::__cordl_internal_get_explosionColorAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explosionColorAlpha;
}
constexpr void GlobalNamespace::ExplosionEffect::__cordl_internal_set_explosionColorAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___explosionColorAlpha = value;
}
/// @param knockbackMultiplier: float_t (default: 1.0)
inline void GlobalNamespace::ExplosionEffect::Initialize(bool isMaster, float_t radius, float_t knockbackMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplosionEffect*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isMaster, radius, knockbackMultiplier);
}
inline void GlobalNamespace::ExplosionEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplosionEffect*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ExplosionEffect* GlobalNamespace::ExplosionEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ExplosionEffect*>());
}
inline void GlobalNamespace::ExplosionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplosionEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExplosionEffect::ExplosionEffect() {}
