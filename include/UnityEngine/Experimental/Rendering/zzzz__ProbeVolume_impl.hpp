#pragma once
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolume_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolume::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolume::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23c79a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolume*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_globalVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalVolume;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_globalVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalVolume;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_set_globalVolume(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___globalVolume = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_set_size(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr float_t& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_geometryDistanceOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geometryDistanceOffset;
}
constexpr float_t const& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_geometryDistanceOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geometryDistanceOffset;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_set_geometryDistanceOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___geometryDistanceOffset = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_objectLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_objectLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectLayerMask;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_set_objectLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectLayerMask = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_lowestSubdivLevelOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowestSubdivLevelOverride;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_lowestSubdivLevelOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowestSubdivLevelOverride;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_set_lowestSubdivLevelOverride(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lowestSubdivLevelOverride = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_highestSubdivLevelOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highestSubdivLevelOverride;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_highestSubdivLevelOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highestSubdivLevelOverride;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_set_highestSubdivLevelOverride(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highestSubdivLevelOverride = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_overridesSubdivLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overridesSubdivLevels;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_overridesSubdivLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overridesSubdivLevels;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_set_overridesSubdivLevels(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overridesSubdivLevels = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_mightNeedRebaking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mightNeedRebaking;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_mightNeedRebaking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mightNeedRebaking;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_set_mightNeedRebaking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mightNeedRebaking = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_cachedTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedTransform;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_cachedTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedTransform;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_set_cachedTransform(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedTransform = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_cachedHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedHashCode;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_get_cachedHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedHashCode;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolume::__cordl_internal_set_cachedHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedHashCode = value;
}
inline ::UnityEngine::Experimental::Rendering::ProbeVolume* UnityEngine::Experimental::Rendering::ProbeVolume::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::ProbeVolume*>());
}
inline void UnityEngine::Experimental::Rendering::ProbeVolume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolume*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolume::ProbeVolume() {}
