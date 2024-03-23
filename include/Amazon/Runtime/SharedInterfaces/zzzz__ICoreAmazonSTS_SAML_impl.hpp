#pragma once
#include "Amazon/Runtime/SharedInterfaces/zzzz__ICoreAmazonSTS_SAML_def.hpp"
#include "Amazon/Runtime/zzzz__SAMLImmutableCredentials_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_SAML.CredentialsFromSAMLAuthentication
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::SAMLImmutableCredentials* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_SAML::*)(::StringW, ::StringW, ::StringW, ::System::TimeSpan, ::System::Net::ICredentials*)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_SAML::CredentialsFromSAMLAuthentication)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_SAML*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_SAML*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::SAMLImmutableCredentials* Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_SAML::CredentialsFromSAMLAuthentication(::StringW endpoint, ::StringW authenticationType,
                                                                                                                                              ::StringW roleARN, ::System::TimeSpan credentialDuration,
                                                                                                                                              ::System::Net::ICredentials* userCredential) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_SAML*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::SAMLImmutableCredentials*, false>(this, ___internal_method, endpoint, authenticationType, roleARN, credentialDuration, userCredential);
}
