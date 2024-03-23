#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DistanceMetric)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DistanceMetric;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DistanceMetric);
// Type: UnityEngine.Rendering::DistanceMetric
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::DistanceMetric
struct CORDL_TYPE DistanceMetric {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DistanceMetric_Unwrapped
  enum struct __DistanceMetric_Unwrapped : int32_t {
    __E_Perspective = static_cast<int32_t>(0x0),
    __E_Orthographic = static_cast<int32_t>(0x1),
    __E_CustomAxis = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DistanceMetric_Unwrapped() const noexcept {
    return static_cast<__DistanceMetric_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DistanceMetric();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DistanceMetric(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CustomAxis value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::DistanceMetric const CustomAxis;

  /// @brief Field Orthographic value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::DistanceMetric const Orthographic;

  /// @brief Field Perspective value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::DistanceMetric const Perspective;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DistanceMetric, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DistanceMetric, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DistanceMetric, "UnityEngine.Rendering", "DistanceMetric");
