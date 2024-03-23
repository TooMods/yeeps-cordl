#pragma once
#include "System/Security/Cryptography/zzzz__CspAlgorithmType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::CspAlgorithmType::CspAlgorithmType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CspAlgorithmType::CspAlgorithmType() {}
constexpr ::System::Security::Cryptography::CspAlgorithmType System::Security::Cryptography::CspAlgorithmType::Rsa{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::Cryptography::CspAlgorithmType System::Security::Cryptography::CspAlgorithmType::Dss{ static_cast<int32_t>(0x1) };
