#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MapObjectPickupData_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MapObjectPickupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectPickupData::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::GlobalNamespace::MapObjectPickupData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x307abc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectPickupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::MapObjectPickupData::__cordl_internal_get_localPivotPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPivotPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MapObjectPickupData::__cordl_internal_get_localPivotPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPivotPosition;
}
constexpr void GlobalNamespace::MapObjectPickupData::__cordl_internal_set_localPivotPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localPivotPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MapObjectPickupData::__cordl_internal_get_rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MapObjectPickupData::__cordl_internal_get_rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationOffset;
}
constexpr void GlobalNamespace::MapObjectPickupData::__cordl_internal_set_rotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationOffset = value;
}
inline ::GlobalNamespace::MapObjectPickupData* GlobalNamespace::MapObjectPickupData::New_ctor(::UnityEngine::Vector3 localPivotPosition, ::UnityEngine::Quaternion rotationOffset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MapObjectPickupData*>(localPivotPosition, rotationOffset));
}
inline void GlobalNamespace::MapObjectPickupData::_ctor(::UnityEngine::Vector3 localPivotPosition, ::UnityEngine::Quaternion rotationOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectPickupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localPivotPosition, rotationOffset);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MapObjectPickupData::MapObjectPickupData() {}
