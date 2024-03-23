#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExplosionType)
// Forward declare root types
namespace GlobalNamespace {
struct ExplosionType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ExplosionType);
// Type: ::ExplosionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ExplosionType
struct CORDL_TYPE ExplosionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExplosionType_Unwrapped
  enum struct __ExplosionType_Unwrapped : int32_t {
    __E_basic = static_cast<int32_t>(0x0),
    __E_impulse = static_cast<int32_t>(0x1),
    __E_freeze = static_cast<int32_t>(0x2),
    __E_smoke = static_cast<int32_t>(0x3),
    __E_teleport = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExplosionType_Unwrapped() const noexcept {
    return static_cast<__ExplosionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExplosionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExplosionType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field basic value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::ExplosionType const basic;

  /// @brief Field freeze value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::ExplosionType const freeze;

  /// @brief Field impulse value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::ExplosionType const impulse;

  /// @brief Field smoke value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::ExplosionType const smoke;

  /// @brief Field teleport value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::ExplosionType const teleport;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExplosionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExplosionType, "", "ExplosionType");
