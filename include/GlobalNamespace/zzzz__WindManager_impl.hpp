#pragma once
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__WindManager_def.hpp"
#include "GlobalNamespace/zzzz__WindZone_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WindManager.CreateWindZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::WindZone> (::GlobalNamespace::WindManager::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, float_t)>(&::GlobalNamespace::WindManager::CreateWindZone)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xf348ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindManager*>::get(), "CreateWindZone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WindManager.DestroyWindZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WindManager::*)(::GlobalNamespace::WindZone*)>(
    &::GlobalNamespace::WindManager::DestroyWindZone)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf34c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindManager*>::get(), "DestroyWindZone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::WindZone*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WindManager.GetWindZones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WindManager::*)(
    ::UnityEngine::Vector3, ::ArrayW<::GlobalNamespace::WindZone*, ::Array<::GlobalNamespace::WindZone*>*>, ByRef<int32_t>)>(&::GlobalNamespace::WindManager::GetWindZones)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xf34d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindManager*>::get(), "GetWindZones", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::WindZone*, ::Array<::GlobalNamespace::WindZone*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WindManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WindManager::*)()>(&::GlobalNamespace::WindManager::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xf3500c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::WindManager::__cordl_internal_get_windZonePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windZonePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::WindManager::__cordl_internal_get_windZonePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windZonePrefab;
}
constexpr void GlobalNamespace::WindManager::__cordl_internal_set_windZonePrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___windZonePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::WindManager::__cordl_internal_get_windForceMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windForceMultiplier;
}
constexpr float_t const& GlobalNamespace::WindManager::__cordl_internal_get_windForceMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windForceMultiplier;
}
constexpr void GlobalNamespace::WindManager::__cordl_internal_set_windForceMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windForceMultiplier = value;
}
constexpr float_t& GlobalNamespace::WindManager::__cordl_internal_get_windDriftForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windDriftForce;
}
constexpr float_t const& GlobalNamespace::WindManager::__cordl_internal_get_windDriftForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windDriftForce;
}
constexpr void GlobalNamespace::WindManager::__cordl_internal_set_windDriftForce(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windDriftForce = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::WindManager::__cordl_internal_get_windForceDistanceFalloffCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windForceDistanceFalloffCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::WindManager::__cordl_internal_get_windForceDistanceFalloffCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windForceDistanceFalloffCurve;
}
constexpr void GlobalNamespace::WindManager::__cordl_internal_set_windForceDistanceFalloffCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___windForceDistanceFalloffCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::WindManager::__cordl_internal_get_windZoneBlockerLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windZoneBlockerLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::WindManager::__cordl_internal_get_windZoneBlockerLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windZoneBlockerLayerMask;
}
constexpr void GlobalNamespace::WindManager::__cordl_internal_set_windZoneBlockerLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windZoneBlockerLayerMask = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WindZone>>*& GlobalNamespace::WindManager::__cordl_internal_get_windZones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windZones;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WindZone>>*> const&
GlobalNamespace::WindManager::__cordl_internal_get_windZones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windZones;
}
constexpr void GlobalNamespace::WindManager::__cordl_internal_set_windZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WindZone>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___windZones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::WindZone> GlobalNamespace::WindManager::CreateWindZone(::UnityEngine::Vector3 origin, ::UnityEngine::Quaternion rotation, float_t radius, float_t distance,
                                                                                          float_t speed) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindManager*>::get(), "CreateWindZone", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::WindZone>, false>(this, ___internal_method, origin, rotation, radius, distance, speed);
}
inline void GlobalNamespace::WindManager::DestroyWindZone(::GlobalNamespace::WindZone* windZone) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindManager*>::get(), "DestroyWindZone", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::WindZone*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, windZone);
}
inline void GlobalNamespace::WindManager::GetWindZones(::UnityEngine::Vector3 position, ::ArrayW<::GlobalNamespace::WindZone*, ::Array<::GlobalNamespace::WindZone*>*> buffer, ByRef<int32_t> count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindManager*>::get(), "GetWindZones", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::WindZone*, ::Array<::GlobalNamespace::WindZone*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, buffer, count);
}
inline ::GlobalNamespace::WindManager* GlobalNamespace::WindManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::WindManager*>());
}
inline void GlobalNamespace::WindManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WindManager::WindManager() {}
