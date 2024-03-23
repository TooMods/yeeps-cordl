#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamParseException_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::EventStreamParseException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::EventStreamParseException::*)(::StringW)>(
    &::Amazon::Runtime::EventStreams::EventStreamParseException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2022d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamParseException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::EventStreams::EventStreamParseException* Amazon::Runtime::EventStreams::EventStreamParseException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::EventStreamParseException*>(message));
}
inline void Amazon::Runtime::EventStreams::EventStreamParseException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamParseException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EventStreams::EventStreamParseException::EventStreamParseException() {}
