#pragma once
#include "GlobalNamespace/zzzz__DespawningItem_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SlashingItem_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlashingItem.GetBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SlashingItem::*)(ByRef<::UnityEngine::Vector3>, ByRef<float_t>)>(
    &::GlobalNamespace::SlashingItem::GetBounds)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2aaf248;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlashingItem.OnAnchorStateUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SlashingItem::*)()>(&::GlobalNamespace::SlashingItem::OnAnchorStateUpdated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2aaf268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlashingItem.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SlashingItem::*)()>(&::GlobalNamespace::SlashingItem::OnUpdate)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x2aaf328;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlashingItem.OnHitMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SlashingItem::*)(::GlobalNamespace::MapObject*, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::SlashingItem::OnHitMapObject)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2aaf854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), "OnHitMapObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlashingItem.OnHitPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SlashingItem::*)(::GlobalNamespace::Player*, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::SlashingItem::OnHitPlayer)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2aafa04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), "OnHitPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlashingItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SlashingItem::*)()>(&::GlobalNamespace::SlashingItem::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2aafd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SlashingItem::__cordl_internal_get_collectAsStuffingOnHit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectAsStuffingOnHit;
}
constexpr bool const& GlobalNamespace::SlashingItem::__cordl_internal_get_collectAsStuffingOnHit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectAsStuffingOnHit;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_collectAsStuffingOnHit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collectAsStuffingOnHit = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SlashingItem::__cordl_internal_get_deadlyLocalOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deadlyLocalOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SlashingItem::__cordl_internal_get_deadlyLocalOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deadlyLocalOffset;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_deadlyLocalOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deadlyLocalOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SlashingItem::__cordl_internal_get_deadlyExtents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deadlyExtents;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SlashingItem::__cordl_internal_get_deadlyExtents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deadlyExtents;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_deadlyExtents(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deadlyExtents = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SlashingItem::__cordl_internal_get_thrownDeadlyExtents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thrownDeadlyExtents;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SlashingItem::__cordl_internal_get_thrownDeadlyExtents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thrownDeadlyExtents;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_thrownDeadlyExtents(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thrownDeadlyExtents = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::SlashingItem::__cordl_internal_get_hitableLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitableLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::SlashingItem::__cordl_internal_get_hitableLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitableLayerMask;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_hitableLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hitableLayerMask = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SlashingItem::__cordl_internal_get_lastDeadlyCenterPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastDeadlyCenterPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SlashingItem::__cordl_internal_get_lastDeadlyCenterPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastDeadlyCenterPosition;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_lastDeadlyCenterPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastDeadlyCenterPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SlashingItem::__cordl_internal_get_deadlyCenterVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deadlyCenterVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SlashingItem::__cordl_internal_get_deadlyCenterVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deadlyCenterVelocity;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_deadlyCenterVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deadlyCenterVelocity = value;
}
constexpr float_t& GlobalNamespace::SlashingItem::__cordl_internal_get_hitDropVelocityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitDropVelocityMultiplier;
}
constexpr float_t const& GlobalNamespace::SlashingItem::__cordl_internal_get_hitDropVelocityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitDropVelocityMultiplier;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_hitDropVelocityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hitDropVelocityMultiplier = value;
}
constexpr float_t& GlobalNamespace::SlashingItem::__cordl_internal_get_hitPlayerKnockbackMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPlayerKnockbackMultiplier;
}
constexpr float_t const& GlobalNamespace::SlashingItem::__cordl_internal_get_hitPlayerKnockbackMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPlayerKnockbackMultiplier;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_hitPlayerKnockbackMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hitPlayerKnockbackMultiplier = value;
}
constexpr float_t& GlobalNamespace::SlashingItem::__cordl_internal_get_maxPlayerKnockback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxPlayerKnockback;
}
constexpr float_t const& GlobalNamespace::SlashingItem::__cordl_internal_get_maxPlayerKnockback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxPlayerKnockback;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_maxPlayerKnockback(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxPlayerKnockback = value;
}
constexpr ::StringW& GlobalNamespace::SlashingItem::__cordl_internal_get_hitPlayerSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPlayerSoundKey;
}
constexpr ::StringW const& GlobalNamespace::SlashingItem::__cordl_internal_get_hitPlayerSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPlayerSoundKey;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_hitPlayerSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hitPlayerSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::SlashingItem::__cordl_internal_get_squeakSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___squeakSoundKey;
}
constexpr ::StringW const& GlobalNamespace::SlashingItem::__cordl_internal_get_squeakSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___squeakSoundKey;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_squeakSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___squeakSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SlashingItem::__cordl_internal_get_anchorChangeTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorChangeTime;
}
constexpr float_t const& GlobalNamespace::SlashingItem::__cordl_internal_get_anchorChangeTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorChangeTime;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_anchorChangeTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anchorChangeTime = value;
}
constexpr bool& GlobalNamespace::SlashingItem::__cordl_internal_get_isHeld() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHeld;
}
constexpr bool const& GlobalNamespace::SlashingItem::__cordl_internal_get_isHeld() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHeld;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_isHeld(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isHeld = value;
}
constexpr float_t& GlobalNamespace::SlashingItem::__cordl_internal_get_lastPlayerHitTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPlayerHitTime;
}
constexpr float_t const& GlobalNamespace::SlashingItem::__cordl_internal_get_lastPlayerHitTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPlayerHitTime;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_lastPlayerHitTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastPlayerHitTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SlashingItem::__cordl_internal_get_boundingCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SlashingItem::__cordl_internal_get_boundingCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingCenter;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundingCenter = value;
}
constexpr float_t& GlobalNamespace::SlashingItem::__cordl_internal_get_boundingRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingRadius;
}
constexpr float_t const& GlobalNamespace::SlashingItem::__cordl_internal_get_boundingRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingRadius;
}
constexpr void GlobalNamespace::SlashingItem::__cordl_internal_set_boundingRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundingRadius = value;
}
inline void GlobalNamespace::SlashingItem::GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, center, radius);
}
inline void GlobalNamespace::SlashingItem::OnAnchorStateUpdated() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SlashingItem::OnUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SlashingItem::OnHitMapObject(::GlobalNamespace::MapObject* mapObject, ::UnityEngine::Vector3 hitPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), "OnHitMapObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapObject, hitPosition);
}
inline void GlobalNamespace::SlashingItem::OnHitPlayer(::GlobalNamespace::Player* player, ::UnityEngine::Vector3 hitPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), "OnHitPlayer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, hitPosition);
}
inline ::GlobalNamespace::SlashingItem* GlobalNamespace::SlashingItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SlashingItem*>());
}
inline void GlobalNamespace::SlashingItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlashingItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlashingItem::SlashingItem() {}
