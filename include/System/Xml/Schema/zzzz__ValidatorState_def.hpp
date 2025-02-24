#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValidatorState)
// Forward declare root types
namespace System::Xml::Schema {
struct ValidatorState;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::ValidatorState);
// Type: System.Xml.Schema::ValidatorState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::System.Xml.Schema::ValidatorState
struct CORDL_TYPE ValidatorState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ValidatorState_Unwrapped
  enum struct __ValidatorState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Start = static_cast<int32_t>(0x1),
    __E_TopLevelAttribute = static_cast<int32_t>(0x2),
    __E_TopLevelTextOrWS = static_cast<int32_t>(0x3),
    __E_Element = static_cast<int32_t>(0x4),
    __E_Attribute = static_cast<int32_t>(0x5),
    __E_EndOfAttributes = static_cast<int32_t>(0x6),
    __E_Text = static_cast<int32_t>(0x7),
    __E_Whitespace = static_cast<int32_t>(0x8),
    __E_EndElement = static_cast<int32_t>(0x9),
    __E_SkipToEndElement = static_cast<int32_t>(0xa),
    __E_Finish = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ValidatorState_Unwrapped() const noexcept {
    return static_cast<__ValidatorState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidatorState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ValidatorState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Attribute value: static_cast<int32_t>(0x5)
  static ::System::Xml::Schema::ValidatorState const Attribute;

  /// @brief Field Element value: static_cast<int32_t>(0x4)
  static ::System::Xml::Schema::ValidatorState const Element;

  /// @brief Field EndElement value: static_cast<int32_t>(0x9)
  static ::System::Xml::Schema::ValidatorState const EndElement;

  /// @brief Field EndOfAttributes value: static_cast<int32_t>(0x6)
  static ::System::Xml::Schema::ValidatorState const EndOfAttributes;

  /// @brief Field Finish value: static_cast<int32_t>(0xb)
  static ::System::Xml::Schema::ValidatorState const Finish;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::ValidatorState const None;

  /// @brief Field SkipToEndElement value: static_cast<int32_t>(0xa)
  static ::System::Xml::Schema::ValidatorState const SkipToEndElement;

  /// @brief Field Start value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::ValidatorState const Start;

  /// @brief Field Text value: static_cast<int32_t>(0x7)
  static ::System::Xml::Schema::ValidatorState const Text;

  /// @brief Field TopLevelAttribute value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::ValidatorState const TopLevelAttribute;

  /// @brief Field TopLevelTextOrWS value: static_cast<int32_t>(0x3)
  static ::System::Xml::Schema::ValidatorState const TopLevelTextOrWS;

  /// @brief Field Whitespace value: static_cast<int32_t>(0x8)
  static ::System::Xml::Schema::ValidatorState const Whitespace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ValidatorState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidatorState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ValidatorState, "System.Xml.Schema", "ValidatorState");
