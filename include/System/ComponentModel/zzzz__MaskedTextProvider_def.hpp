#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__BitVector32_def.hpp"
#include "System/ComponentModel/zzzz__MaskedTextProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskedTextProvider)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
struct MaskedTextResultHint;
}
namespace System::ComponentModel {
struct __MaskedTextProvider__CaseConversion;
}
namespace System::ComponentModel {
class __MaskedTextProvider__CharDescriptor;
}
namespace System::ComponentModel {
struct __MaskedTextProvider__CharType;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
struct __MaskedTextProvider__CaseConversion;
}
namespace System::ComponentModel {
struct __MaskedTextProvider__CharType;
}
namespace System::ComponentModel {
class MaskedTextProvider;
}
namespace System::ComponentModel {
class __MaskedTextProvider__CharDescriptor;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::__MaskedTextProvider__CaseConversion);
MARK_VAL_T(::System::ComponentModel::__MaskedTextProvider__CharType);
MARK_REF_PTR_T(::System::ComponentModel::MaskedTextProvider);
MARK_REF_PTR_T(::System::ComponentModel::__MaskedTextProvider__CharDescriptor);
// Type: ::CaseConversion
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: true
// CS Name: ::MaskedTextProvider::CaseConversion
struct CORDL_TYPE __MaskedTextProvider__CaseConversion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MaskedTextProvider__CaseConversion_Unwrapped
  enum struct ____MaskedTextProvider__CaseConversion_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ToLower = static_cast<int32_t>(0x1),
    __E_ToUpper = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MaskedTextProvider__CaseConversion_Unwrapped() const noexcept {
    return static_cast<____MaskedTextProvider__CaseConversion_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MaskedTextProvider__CaseConversion();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MaskedTextProvider__CaseConversion(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::ComponentModel::__MaskedTextProvider__CaseConversion const None;

  /// @brief Field ToLower value: static_cast<int32_t>(0x1)
  static ::System::ComponentModel::__MaskedTextProvider__CaseConversion const ToLower;

  /// @brief Field ToUpper value: static_cast<int32_t>(0x2)
  static ::System::ComponentModel::__MaskedTextProvider__CaseConversion const ToUpper;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__MaskedTextProvider__CaseConversion, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__MaskedTextProvider__CaseConversion, value__) == 0x0, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::CharType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: true
// CS Name: ::MaskedTextProvider::CharType
struct CORDL_TYPE __MaskedTextProvider__CharType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MaskedTextProvider__CharType_Unwrapped
  enum struct ____MaskedTextProvider__CharType_Unwrapped : int32_t {
    __E_EditOptional = static_cast<int32_t>(0x1),
    __E_EditRequired = static_cast<int32_t>(0x2),
    __E_Separator = static_cast<int32_t>(0x4),
    __E_Literal = static_cast<int32_t>(0x8),
    __E_Modifier = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MaskedTextProvider__CharType_Unwrapped() const noexcept {
    return static_cast<____MaskedTextProvider__CharType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MaskedTextProvider__CharType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MaskedTextProvider__CharType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field EditOptional value: static_cast<int32_t>(0x1)
  static ::System::ComponentModel::__MaskedTextProvider__CharType const EditOptional;

  /// @brief Field EditRequired value: static_cast<int32_t>(0x2)
  static ::System::ComponentModel::__MaskedTextProvider__CharType const EditRequired;

  /// @brief Field Literal value: static_cast<int32_t>(0x8)
  static ::System::ComponentModel::__MaskedTextProvider__CharType const Literal;

  /// @brief Field Modifier value: static_cast<int32_t>(0x10)
  static ::System::ComponentModel::__MaskedTextProvider__CharType const Modifier;

  /// @brief Field Separator value: static_cast<int32_t>(0x4)
  static ::System::ComponentModel::__MaskedTextProvider__CharType const Separator;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__MaskedTextProvider__CharType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__MaskedTextProvider__CharType, value__) == 0x0, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::CharDescriptor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::MaskedTextProvider::CharDescriptor*
class CORDL_TYPE __MaskedTextProvider__CharDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field CaseConversion, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_CaseConversion, put = __cordl_internal_set_CaseConversion))::System::ComponentModel::__MaskedTextProvider__CaseConversion CaseConversion;

  /// @brief Field CharType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_CharType, put = __cordl_internal_set_CharType))::System::ComponentModel::__MaskedTextProvider__CharType CharType;

  /// @brief Field IsAssigned, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_IsAssigned, put = __cordl_internal_set_IsAssigned)) bool IsAssigned;

  /// @brief Field MaskPosition, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_MaskPosition, put = __cordl_internal_set_MaskPosition)) int32_t MaskPosition;

  static inline ::System::ComponentModel::__MaskedTextProvider__CharDescriptor* New_ctor(int32_t maskPos, ::System::ComponentModel::__MaskedTextProvider__CharType charType);

  /// @brief Method ToString, addr 0x1b02d18, size 0x220, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::ComponentModel::__MaskedTextProvider__CaseConversion const& __cordl_internal_get_CaseConversion() const;

  constexpr ::System::ComponentModel::__MaskedTextProvider__CaseConversion& __cordl_internal_get_CaseConversion();

  constexpr ::System::ComponentModel::__MaskedTextProvider__CharType const& __cordl_internal_get_CharType() const;

  constexpr ::System::ComponentModel::__MaskedTextProvider__CharType& __cordl_internal_get_CharType();

  constexpr bool const& __cordl_internal_get_IsAssigned() const;

  constexpr bool& __cordl_internal_get_IsAssigned();

  constexpr int32_t const& __cordl_internal_get_MaskPosition() const;

  constexpr int32_t& __cordl_internal_get_MaskPosition();

  constexpr void __cordl_internal_set_CaseConversion(::System::ComponentModel::__MaskedTextProvider__CaseConversion value);

  constexpr void __cordl_internal_set_CharType(::System::ComponentModel::__MaskedTextProvider__CharType value);

  constexpr void __cordl_internal_set_IsAssigned(bool value);

  constexpr void __cordl_internal_set_MaskPosition(int32_t value);

  /// @brief Method .ctor, addr 0x1b02ce8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t maskPos, ::System::ComponentModel::__MaskedTextProvider__CharType charType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MaskedTextProvider__CharDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MaskedTextProvider__CharDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MaskedTextProvider__CharDescriptor(__MaskedTextProvider__CharDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MaskedTextProvider__CharDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MaskedTextProvider__CharDescriptor(__MaskedTextProvider__CharDescriptor const&) = delete;

  /// @brief Field MaskPosition, offset: 0x10, size: 0x4, def value: None
  int32_t ___MaskPosition;

  /// @brief Field CaseConversion, offset: 0x14, size: 0x4, def value: None
  ::System::ComponentModel::__MaskedTextProvider__CaseConversion ___CaseConversion;

  /// @brief Field CharType, offset: 0x18, size: 0x4, def value: None
  ::System::ComponentModel::__MaskedTextProvider__CharType ___CharType;

  /// @brief Field IsAssigned, offset: 0x1c, size: 0x1, def value: None
  bool ___IsAssigned;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__MaskedTextProvider__CharDescriptor, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__MaskedTextProvider__CharDescriptor, ___MaskPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__MaskedTextProvider__CharDescriptor, ___CaseConversion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__MaskedTextProvider__CharDescriptor, ___CharType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__MaskedTextProvider__CharDescriptor, ___IsAssigned) == 0x1c, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::MaskedTextProvider
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::MaskedTextProvider*
class CORDL_TYPE MaskedTextProvider : public ::System::Object {
public:
  // Declarations
  using CaseConversion = ::System::ComponentModel::__MaskedTextProvider__CaseConversion;

  using CharDescriptor = ::System::ComponentModel::__MaskedTextProvider__CharDescriptor;

  using CharType = ::System::ComponentModel::__MaskedTextProvider__CharType;

  __declspec(property(get = get_AllowPromptAsInput)) bool AllowPromptAsInput;

  __declspec(property(get = get_AsciiOnly)) bool AsciiOnly;

  __declspec(property(get = get_AssignedEditPositionCount, put = set_AssignedEditPositionCount)) int32_t AssignedEditPositionCount;

  __declspec(property(get = get_AvailableEditPositionCount)) int32_t AvailableEditPositionCount;

  __declspec(property(get = get_Culture))::System::Globalization::CultureInfo* Culture;

  __declspec(property(get = get_EditPositionCount)) int32_t EditPositionCount;

  __declspec(property(get = get_EditPositions))::System::Collections::IEnumerator* EditPositions;

  __declspec(property(get = get_IncludeLiterals, put = set_IncludeLiterals)) bool IncludeLiterals;

  __declspec(property(get = get_IncludePrompt, put = set_IncludePrompt)) bool IncludePrompt;

  __declspec(property(get = get_IsPassword, put = set_IsPassword)) bool IsPassword;

  __declspec(property(get = get_Item)) char16_t Item[];

  __declspec(property(get = get_LastAssignedPosition)) int32_t LastAssignedPosition;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Mask))::StringW Mask;

  __declspec(property(get = get_MaskCompleted)) bool MaskCompleted;

  __declspec(property(get = get_MaskFull)) bool MaskFull;

  __declspec(property(get = get_PasswordChar, put = set_PasswordChar)) char16_t PasswordChar;

  __declspec(property(get = get_PromptChar, put = set_PromptChar)) char16_t PromptChar;

  __declspec(property(get = get_ResetOnPrompt, put = set_ResetOnPrompt)) bool ResetOnPrompt;

  __declspec(property(get = get_ResetOnSpace, put = set_ResetOnSpace)) bool ResetOnSpace;

  __declspec(property(get = get_SkipLiterals, put = set_SkipLiterals)) bool SkipLiterals;

  /// @brief Field <AssignedEditPositionCount>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__AssignedEditPositionCount_k__BackingField,
                      put = __cordl_internal_set__AssignedEditPositionCount_k__BackingField)) int32_t _AssignedEditPositionCount_k__BackingField;

  /// @brief Field <Culture>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Culture_k__BackingField, put = __cordl_internal_set__Culture_k__BackingField))::System::Globalization::CultureInfo* _Culture_k__BackingField;

  /// @brief Field <Mask>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Mask_k__BackingField, put = __cordl_internal_set__Mask_k__BackingField))::StringW _Mask_k__BackingField;

  /// @brief Field _flagState, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__flagState, put = __cordl_internal_set__flagState))::System::Collections::Specialized::BitVector32 _flagState;

  /// @brief Field _optionalEditChars, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__optionalEditChars, put = __cordl_internal_set__optionalEditChars)) int32_t _optionalEditChars;

  /// @brief Field _passwordChar, offset 0x2c, size 0x2
  __declspec(property(get = __cordl_internal_get__passwordChar, put = __cordl_internal_set__passwordChar)) char16_t _passwordChar;

  /// @brief Field _promptChar, offset 0x2e, size 0x2
  __declspec(property(get = __cordl_internal_get__promptChar, put = __cordl_internal_set__promptChar)) char16_t _promptChar;

  /// @brief Field _requiredCharCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__requiredCharCount, put = __cordl_internal_set__requiredCharCount)) int32_t _requiredCharCount;

  /// @brief Field _requiredEditChars, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__requiredEditChars, put = __cordl_internal_set__requiredEditChars)) int32_t _requiredEditChars;

  /// @brief Field _stringDescriptor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__stringDescriptor,
                      put = __cordl_internal_set__stringDescriptor))::System::Collections::Generic::List_1<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>* _stringDescriptor;

  /// @brief Field _testString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__testString, put = __cordl_internal_set__testString))::System::Text::StringBuilder* _testString;

  /// @brief Field s_ALLOW_PROMPT_AS_INPUT, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ALLOW_PROMPT_AS_INPUT, put = setStaticF_s_ALLOW_PROMPT_AS_INPUT)) int32_t s_ALLOW_PROMPT_AS_INPUT;

  /// @brief Field s_ASCII_ONLY, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ASCII_ONLY, put = setStaticF_s_ASCII_ONLY)) int32_t s_ASCII_ONLY;

  /// @brief Field s_INCLUDE_LITERALS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_INCLUDE_LITERALS, put = setStaticF_s_INCLUDE_LITERALS)) int32_t s_INCLUDE_LITERALS;

  /// @brief Field s_INCLUDE_PROMPT, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_INCLUDE_PROMPT, put = setStaticF_s_INCLUDE_PROMPT)) int32_t s_INCLUDE_PROMPT;

  /// @brief Field s_RESET_ON_LITERALS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_RESET_ON_LITERALS, put = setStaticF_s_RESET_ON_LITERALS)) int32_t s_RESET_ON_LITERALS;

  /// @brief Field s_RESET_ON_PROMPT, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_RESET_ON_PROMPT, put = setStaticF_s_RESET_ON_PROMPT)) int32_t s_RESET_ON_PROMPT;

  /// @brief Field s_SKIP_SPACE, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_SKIP_SPACE, put = setStaticF_s_SKIP_SPACE)) int32_t s_SKIP_SPACE;

  /// @brief Field s_maskTextProviderType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_maskTextProviderType, put = setStaticF_s_maskTextProviderType))::System::Type* s_maskTextProviderType;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Add, addr 0x1aff09c, size 0x20, virtual false, abstract: false, final false
  inline bool Add(::StringW input);

  /// @brief Method Add, addr 0x1aff0bc, size 0xbc, virtual false, abstract: false, final false
  inline bool Add(::StringW input, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method Add, addr 0x1afeeec, size 0x20, virtual false, abstract: false, final false
  inline bool Add(char16_t input);

  /// @brief Method Add, addr 0x1afef0c, size 0xd8, virtual false, abstract: false, final false
  inline bool Add(char16_t input, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method Clear, addr 0x1aff1bc, size 0x18, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x1aff1d4, size 0x68, virtual false, abstract: false, final false
  inline void Clear(ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method Clone, addr 0x1afdc70, size 0x484, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method FindAssignedEditPositionFrom, addr 0x1afe994, size 0x7c, virtual false, abstract: false, final false
  inline int32_t FindAssignedEditPositionFrom(int32_t position, bool direction);

  /// @brief Method FindAssignedEditPositionInRange, addr 0x1aff2f8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t FindAssignedEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction);

  /// @brief Method FindEditPositionFrom, addr 0x1afefe4, size 0x58, virtual false, abstract: false, final false
  inline int32_t FindEditPositionFrom(int32_t position, bool direction);

  /// @brief Method FindEditPositionInRange, addr 0x1aff40c, size 0xc, virtual false, abstract: false, final false
  inline int32_t FindEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction);

  /// @brief Method FindEditPositionInRange, addr 0x1aff314, size 0xf8, virtual false, abstract: false, final false
  inline int32_t FindEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction, uint8_t assignedStatus);

  /// @brief Method FindNonEditPositionFrom, addr 0x1aff510, size 0x58, virtual false, abstract: false, final false
  inline int32_t FindNonEditPositionFrom(int32_t position, bool direction);

  /// @brief Method FindNonEditPositionInRange, addr 0x1aff568, size 0xc, virtual false, abstract: false, final false
  inline int32_t FindNonEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction);

  /// @brief Method FindPositionInRange, addr 0x1aff418, size 0xf8, virtual false, abstract: false, final false
  inline int32_t FindPositionInRange(int32_t startPosition, int32_t endPosition, bool direction, ::System::ComponentModel::__MaskedTextProvider__CharType charTypeFlags);

  /// @brief Method FindUnassignedEditPositionFrom, addr 0x1aff574, size 0x58, virtual false, abstract: false, final false
  inline int32_t FindUnassignedEditPositionFrom(int32_t position, bool direction);

  /// @brief Method FindUnassignedEditPositionInRange, addr 0x1aff5cc, size 0x118, virtual false, abstract: false, final false
  inline int32_t FindUnassignedEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction);

  /// @brief Method GetOperationResultFromHint, addr 0x1aff6e4, size 0xc, virtual false, abstract: false, final false
  static inline bool GetOperationResultFromHint(::System::ComponentModel::MaskedTextResultHint hint);

  /// @brief Method Initialize, addr 0x1afd774, size 0x440, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method InsertAt, addr 0x1aff76c, size 0x20, virtual false, abstract: false, final false
  inline bool InsertAt(::StringW input, int32_t position);

  /// @brief Method InsertAt, addr 0x1aff7e4, size 0xd8, virtual false, abstract: false, final false
  inline bool InsertAt(::StringW input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method InsertAt, addr 0x1aff6f0, size 0x7c, virtual false, abstract: false, final false
  inline bool InsertAt(char16_t input, int32_t position);

  /// @brief Method InsertAt, addr 0x1aff78c, size 0x58, virtual false, abstract: false, final false
  inline bool InsertAt(char16_t input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method InsertAtInt, addr 0x1aff8bc, size 0x318, virtual false, abstract: false, final false
  inline bool InsertAtInt(::StringW input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint, bool testOnly);

  /// @brief Method IsAciiAlphanumeric, addr 0x1b002f4, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsAciiAlphanumeric(char16_t c);

  /// @brief Method IsAlphanumeric, addr 0x1b00330, size 0x88, virtual false, abstract: false, final false
  static inline bool IsAlphanumeric(char16_t c);

  /// @brief Method IsAscii, addr 0x1b002e0, size 0x14, virtual false, abstract: false, final false
  static inline bool IsAscii(char16_t c);

  /// @brief Method IsAsciiLetter, addr 0x1b003b8, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsAsciiLetter(char16_t c);

  /// @brief Method IsAvailablePosition, addr 0x1b003e4, size 0xcc, virtual false, abstract: false, final false
  inline bool IsAvailablePosition(int32_t position);

  /// @brief Method IsEditPosition, addr 0x1afdbb4, size 0x24, virtual false, abstract: false, final false
  static inline bool IsEditPosition(::System::ComponentModel::__MaskedTextProvider__CharDescriptor* charDescriptor);

  /// @brief Method IsEditPosition, addr 0x1afed70, size 0xc0, virtual false, abstract: false, final false
  inline bool IsEditPosition(int32_t position);

  /// @brief Method IsLiteralPosition, addr 0x1b004b0, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsLiteralPosition(::System::ComponentModel::__MaskedTextProvider__CharDescriptor* charDescriptor);

  /// @brief Method IsPrintableChar, addr 0x1afd6bc, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsPrintableChar(char16_t c);

  /// @brief Method IsValidInputChar, addr 0x1b004dc, size 0x54, virtual false, abstract: false, final false
  static inline bool IsValidInputChar(char16_t c);

  /// @brief Method IsValidMaskChar, addr 0x1b00530, size 0x54, virtual false, abstract: false, final false
  static inline bool IsValidMaskChar(char16_t c);

  /// @brief Method IsValidPasswordChar, addr 0x1afeb6c, size 0x68, virtual false, abstract: false, final false
  static inline bool IsValidPasswordChar(char16_t c);

  static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW mask);

  static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture);

  static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, bool allowPromptAsInput, char16_t promptChar,
                                                                       char16_t passwordChar, bool restrictToAscii);

  static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, char16_t passwordChar, bool allowPromptAsInput);

  static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, bool restrictToAscii);

  static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW mask, char16_t passwordChar, bool allowPromptAsInput);

  static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW mask, bool restrictToAscii);

  /// @brief Method Remove, addr 0x1b00584, size 0x2c, virtual false, abstract: false, final false
  inline bool Remove();

  /// @brief Method Remove, addr 0x1b005b0, size 0x60, virtual false, abstract: false, final false
  inline bool Remove(ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method RemoveAt, addr 0x1b00610, size 0x24, virtual false, abstract: false, final false
  inline bool RemoveAt(int32_t position);

  /// @brief Method RemoveAt, addr 0x1b00634, size 0x20, virtual false, abstract: false, final false
  inline bool RemoveAt(int32_t startPosition, int32_t endPosition);

  /// @brief Method RemoveAt, addr 0x1b00654, size 0x98, virtual false, abstract: false, final false
  inline bool RemoveAt(int32_t startPosition, int32_t endPosition, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method RemoveAtInt, addr 0x1b006ec, size 0x2d0, virtual false, abstract: false, final false
  inline bool RemoveAtInt(int32_t startPosition, int32_t endPosition, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint, bool testOnly);

  /// @brief Method Replace, addr 0x1b00f60, size 0x20, virtual false, abstract: false, final false
  inline bool Replace(::StringW input, int32_t position);

  /// @brief Method Replace, addr 0x1b00f80, size 0x100, virtual false, abstract: false, final false
  inline bool Replace(::StringW input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method Replace, addr 0x1b00c6c, size 0x2f4, virtual false, abstract: false, final false
  inline bool Replace(::StringW input, int32_t startPosition, int32_t endPosition, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method Replace, addr 0x1afe2c4, size 0x20, virtual false, abstract: false, final false
  inline bool Replace(char16_t input, int32_t position);

  /// @brief Method Replace, addr 0x1b00a48, size 0xcc, virtual false, abstract: false, final false
  inline bool Replace(char16_t input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method Replace, addr 0x1b00b8c, size 0xe0, virtual false, abstract: false, final false
  inline bool Replace(char16_t input, int32_t startPosition, int32_t endPosition, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method ResetChar, addr 0x1aff23c, size 0xbc, virtual false, abstract: false, final false
  inline void ResetChar(int32_t testPosition);

  /// @brief Method ResetString, addr 0x1b009bc, size 0x8c, virtual false, abstract: false, final false
  inline void ResetString(int32_t startPosition, int32_t endPosition);

  /// @brief Method Set, addr 0x1b01080, size 0x20, virtual false, abstract: false, final false
  inline bool Set(::StringW input);

  /// @brief Method Set, addr 0x1b010a0, size 0xf8, virtual false, abstract: false, final false
  inline bool Set(::StringW input, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method SetChar, addr 0x1b001c8, size 0x78, virtual false, abstract: false, final false
  inline void SetChar(char16_t input, int32_t position);

  /// @brief Method SetChar, addr 0x1b01198, size 0x1a8, virtual false, abstract: false, final false
  inline void SetChar(char16_t input, int32_t position, ::System::ComponentModel::__MaskedTextProvider__CharDescriptor* charDescriptor);

  /// @brief Method SetString, addr 0x1b00240, size 0xa0, virtual false, abstract: false, final false
  inline void SetString(::StringW input, int32_t testPosition);

  /// @brief Method TestChar, addr 0x1affd38, size 0x490, virtual false, abstract: false, final false
  inline bool TestChar(char16_t input, int32_t position, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method TestEscapeChar, addr 0x1b00b14, size 0x78, virtual false, abstract: false, final false
  inline bool TestEscapeChar(char16_t input, int32_t position);

  /// @brief Method TestEscapeChar, addr 0x1b01340, size 0xf8, virtual false, abstract: false, final false
  inline bool TestEscapeChar(char16_t input, int32_t position, ::System::ComponentModel::__MaskedTextProvider__CharDescriptor* charDex);

  /// @brief Method TestSetChar, addr 0x1aff03c, size 0x60, virtual false, abstract: false, final false
  inline bool TestSetChar(char16_t input, int32_t position, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method TestSetString, addr 0x1aff178, size 0x44, virtual false, abstract: false, final false
  inline bool TestSetString(::StringW input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method TestString, addr 0x1affbd4, size 0x164, virtual false, abstract: false, final false
  inline bool TestString(::StringW input, int32_t position, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  /// @brief Method ToDisplayString, addr 0x1b01438, size 0x17c, virtual false, abstract: false, final false
  inline ::StringW ToDisplayString();

  /// @brief Method ToString, addr 0x1b015b4, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x1b01904, size 0x68, virtual false, abstract: false, final false
  inline ::StringW ToString(bool ignorePasswordChar);

  /// @brief Method ToString, addr 0x1b01610, size 0x2f4, virtual false, abstract: false, final false
  inline ::StringW ToString(bool ignorePasswordChar, bool includePrompt, bool includeLiterals, int32_t startPosition, int32_t length);

  /// @brief Method ToString, addr 0x1b019bc, size 0x54, virtual false, abstract: false, final false
  inline ::StringW ToString(bool ignorePasswordChar, int32_t startPosition, int32_t length);

  /// @brief Method ToString, addr 0x1b01a10, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW ToString(bool includePrompt, bool includeLiterals);

  /// @brief Method ToString, addr 0x1b01a5c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW ToString(bool includePrompt, bool includeLiterals, int32_t startPosition, int32_t length);

  /// @brief Method ToString, addr 0x1b0196c, size 0x50, virtual false, abstract: false, final false
  inline ::StringW ToString(int32_t startPosition, int32_t length);

  /// @brief Method VerifyChar, addr 0x1b01a78, size 0x80, virtual false, abstract: false, final false
  inline bool VerifyChar(char16_t input, int32_t position, ByRef<::System::ComponentModel::MaskedTextResultHint> hint);

  /// @brief Method VerifyEscapeChar, addr 0x1b01af8, size 0x5c, virtual false, abstract: false, final false
  inline bool VerifyEscapeChar(char16_t input, int32_t position);

  /// @brief Method VerifyString, addr 0x1b01b54, size 0x40, virtual false, abstract: false, final false
  inline bool VerifyString(::StringW input);

  /// @brief Method VerifyString, addr 0x1b01b94, size 0x30, virtual false, abstract: false, final false
  inline bool VerifyString(::StringW input, ByRef<int32_t> testPosition, ByRef<::System::ComponentModel::MaskedTextResultHint> resultHint);

  constexpr int32_t const& __cordl_internal_get__AssignedEditPositionCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__AssignedEditPositionCount_k__BackingField();

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__Culture_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __cordl_internal_get__Culture_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Mask_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Mask_k__BackingField();

  constexpr ::System::Collections::Specialized::BitVector32 const& __cordl_internal_get__flagState() const;

  constexpr ::System::Collections::Specialized::BitVector32& __cordl_internal_get__flagState();

  constexpr int32_t const& __cordl_internal_get__optionalEditChars() const;

  constexpr int32_t& __cordl_internal_get__optionalEditChars();

  constexpr char16_t const& __cordl_internal_get__passwordChar() const;

  constexpr char16_t& __cordl_internal_get__passwordChar();

  constexpr char16_t const& __cordl_internal_get__promptChar() const;

  constexpr char16_t& __cordl_internal_get__promptChar();

  constexpr int32_t const& __cordl_internal_get__requiredCharCount() const;

  constexpr int32_t& __cordl_internal_get__requiredCharCount();

  constexpr int32_t const& __cordl_internal_get__requiredEditChars() const;

  constexpr int32_t& __cordl_internal_get__requiredEditChars();

  constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>*& __cordl_internal_get__stringDescriptor();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>*> const&
  __cordl_internal_get__stringDescriptor() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__testString();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__testString() const;

  constexpr void __cordl_internal_set__AssignedEditPositionCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Culture_k__BackingField(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__Mask_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__flagState(::System::Collections::Specialized::BitVector32 value);

  constexpr void __cordl_internal_set__optionalEditChars(int32_t value);

  constexpr void __cordl_internal_set__passwordChar(char16_t value);

  constexpr void __cordl_internal_set__promptChar(char16_t value);

  constexpr void __cordl_internal_set__requiredCharCount(int32_t value);

  constexpr void __cordl_internal_set__requiredEditChars(int32_t value);

  constexpr void __cordl_internal_set__stringDescriptor(::System::Collections::Generic::List_1<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>* value);

  constexpr void __cordl_internal_set__testString(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x1afd260, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW mask);

  /// @brief Method .ctor, addr 0x1afd668, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW mask, ::System::Globalization::CultureInfo* culture);

  /// @brief Method .ctor, addr 0x1afd278, size 0x3d8, virtual false, abstract: false, final false
  inline void _ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, bool allowPromptAsInput, char16_t promptChar, char16_t passwordChar, bool restrictToAscii);

  /// @brief Method .ctor, addr 0x1afd6a8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, char16_t passwordChar, bool allowPromptAsInput);

  /// @brief Method .ctor, addr 0x1afd67c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW mask, ::System::Globalization::CultureInfo* culture, bool restrictToAscii);

  /// @brief Method .ctor, addr 0x1afd690, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW mask, char16_t passwordChar, bool allowPromptAsInput);

  /// @brief Method .ctor, addr 0x1afd650, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW mask, bool restrictToAscii);

  static inline int32_t getStaticF_s_ALLOW_PROMPT_AS_INPUT();

  static inline int32_t getStaticF_s_ASCII_ONLY();

  static inline int32_t getStaticF_s_INCLUDE_LITERALS();

  static inline int32_t getStaticF_s_INCLUDE_PROMPT();

  static inline int32_t getStaticF_s_RESET_ON_LITERALS();

  static inline int32_t getStaticF_s_RESET_ON_PROMPT();

  static inline int32_t getStaticF_s_SKIP_SPACE();

  static inline ::System::Type* getStaticF_s_maskTextProviderType();

  /// @brief Method get_AllowPromptAsInput, addr 0x1afdbd8, size 0x68, virtual false, abstract: false, final false
  inline bool get_AllowPromptAsInput();

  /// @brief Method get_AsciiOnly, addr 0x1afe0f4, size 0x68, virtual false, abstract: false, final false
  inline bool get_AsciiOnly();

  /// @brief Method get_AssignedEditPositionCount, addr 0x1afdc40, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_AssignedEditPositionCount();

  /// @brief Method get_AvailableEditPositionCount, addr 0x1afdc50, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_AvailableEditPositionCount();

  /// @brief Method get_Culture, addr 0x1afe5dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method get_DefaultPasswordChar, addr 0x1afe5e4, size 0x8, virtual false, abstract: false, final false
  static inline char16_t get_DefaultPasswordChar();

  /// @brief Method get_EditPositionCount, addr 0x1afdc64, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_EditPositionCount();

  /// @brief Method get_EditPositions, addr 0x1afe5ec, size 0x2c8, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* get_EditPositions();

  /// @brief Method get_IncludeLiterals, addr 0x1afe41c, size 0x68, virtual false, abstract: false, final false
  inline bool get_IncludeLiterals();

  /// @brief Method get_IncludePrompt, addr 0x1afe4fc, size 0x68, virtual false, abstract: false, final false
  inline bool get_IncludePrompt();

  /// @brief Method get_InvalidIndex, addr 0x1afe940, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_InvalidIndex();

  /// @brief Method get_IsPassword, addr 0x1afe8b4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsPassword();

  /// @brief Method get_Item, addr 0x1afee30, size 0xbc, virtual false, abstract: false, final false
  inline char16_t get_Item(int32_t index);

  /// @brief Method get_LastAssignedPosition, addr 0x1afe948, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_LastAssignedPosition();

  /// @brief Method get_Length, addr 0x1afea10, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_Mask, addr 0x1afea2c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Mask();

  /// @brief Method get_MaskCompleted, addr 0x1afea34, size 0x10, virtual false, abstract: false, final false
  inline bool get_MaskCompleted();

  /// @brief Method get_MaskFull, addr 0x1afea44, size 0x18, virtual false, abstract: false, final false
  inline bool get_MaskFull();

  /// @brief Method get_PasswordChar, addr 0x1afea5c, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_PasswordChar();

  /// @brief Method get_PromptChar, addr 0x1afebd4, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_PromptChar();

  /// @brief Method get_ResetOnPrompt, addr 0x1afe2e4, size 0x68, virtual false, abstract: false, final false
  inline bool get_ResetOnPrompt();

  /// @brief Method get_ResetOnSpace, addr 0x1afe34c, size 0x68, virtual false, abstract: false, final false
  inline bool get_ResetOnSpace();

  /// @brief Method get_SkipLiterals, addr 0x1afe3b4, size 0x68, virtual false, abstract: false, final false
  inline bool get_SkipLiterals();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  static inline void setStaticF_s_ALLOW_PROMPT_AS_INPUT(int32_t value);

  static inline void setStaticF_s_ASCII_ONLY(int32_t value);

  static inline void setStaticF_s_INCLUDE_LITERALS(int32_t value);

  static inline void setStaticF_s_INCLUDE_PROMPT(int32_t value);

  static inline void setStaticF_s_RESET_ON_LITERALS(int32_t value);

  static inline void setStaticF_s_RESET_ON_PROMPT(int32_t value);

  static inline void setStaticF_s_SKIP_SPACE(int32_t value);

  static inline void setStaticF_s_maskTextProviderType(::System::Type* value);

  /// @brief Method set_AssignedEditPositionCount, addr 0x1afdc48, size 0x8, virtual false, abstract: false, final false
  inline void set_AssignedEditPositionCount(int32_t value);

  /// @brief Method set_IncludeLiterals, addr 0x1afe484, size 0x78, virtual false, abstract: false, final false
  inline void set_IncludeLiterals(bool value);

  /// @brief Method set_IncludePrompt, addr 0x1afe564, size 0x78, virtual false, abstract: false, final false
  inline void set_IncludePrompt(bool value);

  /// @brief Method set_IsPassword, addr 0x1afe8c4, size 0x7c, virtual false, abstract: false, final false
  inline void set_IsPassword(bool value);

  /// @brief Method set_PasswordChar, addr 0x1afea64, size 0x108, virtual false, abstract: false, final false
  inline void set_PasswordChar(char16_t value);

  /// @brief Method set_PromptChar, addr 0x1afebdc, size 0x194, virtual false, abstract: false, final false
  inline void set_PromptChar(char16_t value);

  /// @brief Method set_ResetOnPrompt, addr 0x1afe15c, size 0x78, virtual false, abstract: false, final false
  inline void set_ResetOnPrompt(bool value);

  /// @brief Method set_ResetOnSpace, addr 0x1afe1d4, size 0x78, virtual false, abstract: false, final false
  inline void set_ResetOnSpace(bool value);

  /// @brief Method set_SkipLiterals, addr 0x1afe24c, size 0x78, virtual false, abstract: false, final false
  inline void set_SkipLiterals(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskedTextProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaskedTextProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaskedTextProvider(MaskedTextProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaskedTextProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaskedTextProvider(MaskedTextProvider const&) = delete;

  /// @brief Field _flagState, offset: 0x10, size: 0x4, def value: None
  ::System::Collections::Specialized::BitVector32 ____flagState;

  /// @brief Field _testString, offset: 0x18, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____testString;

  /// @brief Field _requiredCharCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____requiredCharCount;

  /// @brief Field _requiredEditChars, offset: 0x24, size: 0x4, def value: None
  int32_t ____requiredEditChars;

  /// @brief Field _optionalEditChars, offset: 0x28, size: 0x4, def value: None
  int32_t ____optionalEditChars;

  /// @brief Field _passwordChar, offset: 0x2c, size: 0x2, def value: None
  char16_t ____passwordChar;

  /// @brief Field _promptChar, offset: 0x2e, size: 0x2, def value: None
  char16_t ____promptChar;

  /// @brief Field _stringDescriptor, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ComponentModel::__MaskedTextProvider__CharDescriptor*>* ____stringDescriptor;

  /// @brief Field <AssignedEditPositionCount>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____AssignedEditPositionCount_k__BackingField;

  /// @brief Field <Culture>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____Culture_k__BackingField;

  /// @brief Field <Mask>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____Mask_k__BackingField;

  /// @brief Field BACKWARD offset 0xffffffff size 0x1
  static constexpr bool BACKWARD{ false };

  /// @brief Field DEFAULT_ALLOW_PROMPT offset 0xffffffff size 0x1
  static constexpr bool DEFAULT_ALLOW_PROMPT{ true };

  /// @brief Field DEFAULT_PROMPT_CHAR offset 0xffffffff size 0x2
  static constexpr char16_t DEFAULT_PROMPT_CHAR{ u'_' };

  /// @brief Field EDIT_ANY offset 0xffffffff size 0x1
  static constexpr uint8_t EDIT_ANY{ static_cast<uint8_t>(0x0u) };

  /// @brief Field EDIT_ASSIGNED offset 0xffffffff size 0x1
  static constexpr uint8_t EDIT_ASSIGNED{ static_cast<uint8_t>(0x2u) };

  /// @brief Field EDIT_UNASSIGNED offset 0xffffffff size 0x1
  static constexpr uint8_t EDIT_UNASSIGNED{ static_cast<uint8_t>(0x1u) };

  /// @brief Field FORWARD offset 0xffffffff size 0x1
  static constexpr bool FORWARD{ true };

  /// @brief Field INVALID_INDEX offset 0xffffffff size 0x4
  static constexpr int32_t INVALID_INDEX{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field NULL_PASSWORD_CHAR offset 0xffffffff size 0x2
  static constexpr char16_t NULL_PASSWORD_CHAR{ u'\u{0}' };

  /// @brief Field SPACE_CHAR offset 0xffffffff size 0x2
  static constexpr char16_t SPACE_CHAR{ u' ' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::MaskedTextProvider, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____flagState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____testString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____requiredCharCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____requiredEditChars) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____optionalEditChars) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____passwordChar) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____promptChar) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____stringDescriptor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____AssignedEditPositionCount_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____Culture_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____Mask_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__MaskedTextProvider__CaseConversion, "System.ComponentModel", "MaskedTextProvider/CaseConversion");
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__MaskedTextProvider__CharType, "System.ComponentModel", "MaskedTextProvider/CharType");
NEED_NO_BOX(::System::ComponentModel::MaskedTextProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MaskedTextProvider*, "System.ComponentModel", "MaskedTextProvider");
NEED_NO_BOX(::System::ComponentModel::__MaskedTextProvider__CharDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__MaskedTextProvider__CharDescriptor*, "System.ComponentModel", "MaskedTextProvider/CharDescriptor");
