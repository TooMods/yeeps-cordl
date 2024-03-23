#pragma once
#include "GlobalNamespace/zzzz__ExplosionType_impl.hpp"
#include "GlobalNamespace/zzzz__Player_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableImpactItem_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableImpactBombItem_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ThrowableImpactBombItem.DoesCollideWithPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ThrowableImpactBombItem::*)()>(
    &::GlobalNamespace::ThrowableImpactBombItem::DoesCollideWithPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f6693c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableImpactBombItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableImpactBombItem*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableImpactBombItem.OnImpactTriggered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThrowableImpactBombItem::*)(::UnityEngine::Collision*)>(
    &::GlobalNamespace::ThrowableImpactBombItem::OnImpactTriggered)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2f66944;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableImpactBombItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableImpactBombItem*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableImpactBombItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThrowableImpactBombItem::*)()>(&::GlobalNamespace::ThrowableImpactBombItem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f66b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableImpactBombItem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__Player__StatusEffect& GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_get_directImpactStatusEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directImpactStatusEffect;
}
constexpr ::GlobalNamespace::__Player__StatusEffect const& GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_get_directImpactStatusEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directImpactStatusEffect;
}
constexpr void GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_set_directImpactStatusEffect(::GlobalNamespace::__Player__StatusEffect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___directImpactStatusEffect = value;
}
constexpr float_t& GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_get_directImpactStatusEffectDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directImpactStatusEffectDuration;
}
constexpr float_t const& GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_get_directImpactStatusEffectDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directImpactStatusEffectDuration;
}
constexpr void GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_set_directImpactStatusEffectDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___directImpactStatusEffectDuration = value;
}
constexpr ::GlobalNamespace::ExplosionType& GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_get_explosionType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explosionType;
}
constexpr ::GlobalNamespace::ExplosionType const& GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_get_explosionType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explosionType;
}
constexpr void GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_set_explosionType(::GlobalNamespace::ExplosionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___explosionType = value;
}
constexpr float_t& GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_get_explosionRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explosionRadius;
}
constexpr float_t const& GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_get_explosionRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___explosionRadius;
}
constexpr void GlobalNamespace::ThrowableImpactBombItem::__cordl_internal_set_explosionRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___explosionRadius = value;
}
inline bool GlobalNamespace::ThrowableImpactBombItem::DoesCollideWithPlayers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableImpactBombItem*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableImpactBombItem::OnImpactTriggered(::UnityEngine::Collision* collision) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableImpactBombItem*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collision);
}
inline ::GlobalNamespace::ThrowableImpactBombItem* GlobalNamespace::ThrowableImpactBombItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ThrowableImpactBombItem*>());
}
inline void GlobalNamespace::ThrowableImpactBombItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableImpactBombItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThrowableImpactBombItem::ThrowableImpactBombItem() {}
