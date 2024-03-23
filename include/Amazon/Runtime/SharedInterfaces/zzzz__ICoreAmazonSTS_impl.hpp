#pragma once
#include "Amazon/Runtime/SharedInterfaces/zzzz__ICoreAmazonSTS_def.hpp"
#include "Amazon/Runtime/zzzz__AssumeRoleAWSCredentialsOptions_def.hpp"
#include "Amazon/Runtime/zzzz__AssumeRoleImmutableCredentials_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS.CredentialsFromAssumeRoleAuthentication
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::AssumeRoleImmutableCredentials* (::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS::*)(::StringW, ::StringW, ::Amazon::Runtime::AssumeRoleAWSCredentialsOptions*)>(
        &::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS::CredentialsFromAssumeRoleAuthentication)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::AssumeRoleImmutableCredentials*
Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS::CredentialsFromAssumeRoleAuthentication(::StringW roleArn, ::StringW roleSessionName, ::Amazon::Runtime::AssumeRoleAWSCredentialsOptions* options) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AssumeRoleImmutableCredentials*, false>(this, ___internal_method, roleArn, roleSessionName, options);
}
