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
CORDL_MODULE_EXPORT(int3x4)
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
struct bool3x4;
}
namespace Unity::Mathematics {
struct double3x4;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct uint3x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int3x4);
// Type: Unity.Mathematics::int3x4
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::int3x4
struct CORDL_TYPE int3x4 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::int3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::int3x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int3x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x26c8984, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x26c88b8, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int3x4 rhs);

  /// @brief Method GetHashCode, addr 0x26c8aac, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x26c8bac, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x26c8f58, size 0x394, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x26c6204, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3);

  /// @brief Method .ctor, addr 0x26c622c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22, int32_t m23);

  /// @brief Method .ctor, addr 0x26c62bc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x4 v);

  /// @brief Method .ctor, addr 0x26c6530, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x4 v);

  /// @brief Method .ctor, addr 0x26c63ec, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x4 v);

  /// @brief Method .ctor, addr 0x26c6368, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x4 v);

  /// @brief Method .ctor, addr 0x26c6288, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x26c64f0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x26c63ac, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x26c625c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x26c633c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int3x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x26c88ac, size 0xc, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::int3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int3x4>* i___System__IEquatable_1___Unity__Mathematics__int3x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x26c6bb8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Addition(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Addition, addr 0x26c6c7c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Addition(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x26c6cf8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Addition(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x26c8438, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x26c84bc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x26c8538, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x26c85b4, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x26c8638, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x26c86b4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Decrement, addr 0x26c7394, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Decrement(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_Division, addr 0x26c6f30, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Division(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Division, addr 0x26c6fc4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Division(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x26c7040, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Division(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Equality, addr 0x26c7f3c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Equality, addr 0x26c8010, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x26c80cc, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x26c8730, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x26c87b4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x26c8830, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Explicit, addr 0x26c6694, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method op_Explicit, addr 0x26c6900, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method op_Explicit, addr 0x26c67c4, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method op_Explicit, addr 0x26c6740, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method op_Explicit, addr 0x26c6660, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(bool v);

  /// @brief Method op_Explicit, addr 0x26c68c0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(double_t v);

  /// @brief Method op_Explicit, addr 0x26c6784, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(float_t v);

  /// @brief Method op_Explicit, addr 0x26c6714, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x26c78e4, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x26c79b8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x26c7a74, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x26c7b30, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x26c7c04, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x26c7cc0, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Implicit, addr 0x26c6634, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Implicit___Unity__Mathematics__int3x4(int32_t v);

  /// @brief Method op_Increment, addr 0x26c72dc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Increment(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_Inequality, addr 0x26c8188, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Inequality, addr 0x26c825c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x26c8318, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LeftShift, addr 0x26c7e44, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_LeftShift(::Unity::Mathematics::int3x4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x26c744c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LessThan, addr 0x26c7520, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x26c75dc, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x26c7698, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x26c776c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x26c7828, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Modulus, addr 0x26c70bc, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Modulus(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Modulus, addr 0x26c7184, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Modulus(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x26c7230, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Modulus(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Multiply, addr 0x26c69fc, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Multiply(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Multiply, addr 0x26c6ac0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Multiply(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x26c6b3c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Multiply(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_OnesComplement, addr 0x26c83d4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_OnesComplement(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_RightShift, addr 0x26c7ec0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_RightShift(::Unity::Mathematics::int3x4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x26c6d74, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Subtraction(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x26c6e38, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Subtraction(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x26c6eb4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x26c7d7c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_UnaryNegation(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_UnaryPlus, addr 0x26c7e00, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_UnaryPlus(::Unity::Mathematics::int3x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int3x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int3x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None
  // }, CppParam { name: "c2", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }]
  constexpr int3x4(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c1;

  /// @brief Field c2, offset: 0x18, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c2;

  /// @brief Field c3, offset: 0x24, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int3x4, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x4, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x4, c2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x4, c3) == 0x24, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3x4, "Unity.Mathematics", "int3x4");
