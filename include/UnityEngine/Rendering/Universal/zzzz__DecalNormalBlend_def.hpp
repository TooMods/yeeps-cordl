#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalNormalBlend)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DecalNormalBlend;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DecalNormalBlend);
// Type: UnityEngine.Rendering.Universal::DecalNormalBlend
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::DecalNormalBlend
struct CORDL_TYPE DecalNormalBlend {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DecalNormalBlend_Unwrapped
  enum struct __DecalNormalBlend_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_High = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DecalNormalBlend_Unwrapped() const noexcept {
    return static_cast<__DecalNormalBlend_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalNormalBlend();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DecalNormalBlend(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field High value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::DecalNormalBlend const High;

  /// @brief Field Low value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::DecalNormalBlend const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::DecalNormalBlend const Medium;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalNormalBlend, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalNormalBlend, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalNormalBlend, "UnityEngine.Rendering.Universal", "DecalNormalBlend");
