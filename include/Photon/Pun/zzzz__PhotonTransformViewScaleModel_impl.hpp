#pragma once
#include "Photon/Pun/zzzz__PhotonTransformViewScaleModel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewScaleModel_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewScaleModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions::__PhotonTransformViewScaleModel__InterpolateOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions::__PhotonTransformViewScaleModel__InterpolateOptions() {}
constexpr ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions::MoveTowards{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions::Lerp{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewScaleModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonTransformViewScaleModel::*)()>(&::Photon::Pun::PhotonTransformViewScaleModel::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26082e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewScaleModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_SynchronizeEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SynchronizeEnabled;
}
constexpr bool const& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_SynchronizeEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SynchronizeEnabled;
}
constexpr void Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_set_SynchronizeEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SynchronizeEnabled = value;
}
constexpr ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateOption;
}
constexpr ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions const& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateOption;
}
constexpr void Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_set_InterpolateOption(::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InterpolateOption = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateMoveTowardsSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateMoveTowardsSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateMoveTowardsSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateMoveTowardsSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_set_InterpolateMoveTowardsSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InterpolateMoveTowardsSpeed = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateLerpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateLerpSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateLerpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InterpolateLerpSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_set_InterpolateLerpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InterpolateLerpSpeed = value;
}
inline ::Photon::Pun::PhotonTransformViewScaleModel* Photon::Pun::PhotonTransformViewScaleModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::PhotonTransformViewScaleModel*>());
}
inline void Photon::Pun::PhotonTransformViewScaleModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewScaleModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformViewScaleModel::PhotonTransformViewScaleModel() {}
