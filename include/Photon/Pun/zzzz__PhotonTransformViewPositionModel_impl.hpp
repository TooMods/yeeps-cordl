#pragma once
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions::__PhotonTransformViewPositionModel__InterpolateOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions::__PhotonTransformViewPositionModel__InterpolateOptions() {}
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions::FixedSpeed{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions::EstimatedSpeed{ static_cast<int32_t>(0x2) };
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions::SynchronizeValues{ static_cast<int32_t>(0x3) };
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions::Lerp{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions::__PhotonTransformViewPositionModel__ExtrapolateOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions::__PhotonTransformViewPositionModel__ExtrapolateOptions() {}
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions::SynchronizeValues{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions::EstimateSpeedAndTurn{ static_cast<int32_t>(0x2) };
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions::FixedSpeed{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionModel::*)()>(
    &::Photon::Pun::PhotonTransformViewPositionModel::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2608298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_SynchronizeEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SynchronizeEnabled;
}
constexpr bool const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_SynchronizeEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SynchronizeEnabled;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_SynchronizeEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SynchronizeEnabled = value;
}
constexpr bool& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_TeleportEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TeleportEnabled;
}
constexpr bool const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_TeleportEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TeleportEnabled;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_TeleportEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TeleportEnabled = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_TeleportIfDistanceGreaterThan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TeleportIfDistanceGreaterThan;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_TeleportIfDistanceGreaterThan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TeleportIfDistanceGreaterThan;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_TeleportIfDistanceGreaterThan(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TeleportIfDistanceGreaterThan = value;
}
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateOption;
}
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateOption;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_InterpolateOption(::Photon::Pun::__PhotonTransformViewPositionModel__InterpolateOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InterpolateOption = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateMoveTowardsSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateMoveTowardsSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateMoveTowardsSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateMoveTowardsSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_InterpolateMoveTowardsSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InterpolateMoveTowardsSpeed = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateLerpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateLerpSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateLerpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateLerpSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_InterpolateLerpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InterpolateLerpSpeed = value;
}
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtrapolateOption;
}
constexpr ::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtrapolateOption;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_ExtrapolateOption(::Photon::Pun::__PhotonTransformViewPositionModel__ExtrapolateOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExtrapolateOption = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtrapolateSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtrapolateSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_ExtrapolateSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExtrapolateSpeed = value;
}
constexpr bool& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateIncludingRoundTripTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtrapolateIncludingRoundTripTime;
}
constexpr bool const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateIncludingRoundTripTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtrapolateIncludingRoundTripTime;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_ExtrapolateIncludingRoundTripTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExtrapolateIncludingRoundTripTime = value;
}
constexpr int32_t& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateNumberOfStoredPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtrapolateNumberOfStoredPositions;
}
constexpr int32_t const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateNumberOfStoredPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtrapolateNumberOfStoredPositions;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_ExtrapolateNumberOfStoredPositions(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExtrapolateNumberOfStoredPositions = value;
}
inline ::Photon::Pun::PhotonTransformViewPositionModel* Photon::Pun::PhotonTransformViewPositionModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::PhotonTransformViewPositionModel*>());
}
inline void Photon::Pun::PhotonTransformViewPositionModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformViewPositionModel::PhotonTransformViewPositionModel() {}
