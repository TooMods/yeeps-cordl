#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomColorType)
// Forward declare root types
namespace GlobalNamespace {
struct RandomColorType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RandomColorType);
// Type: ::RandomColorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RandomColorType
struct CORDL_TYPE RandomColorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RandomColorType_Unwrapped
  enum struct __RandomColorType_Unwrapped : int32_t {
    __E_none = static_cast<int32_t>(0x0),
    __E_groundBlock = static_cast<int32_t>(0x1),
    __E_structural = static_cast<int32_t>(0x2),
    __E_stuffing = static_cast<int32_t>(0x3),
    __E_ground = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RandomColorType_Unwrapped() const noexcept {
    return static_cast<__RandomColorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomColorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RandomColorType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ground value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::RandomColorType const ground;

  /// @brief Field groundBlock value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::RandomColorType const groundBlock;

  /// @brief Field none value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::RandomColorType const none;

  /// @brief Field structural value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::RandomColorType const structural;

  /// @brief Field stuffing value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::RandomColorType const stuffing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomColorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomColorType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomColorType, "", "RandomColorType");
