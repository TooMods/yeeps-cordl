#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DoublePoint)
namespace UnityEngine::Rendering::Universal {
struct IntPoint;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DoublePoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DoublePoint);
// Type: UnityEngine.Rendering.Universal::DoublePoint
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::DoublePoint
struct CORDL_TYPE DoublePoint {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x1e21630, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DoublePoint dp);

  /// @brief Method .ctor, addr 0x1e21638, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::IntPoint ip);

  /// @brief Method .ctor, addr 0x1e21628, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(double_t x, double_t y);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DoublePoint();

  // Ctor Parameters [CppParam { name: "X", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "Y", ty: "double_t", modifiers: "", def_value: None }]
  constexpr DoublePoint(double_t X, double_t Y) noexcept;

  /// @brief Field X, offset: 0x0, size: 0x8, def value: None
  double_t X;

  /// @brief Field Y, offset: 0x8, size: 0x8, def value: None
  double_t Y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DoublePoint, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DoublePoint, X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DoublePoint, Y) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DoublePoint, "UnityEngine.Rendering.Universal", "DoublePoint");
