#pragma once
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MapObjectRotatorHelper_def.hpp"
#include "GlobalNamespace/zzzz__MapObjectRotatorHelper_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "mapObjectKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "rotationEulers", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "apply", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MapObjectRotatorHelper__RotationData::__MapObjectRotatorHelper__RotationData(::StringW mapObjectKey, ::UnityEngine::Vector3 rotationEulers, bool apply) noexcept {
  this->mapObjectKey = mapObjectKey;
  this->rotationEulers = rotationEulers;
  this->apply = apply;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MapObjectRotatorHelper__RotationData::__MapObjectRotatorHelper__RotationData() {}
//  Writing Method size for method: ::GlobalNamespace::MapObjectRotatorHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectRotatorHelper::*)()>(&::GlobalNamespace::MapObjectRotatorHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3075d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectRotatorHelper*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::KeyCode& GlobalNamespace::MapObjectRotatorHelper::__cordl_internal_get_rotateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotateKey;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::MapObjectRotatorHelper::__cordl_internal_get_rotateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotateKey;
}
constexpr void GlobalNamespace::MapObjectRotatorHelper::__cordl_internal_set_rotateKey(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotateKey = value;
}
constexpr ::ArrayW<::GlobalNamespace::__MapObjectRotatorHelper__RotationData, ::Array<::GlobalNamespace::__MapObjectRotatorHelper__RotationData>*>&
GlobalNamespace::MapObjectRotatorHelper::__cordl_internal_get_rotationDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__MapObjectRotatorHelper__RotationData, ::Array<::GlobalNamespace::__MapObjectRotatorHelper__RotationData>*> const&
GlobalNamespace::MapObjectRotatorHelper::__cordl_internal_get_rotationDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationDatas;
}
constexpr void GlobalNamespace::MapObjectRotatorHelper::__cordl_internal_set_rotationDatas(
    ::ArrayW<::GlobalNamespace::__MapObjectRotatorHelper__RotationData, ::Array<::GlobalNamespace::__MapObjectRotatorHelper__RotationData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rotationDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MapObjectRotatorHelper::__cordl_internal_get_nextValidRotateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextValidRotateTime;
}
constexpr float_t const& GlobalNamespace::MapObjectRotatorHelper::__cordl_internal_get_nextValidRotateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextValidRotateTime;
}
constexpr void GlobalNamespace::MapObjectRotatorHelper::__cordl_internal_set_nextValidRotateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextValidRotateTime = value;
}
inline ::GlobalNamespace::MapObjectRotatorHelper* GlobalNamespace::MapObjectRotatorHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MapObjectRotatorHelper*>());
}
inline void GlobalNamespace::MapObjectRotatorHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectRotatorHelper*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MapObjectRotatorHelper::MapObjectRotatorHelper() {}
