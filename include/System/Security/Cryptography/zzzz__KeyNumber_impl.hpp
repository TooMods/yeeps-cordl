#pragma once
#include "System/Security/Cryptography/zzzz__KeyNumber_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::KeyNumber::KeyNumber(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::KeyNumber::KeyNumber() {}
constexpr ::System::Security::Cryptography::KeyNumber System::Security::Cryptography::KeyNumber::Exchange{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::Cryptography::KeyNumber System::Security::Cryptography::KeyNumber::Signature{ static_cast<int32_t>(0x2) };
