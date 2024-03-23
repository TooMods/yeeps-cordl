#pragma once
#include "Amazon/Runtime/Internal/zzzz__InvokeOptionsBase_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__InvokeOptions_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::InvokeOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::InvokeOptions::*)()>(&::Amazon::Runtime::Internal::InvokeOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d907c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::InvokeOptions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::InvokeOptions* Amazon::Runtime::Internal::InvokeOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::InvokeOptions*>());
}
inline void Amazon::Runtime::Internal::InvokeOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::InvokeOptions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::InvokeOptions::InvokeOptions() {}
