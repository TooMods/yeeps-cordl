#pragma once
#include "GlobalNamespace/zzzz__DestructiveProjectile_impl.hpp"
#include "GlobalNamespace/zzzz__PelletProjectile_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PelletProjectile.OnHitMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PelletProjectile::*)(::GlobalNamespace::MapObject*)>(
    &::GlobalNamespace::PelletProjectile::OnHitMapObject)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1756b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PelletProjectile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PelletProjectile*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PelletProjectile.DestroySelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PelletProjectile::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::PelletProjectile::DestroySelf)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1756c24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PelletProjectile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PelletProjectile*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PelletProjectile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PelletProjectile::*)()>(&::GlobalNamespace::PelletProjectile::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1756d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PelletProjectile*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PelletProjectile::__cordl_internal_get_hitSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitSoundKey;
}
constexpr ::StringW const& GlobalNamespace::PelletProjectile::__cordl_internal_get_hitSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitSoundKey;
}
constexpr void GlobalNamespace::PelletProjectile::__cordl_internal_set_hitSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hitSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PelletProjectile::OnHitMapObject(::GlobalNamespace::MapObject* mapObject) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PelletProjectile*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapObject);
}
inline void GlobalNamespace::PelletProjectile::DestroySelf(::UnityEngine::Vector3 position) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PelletProjectile*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline ::GlobalNamespace::PelletProjectile* GlobalNamespace::PelletProjectile::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PelletProjectile*>());
}
inline void GlobalNamespace::PelletProjectile::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PelletProjectile*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PelletProjectile::PelletProjectile() {}
