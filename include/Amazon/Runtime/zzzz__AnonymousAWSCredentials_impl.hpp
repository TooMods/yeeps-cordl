#pragma once
#include "Amazon/Runtime/zzzz__AWSCredentials_impl.hpp"
#include "Amazon/Runtime/zzzz__AnonymousAWSCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::AnonymousAWSCredentials.GetCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::ImmutableCredentials* (::Amazon::Runtime::AnonymousAWSCredentials::*)()>(
    &::Amazon::Runtime::AnonymousAWSCredentials::GetCredentials)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fe4b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AnonymousAWSCredentials*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AnonymousAWSCredentials*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::AnonymousAWSCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::AnonymousAWSCredentials::*)()>(&::Amazon::Runtime::AnonymousAWSCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe4b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AnonymousAWSCredentials*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::ImmutableCredentials* Amazon::Runtime::AnonymousAWSCredentials::GetCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AnonymousAWSCredentials*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::ImmutableCredentials*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::AnonymousAWSCredentials* Amazon::Runtime::AnonymousAWSCredentials::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::AnonymousAWSCredentials*>());
}
inline void Amazon::Runtime::AnonymousAWSCredentials::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::AnonymousAWSCredentials*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::AnonymousAWSCredentials::AnonymousAWSCredentials() {}
