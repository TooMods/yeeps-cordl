#pragma once
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__ProjectileManager_def.hpp"
#include "GlobalNamespace/zzzz__ProjectileManager_def.hpp"
#include "GlobalNamespace/zzzz__Projectile_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__ProjectileManager__ProjectileData::__ProjectileManager__ProjectileData(::StringW key, ::UnityW<::UnityEngine::GameObject> prefab) noexcept {
  this->key = key;
  this->prefab = prefab;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ProjectileManager__ProjectileData::__ProjectileManager__ProjectileData() {}
//  Writing Method size for method: ::GlobalNamespace::ProjectileManager.BuildProjectileDatasDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::ProjectileManager::BuildProjectileDatasDictionary)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1756f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(),
                                                                               "BuildProjectileDatasDictionary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileManager.TryGetProjectileData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::__ProjectileManager__ProjectileData>)>(
    &::GlobalNamespace::ProjectileManager::TryGetProjectileData)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x17570c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "TryGetProjectileData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__ProjectileManager__ProjectileData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileManager.SendCreateProjectile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProjectileManager::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::StringW)>(
    &::GlobalNamespace::ProjectileManager::SendCreateProjectile)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x17571bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(),
                                                                               "SendCreateProjectile", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileManager.SendCreateProjectile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProjectileManager::*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, ::StringW)>(&::GlobalNamespace::ProjectileManager::SendCreateProjectile)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x17572b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "SendCreateProjectile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileManager.OnReceiveCreateProjectile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProjectileManager::*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, ::StringW, ::StringW, bool)>(&::GlobalNamespace::ProjectileManager::OnReceiveCreateProjectile)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x1757488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "OnReceiveCreateProjectile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileManager.RegisterActiveProjectile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ProjectileManager::*)(::StringW, ::GlobalNamespace::Projectile*)>(
    &::GlobalNamespace::ProjectileManager::RegisterActiveProjectile)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x175769c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "RegisterActiveProjectile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Projectile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileManager.GenerateProjectileID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::ProjectileManager::GenerateProjectileID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x175745c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(),
                                                                               "GenerateProjectileID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileManager.DeregisterActiveProjectile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProjectileManager::*)(::StringW)>(
    &::GlobalNamespace::ProjectileManager::DeregisterActiveProjectile)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1756f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "DeregisterActiveProjectile",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileManager.OnReceiveDestroyProjectile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProjectileManager::*)(::StringW, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::ProjectileManager::OnReceiveDestroyProjectile)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x175770c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "OnReceiveDestroyProjectile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProjectileManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProjectileManager::*)()>(&::GlobalNamespace::ProjectileManager::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x17577b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__ProjectileManager__ProjectileData, ::Array<::GlobalNamespace::__ProjectileManager__ProjectileData>*>&
GlobalNamespace::ProjectileManager::__cordl_internal_get_projectileDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectileDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__ProjectileManager__ProjectileData, ::Array<::GlobalNamespace::__ProjectileManager__ProjectileData>*> const&
GlobalNamespace::ProjectileManager::__cordl_internal_get_projectileDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectileDatas;
}
constexpr void GlobalNamespace::ProjectileManager::__cordl_internal_set_projectileDatas(
    ::ArrayW<::GlobalNamespace::__ProjectileManager__ProjectileData, ::Array<::GlobalNamespace::__ProjectileManager__ProjectileData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___projectileDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Projectile>>*& GlobalNamespace::ProjectileManager::__cordl_internal_get_activeProjectiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeProjectiles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Projectile>>*> const&
GlobalNamespace::ProjectileManager::__cordl_internal_get_activeProjectiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeProjectiles;
}
constexpr void GlobalNamespace::ProjectileManager::__cordl_internal_set_activeProjectiles(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Projectile>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeProjectiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
GlobalNamespace::ProjectileManager::setStaticF_projectileDatasDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ProjectileManager__ProjectileData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ProjectileManager__ProjectileData>*, "projectileDatasDictionary",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ProjectileManager__ProjectileData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ProjectileManager__ProjectileData>* GlobalNamespace::ProjectileManager::getStaticF_projectileDatasDictionary() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ProjectileManager__ProjectileData>*, "projectileDatasDictionary",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get>();
}
inline void GlobalNamespace::ProjectileManager::BuildProjectileDatasDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(),
                                                                             "BuildProjectileDatasDictionary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ProjectileManager::TryGetProjectileData(::StringW projectileKey, ByRef<::GlobalNamespace::__ProjectileManager__ProjectileData> projectileData) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "TryGetProjectileData", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__ProjectileManager__ProjectileData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, projectileKey, projectileData);
}
/// @param colorKey: ::StringW (default: nullptr)
inline void GlobalNamespace::ProjectileManager::SendCreateProjectile(::StringW projectileKey, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity, ::StringW colorKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "SendCreateProjectile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, projectileKey, position, velocity, colorKey);
}
/// @param colorKey: ::StringW (default: nullptr)
inline void GlobalNamespace::ProjectileManager::SendCreateProjectile(::StringW projectileKey, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t speed, ::StringW colorKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "SendCreateProjectile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, projectileKey, position, rotation, speed, colorKey);
}
inline void GlobalNamespace::ProjectileManager::OnReceiveCreateProjectile(::StringW projectileKey, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t speed,
                                                                          ::StringW colorKey, ::StringW projectileID, bool isMaster) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "OnReceiveCreateProjectile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, projectileKey, position, rotation, speed, colorKey, projectileID, isMaster);
}
inline ::StringW GlobalNamespace::ProjectileManager::RegisterActiveProjectile(::StringW projectileID, ::GlobalNamespace::Projectile* projectile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "RegisterActiveProjectile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Projectile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, projectileID, projectile);
}
inline ::StringW GlobalNamespace::ProjectileManager::GenerateProjectileID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(),
                                                                             "GenerateProjectileID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ProjectileManager::DeregisterActiveProjectile(::StringW projectileID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "DeregisterActiveProjectile",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, projectileID);
}
inline void GlobalNamespace::ProjectileManager::OnReceiveDestroyProjectile(::StringW projectileID, ::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), "OnReceiveDestroyProjectile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, projectileID, position);
}
inline ::GlobalNamespace::ProjectileManager* GlobalNamespace::ProjectileManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ProjectileManager*>());
}
inline void GlobalNamespace::ProjectileManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProjectileManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProjectileManager::ProjectileManager() {}
