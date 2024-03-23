#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionControl_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionControl::*)(::Photon::Pun::PhotonTransformViewPositionModel*)>(
    &::Photon::Pun::PhotonTransformViewPositionControl::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26070b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonTransformViewPositionModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.GetOldestStoredNetworkPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewPositionControl::*)()>(
    &::Photon::Pun::PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26082f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(),
                                                                               "GetOldestStoredNetworkPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.SetSynchronizedValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionControl::*)(::UnityEngine::Vector3, float_t)>(
    &::Photon::Pun::PhotonTransformViewPositionControl::SetSynchronizedValues)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2607d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(),
                                                                               "SetSynchronizedValues", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.UpdatePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewPositionControl::*)(::UnityEngine::Vector3)>(
    &::Photon::Pun::PhotonTransformViewPositionControl::UpdatePosition)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x2607480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(), "UpdatePosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.GetNetworkPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewPositionControl::*)()>(
    &::Photon::Pun::PhotonTransformViewPositionControl::GetNetworkPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x260861c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(),
                                                                               "GetNetworkPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.GetExtrapolatedPositionOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewPositionControl::*)()>(
    &::Photon::Pun::PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2608370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(),
                                                                               "GetExtrapolatedPositionOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.OnPhotonSerializeView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionControl::*)(
    ::UnityEngine::Vector3, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonTransformViewPositionControl::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2607ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(), "OnPhotonSerializeView", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.SerializeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionControl::*)(
    ::UnityEngine::Vector3, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonTransformViewPositionControl::SerializeData)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2608628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(), "SerializeData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.DeserializeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionControl::*)(
    ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonTransformViewPositionControl::DeserializeData)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2608750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(), "DeserializeData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
    return ___internal_method;
  }
};
constexpr ::Photon::Pun::PhotonTransformViewPositionModel*& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_Model() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Model;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonTransformViewPositionModel*> const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_Model() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Model;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_Model(::Photon::Pun::PhotonTransformViewPositionModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Model)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_CurrentSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_CurrentSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_CurrentSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentSpeed = value;
}
constexpr double_t& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_LastSerializeTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastSerializeTime;
}
constexpr double_t const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_LastSerializeTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastSerializeTime;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_LastSerializeTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastSerializeTime = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_SynchronizedSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SynchronizedSpeed;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_SynchronizedSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SynchronizedSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_SynchronizedSpeed(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SynchronizedSpeed = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_SynchronizedTurnSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SynchronizedTurnSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_SynchronizedTurnSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SynchronizedTurnSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_SynchronizedTurnSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SynchronizedTurnSpeed = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_NetworkPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NetworkPosition;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_NetworkPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NetworkPosition;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NetworkPosition = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_OldNetworkPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldNetworkPositions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*> const&
Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_OldNetworkPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldNetworkPositions;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_OldNetworkPositions(::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OldNetworkPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_UpdatedPositionAfterOnSerialize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatedPositionAfterOnSerialize;
}
constexpr bool const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_UpdatedPositionAfterOnSerialize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatedPositionAfterOnSerialize;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_UpdatedPositionAfterOnSerialize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdatedPositionAfterOnSerialize = value;
}
inline ::Photon::Pun::PhotonTransformViewPositionControl* Photon::Pun::PhotonTransformViewPositionControl::New_ctor(::Photon::Pun::PhotonTransformViewPositionModel* model) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::PhotonTransformViewPositionControl*>(model));
}
inline void Photon::Pun::PhotonTransformViewPositionControl::_ctor(::Photon::Pun::PhotonTransformViewPositionModel* model) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonTransformViewPositionModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, model);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(),
                                                                             "GetOldestStoredNetworkPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonTransformViewPositionControl::SetSynchronizedValues(::UnityEngine::Vector3 speed, float_t turnSpeed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(),
                                                                             "SetSynchronizedValues", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, speed, turnSpeed);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewPositionControl::UpdatePosition(::UnityEngine::Vector3 currentPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(), "UpdatePosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, currentPosition);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewPositionControl::GetNetworkPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(),
                                                                             "GetNetworkPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(),
                                                                             "GetExtrapolatedPositionOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonTransformViewPositionControl::OnPhotonSerializeView(::UnityEngine::Vector3 currentPosition, ::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(), "OnPhotonSerializeView", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentPosition, stream, info);
}
inline void Photon::Pun::PhotonTransformViewPositionControl::SerializeData(::UnityEngine::Vector3 currentPosition, ::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(), "SerializeData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentPosition, stream, info);
}
inline void Photon::Pun::PhotonTransformViewPositionControl::DeserializeData(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewPositionControl*>::get(), "DeserializeData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, info);
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformViewPositionControl::PhotonTransformViewPositionControl() {}
