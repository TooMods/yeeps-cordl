#pragma once
#include "System/Net/WebSockets/zzzz__WebSocket_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocketOptions_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketReceiveResult_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::__ClientWebSocket__InternalState::__ClientWebSocket__InternalState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ClientWebSocket__InternalState::__ClientWebSocket__InternalState() {}
constexpr ::System::Net::WebSockets::__ClientWebSocket__InternalState System::Net::WebSockets::__ClientWebSocket__InternalState::Created{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::WebSockets::__ClientWebSocket__InternalState System::Net::WebSockets::__ClientWebSocket__InternalState::Connecting{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::WebSockets::__ClientWebSocket__InternalState System::Net::WebSockets::__ClientWebSocket__InternalState::Connected{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::WebSockets::__ClientWebSocket__InternalState System::Net::WebSockets::__ClientWebSocket__InternalState::Disposed{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy* (*)()>(
    &::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c98504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), "get_Instance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy.get_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::*)()>(
    &::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::get_Credentials)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c9855c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), "get_Credentials",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy.set_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::*)(::System::Net::ICredentials*)>(
    &::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::set_Credentials)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c9859c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), "set_Credentials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy.GetProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::*)(::System::Uri*)>(
    &::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::GetProxy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c985dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), "GetProxy",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy.IsBypassed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::*)(::System::Uri*)>(
    &::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::IsBypassed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c9861c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), "IsBypassed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::*)()>(
    &::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c9865c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::operator ::System::Net::IWebProxy*() noexcept {
  return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::i___System__Net__IWebProxy() noexcept {
  return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
inline void System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::setStaticF__Instance_k__BackingField(::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy* value) {
  ::cordl_internals::setStaticField<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*, "<Instance>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get>(
      std::forward<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>(value));
}
inline ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy* System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::getStaticF__Instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*, "<Instance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get>();
}
inline ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy* System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), "get_Instance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*, false>(nullptr, ___internal_method);
}
inline ::System::Net::ICredentials* System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::get_Credentials() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), "get_Credentials",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::set_Credentials(::System::Net::ICredentials* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), "set_Credentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::GetProxy(::System::Uri* destination) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), "GetProxy",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method, destination);
}
inline bool System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::IsBypassed(::System::Uri* host) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), "IsBypassed",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, host);
}
inline ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy* System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>());
}
inline void System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ClientWebSocket__DefaultWebProxy::__ClientWebSocket__DefaultWebProxy() {}
//  Writing Method size for method: ::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16::*)()>(
    &::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2c986c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c98b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ClientWebSocket*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16::__ClientWebSocket___ConnectAsyncCore_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebSockets::ClientWebSocket* __4__this, ::System::Uri* uri,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->uri = uri;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ClientWebSocket___ConnectAsyncCore_d__16::__ClientWebSocket___ConnectAsyncCore_d__16() {}
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ClientWebSocket::*)()>(&::System::Net::WebSockets::ClientWebSocket::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2c97964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.get_Options
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebSockets::ClientWebSocketOptions* (::System::Net::WebSockets::ClientWebSocket::*)()>(
    &::System::Net::WebSockets::ClientWebSocket::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c97c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(),
                                                                               "get_Options", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.get_CloseStatusDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::WebSockets::ClientWebSocket::*)()>(
    &::System::Net::WebSockets::ClientWebSocket::get_CloseStatusDescription)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2c97c18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebSockets::WebSocketState (::System::Net::WebSockets::ClientWebSocket::*)()>(
    &::System::Net::WebSockets::ClientWebSocket::get_State)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c97cc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.ConnectAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebSockets::ClientWebSocket::*)(::System::Uri*, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ClientWebSocket::ConnectAsync)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2c97d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), "ConnectAsync", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.ConnectAsyncCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebSockets::ClientWebSocket::*)(::System::Uri*, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ClientWebSocket::ConnectAsyncCore)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2c98024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), "ConnectAsyncCore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.SendAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebSockets::ClientWebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Threading::CancellationToken)>(
    &::System::Net::WebSockets::ClientWebSocket::SendAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c98108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.ReceiveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* (
    ::System::Net::WebSockets::ClientWebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ClientWebSocket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c98278;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.CloseOutputAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ClientWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(
        &::System::Net::WebSockets::ClientWebSocket::CloseOutputAsync)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c982f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.Abort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ClientWebSocket::*)()>(&::System::Net::WebSockets::ClientWebSocket::Abort)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c98368;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ClientWebSocket::*)()>(&::System::Net::WebSockets::ClientWebSocket::Dispose)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c98438;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.ThrowIfNotConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ClientWebSocket::*)()>(
    &::System::Net::WebSockets::ClientWebSocket::ThrowIfNotConnected)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2c98178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(),
                                                                               "ThrowIfNotConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebSockets::ClientWebSocketOptions*& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebSockets::ClientWebSocketOptions*> const& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
constexpr void System::Net::WebSockets::ClientWebSocket::__cordl_internal_set__options(::System::Net::WebSockets::ClientWebSocketOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebSockets::WebSocketHandle*& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__innerWebSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerWebSocket;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebSockets::WebSocketHandle*> const& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__innerWebSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerWebSocket;
}
constexpr void System::Net::WebSockets::ClientWebSocket::__cordl_internal_set__innerWebSocket(::System::Net::WebSockets::WebSocketHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____innerWebSocket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr int32_t const& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void System::Net::WebSockets::ClientWebSocket::__cordl_internal_set__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
inline ::System::Net::WebSockets::ClientWebSocket* System::Net::WebSockets::ClientWebSocket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebSockets::ClientWebSocket*>());
}
inline void System::Net::WebSockets::ClientWebSocket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::WebSockets::ClientWebSocketOptions* System::Net::WebSockets::ClientWebSocket::get_Options() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), "get_Options",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::ClientWebSocketOptions*, false>(this, ___internal_method);
}
inline ::StringW System::Net::WebSockets::ClientWebSocket::get_CloseStatusDescription() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::ClientWebSocket::get_State() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::WebSocketState, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ClientWebSocket::ConnectAsync(::System::Uri* uri, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), "ConnectAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, uri, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ClientWebSocket::ConnectAsyncCore(::System::Uri* uri, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), "ConnectAsyncCore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, uri, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ClientWebSocket::SendAsync(::System::ArraySegment_1<uint8_t> buffer, ::System::Net::WebSockets::WebSocketMessageType messageType,
                                                                                             bool endOfMessage, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, messageType, endOfMessage, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*
System::Net::WebSockets::ClientWebSocket::ReceiveAsync(::System::ArraySegment_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*, false>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ClientWebSocket::CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::StringW statusDescription,
                                                                                                    ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, closeStatus, statusDescription, cancellationToken);
}
inline void System::Net::WebSockets::ClientWebSocket::Abort() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::ClientWebSocket::Dispose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::ClientWebSocket::ThrowIfNotConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ClientWebSocket*>::get(),
                                                                             "ThrowIfNotConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::ClientWebSocket::ClientWebSocket() {}
