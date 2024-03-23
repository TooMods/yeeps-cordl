#pragma once
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketError_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocket_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_impl.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Memory_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ReadOnlyMemory_1_impl.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketError_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketReceiveResult_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/Text/zzzz__UTF8Encoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::*)()>(
    &::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c90c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_get_SequenceInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SequenceInProgress;
}
constexpr bool const& System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_get_SequenceInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SequenceInProgress;
}
constexpr void System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_set_SequenceInProgress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SequenceInProgress = value;
}
constexpr int32_t& System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_get_AdditionalBytesExpected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AdditionalBytesExpected;
}
constexpr int32_t const& System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_get_AdditionalBytesExpected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AdditionalBytesExpected;
}
constexpr void System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_set_AdditionalBytesExpected(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AdditionalBytesExpected = value;
}
constexpr int32_t& System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_get_ExpectedValueMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedValueMin;
}
constexpr int32_t const& System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_get_ExpectedValueMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedValueMin;
}
constexpr void System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_set_ExpectedValueMin(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExpectedValueMin = value;
}
constexpr int32_t& System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_get_CurrentDecodeBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentDecodeBits;
}
constexpr int32_t const& System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_get_CurrentDecodeBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentDecodeBits;
}
constexpr void System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__cordl_internal_set_CurrentDecodeBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CurrentDecodeBits = value;
}
inline ::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState* System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState*>());
}
inline void System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState::__ManagedWebSocket__Utf8MessageState() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode::__ManagedWebSocket__MessageOpcode(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode::__ManagedWebSocket__MessageOpcode() {}
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode System::Net::WebSockets::__ManagedWebSocket__MessageOpcode::Continuation{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode System::Net::WebSockets::__ManagedWebSocket__MessageOpcode::Text{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode System::Net::WebSockets::__ManagedWebSocket__MessageOpcode::Binary{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode System::Net::WebSockets::__ManagedWebSocket__MessageOpcode::Close{ static_cast<uint8_t>(0x8u) };
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode System::Net::WebSockets::__ManagedWebSocket__MessageOpcode::Ping{ static_cast<uint8_t>(0x9u) };
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode System::Net::WebSockets::__ManagedWebSocket__MessageOpcode::Pong{ static_cast<uint8_t>(0xau) };
// Ctor Parameters [CppParam { name: "Opcode", ty: "::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode", modifiers: "", def_value: Some("{}") }, CppParam { name: "Fin", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "PayloadLength", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Mask", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader::__ManagedWebSocket__MessageHeader(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode Opcode, bool Fin,
                                                                                                          int64_t PayloadLength, int32_t Mask) noexcept {
  this->Opcode = Opcode;
  this->Fin = Fin;
  this->PayloadLength = PayloadLength;
  this->Mask = Mask;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader::__ManagedWebSocket__MessageHeader() {}
template <typename TResult>
inline TResult System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<TResult>::GetResult(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType,
                                                                                                                bool endOfMessage,
                                                                                                                ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> closeStatus,
                                                                                                                ::StringW closeDescription) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<TResult>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, count, messageType, endOfMessage, closeStatus, closeDescription);
}
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter.GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebSockets::WebSocketReceiveResult* (
    ::System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter::*)(int32_t, ::System::Net::WebSockets::WebSocketMessageType, bool,
                                                                                    ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>, ::StringW)>(
    &::System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter::GetResult)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2c93f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter>::get(), "GetResult",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketMessageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>"
constexpr System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter::operator ::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<
    ::System::Net::WebSockets::WebSocketReceiveResult*>*() {
  return static_cast<::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>*>(
      static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>"
constexpr ::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>* System::Net::WebSockets::
    __ManagedWebSocket__WebSocketReceiveResultGetter::i___System__Net__WebSockets____ManagedWebSocket__IWebSocketReceiveResultGetter_1___System__Net__WebSockets__WebSocketReceiveResult__() {
  return static_cast<::System::Net::WebSockets::__ManagedWebSocket__IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>*>(
      static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline ::System::Net::WebSockets::WebSocketReceiveResult*
System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter::GetResult(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage,
                                                                                     ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> closeStatus, ::StringW closeDescription) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter>::get(), "GetResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketMessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::WebSocketReceiveResult*, false>(this, ___internal_method, count, messageType, endOfMessage, closeStatus, closeDescription);
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket__WebSocketReceiveResultGetter::__ManagedWebSocket__WebSocketReceiveResultGetter() {}
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket____c::*)()>(
    &::System::Net::WebSockets::__ManagedWebSocket____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c9413c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket____c.__ctor_b__36_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket____c::*)(::System::Object*)>(
    &::System::Net::WebSockets::__ManagedWebSocket____c::__ctor_b__36_0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2c94144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(), "<.ctor>b__36_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket____c.__ctor_b__36_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket____c::*)(::System::Object*)>(
    &::System::Net::WebSockets::__ManagedWebSocket____c::__ctor_b__36_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c9426c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(), "<.ctor>b__36_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket____c._SendFrameFallbackAsync_b__56_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket____c::*)(::System::Object*)>(
    &::System::Net::WebSockets::__ManagedWebSocket____c::_SendFrameFallbackAsync_b__56_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c942cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(), "<SendFrameFallbackAsync>b__56_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket____c._SendKeepAliveFrameAsync_b__58_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket____c::*)(::System::Threading::Tasks::Task*)>(
    &::System::Net::WebSockets::__ManagedWebSocket____c::_SendKeepAliveFrameAsync_b__58_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c94340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(), "<SendKeepAliveFrameAsync>b__58_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket____c._WaitForServerToCloseConnectionAsync_b__63_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket____c::*)(::System::Object*)>(
    &::System::Net::WebSockets::__ManagedWebSocket____c::_WaitForServerToCloseConnectionAsync_b__63_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c94358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(), "<WaitForServerToCloseConnectionAsync>b__63_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::WebSockets::__ManagedWebSocket____c::setStaticF___9(::System::Net::WebSockets::__ManagedWebSocket____c* value) {
  ::cordl_internals::setStaticField<::System::Net::WebSockets::__ManagedWebSocket____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>(
      std::forward<::System::Net::WebSockets::__ManagedWebSocket____c*>(value));
}
inline ::System::Net::WebSockets::__ManagedWebSocket____c* System::Net::WebSockets::__ManagedWebSocket____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::WebSockets::__ManagedWebSocket____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>();
}
inline void System::Net::WebSockets::__ManagedWebSocket____c::setStaticF___9__36_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__36_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::WebSockets::__ManagedWebSocket____c::getStaticF___9__36_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__36_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>();
}
inline void System::Net::WebSockets::__ManagedWebSocket____c::setStaticF___9__36_1(::System::Threading::TimerCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::TimerCallback*, "<>9__36_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>(
      std::forward<::System::Threading::TimerCallback*>(value));
}
inline ::System::Threading::TimerCallback* System::Net::WebSockets::__ManagedWebSocket____c::getStaticF___9__36_1() {
  return ::cordl_internals::getStaticField<::System::Threading::TimerCallback*, "<>9__36_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>();
}
inline void System::Net::WebSockets::__ManagedWebSocket____c::setStaticF___9__56_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__56_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::WebSockets::__ManagedWebSocket____c::getStaticF___9__56_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__56_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>();
}
inline void System::Net::WebSockets::__ManagedWebSocket____c::setStaticF___9__58_0(::System::Action_1<::System::Threading::Tasks::Task*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Threading::Tasks::Task*>*, "<>9__58_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>(
      std::forward<::System::Action_1<::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Action_1<::System::Threading::Tasks::Task*>* System::Net::WebSockets::__ManagedWebSocket____c::getStaticF___9__58_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Threading::Tasks::Task*>*, "<>9__58_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>();
}
inline void System::Net::WebSockets::__ManagedWebSocket____c::setStaticF___9__63_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__63_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::WebSockets::__ManagedWebSocket____c::getStaticF___9__63_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__63_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get>();
}
inline ::System::Net::WebSockets::__ManagedWebSocket____c* System::Net::WebSockets::__ManagedWebSocket____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebSockets::__ManagedWebSocket____c*>());
}
inline void System::Net::WebSockets::__ManagedWebSocket____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::__ManagedWebSocket____c::__ctor_b__36_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(), "<.ctor>b__36_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Net::WebSockets::__ManagedWebSocket____c::__ctor_b__36_1(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(), "<.ctor>b__36_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Net::WebSockets::__ManagedWebSocket____c::_SendFrameFallbackAsync_b__56_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(), "<SendFrameFallbackAsync>b__56_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Net::WebSockets::__ManagedWebSocket____c::_SendKeepAliveFrameAsync_b__58_0(::System::Threading::Tasks::Task* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(), "<SendKeepAliveFrameAsync>b__58_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p);
}
inline void System::Net::WebSockets::__ManagedWebSocket____c::_WaitForServerToCloseConnectionAsync_b__63_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c*>::get(), "<WaitForServerToCloseConnectionAsync>b__63_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket____c::__ManagedWebSocket____c() {}
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55::*)()>(
    &::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55::MoveNext)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x2c943cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c94954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "writeTask", ty: "::System::Threading::Tasks::ValueTask", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55::__ManagedWebSocket___WaitForWriteTaskAsync_d__55(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::ValueTask writeTask,
    ::System::Net::WebSockets::ManagedWebSocket* __4__this, ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->writeTask = writeTask;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket___WaitForWriteTaskAsync_d__55::__ManagedWebSocket___WaitForWriteTaskAsync_d__55() {}
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56::*)()>(
    &::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56::MoveNext)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0x2c94960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c9523c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "opcode", ty: "::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "endOfMessage", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "payloadBuffer", ty: "::System::ReadOnlyMemory_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty:
// "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56::__ManagedWebSocket___SendFrameFallbackAsync_d__56(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebSockets::ManagedWebSocket* __4__this,
    ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode, bool endOfMessage, ::System::ReadOnlyMemory_1<uint8_t> payloadBuffer, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Threading::CancellationTokenRegistration __7__wrap1,
    ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->opcode = opcode;
  this->endOfMessage = endOfMessage;
  this->payloadBuffer = payloadBuffer;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__7__wrap1 = __7__wrap1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket___SendFrameFallbackAsync_d__56::__ManagedWebSocket___SendFrameFallbackAsync_d__56() {}
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
inline void System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::setStaticF___9(
    ::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>* value) {
  ::cordl_internals::setStaticField<
      ::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*>::get>(
      std::forward<::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*>(value));
}
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
inline ::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*
System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::getStaticF___9() {
  return ::cordl_internals::getStaticField<
      ::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*>::get>();
}
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
inline void System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::setStaticF___9__61_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Action_1<::System::Object*>*, "<>9__61_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*>::get>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
inline ::System::Action_1<::System::Object*>* System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::getStaticF___9__61_0() {
  return ::cordl_internals::getStaticField<
      ::System::Action_1<::System::Object*>*, "<>9__61_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*>::get>();
}
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
inline ::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*
System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*>());
}
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
inline void System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
inline void System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::_ReceiveAsyncPrivate_b__61_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>*>::get(),
      "<ReceiveAsyncPrivate>b__61_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
// Ctor Parameters []
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
constexpr ::System::Net::WebSockets::__ManagedWebSocket____c__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::__ManagedWebSocket____c__61_2() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
constexpr System::Net::WebSockets::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter,
                                                                                    TWebSocketReceiveResult>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
System::Net::WebSockets::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
inline void System::Net::WebSockets::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                   ::System::Net::WebSockets::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
inline void System::Net::WebSockets::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                      ::System::Net::WebSockets::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TWebSocketReceiveResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "resultGetter", ty: "TWebSocketReceiveResultGetter", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "payloadBuffer", ty:
// "::System::Memory_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_registration_5__2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_header_5__3", ty: "::System::Net::WebSockets::__ManagedWebSocket__MessageHeader", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_totalBytesReceived_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
constexpr ::System::Net::WebSockets::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TWebSocketReceiveResult> __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::System::Net::WebSockets::ManagedWebSocket* __4__this, TWebSocketReceiveResultGetter resultGetter, ::System::Memory_1<uint8_t> payloadBuffer,
    ::System::Threading::CancellationTokenRegistration _registration_5__2, ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader _header_5__3, int32_t _totalBytesReceived_5__4,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->resultGetter = resultGetter;
  this->payloadBuffer = payloadBuffer;
  this->_registration_5__2 = _registration_5__2;
  this->_header_5__3 = _header_5__3;
  this->_totalBytesReceived_5__4 = _totalBytesReceived_5__4;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
constexpr ::System::Net::WebSockets::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter, TWebSocketReceiveResult>::__ManagedWebSocket___ReceiveAsyncPrivate_d__61_2() {}
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62::*)()>(
    &::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62::MoveNext)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0x2c95248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c95b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "header", ty: "::System::Net::WebSockets::__ManagedWebSocket__MessageHeader", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_closeStatus_5__2", ty:
// "::System::Net::WebSockets::WebSocketCloseStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "_closeStatusDescription_5__3", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62::__ManagedWebSocket___HandleReceivedCloseAsync_d__62(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebSockets::ManagedWebSocket* __4__this,
    ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader header, ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebSockets::WebSocketCloseStatus _closeStatus_5__2,
    ::StringW _closeStatusDescription_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->header = header;
  this->cancellationToken = cancellationToken;
  this->_closeStatus_5__2 = _closeStatus_5__2;
  this->_closeStatusDescription_5__3 = _closeStatusDescription_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedCloseAsync_d__62::__ManagedWebSocket___HandleReceivedCloseAsync_d__62() {}
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63::*)()>(
    &::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63::MoveNext)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x2c95b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c961a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_finalCts_5__2", ty:
// "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebSockets::ManagedWebSocket* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Threading::CancellationTokenSource* _finalCts_5__2, ::System::Threading::CancellationTokenRegistration __7__wrap2,
    ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_finalCts_5__2 = _finalCts_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63::__ManagedWebSocket___WaitForServerToCloseConnectionAsync_d__63() {}
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64::*)()>(
    &::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64::MoveNext)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x2c961b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c9675c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "header", ty: "::System::Net::WebSockets::__ManagedWebSocket__MessageHeader",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader header,
    ::System::Net::WebSockets::ManagedWebSocket* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->header = header;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64::__ManagedWebSocket___HandleReceivedPingPongAsync_d__64() {}
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66::*)()>(
    &::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66::MoveNext)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2c96768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66>::get(), "MoveNext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c96988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "closeStatus", ty: "::System::Net::WebSockets::WebSocketCloseStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "error", ty:
// "::System::Net::WebSockets::WebSocketError", modifiers: "", def_value: Some("{}") }, CppParam { name: "innerException", ty: "::System::Exception*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebSockets::ManagedWebSocket* __4__this,
    ::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::System::Net::WebSockets::WebSocketError error, ::System::Exception* innerException,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->closeStatus = closeStatus;
  this->error = error;
  this->innerException = innerException;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66::__ManagedWebSocket___CloseWithReceiveErrorAndThrowAsync_d__66() {}
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69::*)()>(
    &::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69::MoveNext)> {
  constexpr static std::size_t size = 0x8b8;
  constexpr static std::size_t addrs = 0x2c96994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c9724c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "closeStatusDescription", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "closeStatus", ty: "::System::Net::WebSockets::WebSocketCloseStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69::__ManagedWebSocket___SendCloseFrameAsync_d__69(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW closeStatusDescription, ::System::Net::WebSockets::WebSocketCloseStatus closeStatus,
    ::System::Net::WebSockets::ManagedWebSocket* __4__this, ::System::Threading::CancellationToken cancellationToken, ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__2,
    ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->closeStatusDescription = closeStatusDescription;
  this->closeStatus = closeStatus;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_buffer_5__2 = _buffer_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket___SendCloseFrameAsync_d__69::__ManagedWebSocket___SendCloseFrameAsync_d__69() {}
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71::*)()>(
    &::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x2c97258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c976ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "minimumRequiredBytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "throwOnPrematureClosure", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71::__ManagedWebSocket___EnsureBufferContainsAsync_d__71(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebSockets::ManagedWebSocket* __4__this, int32_t minimumRequiredBytes,
    ::System::Threading::CancellationToken cancellationToken, bool throwOnPrematureClosure,
    ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->minimumRequiredBytes = minimumRequiredBytes;
  this->cancellationToken = cancellationToken;
  this->throwOnPrematureClosure = throwOnPrematureClosure;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::__ManagedWebSocket___EnsureBufferContainsAsync_d__71::__ManagedWebSocket___EnsureBufferContainsAsync_d__71() {}
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CreateFromConnectedStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebSockets::ManagedWebSocket* (*)(::System::IO::Stream*, bool, ::StringW, ::System::TimeSpan)>(
    &::System::Net::WebSockets::ManagedWebSocket::CreateFromConnectedStream)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c907e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "CreateFromConnectedStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.get_StateUpdateLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::WebSockets::ManagedWebSocket::*)()>(
    &::System::Net::WebSockets::ManagedWebSocket::get_StateUpdateLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c90c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                               "get_StateUpdateLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.get_ReceiveAsyncLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::WebSockets::ManagedWebSocket::*)()>(
    &::System::Net::WebSockets::ManagedWebSocket::get_ReceiveAsyncLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c90c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                               "get_ReceiveAsyncLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(::System::IO::Stream*, bool, ::StringW, ::System::TimeSpan)>(
    &::System::Net::WebSockets::ManagedWebSocket::_ctor)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2c90868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::Dispose)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c90c44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.DisposeCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::DisposeCore)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c90d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                               "DisposeCore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.get_CloseStatusDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::WebSockets::ManagedWebSocket::*)()>(
    &::System::Net::WebSockets::ManagedWebSocket::get_CloseStatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c90d54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebSockets::WebSocketState (::System::Net::WebSockets::ManagedWebSocket::*)()>(
    &::System::Net::WebSockets::ManagedWebSocket::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c90d5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebSockets::ManagedWebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Threading::CancellationToken)>(
    &::System::Net::WebSockets::ManagedWebSocket::SendAsync)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2c90d64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendPrivateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::WebSockets::ManagedWebSocket::*)(
    ::System::ReadOnlyMemory_1<uint8_t>, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Threading::CancellationToken)>(
    &::System::Net::WebSockets::ManagedWebSocket::SendPrivateAsync)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x2c9112c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "SendPrivateAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketMessageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ReceiveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* (
    ::System::Net::WebSockets::ManagedWebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2c916d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CloseOutputAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(
        &::System::Net::WebSockets::ManagedWebSocket::CloseOutputAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2c91a2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.Abort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)()>(&::System::Net::WebSockets::ManagedWebSocket::Abort)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c91e18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendFrameAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::WebSockets::ManagedWebSocket::*)(
    ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode, bool, ::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(
    &::System::Net::WebSockets::ManagedWebSocket::SendFrameAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c91610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "SendFrameAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendFrameLockAcquiredNonCancelableAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::WebSockets::ManagedWebSocket::*)(
    ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode, bool, ::System::ReadOnlyMemory_1<uint8_t>)>(&::System::Net::WebSockets::ManagedWebSocket::SendFrameLockAcquiredNonCancelableAsync)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x2c91e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "SendFrameLockAcquiredNonCancelableAsync",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.WaitForWriteTaskAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebSockets::ManagedWebSocket::*)(::System::Threading::Tasks::ValueTask)>(&::System::Net::WebSockets::ManagedWebSocket::WaitForWriteTaskAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2c927b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "WaitForWriteTaskAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendFrameFallbackAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebSockets::ManagedWebSocket::*)(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode, bool, ::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(
    &::System::Net::WebSockets::ManagedWebSocket::SendFrameFallbackAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2c922fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "SendFrameFallbackAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.WriteFrameToSendBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::WebSockets::ManagedWebSocket::*)(
    ::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode, bool, ::System::ReadOnlySpan_1<uint8_t>)>(&::System::Net::WebSockets::ManagedWebSocket::WriteFrameToSendBuffer)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2c9241c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "WriteFrameToSendBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendKeepAliveFrameAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)()>(
    &::System::Net::WebSockets::ManagedWebSocket::SendKeepAliveFrameAsync)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2c92bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                               "SendKeepAliveFrameAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.WriteHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::ReadOnlySpan_1<uint8_t>, bool, bool)>(
        &::System::Net::WebSockets::ManagedWebSocket::WriteHeader)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2c92980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "WriteHeader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.WriteRandomMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Net::WebSockets::ManagedWebSocket::WriteRandomMask)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c92f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "WriteRandomMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.HandleReceivedCloseAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebSockets::ManagedWebSocket::*)(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader, ::System::Threading::CancellationToken)>(
    &::System::Net::WebSockets::ManagedWebSocket::HandleReceivedCloseAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c93020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "HandleReceivedCloseAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageHeader>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.WaitForServerToCloseConnectionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebSockets::ManagedWebSocket::*)(::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ManagedWebSocket::WaitForServerToCloseConnectionAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2c93114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "WaitForServerToCloseConnectionAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.HandleReceivedPingPongAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebSockets::ManagedWebSocket::*)(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader, ::System::Threading::CancellationToken)>(
    &::System::Net::WebSockets::ManagedWebSocket::HandleReceivedPingPongAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c931f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "HandleReceivedPingPongAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageHeader>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.IsValidCloseStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::WebSockets::WebSocketCloseStatus)>(
    &::System::Net::WebSockets::ManagedWebSocket::IsValidCloseStatus)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c932e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "IsValidCloseStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketCloseStatus>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CloseWithReceiveErrorAndThrowAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebSockets::ManagedWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::System::Net::WebSockets::WebSocketError, ::System::Exception*)>(
    &::System::Net::WebSockets::ManagedWebSocket::CloseWithReceiveErrorAndThrowAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c93328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "CloseWithReceiveErrorAndThrowAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketCloseStatus>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketError>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.TryParseMessageHeaderFromReceiveBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebSockets::ManagedWebSocket::*)(
    ByRef<::System::Net::WebSockets::__ManagedWebSocket__MessageHeader>)>(&::System::Net::WebSockets::ManagedWebSocket::TryParseMessageHeaderFromReceiveBuffer)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2c9341c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "TryParseMessageHeaderFromReceiveBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::WebSockets::__ManagedWebSocket__MessageHeader>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.SendCloseFrameAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ManagedWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(
        &::System::Net::WebSockets::ManagedWebSocket::SendCloseFrameAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2c91d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "SendCloseFrameAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketCloseStatus>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ConsumeFromBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(int32_t)>(
    &::System::Net::WebSockets::ManagedWebSocket::ConsumeFromBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c93668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ConsumeFromBuffer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.EnsureBufferContainsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebSockets::ManagedWebSocket::*)(int32_t, ::System::Threading::CancellationToken, bool)>(&::System::Net::WebSockets::ManagedWebSocket::EnsureBufferContainsAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2c93750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "EnsureBufferContainsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ThrowIfEOFUnexpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(bool)>(
    &::System::Net::WebSockets::ManagedWebSocket::ThrowIfEOFUnexpected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2c93848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ThrowIfEOFUnexpected",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.AllocateSendBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(int32_t)>(
    &::System::Net::WebSockets::ManagedWebSocket::AllocateSendBuffer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2c92894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "AllocateSendBuffer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ReleaseSendBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)()>(
    &::System::Net::WebSockets::ManagedWebSocket::ReleaseSendBuffer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c9390c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                               "ReleaseSendBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CombineMaskBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Span_1<uint8_t>, int32_t)>(&::System::Net::WebSockets::ManagedWebSocket::CombineMaskBytes)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2c9367c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "CombineMaskBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ApplyMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Span_1<uint8_t>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::WebSockets::ManagedWebSocket::ApplyMask)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c92b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ApplyMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ApplyMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Span_1<uint8_t>, int32_t, int32_t)>(&::System::Net::WebSockets::ManagedWebSocket::ApplyMask)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c93a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ApplyMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ThrowIfOperationInProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(bool, ::StringW)>(
    &::System::Net::WebSockets::ManagedWebSocket::ThrowIfOperationInProgress)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c91a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ThrowIfOperationInProgress", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.ThrowOperationInProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::ManagedWebSocket::*)(::StringW)>(
    &::System::Net::WebSockets::ManagedWebSocket::ThrowOperationInProgress)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c93b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ThrowOperationInProgress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.CreateOperationCanceledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::Exception*, ::System::Threading::CancellationToken)>(
    &::System::Net::WebSockets::ManagedWebSocket::CreateOperationCanceledException)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c92708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "CreateOperationCanceledException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ManagedWebSocket.TryValidateUtf8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Span_1<uint8_t>, bool, ::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState*)>(
    &::System::Net::WebSockets::ManagedWebSocket::TryValidateUtf8)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2c93b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "TryValidateUtf8", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__isServer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isServer;
}
constexpr bool const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__isServer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isServer;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__isServer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isServer = value;
}
constexpr ::StringW& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__subprotocol() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subprotocol;
}
constexpr ::StringW const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__subprotocol() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subprotocol;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__subprotocol(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subprotocol)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Timer*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__keepAliveTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keepAliveTimer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__keepAliveTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keepAliveTimer;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__keepAliveTimer(::System::Threading::Timer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keepAliveTimer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__abortSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____abortSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__abortSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____abortSource;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__abortSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____abortSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Memory_1<uint8_t>& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveBuffer;
}
constexpr ::System::Memory_1<uint8_t> const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveBuffer;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__receiveBuffer(::System::Memory_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receiveBuffer = value;
}
constexpr ::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__utf8TextState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____utf8TextState;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState*> const&
System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__utf8TextState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____utf8TextState;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__utf8TextState(::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____utf8TextState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::SemaphoreSlim*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sendFrameAsyncLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendFrameAsyncLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sendFrameAsyncLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendFrameAsyncLock;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__sendFrameAsyncLock(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sendFrameAsyncLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebSockets::WebSocketState& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::System::Net::WebSockets::WebSocketState const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__state(::System::Net::WebSockets::WebSocketState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr bool& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr bool& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sentCloseFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentCloseFrame;
}
constexpr bool const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sentCloseFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentCloseFrame;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__sentCloseFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sentCloseFrame = value;
}
constexpr bool& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receivedCloseFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedCloseFrame;
}
constexpr bool const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receivedCloseFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedCloseFrame;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__receivedCloseFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receivedCloseFrame = value;
}
constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__closeStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeStatus;
}
constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__closeStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeStatus;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__closeStatus(::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____closeStatus = value;
}
constexpr ::StringW& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__closeStatusDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeStatusDescription;
}
constexpr ::StringW const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__closeStatusDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeStatusDescription;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__closeStatusDescription(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closeStatusDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastReceiveHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceiveHeader;
}
constexpr ::System::Net::WebSockets::__ManagedWebSocket__MessageHeader const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastReceiveHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceiveHeader;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__lastReceiveHeader(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastReceiveHeader = value;
}
constexpr int32_t& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBufferOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveBufferOffset;
}
constexpr int32_t const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBufferOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveBufferOffset;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__receiveBufferOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receiveBufferOffset = value;
}
constexpr int32_t& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBufferCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveBufferCount;
}
constexpr int32_t const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receiveBufferCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveBufferCount;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__receiveBufferCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receiveBufferCount = value;
}
constexpr int32_t& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receivedMaskOffsetOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedMaskOffsetOffset;
}
constexpr int32_t const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__receivedMaskOffsetOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedMaskOffsetOffset;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__receivedMaskOffsetOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receivedMaskOffsetOffset = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sendBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__sendBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendBuffer;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__sendBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sendBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastSendWasFragment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSendWasFragment;
}
constexpr bool const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastSendWasFragment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSendWasFragment;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__lastSendWasFragment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSendWasFragment = value;
}
constexpr ::System::Threading::Tasks::Task*& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastReceiveAsync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceiveAsync;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& System::Net::WebSockets::ManagedWebSocket::__cordl_internal_get__lastReceiveAsync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceiveAsync;
}
constexpr void System::Net::WebSockets::ManagedWebSocket::__cordl_internal_set__lastReceiveAsync(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastReceiveAsync)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_random(::System::Security::Cryptography::RandomNumberGenerator* value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "s_random",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>(
      std::forward<::System::Security::Cryptography::RandomNumberGenerator*>(value));
}
inline ::System::Security::Cryptography::RandomNumberGenerator* System::Net::WebSockets::ManagedWebSocket::getStaticF_s_random() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "s_random",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>();
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_textEncoding(::System::Text::UTF8Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF8Encoding*, "s_textEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>(
      std::forward<::System::Text::UTF8Encoding*>(value));
}
inline ::System::Text::UTF8Encoding* System::Net::WebSockets::ManagedWebSocket::getStaticF_s_textEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::UTF8Encoding*, "s_textEncoding",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>();
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_validSendStates(::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>, "s_validSendStates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>(
      std::forward<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>>(value));
}
inline ::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> System::Net::WebSockets::ManagedWebSocket::getStaticF_s_validSendStates() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>, "s_validSendStates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>();
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_validReceiveStates(::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>, "s_validReceiveStates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>(
      std::forward<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>>(value));
}
inline ::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> System::Net::WebSockets::ManagedWebSocket::getStaticF_s_validReceiveStates() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>, "s_validReceiveStates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>();
}
inline void
System::Net::WebSockets::ManagedWebSocket::setStaticF_s_validCloseOutputStates(::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>, "s_validCloseOutputStates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>(
      std::forward<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>>(value));
}
inline ::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> System::Net::WebSockets::ManagedWebSocket::getStaticF_s_validCloseOutputStates() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>, "s_validCloseOutputStates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>();
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_validCloseStates(::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>, "s_validCloseStates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>(
      std::forward<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>>(value));
}
inline ::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> System::Net::WebSockets::ManagedWebSocket::getStaticF_s_validCloseStates() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>, "s_validCloseStates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>();
}
inline void System::Net::WebSockets::ManagedWebSocket::setStaticF_s_cachedCloseTask(::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*, "s_cachedCloseTask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>(
      std::forward<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*>(value));
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* System::Net::WebSockets::ManagedWebSocket::getStaticF_s_cachedCloseTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*, "s_cachedCloseTask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get>();
}
inline ::System::Net::WebSockets::ManagedWebSocket* System::Net::WebSockets::ManagedWebSocket::CreateFromConnectedStream(::System::IO::Stream* stream, bool isServer, ::StringW subprotocol,
                                                                                                                         ::System::TimeSpan keepAliveInterval) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "CreateFromConnectedStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::ManagedWebSocket*, false>(nullptr, ___internal_method, stream, isServer, subprotocol, keepAliveInterval);
}
inline ::System::Object* System::Net::WebSockets::ManagedWebSocket::get_StateUpdateLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                             "get_StateUpdateLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Net::WebSockets::ManagedWebSocket::get_ReceiveAsyncLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                             "get_ReceiveAsyncLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Net::WebSockets::ManagedWebSocket* System::Net::WebSockets::ManagedWebSocket::New_ctor(::System::IO::Stream* stream, bool isServer, ::StringW subprotocol,
                                                                                                        ::System::TimeSpan keepAliveInterval) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebSockets::ManagedWebSocket*>(stream, isServer, subprotocol, keepAliveInterval));
}
inline void System::Net::WebSockets::ManagedWebSocket::_ctor(::System::IO::Stream* stream, bool isServer, ::StringW subprotocol, ::System::TimeSpan keepAliveInterval) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, isServer, subprotocol, keepAliveInterval);
}
inline void System::Net::WebSockets::ManagedWebSocket::Dispose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebSockets::ManagedWebSocket::DisposeCore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "DisposeCore",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Net::WebSockets::ManagedWebSocket::get_CloseStatusDescription() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::ManagedWebSocket::get_State() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::WebSocketState, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::SendAsync(::System::ArraySegment_1<uint8_t> buffer, ::System::Net::WebSockets::WebSocketMessageType messageType,
                                                                                              bool endOfMessage, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, messageType, endOfMessage, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::Net::WebSockets::ManagedWebSocket::SendPrivateAsync(::System::ReadOnlyMemory_1<uint8_t> buffer,
                                                                                                         ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage,
                                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "SendPrivateAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketMessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method, buffer, messageType, endOfMessage, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*
System::Net::WebSockets::ManagedWebSocket::ReceiveAsync(::System::ArraySegment_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*, false>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::StringW statusDescription,
                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, closeStatus, statusDescription, cancellationToken);
}
inline void System::Net::WebSockets::ManagedWebSocket::Abort() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ValueTask System::Net::WebSockets::ManagedWebSocket::SendFrameAsync(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode, bool endOfMessage,
                                                                                                       ::System::ReadOnlyMemory_1<uint8_t> payloadBuffer,
                                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "SendFrameAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method, opcode, endOfMessage, payloadBuffer, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::Net::WebSockets::ManagedWebSocket::SendFrameLockAcquiredNonCancelableAsync(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode,
                                                                                                                                bool endOfMessage, ::System::ReadOnlyMemory_1<uint8_t> payloadBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "SendFrameLockAcquiredNonCancelableAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method, opcode, endOfMessage, payloadBuffer);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::WaitForWriteTaskAsync(::System::Threading::Tasks::ValueTask writeTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "WaitForWriteTaskAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, writeTask);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::SendFrameFallbackAsync(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode, bool endOfMessage,
                                                                                                           ::System::ReadOnlyMemory_1<uint8_t> payloadBuffer,
                                                                                                           ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "SendFrameFallbackAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, opcode, endOfMessage, payloadBuffer, cancellationToken);
}
inline int32_t System::Net::WebSockets::ManagedWebSocket::WriteFrameToSendBuffer(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode, bool endOfMessage,
                                                                                 ::System::ReadOnlySpan_1<uint8_t> payloadBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "WriteFrameToSendBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, opcode, endOfMessage, payloadBuffer);
}
inline void System::Net::WebSockets::ManagedWebSocket::SendKeepAliveFrameAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                             "SendKeepAliveFrameAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Net::WebSockets::ManagedWebSocket::WriteHeader(::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode opcode, ::ArrayW<uint8_t, ::Array<uint8_t>*> sendBuffer,
                                                                      ::System::ReadOnlySpan_1<uint8_t> payload, bool endOfMessage, bool useMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "WriteHeader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageOpcode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, opcode, sendBuffer, payload, endOfMessage, useMask);
}
inline void System::Net::WebSockets::ManagedWebSocket::WriteRandomMask(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "WriteRandomMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, offset);
}
/// @param resultGetter: TWebSocketReceiveResultGetter (default: nullptr)
template <typename TWebSocketReceiveResultGetter, typename TWebSocketReceiveResult>
inline ::System::Threading::Tasks::ValueTask_1<TWebSocketReceiveResult> System::Net::WebSockets::ManagedWebSocket::ReceiveAsyncPrivate(::System::Memory_1<uint8_t> payloadBuffer,
                                                                                                                                       ::System::Threading::CancellationToken cancellationToken,
                                                                                                                                       TWebSocketReceiveResultGetter resultGetter) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ReceiveAsyncPrivate",
                                               std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TWebSocketReceiveResultGetter>::get(),
                                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TWebSocketReceiveResult>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TWebSocketReceiveResultGetter>::get() })));
  static auto* ___internal_method = THROW_UNLESS(
      ::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TWebSocketReceiveResultGetter>::get(),
                                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TWebSocketReceiveResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<TWebSocketReceiveResult>, false>(this, ___internal_method, payloadBuffer, cancellationToken, resultGetter);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::HandleReceivedCloseAsync(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader header,
                                                                                                             ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "HandleReceivedCloseAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageHeader>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, header, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::WaitForServerToCloseConnectionAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "WaitForServerToCloseConnectionAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::HandleReceivedPingPongAsync(::System::Net::WebSockets::__ManagedWebSocket__MessageHeader header,
                                                                                                                ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "HandleReceivedPingPongAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__MessageHeader>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, header, cancellationToken);
}
inline bool System::Net::WebSockets::ManagedWebSocket::IsValidCloseStatus(::System::Net::WebSockets::WebSocketCloseStatus closeStatus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "IsValidCloseStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketCloseStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, closeStatus);
}
/// @param innerException: ::System::Exception* (default: nullptr)
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::CloseWithReceiveErrorAndThrowAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus,
                                                                                                                       ::System::Net::WebSockets::WebSocketError error,
                                                                                                                       ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "CloseWithReceiveErrorAndThrowAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketCloseStatus>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketError>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, closeStatus, error, innerException);
}
inline bool System::Net::WebSockets::ManagedWebSocket::TryParseMessageHeaderFromReceiveBuffer(ByRef<::System::Net::WebSockets::__ManagedWebSocket__MessageHeader> resultHeader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "TryParseMessageHeaderFromReceiveBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::WebSockets::__ManagedWebSocket__MessageHeader>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, resultHeader);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::SendCloseFrameAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::StringW closeStatusDescription,
                                                                                                        ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "SendCloseFrameAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketCloseStatus>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, closeStatus, closeStatusDescription, cancellationToken);
}
inline void System::Net::WebSockets::ManagedWebSocket::ConsumeFromBuffer(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ConsumeFromBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count);
}
/// @param throwOnPrematureClosure: bool (default: true)
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ManagedWebSocket::EnsureBufferContainsAsync(int32_t minimumRequiredBytes, ::System::Threading::CancellationToken cancellationToken,
                                                                                                              bool throwOnPrematureClosure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "EnsureBufferContainsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, minimumRequiredBytes, cancellationToken, throwOnPrematureClosure);
}
inline void System::Net::WebSockets::ManagedWebSocket::ThrowIfEOFUnexpected(bool throwOnPrematureClosure) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ThrowIfEOFUnexpected",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, throwOnPrematureClosure);
}
inline void System::Net::WebSockets::ManagedWebSocket::AllocateSendBuffer(int32_t minLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "AllocateSendBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minLength);
}
inline void System::Net::WebSockets::ManagedWebSocket::ReleaseSendBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(),
                                                                             "ReleaseSendBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Net::WebSockets::ManagedWebSocket::CombineMaskBytes(::System::Span_1<uint8_t> buffer, int32_t maskOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "CombineMaskBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, buffer, maskOffset);
}
inline int32_t System::Net::WebSockets::ManagedWebSocket::ApplyMask(::System::Span_1<uint8_t> toMask, ::ArrayW<uint8_t, ::Array<uint8_t>*> mask, int32_t maskOffset, int32_t maskOffsetIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ApplyMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, toMask, mask, maskOffset, maskOffsetIndex);
}
inline int32_t System::Net::WebSockets::ManagedWebSocket::ApplyMask(::System::Span_1<uint8_t> toMask, int32_t mask, int32_t maskIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ApplyMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, toMask, mask, maskIndex);
}
/// @param methodName: ::StringW (default: nullptr)
inline void System::Net::WebSockets::ManagedWebSocket::ThrowIfOperationInProgress(bool operationCompleted, ::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ThrowIfOperationInProgress", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operationCompleted, methodName);
}
inline void System::Net::WebSockets::ManagedWebSocket::ThrowOperationInProgress(::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "ThrowOperationInProgress",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, methodName);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Exception* System::Net::WebSockets::ManagedWebSocket::CreateOperationCanceledException(::System::Exception* innerException, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "CreateOperationCanceledException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, innerException, cancellationToken);
}
inline bool System::Net::WebSockets::ManagedWebSocket::TryValidateUtf8(::System::Span_1<uint8_t> span, bool endOfMessage, ::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::ManagedWebSocket*>::get(), "TryValidateUtf8", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::__ManagedWebSocket__Utf8MessageState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, span, endOfMessage, state);
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::ManagedWebSocket::ManagedWebSocket() {}
