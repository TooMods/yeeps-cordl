#pragma once
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SocketTcpAsync_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SocketTcpAsync_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::*)(
    ::System::Net::Sockets::Socket*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ab91c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext.get_ReadingHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::*)()>(
    &::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::get_ReadingHeader)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ab9b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "get_ReadingHeader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext.get_ReadingMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::*)()>(
    &::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::get_ReadingMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ab9b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "get_ReadingMessage",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext.get_CurrentBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::*)()>(
    &::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::get_CurrentBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ab9208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "get_CurrentBuffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext.get_CurrentOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::*)()>(
    &::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::get_CurrentOffset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ab9224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "get_CurrentOffset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext.get_CurrentExpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::*)()>(
    &::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::get_CurrentExpected)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ab9240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "get_CurrentExpected",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::*)()>(
    &::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab9b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_workSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workSocket;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_workSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workSocket;
}
constexpr void ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_set_workSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___workSocket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_ReceivedHeaderBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReceivedHeaderBytes;
}
constexpr int32_t const& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_ReceivedHeaderBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReceivedHeaderBytes;
}
constexpr void ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_set_ReceivedHeaderBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReceivedHeaderBytes = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_HeaderBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeaderBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_HeaderBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeaderBuffer;
}
constexpr void ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_set_HeaderBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HeaderBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_ExpectedMessageBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedMessageBytes;
}
constexpr int32_t const& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_ExpectedMessageBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedMessageBytes;
}
constexpr void ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_set_ExpectedMessageBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExpectedMessageBytes = value;
}
constexpr int32_t& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_ReceivedMessageBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReceivedMessageBytes;
}
constexpr int32_t const& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_ReceivedMessageBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReceivedMessageBytes;
}
constexpr void ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_set_ReceivedMessageBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReceivedMessageBytes = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_MessageBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_get_MessageBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageBuffer;
}
constexpr void ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__cordl_internal_set_MessageBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MessageBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext* ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::New_ctor(::System::Net::Sockets::Socket* socket,
                                                                                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> headerBuffer,
                                                                                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> messageBuffer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>(socket, headerBuffer, messageBuffer));
}
inline void ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::_ctor(::System::Net::Sockets::Socket* socket, ::ArrayW<uint8_t, ::Array<uint8_t>*> headerBuffer,
                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> messageBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, socket, headerBuffer, messageBuffer);
}
inline bool ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::get_ReadingHeader() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "get_ReadingHeader",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::get_ReadingMessage() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "get_ReadingMessage",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::get_CurrentBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "get_CurrentBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::get_CurrentOffset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "get_CurrentOffset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::get_CurrentExpected() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "get_CurrentExpected",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext::__SocketTcpAsync__ReceiveContext() {}
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)(::ExitGames::Client::Photon::PeerBase*)>(
    &::ExitGames::Client::Photon::SocketTcpAsync::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2ab7bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::PeerBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2ab7cf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync::Dispose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2ab7d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::SocketTcpAsync::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync::Connect)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2ab7e98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::SocketTcpAsync::*)()>(&::ExitGames::Client::Photon::SocketTcpAsync::Disconnect)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2ab8040;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketTcpAsync::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::ExitGames::Client::Photon::SocketTcpAsync::Send)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x2ab8280;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.Receive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::SocketTcpAsync::*)(
    ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(&::ExitGames::Client::Photon::SocketTcpAsync::Receive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab86ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.DnsAndConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)()>(
    &::ExitGames::Client::Photon::SocketTcpAsync::DnsAndConnect)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x2ab86b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(),
                                                                               "DnsAndConnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.ReceiveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*)>(&::ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x2ab8dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), "ReceiveAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SocketTcpAsync.ReceiveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SocketTcpAsync::*)(::System::IAsyncResult*)>(
    &::ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x2ab9254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), "ReceiveAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr ExitGames::Client::Photon::SocketTcpAsync::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ExitGames::Client::Photon::SocketTcpAsync::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Net::Sockets::Socket*& ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_get_sock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_get_sock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sock;
}
constexpr void ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_set_sock(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_get_syncer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_get_syncer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncer;
}
constexpr void ExitGames::Client::Photon::SocketTcpAsync::__cordl_internal_set_syncer(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___syncer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ExitGames::Client::Photon::SocketTcpAsync* ExitGames::Client::Photon::SocketTcpAsync::New_ctor(::ExitGames::Client::Photon::PeerBase* npeer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::SocketTcpAsync*>(npeer));
}
inline void ExitGames::Client::Photon::SocketTcpAsync::_ctor(::ExitGames::Client::Photon::PeerBase* npeer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::PeerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, npeer);
}
inline void ExitGames::Client::Photon::SocketTcpAsync::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SocketTcpAsync::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketTcpAsync::Connect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::SocketTcpAsync::Disconnect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketTcpAsync::Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError, false>(this, ___internal_method, data, length);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::SocketTcpAsync::Receive(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError, false>(this, ___internal_method, data);
}
inline void ExitGames::Client::Photon::SocketTcpAsync::DnsAndConnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(),
                                                                             "DnsAndConnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param context: ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext* (default: nullptr)
inline void ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), "ReceiveAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SocketTcpAsync*>::get(), "ReceiveAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SocketTcpAsync::SocketTcpAsync() {}
