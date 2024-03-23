#pragma once
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStreamException_impl.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__UnknownEventStreamException_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::UnknownEventStreamException.get_ExceptionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::EventStreams::UnknownEventStreamException::*)()>(
    &::Amazon::Runtime::EventStreams::UnknownEventStreamException::get_ExceptionType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x20253e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::UnknownEventStreamException*>::get(), "get_ExceptionType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::UnknownEventStreamException.set_ExceptionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::UnknownEventStreamException::*)(::StringW)>(
    &::Amazon::Runtime::EventStreams::UnknownEventStreamException::set_ExceptionType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x20254c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::UnknownEventStreamException*>::get(), "set_ExceptionType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::UnknownEventStreamException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::UnknownEventStreamException::*)(::StringW)>(
    &::Amazon::Runtime::EventStreams::UnknownEventStreamException::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x202559c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::UnknownEventStreamException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW Amazon::Runtime::EventStreams::UnknownEventStreamException::get_ExceptionType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::UnknownEventStreamException*>::get(), "get_ExceptionType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::EventStreams::UnknownEventStreamException::set_ExceptionType(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::UnknownEventStreamException*>::get(), "set_ExceptionType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::EventStreams::UnknownEventStreamException* Amazon::Runtime::EventStreams::UnknownEventStreamException::New_ctor(::StringW exceptionType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::UnknownEventStreamException*>(exceptionType));
}
inline void Amazon::Runtime::EventStreams::UnknownEventStreamException::_ctor(::StringW exceptionType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::UnknownEventStreamException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exceptionType);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EventStreams::UnknownEventStreamException::UnknownEventStreamException() {}
