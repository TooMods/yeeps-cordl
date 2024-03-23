#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DebugProbeShadingMode_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeDebug_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumeDebug._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumeDebug::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumeDebug::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23c3f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeDebug*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_drawProbes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawProbes;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_drawProbes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawProbes;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_drawProbes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawProbes = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_drawBricks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawBricks;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_drawBricks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawBricks;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_drawBricks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawBricks = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_drawCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawCells;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_drawCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawCells;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_drawCells(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawCells = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_realtimeSubdivision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realtimeSubdivision;
}
constexpr bool const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_realtimeSubdivision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realtimeSubdivision;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_realtimeSubdivision(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___realtimeSubdivision = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_subdivisionCellUpdatePerFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subdivisionCellUpdatePerFrame;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_subdivisionCellUpdatePerFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subdivisionCellUpdatePerFrame;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_subdivisionCellUpdatePerFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subdivisionCellUpdatePerFrame = value;
}
constexpr float_t& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_subdivisionDelayInSeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subdivisionDelayInSeconds;
}
constexpr float_t const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_subdivisionDelayInSeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subdivisionDelayInSeconds;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_subdivisionDelayInSeconds(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subdivisionDelayInSeconds = value;
}
constexpr ::UnityEngine::Experimental::Rendering::DebugProbeShadingMode& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_probeShading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeShading;
}
constexpr ::UnityEngine::Experimental::Rendering::DebugProbeShadingMode const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_probeShading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeShading;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_probeShading(::UnityEngine::Experimental::Rendering::DebugProbeShadingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeShading = value;
}
constexpr float_t& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_probeSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeSize;
}
constexpr float_t const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_probeSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeSize;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_probeSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeSize = value;
}
constexpr float_t& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_subdivisionViewCullingDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subdivisionViewCullingDistance;
}
constexpr float_t const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_subdivisionViewCullingDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subdivisionViewCullingDistance;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_subdivisionViewCullingDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subdivisionViewCullingDistance = value;
}
constexpr float_t& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_probeCullingDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeCullingDistance;
}
constexpr float_t const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_probeCullingDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeCullingDistance;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_probeCullingDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeCullingDistance = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_maxSubdivToVisualize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSubdivToVisualize;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_maxSubdivToVisualize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSubdivToVisualize;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_maxSubdivToVisualize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxSubdivToVisualize = value;
}
constexpr float_t& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_exposureCompensation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exposureCompensation;
}
constexpr float_t const& UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_get_exposureCompensation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exposureCompensation;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::__cordl_internal_set_exposureCompensation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exposureCompensation = value;
}
inline ::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* UnityEngine::Experimental::Rendering::ProbeVolumeDebug::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::ProbeVolumeDebug*>());
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumeDebug::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumeDebug*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeDebug::ProbeVolumeDebug() {}
