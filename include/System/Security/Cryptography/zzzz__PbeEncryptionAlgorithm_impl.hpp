#pragma once
#include "System/Security/Cryptography/zzzz__PbeEncryptionAlgorithm_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm::PbeEncryptionAlgorithm(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm::PbeEncryptionAlgorithm() {}
constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm System::Security::Cryptography::PbeEncryptionAlgorithm::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm System::Security::Cryptography::PbeEncryptionAlgorithm::Aes128Cbc{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm System::Security::Cryptography::PbeEncryptionAlgorithm::Aes192Cbc{ static_cast<int32_t>(0x2) };
constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm System::Security::Cryptography::PbeEncryptionAlgorithm::Aes256Cbc{ static_cast<int32_t>(0x3) };
constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm System::Security::Cryptography::PbeEncryptionAlgorithm::TripleDes3KeyPkcs12{ static_cast<int32_t>(0x4) };
