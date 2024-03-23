#pragma once
#include "Amazon/Runtime/Internal/Util/zzzz__HashingWrapper_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__HashingWrapperMD5_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::HashingWrapperMD5._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::HashingWrapperMD5::*)()>(
    &::Amazon::Runtime::Internal::Util::HashingWrapperMD5::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2448a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::HashingWrapperMD5*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::Util::HashingWrapperMD5* Amazon::Runtime::Internal::Util::HashingWrapperMD5::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::HashingWrapperMD5*>());
}
inline void Amazon::Runtime::Internal::Util::HashingWrapperMD5::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::HashingWrapperMD5*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::HashingWrapperMD5::HashingWrapperMD5() {}
