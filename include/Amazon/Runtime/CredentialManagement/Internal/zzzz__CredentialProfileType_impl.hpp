#pragma once
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialProfileType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::CredentialProfileType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::CredentialProfileType() {}
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRole{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRoleCredentialSource{
  static_cast<int32_t>(0x1)
};
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRoleExternal{ static_cast<int32_t>(
    0x2) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRoleExternalMFA{ static_cast<int32_t>(
    0x3) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRoleMFA{ static_cast<int32_t>(0x4) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::Basic{ static_cast<int32_t>(0x5) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::SAMLRole{ static_cast<int32_t>(0x6) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::SAMLRoleUserIdentity{ static_cast<int32_t>(
    0x7) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::Session{ static_cast<int32_t>(0x8) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::CredentialProcess{ static_cast<int32_t>(
    0x9) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRoleWithWebIdentity{
  static_cast<int32_t>(0xa)
};
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRoleWithWebIdentitySessionName{
  static_cast<int32_t>(0xb)
};
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRoleSessionName{ static_cast<int32_t>(
    0xc) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRoleCredentialSourceSessionName{
  static_cast<int32_t>(0xd)
};
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRoleExternalSessionName{
  static_cast<int32_t>(0xe)
};
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRoleExternalMFASessionName{
  static_cast<int32_t>(0xf)
};
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::AssumeRoleMFASessionName{
  static_cast<int32_t>(0x10)
};
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType::SSO{ static_cast<int32_t>(0x11) };
