#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int128)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct Int128;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::Int128);
// Type: UnityEngine.Rendering.Universal::Int128
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::Int128
struct CORDL_TYPE Int128 {
public:
  // Declarations
  /// @brief Method Equals, addr 0x1e21d0c, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1e21d94, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Int128Mul, addr 0x1e21ea4, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::Int128 Int128Mul(int64_t lhs, int64_t rhs);

  /// @brief Method IsNegative, addr 0x1e21c3c, size 0xc, virtual false, abstract: false, final false
  inline bool IsNegative();

  /// @brief Method .ctor, addr 0x1e21c2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t _hi, uint64_t _lo);

  /// @brief Method .ctor, addr 0x1e21c20, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int64_t _lo);

  /// @brief Method .ctor, addr 0x1e21c34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::Int128 val);

  /// @brief Method op_Addition, addr 0x1e21df8, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::Int128 op_Addition(::UnityEngine::Rendering::Universal::Int128 lhs, ::UnityEngine::Rendering::Universal::Int128 rhs);

  /// @brief Method op_Equality, addr 0x1e21c48, size 0xac, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::Universal::Int128 val1, ::UnityEngine::Rendering::Universal::Int128 val2);

  /// @brief Method op_Explicit, addr 0x1e21e44, size 0x60, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::UnityEngine::Rendering::Universal::Int128 val);

  /// @brief Method op_GreaterThan, addr 0x1e21dc8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::Rendering::Universal::Int128 val1, ::UnityEngine::Rendering::Universal::Int128 val2);

  /// @brief Method op_Inequality, addr 0x1e21cf4, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::Universal::Int128 val1, ::UnityEngine::Rendering::Universal::Int128 val2);

  /// @brief Method op_LessThan, addr 0x1e21de0, size 0x18, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::Rendering::Universal::Int128 val1, ::UnityEngine::Rendering::Universal::Int128 val2);

  /// @brief Method op_Subtraction, addr 0x1e21e08, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::Int128 op_Subtraction(::UnityEngine::Rendering::Universal::Int128 lhs, ::UnityEngine::Rendering::Universal::Int128 rhs);

  /// @brief Method op_UnaryNegation, addr 0x1e21e2c, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::Int128 op_UnaryNegation(::UnityEngine::Rendering::Universal::Int128 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Int128();

  // Ctor Parameters [CppParam { name: "hi", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "lo", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr Int128(int64_t hi, uint64_t lo) noexcept;

  /// @brief Field hi, offset: 0x0, size: 0x8, def value: None
  int64_t hi;

  /// @brief Field lo, offset: 0x8, size: 0x8, def value: None
  uint64_t lo;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Int128, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Int128, hi) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Int128, lo) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Int128, "UnityEngine.Rendering.Universal", "Int128");
