#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "Amazon/Runtime/zzzz__RequestEventArgs_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::RequestEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RequestEventArgs::*)()>(&::Amazon::Runtime::RequestEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20204a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RequestEventArgs*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::RequestEventArgs* Amazon::Runtime::RequestEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::RequestEventArgs*>());
}
inline void Amazon::Runtime::RequestEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RequestEventArgs*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::RequestEventArgs::RequestEventArgs() {}
