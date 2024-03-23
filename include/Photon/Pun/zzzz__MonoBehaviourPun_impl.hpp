#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPun.get_photonView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Photon::Pun::PhotonView> (::Photon::Pun::MonoBehaviourPun::*)()>(
    &::Photon::Pun::MonoBehaviourPun::get_photonView)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2754658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::MonoBehaviourPun*>::get(), "get_photonView",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::MonoBehaviourPun._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::MonoBehaviourPun::*)()>(&::Photon::Pun::MonoBehaviourPun::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27546d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::MonoBehaviourPun*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Pun::PhotonView>& Photon::Pun::MonoBehaviourPun::__cordl_internal_get_pvCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pvCache;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& Photon::Pun::MonoBehaviourPun::__cordl_internal_get_pvCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pvCache;
}
constexpr void Photon::Pun::MonoBehaviourPun::__cordl_internal_set_pvCache(::UnityW<::Photon::Pun::PhotonView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pvCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::Photon::Pun::PhotonView> Photon::Pun::MonoBehaviourPun::get_photonView() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::MonoBehaviourPun*>::get(), "get_photonView",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>, false>(this, ___internal_method);
}
inline ::Photon::Pun::MonoBehaviourPun* Photon::Pun::MonoBehaviourPun::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::MonoBehaviourPun*>());
}
inline void Photon::Pun::MonoBehaviourPun::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::MonoBehaviourPun*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::MonoBehaviourPun::MonoBehaviourPun() {}
