#pragma once
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StatusCode_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonPeerListener.DebugReturn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonPeerListener::*)(::ExitGames::Client::Photon::DebugLevel, ::StringW)>(
    &::ExitGames::Client::Photon::IPhotonPeerListener::DebugReturn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonPeerListener.OnOperationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonPeerListener::*)(::ExitGames::Client::Photon::OperationResponse*)>(
    &::ExitGames::Client::Photon::IPhotonPeerListener::OnOperationResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonPeerListener.OnStatusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonPeerListener::*)(::ExitGames::Client::Photon::StatusCode)>(
    &::ExitGames::Client::Photon::IPhotonPeerListener::OnStatusChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonPeerListener.OnEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonPeerListener::*)(::ExitGames::Client::Photon::EventData*)>(
    &::ExitGames::Client::Photon::IPhotonPeerListener::OnEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(), 3));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::IPhotonPeerListener::DebugReturn(::ExitGames::Client::Photon::DebugLevel level, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, message);
}
inline void ExitGames::Client::Photon::IPhotonPeerListener::OnOperationResponse(::ExitGames::Client::Photon::OperationResponse* operationResponse) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operationResponse);
}
inline void ExitGames::Client::Photon::IPhotonPeerListener::OnStatusChanged(::ExitGames::Client::Photon::StatusCode statusCode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusCode);
}
inline void ExitGames::Client::Photon::IPhotonPeerListener::OnEvent(::ExitGames::Client::Photon::EventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
