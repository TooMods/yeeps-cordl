#pragma once
#include "Amazon/Runtime/CredentialManagement/zzzz__SAMLAuthenticationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType::SAMLAuthenticationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType::SAMLAuthenticationType() {}
constexpr ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType Amazon::Runtime::CredentialManagement::SAMLAuthenticationType::NTLM{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType Amazon::Runtime::CredentialManagement::SAMLAuthenticationType::Digest{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType Amazon::Runtime::CredentialManagement::SAMLAuthenticationType::Kerberos{ static_cast<int32_t>(0x2) };
constexpr ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType Amazon::Runtime::CredentialManagement::SAMLAuthenticationType::Negotiate{ static_cast<int32_t>(0x3) };
