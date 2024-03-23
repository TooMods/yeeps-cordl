#pragma once
#include "System/Security/Cryptography/zzzz__RSAEncryptionPaddingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::RSAEncryptionPaddingMode::RSAEncryptionPaddingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAEncryptionPaddingMode::RSAEncryptionPaddingMode() {}
constexpr ::System::Security::Cryptography::RSAEncryptionPaddingMode System::Security::Cryptography::RSAEncryptionPaddingMode::Pkcs1{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::Cryptography::RSAEncryptionPaddingMode System::Security::Cryptography::RSAEncryptionPaddingMode::Oaep{ static_cast<int32_t>(0x1) };
