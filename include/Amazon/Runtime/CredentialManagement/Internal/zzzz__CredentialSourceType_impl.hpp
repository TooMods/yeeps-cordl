#pragma once
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialSourceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType::CredentialSourceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType::CredentialSourceType() {}
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType::Ec2InstanceMetadata{ static_cast<int32_t>(
    0x0) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType::Environment{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType Amazon::Runtime::CredentialManagement::Internal::CredentialSourceType::EcsContainer{ static_cast<int32_t>(0x2) };
