#pragma once
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SocketUdpAsync_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)(::ExitGames::Client::Photon::PeerBase*)>(
    &::ExitGames::Client::Photon::SocketUdpAsync::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2abb66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::PeerBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(&::ExitGames::Client::Photon::SocketUdpAsync::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2abb7a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(&::ExitGames::Client::Photon::SocketUdpAsync::Dispose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2abb834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(&::ExitGames::Client::Photon::SocketUdpAsync::Connect)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2abb948;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(&::ExitGames::Client::Photon::SocketUdpAsync::Disconnect)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2abbaf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketUdpAsync::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::ExitGames::Client::Photon::SocketUdpAsync::Send)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x2abbd30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.Receive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketUdpAsync::*)(
    ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(&::ExitGames::Client::Photon::SocketUdpAsync::Receive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2abc198;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.DnsAndConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(
    &::ExitGames::Client::Photon::SocketUdpAsync::DnsAndConnect)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x2abc1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(),
                                                                               "DnsAndConnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.StartReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)()>(
    &::ExitGames::Client::Photon::SocketUdpAsync::StartReceive)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x2abc76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(),
                                                                               "StartReceive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketUdpAsync.OnReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SocketUdpAsync::*)(::System::IAsyncResult*)>(
    &::ExitGames::Client::Photon::SocketUdpAsync::OnReceive)> {
  constexpr static std::size_t size = 0xda4;
  constexpr static std::size_t addrs = 0x2abcad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), "OnReceive", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr ExitGames::Client::Photon::SocketUdpAsync::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ExitGames::Client::Photon::SocketUdpAsync::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Net::Sockets::Socket*& ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_get_sock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_get_sock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sock;
}
constexpr void ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_set_sock(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_get_syncer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_get_syncer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncer;
}
constexpr void ExitGames::Client::Photon::SocketUdpAsync::__cordl_internal_set_syncer(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___syncer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ExitGames::Client::Photon::SocketUdpAsync* ExitGames::Client::Photon::SocketUdpAsync::New_ctor(::ExitGames::Client::Photon::PeerBase* npeer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::SocketUdpAsync*>(npeer));
}
inline void ExitGames::Client::Photon::SocketUdpAsync::_ctor(::ExitGames::Client::Photon::PeerBase* npeer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::PeerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, npeer);
}
inline void ExitGames::Client::Photon::SocketUdpAsync::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketUdpAsync::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketUdpAsync::Connect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketUdpAsync::Disconnect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketUdpAsync::Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError, false>(this, ___internal_method, data, length);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketUdpAsync::Receive(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError, false>(this, ___internal_method, data);
}
inline void ExitGames::Client::Photon::SocketUdpAsync::DnsAndConnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(),
                                                                             "DnsAndConnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketUdpAsync::StartReceive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(),
                                                                             "StartReceive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketUdpAsync::OnReceive(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketUdpAsync*>::get(), "OnReceive", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SocketUdpAsync::SocketUdpAsync() {}
