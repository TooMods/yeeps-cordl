#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FieldPacking)
// Forward declare root types
namespace UnityEngine::Rendering {
struct FieldPacking;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FieldPacking);
// Type: UnityEngine.Rendering::FieldPacking
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::FieldPacking
struct CORDL_TYPE FieldPacking {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FieldPacking_Unwrapped
  enum struct __FieldPacking_Unwrapped : int32_t {
    __E_NoPacking = static_cast<int32_t>(0x0),
    __E_R11G11B10 = static_cast<int32_t>(0x1),
    __E_PackedFloat = static_cast<int32_t>(0x2),
    __E_PackedUint = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FieldPacking_Unwrapped() const noexcept {
    return static_cast<__FieldPacking_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldPacking();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FieldPacking(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field NoPacking value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::FieldPacking const NoPacking;

  /// @brief Field PackedFloat value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::FieldPacking const PackedFloat;

  /// @brief Field PackedUint value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::FieldPacking const PackedUint;

  /// @brief Field R11G11B10 value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::FieldPacking const R11G11B10;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FieldPacking, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FieldPacking, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FieldPacking, "UnityEngine.Rendering", "FieldPacking");
