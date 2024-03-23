#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticZone)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticZone;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticZone);
// Type: ::CosmeticZone
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CosmeticZone
struct CORDL_TYPE CosmeticZone {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CosmeticZone_Unwrapped
  enum struct __CosmeticZone_Unwrapped : int32_t {
    __E_head = static_cast<int32_t>(0x0),
    __E_face = static_cast<int32_t>(0x1),
    __E_neck = static_cast<int32_t>(0x2),
    __E_chestUnder = static_cast<int32_t>(0x3),
    __E_chestOver = static_cast<int32_t>(0x4),
    __E_pant = static_cast<int32_t>(0x5),
    __E_sleeveUnder = static_cast<int32_t>(0x6),
    __E_sleeveOver = static_cast<int32_t>(0x7),
    __E_wrist = static_cast<int32_t>(0x8),
    __E_zipper = static_cast<int32_t>(0x9),
    __E_tail = static_cast<int32_t>(0xa),
    __E_lipUpper = static_cast<int32_t>(0xb),
    __E_lipLower = static_cast<int32_t>(0xc),
    __E_mouth = static_cast<int32_t>(0xd),
    __E_frontLegs = static_cast<int32_t>(0xe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CosmeticZone_Unwrapped() const noexcept {
    return static_cast<__CosmeticZone_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticZone();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CosmeticZone(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field chestOver value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::CosmeticZone const chestOver;

  /// @brief Field chestUnder value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::CosmeticZone const chestUnder;

  /// @brief Field face value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::CosmeticZone const face;

  /// @brief Field frontLegs value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::CosmeticZone const frontLegs;

  /// @brief Field head value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::CosmeticZone const head;

  /// @brief Field lipLower value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::CosmeticZone const lipLower;

  /// @brief Field lipUpper value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::CosmeticZone const lipUpper;

  /// @brief Field mouth value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::CosmeticZone const mouth;

  /// @brief Field neck value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::CosmeticZone const neck;

  /// @brief Field pant value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::CosmeticZone const pant;

  /// @brief Field sleeveOver value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::CosmeticZone const sleeveOver;

  /// @brief Field sleeveUnder value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::CosmeticZone const sleeveUnder;

  /// @brief Field tail value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::CosmeticZone const tail;

  /// @brief Field wrist value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::CosmeticZone const wrist;

  /// @brief Field zipper value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::CosmeticZone const zipper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticZone, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticZone, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticZone, "", "CosmeticZone");
