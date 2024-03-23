#pragma once
#include "System/ComponentModel/zzzz__MaskedTextResultHint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::MaskedTextResultHint::MaskedTextResultHint(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::MaskedTextResultHint::MaskedTextResultHint() {}
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::CharacterEscaped{ static_cast<int32_t>(0x1) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::NoEffect{ static_cast<int32_t>(0x2) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::SideEffect{ static_cast<int32_t>(0x3) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::Success{ static_cast<int32_t>(0x4) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::AsciiCharacterExpected{ static_cast<int32_t>(0xffffffff) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::AlphanumericCharacterExpected{ static_cast<int32_t>(0xfffffffe) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::DigitExpected{ static_cast<int32_t>(0xfffffffd) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::LetterExpected{ static_cast<int32_t>(0xfffffffc) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::SignedDigitExpected{ static_cast<int32_t>(0xfffffffb) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::InvalidInput{ static_cast<int32_t>(0xffffffcd) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::PromptCharNotAllowed{ static_cast<int32_t>(0xffffffcc) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::UnavailableEditPosition{ static_cast<int32_t>(0xffffffcb) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::NonEditPosition{ static_cast<int32_t>(0xffffffca) };
constexpr ::System::ComponentModel::MaskedTextResultHint System::ComponentModel::MaskedTextResultHint::PositionOutOfRange{ static_cast<int32_t>(0xffffffc9) };
