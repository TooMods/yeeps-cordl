#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortingCriteria)
// Forward declare root types
namespace UnityEngine::Rendering {
struct SortingCriteria;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SortingCriteria);
// Type: UnityEngine.Rendering::SortingCriteria
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::SortingCriteria
struct CORDL_TYPE SortingCriteria {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SortingCriteria_Unwrapped
  enum struct __SortingCriteria_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_SortingLayer = static_cast<int32_t>(0x1),
    __E_RenderQueue = static_cast<int32_t>(0x2),
    __E_BackToFront = static_cast<int32_t>(0x4),
    __E_QuantizedFrontToBack = static_cast<int32_t>(0x8),
    __E_OptimizeStateChanges = static_cast<int32_t>(0x10),
    __E_CanvasOrder = static_cast<int32_t>(0x20),
    __E_RendererPriority = static_cast<int32_t>(0x40),
    __E_CommonOpaque = static_cast<int32_t>(0x3b),
    __E_CommonTransparent = static_cast<int32_t>(0x17),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SortingCriteria_Unwrapped() const noexcept {
    return static_cast<__SortingCriteria_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortingCriteria();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SortingCriteria(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BackToFront value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::SortingCriteria const BackToFront;

  /// @brief Field CanvasOrder value: static_cast<int32_t>(0x20)
  static ::UnityEngine::Rendering::SortingCriteria const CanvasOrder;

  /// @brief Field CommonOpaque value: static_cast<int32_t>(0x3b)
  static ::UnityEngine::Rendering::SortingCriteria const CommonOpaque;

  /// @brief Field CommonTransparent value: static_cast<int32_t>(0x17)
  static ::UnityEngine::Rendering::SortingCriteria const CommonTransparent;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::SortingCriteria const None;

  /// @brief Field OptimizeStateChanges value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Rendering::SortingCriteria const OptimizeStateChanges;

  /// @brief Field QuantizedFrontToBack value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::SortingCriteria const QuantizedFrontToBack;

  /// @brief Field RenderQueue value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::SortingCriteria const RenderQueue;

  /// @brief Field RendererPriority value: static_cast<int32_t>(0x40)
  static ::UnityEngine::Rendering::SortingCriteria const RendererPriority;

  /// @brief Field SortingLayer value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::SortingCriteria const SortingLayer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SortingCriteria, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SortingCriteria, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SortingCriteria, "UnityEngine.Rendering", "SortingCriteria");
