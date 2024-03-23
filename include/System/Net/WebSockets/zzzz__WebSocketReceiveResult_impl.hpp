#pragma once
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketReceiveResult_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketReceiveResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::WebSocketReceiveResult::*)(
    int32_t, ::System::Net::WebSockets::WebSocketMessageType, bool)>(&::System::Net::WebSockets::WebSocketReceiveResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c93f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketReceiveResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketMessageType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketReceiveResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebSockets::WebSocketReceiveResult::*)(
    int32_t, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>, ::StringW)>(
    &::System::Net::WebSockets::WebSocketReceiveResult::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2c9402c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketReceiveResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketMessageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketReceiveResult.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::WebSockets::WebSocketReceiveResult::*)()>(
    &::System::Net::WebSockets::WebSocketReceiveResult::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c9ca50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketReceiveResult*>::get(),
                                                                               "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketReceiveResult.get_EndOfMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebSockets::WebSocketReceiveResult::*)()>(
    &::System::Net::WebSockets::WebSocketReceiveResult::get_EndOfMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c9ca58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketReceiveResult*>::get(),
                                                                               "get_EndOfMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__Count_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Count_k__BackingField;
}
constexpr int32_t const& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__Count_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Count_k__BackingField;
}
constexpr void System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_set__Count_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Count_k__BackingField = value;
}
constexpr bool& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__EndOfMessage_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EndOfMessage_k__BackingField;
}
constexpr bool const& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__EndOfMessage_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EndOfMessage_k__BackingField;
}
constexpr void System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_set__EndOfMessage_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EndOfMessage_k__BackingField = value;
}
constexpr ::System::Net::WebSockets::WebSocketMessageType& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__MessageType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MessageType_k__BackingField;
}
constexpr ::System::Net::WebSockets::WebSocketMessageType const& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__MessageType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MessageType_k__BackingField;
}
constexpr void System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_set__MessageType_k__BackingField(::System::Net::WebSockets::WebSocketMessageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MessageType_k__BackingField = value;
}
constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__CloseStatus_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseStatus_k__BackingField;
}
constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> const& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__CloseStatus_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseStatus_k__BackingField;
}
constexpr void System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_set__CloseStatus_k__BackingField(::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CloseStatus_k__BackingField = value;
}
constexpr ::StringW& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__CloseStatusDescription_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseStatusDescription_k__BackingField;
}
constexpr ::StringW const& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__CloseStatusDescription_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseStatusDescription_k__BackingField;
}
constexpr void System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_set__CloseStatusDescription_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CloseStatusDescription_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::WebSockets::WebSocketReceiveResult* System::Net::WebSockets::WebSocketReceiveResult::New_ctor(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType,
                                                                                                                    bool endOfMessage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebSockets::WebSocketReceiveResult*>(count, messageType, endOfMessage));
}
inline void System::Net::WebSockets::WebSocketReceiveResult::_ctor(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketReceiveResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketMessageType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count, messageType, endOfMessage);
}
inline ::System::Net::WebSockets::WebSocketReceiveResult* System::Net::WebSockets::WebSocketReceiveResult::New_ctor(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType,
                                                                                                                    bool endOfMessage,
                                                                                                                    ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> closeStatus,
                                                                                                                    ::StringW closeStatusDescription) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebSockets::WebSocketReceiveResult*>(count, messageType, endOfMessage, closeStatus, closeStatusDescription));
}
inline void System::Net::WebSockets::WebSocketReceiveResult::_ctor(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage,
                                                                   ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> closeStatus, ::StringW closeStatusDescription) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketReceiveResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketMessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count, messageType, endOfMessage, closeStatus, closeStatusDescription);
}
inline int32_t System::Net::WebSockets::WebSocketReceiveResult::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketReceiveResult*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Net::WebSockets::WebSocketReceiveResult::get_EndOfMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketReceiveResult*>::get(),
                                                                             "get_EndOfMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocketReceiveResult::WebSocketReceiveResult() {}
