#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketValidate_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketValidate.ThrowIfInvalidState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Net::WebSockets::WebSocketState, bool, ::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>)>(
        &::System::Net::WebSockets::WebSocketValidate::ThrowIfInvalidState)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2c91478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketValidate*>::get(), "ThrowIfInvalidState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketValidate.ValidateSubprotocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Net::WebSockets::WebSocketValidate::ValidateSubprotocol)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2c976e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketValidate*>::get(), "ValidateSubprotocol",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketValidate.ValidateCloseStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW)>(
    &::System::Net::WebSockets::WebSocketValidate::ValidateCloseStatus)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2c91b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketValidate*>::get(), "ValidateCloseStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketCloseStatus>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketValidate.ValidateArraySegment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ArraySegment_1<uint8_t>, ::StringW)>(
    &::System::Net::WebSockets::WebSocketValidate::ValidateArraySegment)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2c90ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketValidate*>::get(), "ValidateArraySegment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ArraySegment_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::WebSockets::WebSocketValidate::ThrowIfInvalidState(::System::Net::WebSockets::WebSocketState currentState, bool isDisposed,
                                                                            ::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> validStates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketValidate*>::get(), "ThrowIfInvalidState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, currentState, isDisposed, validStates);
}
inline void System::Net::WebSockets::WebSocketValidate::ValidateSubprotocol(::StringW subProtocol) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketValidate*>::get(), "ValidateSubprotocol",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, subProtocol);
}
inline void System::Net::WebSockets::WebSocketValidate::ValidateCloseStatus(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::StringW statusDescription) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketValidate*>::get(), "ValidateCloseStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebSockets::WebSocketCloseStatus>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, closeStatus, statusDescription);
}
inline void System::Net::WebSockets::WebSocketValidate::ValidateArraySegment(::System::ArraySegment_1<uint8_t> arraySegment, ::StringW parameterName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebSockets::WebSocketValidate*>::get(), "ValidateArraySegment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ArraySegment_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arraySegment, parameterName);
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocketValidate::WebSocketValidate() {}
