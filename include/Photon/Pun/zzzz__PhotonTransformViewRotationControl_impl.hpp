#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewRotationControl_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewRotationModel_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewRotationControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonTransformViewRotationControl::*)(::Photon::Pun::PhotonTransformViewRotationModel*)>(
    &::Photon::Pun::PhotonTransformViewRotationControl::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2607188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewRotationControl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonTransformViewRotationModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewRotationControl.GetNetworkRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::Photon::Pun::PhotonTransformViewRotationControl::*)()>(
    &::Photon::Pun::PhotonTransformViewRotationControl::GetNetworkRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2608934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewRotationControl*>::get(),
                                                                               "GetNetworkRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewRotationControl.GetRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::Photon::Pun::PhotonTransformViewRotationControl::*)(::UnityEngine::Quaternion)>(
    &::Photon::Pun::PhotonTransformViewRotationControl::GetRotation)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x26079d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewRotationControl*>::get(), "GetRotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewRotationControl.OnPhotonSerializeView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonTransformViewRotationControl::*)(
    ::UnityEngine::Quaternion, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonTransformViewRotationControl::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2607f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewRotationControl*>::get(), "OnPhotonSerializeView", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
    return ___internal_method;
  }
};
constexpr ::Photon::Pun::PhotonTransformViewRotationModel*& Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_get_m_Model() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Model;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonTransformViewRotationModel*> const& Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_get_m_Model() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Model;
}
constexpr void Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_set_m_Model(::Photon::Pun::PhotonTransformViewRotationModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Model)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Quaternion& Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_get_m_NetworkRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NetworkRotation;
}
constexpr ::UnityEngine::Quaternion const& Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_get_m_NetworkRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NetworkRotation;
}
constexpr void Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_set_m_NetworkRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NetworkRotation = value;
}
inline ::Photon::Pun::PhotonTransformViewRotationControl* Photon::Pun::PhotonTransformViewRotationControl::New_ctor(::Photon::Pun::PhotonTransformViewRotationModel* model) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::PhotonTransformViewRotationControl*>(model));
}
inline void Photon::Pun::PhotonTransformViewRotationControl::_ctor(::Photon::Pun::PhotonTransformViewRotationModel* model) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewRotationControl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonTransformViewRotationModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, model);
}
inline ::UnityEngine::Quaternion Photon::Pun::PhotonTransformViewRotationControl::GetNetworkRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewRotationControl*>::get(),
                                                                             "GetNetworkRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Photon::Pun::PhotonTransformViewRotationControl::GetRotation(::UnityEngine::Quaternion currentRotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewRotationControl*>::get(), "GetRotation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, currentRotation);
}
inline void Photon::Pun::PhotonTransformViewRotationControl::OnPhotonSerializeView(::UnityEngine::Quaternion currentRotation, ::Photon::Pun::PhotonStream* stream,
                                                                                   ::Photon::Pun::PhotonMessageInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewRotationControl*>::get(), "OnPhotonSerializeView", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentRotation, stream, info);
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformViewRotationControl::PhotonTransformViewRotationControl() {}
