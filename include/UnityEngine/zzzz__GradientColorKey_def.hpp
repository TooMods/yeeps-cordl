#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GradientColorKey)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
struct GradientColorKey;
}
// Write type traits
MARK_VAL_T(::UnityEngine::GradientColorKey);
// Type: UnityEngine::GradientColorKey
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::GradientColorKey
struct CORDL_TYPE GradientColorKey {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x284a2bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color col, float_t time);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientColorKey();

  // Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
  constexpr GradientColorKey(::UnityEngine::Color color, float_t time) noexcept;

  /// @brief Field color, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field time, offset: 0x10, size: 0x4, def value: None
  float_t time;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GradientColorKey, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::GradientColorKey, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GradientColorKey, time) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GradientColorKey, "UnityEngine", "GradientColorKey");
