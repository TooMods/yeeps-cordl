#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskedTextResultHint)
// Forward declare root types
namespace System::ComponentModel {
struct MaskedTextResultHint;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::MaskedTextResultHint);
// Type: System.ComponentModel::MaskedTextResultHint
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: true
// CS Name: ::System.ComponentModel::MaskedTextResultHint
struct CORDL_TYPE MaskedTextResultHint {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MaskedTextResultHint_Unwrapped
  enum struct __MaskedTextResultHint_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_CharacterEscaped = static_cast<int32_t>(0x1),
    __E_NoEffect = static_cast<int32_t>(0x2),
    __E_SideEffect = static_cast<int32_t>(0x3),
    __E_Success = static_cast<int32_t>(0x4),
    __E_AsciiCharacterExpected = static_cast<int32_t>(0xffffffff),
    __E_AlphanumericCharacterExpected = static_cast<int32_t>(0xfffffffe),
    __E_DigitExpected = static_cast<int32_t>(0xfffffffd),
    __E_LetterExpected = static_cast<int32_t>(0xfffffffc),
    __E_SignedDigitExpected = static_cast<int32_t>(0xfffffffb),
    __E_InvalidInput = static_cast<int32_t>(0xffffffcd),
    __E_PromptCharNotAllowed = static_cast<int32_t>(0xffffffcc),
    __E_UnavailableEditPosition = static_cast<int32_t>(0xffffffcb),
    __E_NonEditPosition = static_cast<int32_t>(0xffffffca),
    __E_PositionOutOfRange = static_cast<int32_t>(0xffffffc9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MaskedTextResultHint_Unwrapped() const noexcept {
    return static_cast<__MaskedTextResultHint_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskedTextResultHint();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MaskedTextResultHint(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AlphanumericCharacterExpected value: static_cast<int32_t>(0xfffffffe)
  static ::System::ComponentModel::MaskedTextResultHint const AlphanumericCharacterExpected;

  /// @brief Field AsciiCharacterExpected value: static_cast<int32_t>(0xffffffff)
  static ::System::ComponentModel::MaskedTextResultHint const AsciiCharacterExpected;

  /// @brief Field CharacterEscaped value: static_cast<int32_t>(0x1)
  static ::System::ComponentModel::MaskedTextResultHint const CharacterEscaped;

  /// @brief Field DigitExpected value: static_cast<int32_t>(0xfffffffd)
  static ::System::ComponentModel::MaskedTextResultHint const DigitExpected;

  /// @brief Field InvalidInput value: static_cast<int32_t>(0xffffffcd)
  static ::System::ComponentModel::MaskedTextResultHint const InvalidInput;

  /// @brief Field LetterExpected value: static_cast<int32_t>(0xfffffffc)
  static ::System::ComponentModel::MaskedTextResultHint const LetterExpected;

  /// @brief Field NoEffect value: static_cast<int32_t>(0x2)
  static ::System::ComponentModel::MaskedTextResultHint const NoEffect;

  /// @brief Field NonEditPosition value: static_cast<int32_t>(0xffffffca)
  static ::System::ComponentModel::MaskedTextResultHint const NonEditPosition;

  /// @brief Field PositionOutOfRange value: static_cast<int32_t>(0xffffffc9)
  static ::System::ComponentModel::MaskedTextResultHint const PositionOutOfRange;

  /// @brief Field PromptCharNotAllowed value: static_cast<int32_t>(0xffffffcc)
  static ::System::ComponentModel::MaskedTextResultHint const PromptCharNotAllowed;

  /// @brief Field SideEffect value: static_cast<int32_t>(0x3)
  static ::System::ComponentModel::MaskedTextResultHint const SideEffect;

  /// @brief Field SignedDigitExpected value: static_cast<int32_t>(0xfffffffb)
  static ::System::ComponentModel::MaskedTextResultHint const SignedDigitExpected;

  /// @brief Field Success value: static_cast<int32_t>(0x4)
  static ::System::ComponentModel::MaskedTextResultHint const Success;

  /// @brief Field UnavailableEditPosition value: static_cast<int32_t>(0xffffffcb)
  static ::System::ComponentModel::MaskedTextResultHint const UnavailableEditPosition;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::System::ComponentModel::MaskedTextResultHint const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::MaskedTextResultHint, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextResultHint, value__) == 0x0, "Offset mismatch!");

} // namespace System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MaskedTextResultHint, "System.ComponentModel", "MaskedTextResultHint");
