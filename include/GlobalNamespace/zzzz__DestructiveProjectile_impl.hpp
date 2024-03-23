#pragma once
#include "GlobalNamespace/zzzz__Projectile_impl.hpp"
#include "GlobalNamespace/zzzz__DestructiveProjectile_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__TrailRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DestructiveProjectile.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DestructiveProjectile::*)(::StringW, bool, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::DestructiveProjectile::Initialize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1755bd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DestructiveProjectile.OnTriggerEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DestructiveProjectile::*)(::UnityEngine::Collider*)>(
    &::GlobalNamespace::DestructiveProjectile::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x1755d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), "OnTriggerEnter", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DestructiveProjectile.OnImpact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DestructiveProjectile::*)(::UnityEngine::Collider*)>(
    &::GlobalNamespace::DestructiveProjectile::OnImpact)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1756224;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DestructiveProjectile.GetDestroyPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::DestructiveProjectile::*)(::UnityEngine::Collider*)>(
    &::GlobalNamespace::DestructiveProjectile::GetDestroyPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x175635c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DestructiveProjectile.OnHitPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DestructiveProjectile::*)(::GlobalNamespace::Player*)>(
    &::GlobalNamespace::DestructiveProjectile::OnHitPlayer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1756390;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DestructiveProjectile.OnHitMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DestructiveProjectile::*)(::GlobalNamespace::MapObject*)>(
    &::GlobalNamespace::DestructiveProjectile::OnHitMapObject)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x17563f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DestructiveProjectile.DestroySelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DestructiveProjectile::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::DestructiveProjectile::DestroySelf)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1756458;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DestructiveProjectile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DestructiveProjectile::*)()>(&::GlobalNamespace::DestructiveProjectile::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x17565e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::DestructiveProjectile::__cordl_internal_get_playerKnockbackAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerKnockbackAmount;
}
constexpr float_t const& GlobalNamespace::DestructiveProjectile::__cordl_internal_get_playerKnockbackAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerKnockbackAmount;
}
constexpr void GlobalNamespace::DestructiveProjectile::__cordl_internal_set_playerKnockbackAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerKnockbackAmount = value;
}
constexpr float_t& GlobalNamespace::DestructiveProjectile::__cordl_internal_get_itemKnockbackAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemKnockbackAmount;
}
constexpr float_t const& GlobalNamespace::DestructiveProjectile::__cordl_internal_get_itemKnockbackAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemKnockbackAmount;
}
constexpr void GlobalNamespace::DestructiveProjectile::__cordl_internal_set_itemKnockbackAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemKnockbackAmount = value;
}
constexpr float_t& GlobalNamespace::DestructiveProjectile::__cordl_internal_get_verticalKnockbackAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalKnockbackAmount;
}
constexpr float_t const& GlobalNamespace::DestructiveProjectile::__cordl_internal_get_verticalKnockbackAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalKnockbackAmount;
}
constexpr void GlobalNamespace::DestructiveProjectile::__cordl_internal_set_verticalKnockbackAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___verticalKnockbackAmount = value;
}
constexpr ::UnityW<::UnityEngine::TrailRenderer>& GlobalNamespace::DestructiveProjectile::__cordl_internal_get_trailRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailRenderer;
}
constexpr ::UnityW<::UnityEngine::TrailRenderer> const& GlobalNamespace::DestructiveProjectile::__cordl_internal_get_trailRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailRenderer;
}
constexpr void GlobalNamespace::DestructiveProjectile::__cordl_internal_set_trailRenderer(::UnityW<::UnityEngine::TrailRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trailRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DestructiveProjectile::__cordl_internal_get_minAllowedHitTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minAllowedHitTime;
}
constexpr float_t const& GlobalNamespace::DestructiveProjectile::__cordl_internal_get_minAllowedHitTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minAllowedHitTime;
}
constexpr void GlobalNamespace::DestructiveProjectile::__cordl_internal_set_minAllowedHitTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minAllowedHitTime = value;
}
inline void GlobalNamespace::DestructiveProjectile::Initialize(::StringW projectileID, bool isMaster, ::UnityEngine::Vector3 velocity) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, projectileID, isMaster, velocity);
}
inline void GlobalNamespace::DestructiveProjectile::OnTriggerEnter(::UnityEngine::Collider* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), "OnTriggerEnter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void GlobalNamespace::DestructiveProjectile::OnImpact(::UnityEngine::Collider* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline ::UnityEngine::Vector3 GlobalNamespace::DestructiveProjectile::GetDestroyPosition(::UnityEngine::Collider* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, other);
}
inline void GlobalNamespace::DestructiveProjectile::OnHitPlayer(::GlobalNamespace::Player* player) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::DestructiveProjectile::OnHitMapObject(::GlobalNamespace::MapObject* mapObject) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapObject);
}
inline void GlobalNamespace::DestructiveProjectile::DestroySelf(::UnityEngine::Vector3 position) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline ::GlobalNamespace::DestructiveProjectile* GlobalNamespace::DestructiveProjectile::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DestructiveProjectile*>());
}
inline void GlobalNamespace::DestructiveProjectile::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DestructiveProjectile*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DestructiveProjectile::DestructiveProjectile() {}
