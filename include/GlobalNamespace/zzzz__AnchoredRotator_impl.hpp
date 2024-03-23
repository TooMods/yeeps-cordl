#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AnchoredRotator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnchoredRotator.SnapToCorrectTransformation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnchoredRotator::*)()>(&::GlobalNamespace::AnchoredRotator::SnapToCorrectTransformation)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x153f720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnchoredRotator*>::get(),
                                                                               "SnapToCorrectTransformation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnchoredRotator.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnchoredRotator::*)()>(&::GlobalNamespace::AnchoredRotator::LateUpdate)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x153f948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnchoredRotator*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnchoredRotator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnchoredRotator::*)()>(&::GlobalNamespace::AnchoredRotator::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x153fdc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnchoredRotator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AnchoredRotator::__cordl_internal_get_rotationLerpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationLerpSpeed;
}
constexpr float_t const& GlobalNamespace::AnchoredRotator::__cordl_internal_get_rotationLerpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationLerpSpeed;
}
constexpr void GlobalNamespace::AnchoredRotator::__cordl_internal_set_rotationLerpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationLerpSpeed = value;
}
constexpr float_t& GlobalNamespace::AnchoredRotator::__cordl_internal_get_minAngleForEngageMovementDegrees() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minAngleForEngageMovementDegrees;
}
constexpr float_t const& GlobalNamespace::AnchoredRotator::__cordl_internal_get_minAngleForEngageMovementDegrees() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minAngleForEngageMovementDegrees;
}
constexpr void GlobalNamespace::AnchoredRotator::__cordl_internal_set_minAngleForEngageMovementDegrees(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minAngleForEngageMovementDegrees = value;
}
constexpr float_t& GlobalNamespace::AnchoredRotator::__cordl_internal_get_minAngleForDisengageMovementDegrees() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minAngleForDisengageMovementDegrees;
}
constexpr float_t const& GlobalNamespace::AnchoredRotator::__cordl_internal_get_minAngleForDisengageMovementDegrees() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minAngleForDisengageMovementDegrees;
}
constexpr void GlobalNamespace::AnchoredRotator::__cordl_internal_set_minAngleForDisengageMovementDegrees(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minAngleForDisengageMovementDegrees = value;
}
constexpr bool& GlobalNamespace::AnchoredRotator::__cordl_internal_get_isMovementEngaged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMovementEngaged;
}
constexpr bool const& GlobalNamespace::AnchoredRotator::__cordl_internal_get_isMovementEngaged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMovementEngaged;
}
constexpr void GlobalNamespace::AnchoredRotator::__cordl_internal_set_isMovementEngaged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMovementEngaged = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AnchoredRotator::__cordl_internal_get_followAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AnchoredRotator::__cordl_internal_get_followAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followAnchor;
}
constexpr void GlobalNamespace::AnchoredRotator::__cordl_internal_set_followAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___followAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AnchoredRotator::__cordl_internal_get_upReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upReference;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AnchoredRotator::__cordl_internal_get_upReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upReference;
}
constexpr void GlobalNamespace::AnchoredRotator::__cordl_internal_set_upReference(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___upReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AnchoredRotator::__cordl_internal_get_offsetFromAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetFromAnchor;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AnchoredRotator::__cordl_internal_get_offsetFromAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetFromAnchor;
}
constexpr void GlobalNamespace::AnchoredRotator::__cordl_internal_set_offsetFromAnchor(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsetFromAnchor = value;
}
inline void GlobalNamespace::AnchoredRotator::SnapToCorrectTransformation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnchoredRotator*>::get(),
                                                                             "SnapToCorrectTransformation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AnchoredRotator::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnchoredRotator*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AnchoredRotator* GlobalNamespace::AnchoredRotator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AnchoredRotator*>());
}
inline void GlobalNamespace::AnchoredRotator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnchoredRotator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnchoredRotator::AnchoredRotator() {}
