#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorValue)
// Forward declare root types
namespace GlobalNamespace {
struct ColorValue;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorValue);
// Type: ::ColorValue
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ColorValue
struct CORDL_TYPE ColorValue {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColorValue_Unwrapped
  enum struct __ColorValue_Unwrapped : int32_t {
    __E_Darkest = static_cast<int32_t>(0xfffffffe),
    __E_Dark = static_cast<int32_t>(0xffffffff),
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Light = static_cast<int32_t>(0x1),
    __E_Lightest = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColorValue_Unwrapped() const noexcept {
    return static_cast<__ColorValue_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorValue();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColorValue(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Dark value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::ColorValue const Dark;

  /// @brief Field Darkest value: static_cast<int32_t>(0xfffffffe)
  static ::GlobalNamespace::ColorValue const Darkest;

  /// @brief Field Light value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::ColorValue const Light;

  /// @brief Field Lightest value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::ColorValue const Lightest;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::ColorValue const Normal;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorValue, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorValue, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorValue, "", "ColorValue");
