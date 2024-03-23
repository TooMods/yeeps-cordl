#pragma once
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonClientWebSocket_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonClientWebSocket::*)(::ExitGames::Client::Photon::PeerBase*)>(
    &::ExitGames::Client::Photon::PhotonClientWebSocket::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x285b554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::PeerBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonClientWebSocket::*)()>(
    &::ExitGames::Client::Photon::PhotonClientWebSocket::Connect)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x285b5d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket.AsyncConnectAndReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonClientWebSocket::*)()>(
    &::ExitGames::Client::Photon::PhotonClientWebSocket::AsyncConnectAndReceive)> {
  constexpr static std::size_t size = 0x10a4;
  constexpr static std::size_t addrs = 0x285b6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(),
                                                                               "AsyncConnectAndReceive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonClientWebSocket::*)()>(
    &::ExitGames::Client::Photon::PhotonClientWebSocket::Disconnect)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x285c768;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::PhotonClientWebSocket::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::ExitGames::Client::Photon::PhotonClientWebSocket::Send)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x285c93c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonClientWebSocket.Receive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::PhotonClientWebSocket::*)(
    ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(&::ExitGames::Client::Photon::PhotonClientWebSocket::Receive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x285cb08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebSockets::ClientWebSocket*& ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_get_clientWebSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientWebSocket;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebSockets::ClientWebSocket*> const& ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_get_clientWebSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientWebSocket;
}
constexpr void ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_set_clientWebSocket(::System::Net::WebSockets::ClientWebSocket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientWebSocket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_get_sendTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_get_sendTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendTask;
}
constexpr void ExitGames::Client::Photon::PhotonClientWebSocket::__cordl_internal_set_sendTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sendTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ExitGames::Client::Photon::PhotonClientWebSocket* ExitGames::Client::Photon::PhotonClientWebSocket::New_ctor(::ExitGames::Client::Photon::PeerBase* peerBase) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::PhotonClientWebSocket*>(peerBase));
}
inline void ExitGames::Client::Photon::PhotonClientWebSocket::_ctor(::ExitGames::Client::Photon::PeerBase* peerBase) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::PeerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peerBase);
}
inline bool ExitGames::Client::Photon::PhotonClientWebSocket::Connect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonClientWebSocket::AsyncConnectAndReceive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(),
                                                                             "AsyncConnectAndReceive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonClientWebSocket::Disconnect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::PhotonClientWebSocket::Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError, false>(this, ___internal_method, data, length);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::PhotonClientWebSocket::Receive(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonClientWebSocket*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError, false>(this, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PhotonClientWebSocket::PhotonClientWebSocket() {}
