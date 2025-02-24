#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int3x3)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool3x3;
}
namespace Unity::Mathematics {
struct double3x3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct uint3x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int3x3);
// Type: Unity.Mathematics::int3x3
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::int3x3
struct CORDL_TYPE int3x3 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::int3 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x24
  static __declspec(property(get = getStaticF_identity, put = setStaticF_identity))::Unity::Mathematics::int3x3 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x24
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::int3x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int3x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x26c5a30, size 0xf8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x26c5994, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int3x3 rhs);

  /// @brief Method GetHashCode, addr 0x26c5b28, size 0xc4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x26c5bec, size 0x2ec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x26c5ed8, size 0x2d4, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x26c3b94, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2);

  /// @brief Method .ctor, addr 0x26c3bb0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22);

  /// @brief Method .ctor, addr 0x26c3c20, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x3 v);

  /// @brief Method .ctor, addr 0x26c3e14, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x3 v);

  /// @brief Method .ctor, addr 0x26c3d14, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x3 v);

  /// @brief Method .ctor, addr 0x26c3ca8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x3 v);

  /// @brief Method .ctor, addr 0x26c3bf4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x26c3ddc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x26c3cdc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x26c3bd0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x26c3c84, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int3x3 getStaticF_identity();

  static inline ::Unity::Mathematics::int3x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x26c5988, size 0xc, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::int3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int3x3>* i___System__IEquatable_1___Unity__Mathematics__int3x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x26c4334, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Addition(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Addition, addr 0x26c43c8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Addition(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x26c4428, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Addition(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x26c561c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_BitwiseAnd(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x26c5680, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_BitwiseAnd(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x26c56e0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x26c5740, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_BitwiseOr(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x26c57a4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_BitwiseOr(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x26c5804, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Decrement, addr 0x26c493c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Decrement(::Unity::Mathematics::int3x3 val);

  /// @brief Method op_Division, addr 0x26c45dc, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Division(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Division, addr 0x26c4650, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Division(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x26c46b0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Division(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Equality, addr 0x26c5240, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Equality, addr 0x26c52e4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x26c5374, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x26c5864, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_ExclusiveOr(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x26c58c8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_ExclusiveOr(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x26c5928, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Explicit, addr 0x26c3f2c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method op_Explicit, addr 0x26c411c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method op_Explicit, addr 0x26c4020, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method op_Explicit, addr 0x26c3fb4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method op_Explicit, addr 0x26c3f00, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(bool v);

  /// @brief Method op_Explicit, addr 0x26c40e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(double_t v);

  /// @brief Method op_Explicit, addr 0x26c3fe8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(float_t v);

  /// @brief Method op_Explicit, addr 0x26c3f90, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Explicit___Unity__Mathematics__int3x3(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x26c4d58, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x26c4dfc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x26c4e8c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x26c4f20, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x26c4fc4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x26c5054, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Implicit, addr 0x26c3edc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Implicit___Unity__Mathematics__int3x3(int32_t v);

  /// @brief Method op_Increment, addr 0x26c48b0, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Increment(::Unity::Mathematics::int3x3 val);

  /// @brief Method op_Inequality, addr 0x26c5408, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Inequality, addr 0x26c54ac, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x26c553c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_LeftShift, addr 0x26c5180, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_LeftShift(::Unity::Mathematics::int3x3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x26c49c8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_LessThan, addr 0x26c4a6c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x26c4afc, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x26c4b90, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x26c4c34, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x26c4cc4, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Modulus, addr 0x26c4710, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Modulus(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Modulus, addr 0x26c47a8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Modulus(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x26c482c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Modulus(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Multiply, addr 0x26c41e0, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Multiply(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Multiply, addr 0x26c4274, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Multiply(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x26c42d4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Multiply(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_OnesComplement, addr 0x26c55d0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_OnesComplement(::Unity::Mathematics::int3x3 val);

  /// @brief Method op_RightShift, addr 0x26c51e0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_RightShift(::Unity::Mathematics::int3x3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x26c4488, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Subtraction(::Unity::Mathematics::int3x3 lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x26c451c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Subtraction(::Unity::Mathematics::int3x3 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x26c457c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int3x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x26c50e8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_UnaryNegation(::Unity::Mathematics::int3x3 val);

  /// @brief Method op_UnaryPlus, addr 0x26c514c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 op_UnaryPlus(::Unity::Mathematics::int3x3 val);

  static inline void setStaticF_identity(::Unity::Mathematics::int3x3 value);

  static inline void setStaticF_zero(::Unity::Mathematics::int3x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int3x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None
  // }, CppParam { name: "c2", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }]
  constexpr int3x3(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c1;

  /// @brief Field c2, offset: 0x18, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int3x3, 0x24>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x3, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x3, c2) == 0x18, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3x3, "Unity.Mathematics", "int3x3");
