#pragma once
#include "GlobalNamespace/zzzz__ThrowableEmbeddingItem_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableWeaponItem_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ThrowableWeaponItem.DestroysMapObjectsOnHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ThrowableWeaponItem::*)()>(
    &::GlobalNamespace::ThrowableWeaponItem::DestroysMapObjectsOnHit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f68180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableWeaponItem.OnDestroyedStuffedMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThrowableWeaponItem::*)(::GlobalNamespace::MapObject*)>(
    &::GlobalNamespace::ThrowableWeaponItem::OnDestroyedStuffedMapObject)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f68188;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableWeaponItem.CanStabPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ThrowableWeaponItem::*)(::GlobalNamespace::Player*)>(
    &::GlobalNamespace::ThrowableWeaponItem::CanStabPlayer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2f681f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableWeaponItem.OnEmbedded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThrowableWeaponItem::*)(::UnityEngine::Vector3, ::GlobalNamespace::Player*, bool)>(
    &::GlobalNamespace::ThrowableWeaponItem::OnEmbedded)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x2f68228;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableWeaponItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThrowableWeaponItem::*)()>(&::GlobalNamespace::ThrowableWeaponItem::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f68628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ThrowableWeaponItem::__cordl_internal_get_embedKillSoundEffectKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___embedKillSoundEffectKey;
}
constexpr ::StringW const& GlobalNamespace::ThrowableWeaponItem::__cordl_internal_get_embedKillSoundEffectKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___embedKillSoundEffectKey;
}
constexpr void GlobalNamespace::ThrowableWeaponItem::__cordl_internal_set_embedKillSoundEffectKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___embedKillSoundEffectKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::ThrowableWeaponItem::DestroysMapObjectsOnHit() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableWeaponItem::OnDestroyedStuffedMapObject(::GlobalNamespace::MapObject* mapObject) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapObject);
}
inline bool GlobalNamespace::ThrowableWeaponItem::CanStabPlayer(::GlobalNamespace::Player* player) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::ThrowableWeaponItem::OnEmbedded(::UnityEngine::Vector3 embedPosition, ::GlobalNamespace::Player* hitPlayer, bool isStab) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, embedPosition, hitPlayer, isStab);
}
inline ::GlobalNamespace::ThrowableWeaponItem* GlobalNamespace::ThrowableWeaponItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ThrowableWeaponItem*>());
}
inline void GlobalNamespace::ThrowableWeaponItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThrowableWeaponItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThrowableWeaponItem::ThrowableWeaponItem() {}
