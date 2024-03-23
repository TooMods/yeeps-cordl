#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntPoint)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct IntPoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::IntPoint);
// Type: UnityEngine.Rendering.Universal::IntPoint
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::IntPoint
struct CORDL_TYPE IntPoint {
public:
  // Declarations
  /// @brief Method Equals, addr 0x1e21fe0, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1e22068, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x1e21f08, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int64_t X, int64_t Y);

  /// @brief Method .ctor, addr 0x1e21f54, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::IntPoint pt);

  /// @brief Method .ctor, addr 0x1e21f1c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(double_t x, double_t y);

  /// @brief Method op_Equality, addr 0x1e21f88, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::Universal::IntPoint a, ::UnityEngine::Rendering::Universal::IntPoint b);

  /// @brief Method op_Inequality, addr 0x1e21fb4, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::Universal::IntPoint a, ::UnityEngine::Rendering::Universal::IntPoint b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntPoint();

  // Ctor Parameters [CppParam { name: "N", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "X", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Y", ty: "int64_t",
  // modifiers: "", def_value: None }, CppParam { name: "D", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "NX", ty: "double_t", modifiers: "", def_value: None }, CppParam { name:
  // "NY", ty: "double_t", modifiers: "", def_value: None }]
  constexpr IntPoint(int64_t N, int64_t X, int64_t Y, int64_t D, double_t NX, double_t NY) noexcept;

  /// @brief Field N, offset: 0x0, size: 0x8, def value: None
  int64_t N;

  /// @brief Field X, offset: 0x8, size: 0x8, def value: None
  int64_t X;

  /// @brief Field Y, offset: 0x10, size: 0x8, def value: None
  int64_t Y;

  /// @brief Field D, offset: 0x18, size: 0x8, def value: None
  int64_t D;

  /// @brief Field NX, offset: 0x20, size: 0x8, def value: None
  double_t NX;

  /// @brief Field NY, offset: 0x28, size: 0x8, def value: None
  double_t NY;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::IntPoint, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntPoint, N) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntPoint, X) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntPoint, Y) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntPoint, D) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntPoint, NX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntPoint, NY) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::IntPoint, "UnityEngine.Rendering.Universal", "IntPoint");
