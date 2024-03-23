#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntRect)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct IntRect;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::IntRect);
// Type: UnityEngine.Rendering.Universal::IntRect
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::IntRect
struct CORDL_TYPE IntRect {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x1e220e0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::IntRect ir);

  /// @brief Method .ctor, addr 0x1e220d4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int64_t l, int64_t t, int64_t r, int64_t b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntRect();

  // Ctor Parameters [CppParam { name: "left", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "top", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "right", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "bottom", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr IntRect(int64_t left, int64_t top, int64_t right, int64_t bottom) noexcept;

  /// @brief Field left, offset: 0x0, size: 0x8, def value: None
  int64_t left;

  /// @brief Field top, offset: 0x8, size: 0x8, def value: None
  int64_t top;

  /// @brief Field right, offset: 0x10, size: 0x8, def value: None
  int64_t right;

  /// @brief Field bottom, offset: 0x18, size: 0x8, def value: None
  int64_t bottom;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::IntRect, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntRect, left) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntRect, top) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntRect, right) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntRect, bottom) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::IntRect, "UnityEngine.Rendering.Universal", "IntRect");
