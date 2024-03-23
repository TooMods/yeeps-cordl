#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewScaleControl_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewScaleModel_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewScaleControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonTransformViewScaleControl::*)(::Photon::Pun::PhotonTransformViewScaleModel*)>(
    &::Photon::Pun::PhotonTransformViewScaleControl::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26071b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewScaleControl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonTransformViewScaleModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewScaleControl.GetNetworkScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewScaleControl::*)()>(
    &::Photon::Pun::PhotonTransformViewScaleControl::GetNetworkScale)> {
  constexpr static std::size_t size = 0x100c;
  constexpr static std::size_t addrs = 0x2608940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewScaleControl*>::get(),
                                                                               "GetNetworkScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewScaleControl.GetScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewScaleControl::*)(::UnityEngine::Vector3)>(
    &::Photon::Pun::PhotonTransformViewScaleControl::GetScale)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2607b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewScaleControl*>::get(), "GetScale", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewScaleControl.OnPhotonSerializeView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonTransformViewScaleControl::*)(
    ::UnityEngine::Vector3, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonTransformViewScaleControl::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x260808c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewScaleControl*>::get(), "OnPhotonSerializeView", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
    return ___internal_method;
  }
};
constexpr ::Photon::Pun::PhotonTransformViewScaleModel*& Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_get_m_Model() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Model;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonTransformViewScaleModel*> const& Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_get_m_Model() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Model;
}
constexpr void Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_set_m_Model(::Photon::Pun::PhotonTransformViewScaleModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Model)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_get_m_NetworkScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NetworkScale;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_get_m_NetworkScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NetworkScale;
}
constexpr void Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_set_m_NetworkScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NetworkScale = value;
}
inline ::Photon::Pun::PhotonTransformViewScaleControl* Photon::Pun::PhotonTransformViewScaleControl::New_ctor(::Photon::Pun::PhotonTransformViewScaleModel* model) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::PhotonTransformViewScaleControl*>(model));
}
inline void Photon::Pun::PhotonTransformViewScaleControl::_ctor(::Photon::Pun::PhotonTransformViewScaleModel* model) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewScaleControl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonTransformViewScaleModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, model);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewScaleControl::GetNetworkScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewScaleControl*>::get(),
                                                                             "GetNetworkScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewScaleControl::GetScale(::UnityEngine::Vector3 currentScale) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewScaleControl*>::get(), "GetScale", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, currentScale);
}
inline void Photon::Pun::PhotonTransformViewScaleControl::OnPhotonSerializeView(::UnityEngine::Vector3 currentScale, ::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonTransformViewScaleControl*>::get(), "OnPhotonSerializeView", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentScale, stream, info);
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformViewScaleControl::PhotonTransformViewScaleControl() {}
