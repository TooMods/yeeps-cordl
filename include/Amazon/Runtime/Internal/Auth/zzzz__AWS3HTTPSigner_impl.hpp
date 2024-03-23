#pragma once
#include "Amazon/Runtime/Internal/Auth/zzzz__AWS3Signer_impl.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AWS3HTTPSigner_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner::*)()>(
    &::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25de044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner* Amazon::Runtime::Internal::Auth::AWS3HTTPSigner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner*>());
}
inline void Amazon::Runtime::Internal::Auth::AWS3HTTPSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner::AWS3HTTPSigner() {}
