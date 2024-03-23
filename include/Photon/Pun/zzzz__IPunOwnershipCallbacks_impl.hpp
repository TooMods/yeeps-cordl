#pragma once
#include "Photon/Pun/zzzz__IPunOwnershipCallbacks_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::IPunOwnershipCallbacks.OnOwnershipRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::IPunOwnershipCallbacks::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(
    &::Photon::Pun::IPunOwnershipCallbacks::OnOwnershipRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IPunOwnershipCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IPunOwnershipCallbacks*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::IPunOwnershipCallbacks.OnOwnershipTransfered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::IPunOwnershipCallbacks::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(
    &::Photon::Pun::IPunOwnershipCallbacks::OnOwnershipTransfered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IPunOwnershipCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IPunOwnershipCallbacks*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::IPunOwnershipCallbacks.OnOwnershipTransferFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::IPunOwnershipCallbacks::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(
    &::Photon::Pun::IPunOwnershipCallbacks::OnOwnershipTransferFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IPunOwnershipCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IPunOwnershipCallbacks*>::get(), 2));
    return ___internal_method;
  }
};
inline void Photon::Pun::IPunOwnershipCallbacks::OnOwnershipRequest(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* requestingPlayer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IPunOwnershipCallbacks*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetView, requestingPlayer);
}
inline void Photon::Pun::IPunOwnershipCallbacks::OnOwnershipTransfered(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* previousOwner) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IPunOwnershipCallbacks*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetView, previousOwner);
}
inline void Photon::Pun::IPunOwnershipCallbacks::OnOwnershipTransferFailed(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* senderOfFailedRequest) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::IPunOwnershipCallbacks*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetView, senderOfFailedRequest);
}
