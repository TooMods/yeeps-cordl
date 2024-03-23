#pragma once
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__SmoothSyncMovement_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::SmoothSyncMovement.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::SmoothSyncMovement::*)()>(
    &::Photon::Pun::UtilityScripts::SmoothSyncMovement::Awake)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x1ec7978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::SmoothSyncMovement.OnPhotonSerializeView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::SmoothSyncMovement::*)(
    ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::UtilityScripts::SmoothSyncMovement::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1ec7b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>::get(), "OnPhotonSerializeView", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::SmoothSyncMovement.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::SmoothSyncMovement::*)()>(
    &::Photon::Pun::UtilityScripts::SmoothSyncMovement::Update)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1ec7ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::SmoothSyncMovement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::SmoothSyncMovement::*)()>(
    &::Photon::Pun::UtilityScripts::SmoothSyncMovement::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1ec7e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr Photon::Pun::UtilityScripts::SmoothSyncMovement::operator ::Photon::Pun::IPunObservable*() noexcept {
  return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* Photon::Pun::UtilityScripts::SmoothSyncMovement::i___Photon__Pun__IPunObservable() noexcept {
  return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
constexpr float_t& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_SmoothingDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SmoothingDelay;
}
constexpr float_t const& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_SmoothingDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SmoothingDelay;
}
constexpr void Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_set_SmoothingDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SmoothingDelay = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_correctPlayerPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___correctPlayerPos;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_correctPlayerPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___correctPlayerPos;
}
constexpr void Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_set_correctPlayerPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___correctPlayerPos = value;
}
constexpr ::UnityEngine::Quaternion& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_correctPlayerRot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___correctPlayerRot;
}
constexpr ::UnityEngine::Quaternion const& Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_get_correctPlayerRot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___correctPlayerRot;
}
constexpr void Photon::Pun::UtilityScripts::SmoothSyncMovement::__cordl_internal_set_correctPlayerRot(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___correctPlayerRot = value;
}
inline void Photon::Pun::UtilityScripts::SmoothSyncMovement::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::SmoothSyncMovement::OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>::get(), "OnPhotonSerializeView", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, info);
}
inline void Photon::Pun::UtilityScripts::SmoothSyncMovement::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::SmoothSyncMovement* Photon::Pun::UtilityScripts::SmoothSyncMovement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>());
}
inline void Photon::Pun::UtilityScripts::SmoothSyncMovement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::SmoothSyncMovement*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::SmoothSyncMovement::SmoothSyncMovement() {}
