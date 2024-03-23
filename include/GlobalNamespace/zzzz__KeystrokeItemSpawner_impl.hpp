#pragma once
#include "GlobalNamespace/zzzz__ItemSpawner_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__KeystrokeItemSpawner_def.hpp"
#include "GlobalNamespace/zzzz__ItemTransformationData_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KeystrokeItemSpawner.OnStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeystrokeItemSpawner::*)()>(&::GlobalNamespace::KeystrokeItemSpawner::OnStart)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ab1544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeystrokeItemSpawner.OnItemSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeystrokeItemSpawner::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::KeystrokeItemSpawner::OnItemSpawned)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2ab15d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeystrokeItemSpawner.TryGetSpawnTransformationData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::KeystrokeItemSpawner::*)(ByRef<::GlobalNamespace::ItemTransformationData>)>(
    &::GlobalNamespace::KeystrokeItemSpawner::TryGetSpawnTransformationData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2ab185c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeystrokeItemSpawner.GetSpawnCustomParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__Item__CustomParameters* (::GlobalNamespace::KeystrokeItemSpawner::*)()>(
    &::GlobalNamespace::KeystrokeItemSpawner::GetSpawnCustomParameters)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2ab195c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeystrokeItemSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeystrokeItemSpawner::*)()>(&::GlobalNamespace::KeystrokeItemSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab1a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_itemKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemKeys;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_itemKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemKeys;
}
constexpr void GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_set_itemKeys(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_customParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customParameters;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_customParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customParameters;
}
constexpr void GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_set_customParameters(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_randomizeBetweenCustomParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeBetweenCustomParameters;
}
constexpr bool const& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_randomizeBetweenCustomParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeBetweenCustomParameters;
}
constexpr void GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_set_randomizeBetweenCustomParameters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___randomizeBetweenCustomParameters = value;
}
constexpr bool& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_useCameraRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCameraRotation;
}
constexpr bool const& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_useCameraRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCameraRotation;
}
constexpr void GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_set_useCameraRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useCameraRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_throwVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_throwVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwVelocity;
}
constexpr void GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_set_throwVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___throwVelocity = value;
}
constexpr float_t& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_throwVelocityMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwVelocityMin;
}
constexpr float_t const& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_throwVelocityMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwVelocityMin;
}
constexpr void GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_set_throwVelocityMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___throwVelocityMin = value;
}
constexpr float_t& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_throwVelocityMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwVelocityMax;
}
constexpr float_t const& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_throwVelocityMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwVelocityMax;
}
constexpr void GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_set_throwVelocityMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___throwVelocityMax = value;
}
constexpr bool& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_randomizeRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeRotation;
}
constexpr bool const& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_randomizeRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeRotation;
}
constexpr void GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_set_randomizeRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___randomizeRotation = value;
}
constexpr ::UnityEngine::KeyCode& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_spawnKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnKey;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_get_spawnKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnKey;
}
constexpr void GlobalNamespace::KeystrokeItemSpawner::__cordl_internal_set_spawnKey(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spawnKey = value;
}
inline void GlobalNamespace::KeystrokeItemSpawner::OnStart() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::KeystrokeItemSpawner::OnItemSpawned(::GlobalNamespace::Item* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline bool GlobalNamespace::KeystrokeItemSpawner::TryGetSpawnTransformationData(ByRef<::GlobalNamespace::ItemTransformationData> itemTransformationData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, itemTransformationData);
}
inline ::GlobalNamespace::__Item__CustomParameters* GlobalNamespace::KeystrokeItemSpawner::GetSpawnCustomParameters() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__Item__CustomParameters*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::KeystrokeItemSpawner* GlobalNamespace::KeystrokeItemSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::KeystrokeItemSpawner*>());
}
inline void GlobalNamespace::KeystrokeItemSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeItemSpawner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeystrokeItemSpawner::KeystrokeItemSpawner() {}
