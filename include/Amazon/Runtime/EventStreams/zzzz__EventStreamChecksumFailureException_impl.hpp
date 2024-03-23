#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamChecksumFailureException_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException::*)(::StringW)>(
    &::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2023cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException* Amazon::Runtime::EventStreams::EventStreamChecksumFailureException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException*>(message));
}
inline void Amazon::Runtime::EventStreams::EventStreamChecksumFailureException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException::EventStreamChecksumFailureException() {}
