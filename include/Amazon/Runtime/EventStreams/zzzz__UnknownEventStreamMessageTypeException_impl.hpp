#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__UnknownEventStreamMessageTypeException_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException::*)()>(
    &::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2025390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException* Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException*>());
}
inline void Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException::UnknownEventStreamMessageTypeException() {}
