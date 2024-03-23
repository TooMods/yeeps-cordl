#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleItemDispenser_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleItemDispenser.OnSpawnItemButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleItemDispenser::*)()>(
    &::GlobalNamespace::SimpleItemDispenser::OnSpawnItemButtonPressed)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xf24c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleItemDispenser*>::get(),
                                                                               "OnSpawnItemButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleItemDispenser.GetSpawnCustomParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__Item__CustomParameters* (::GlobalNamespace::SimpleItemDispenser::*)()>(
    &::GlobalNamespace::SimpleItemDispenser::GetSpawnCustomParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xf24e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleItemDispenser*>::get(),
                                                                               "GetSpawnCustomParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleItemDispenser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleItemDispenser::*)()>(&::GlobalNamespace::SimpleItemDispenser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf24f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleItemDispenser*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SimpleItemDispenser::__cordl_internal_get_spawnPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SimpleItemDispenser::__cordl_internal_get_spawnPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnPoint;
}
constexpr void GlobalNamespace::SimpleItemDispenser::__cordl_internal_set_spawnPoint(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spawnPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SimpleItemDispenser::__cordl_internal_get_spawnVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SimpleItemDispenser::__cordl_internal_get_spawnVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnVelocity;
}
constexpr void GlobalNamespace::SimpleItemDispenser::__cordl_internal_set_spawnVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spawnVelocity = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::SimpleItemDispenser::__cordl_internal_get_itemKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemKeys;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::SimpleItemDispenser::__cordl_internal_get_itemKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemKeys;
}
constexpr void GlobalNamespace::SimpleItemDispenser::__cordl_internal_set_itemKeys(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::SimpleItemDispenser::__cordl_internal_get_customParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customParameters;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::SimpleItemDispenser::__cordl_internal_get_customParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customParameters;
}
constexpr void GlobalNamespace::SimpleItemDispenser::__cordl_internal_set_customParameters(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SimpleItemDispenser::__cordl_internal_get_randomizeBetweenCustomParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeBetweenCustomParameters;
}
constexpr bool const& GlobalNamespace::SimpleItemDispenser::__cordl_internal_get_randomizeBetweenCustomParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeBetweenCustomParameters;
}
constexpr void GlobalNamespace::SimpleItemDispenser::__cordl_internal_set_randomizeBetweenCustomParameters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___randomizeBetweenCustomParameters = value;
}
inline void GlobalNamespace::SimpleItemDispenser::OnSpawnItemButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleItemDispenser*>::get(),
                                                                             "OnSpawnItemButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__Item__CustomParameters* GlobalNamespace::SimpleItemDispenser::GetSpawnCustomParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleItemDispenser*>::get(),
                                                                             "GetSpawnCustomParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__Item__CustomParameters*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleItemDispenser* GlobalNamespace::SimpleItemDispenser::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SimpleItemDispenser*>());
}
inline void GlobalNamespace::SimpleItemDispenser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleItemDispenser*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleItemDispenser::SimpleItemDispenser() {}
