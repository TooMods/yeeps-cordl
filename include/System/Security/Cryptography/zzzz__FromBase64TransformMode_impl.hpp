#pragma once
#include "System/Security/Cryptography/zzzz__FromBase64TransformMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::FromBase64TransformMode::FromBase64TransformMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::FromBase64TransformMode::FromBase64TransformMode() {}
constexpr ::System::Security::Cryptography::FromBase64TransformMode System::Security::Cryptography::FromBase64TransformMode::IgnoreWhiteSpaces{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::Cryptography::FromBase64TransformMode System::Security::Cryptography::FromBase64TransformMode::DoNotIgnoreWhiteSpaces{ static_cast<int32_t>(0x1) };
