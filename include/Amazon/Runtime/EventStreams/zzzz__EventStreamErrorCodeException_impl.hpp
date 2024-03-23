#pragma once
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStreamException_impl.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamErrorCodeException_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamErrorCodeException.get_ErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::EventStreams::EventStreamErrorCodeException::*)()>(
    &::Amazon::Runtime::EventStreams::EventStreamErrorCodeException::get_ErrorCode)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x20223ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamErrorCodeException*>::get(), "get_ErrorCode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamErrorCodeException.set_ErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::EventStreamErrorCodeException::*)(int32_t)>(
    &::Amazon::Runtime::EventStreams::EventStreamErrorCodeException::set_ErrorCode)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x20224f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamErrorCodeException*>::get(), "set_ErrorCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamErrorCodeException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::EventStreamErrorCodeException::*)(int32_t)>(
    &::Amazon::Runtime::EventStreams::EventStreamErrorCodeException::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2022604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamErrorCodeException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamErrorCodeException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::EventStreamErrorCodeException::*)(int32_t, ::StringW)>(
    &::Amazon::Runtime::EventStreams::EventStreamErrorCodeException::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2022630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamErrorCodeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline int32_t Amazon::Runtime::EventStreams::EventStreamErrorCodeException::get_ErrorCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamErrorCodeException*>::get(), "get_ErrorCode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::EventStreams::EventStreamErrorCodeException::set_ErrorCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamErrorCodeException*>::get(), "set_ErrorCode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::EventStreams::EventStreamErrorCodeException* Amazon::Runtime::EventStreams::EventStreamErrorCodeException::New_ctor(int32_t errorCode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::EventStreamErrorCodeException*>(errorCode));
}
inline void Amazon::Runtime::EventStreams::EventStreamErrorCodeException::_ctor(int32_t errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamErrorCodeException*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode);
}
inline ::Amazon::Runtime::EventStreams::EventStreamErrorCodeException* Amazon::Runtime::EventStreams::EventStreamErrorCodeException::New_ctor(int32_t errorCode, ::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::EventStreamErrorCodeException*>(errorCode, message));
}
inline void Amazon::Runtime::EventStreams::EventStreamErrorCodeException::_ctor(int32_t errorCode, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamErrorCodeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, message);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EventStreams::EventStreamErrorCodeException::EventStreamErrorCodeException() {}
