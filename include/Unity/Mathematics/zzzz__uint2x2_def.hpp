#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint2x2)
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
struct bool2x2;
}
namespace Unity::Mathematics {
struct double2x2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint2x2);
// Type: Unity.Mathematics::uint2x2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::uint2x2
struct CORDL_TYPE uint2x2 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::uint2 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_identity, put = setStaticF_identity))::Unity::Mathematics::uint2x2 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::uint2x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint2x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x1a35250, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x1a3520c, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method GetHashCode, addr 0x1a352f8, size 0x60, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x1a35358, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x1a35504, size 0x194, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x1a34710, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1);

  /// @brief Method .ctor, addr 0x1a34718, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11);

  /// @brief Method .ctor, addr 0x1a34754, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x2 v);

  /// @brief Method .ctor, addr 0x1a34814, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x2 v);

  /// @brief Method .ctor, addr 0x1a347a8, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x2 v);

  /// @brief Method .ctor, addr 0x1a34784, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x2 v);

  /// @brief Method .ctor, addr 0x1a34740, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x1a347f8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x1a3478c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x1a34774, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x1a34730, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint2x2 getStaticF_identity();

  static inline ::Unity::Mathematics::uint2x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x1a35204, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::uint2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2x2>* i___System__IEquatable_1___Unity__Mathematics__uint2x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x1a34a08, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Addition(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Addition, addr 0x1a34a34, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Addition(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x1a34a58, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x1a350fc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x1a35108, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x1a3512c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x1a35154, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x1a35160, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x1a35184, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Decrement, addr 0x1a34c40, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Decrement(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_Division, addr 0x1a34af8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Division(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Division, addr 0x1a34b24, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Division(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x1a34b48, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Division(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Equality, addr 0x1a34f90, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Equality, addr 0x1a34fd0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x1a35008, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x1a351ac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x1a351b8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x1a351dc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Explicit, addr 0x1a34888, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method op_Explicit, addr 0x1a34944, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method op_Explicit, addr 0x1a348dc, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method op_Explicit, addr 0x1a348bc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method op_Explicit, addr 0x1a34874, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(bool v);

  /// @brief Method op_Explicit, addr 0x1a34928, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(double_t v);

  /// @brief Method op_Explicit, addr 0x1a348c0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(float_t v);

  /// @brief Method op_Explicit, addr 0x1a348ac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x1a34dc8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x1a34e08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x1a34e40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x1a34e78, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x1a34eb8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x1a34ef0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Implicit, addr 0x1a34864, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Implicit___Unity__Mathematics__uint2x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x1a34c18, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Increment(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_Inequality, addr 0x1a35040, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Inequality, addr 0x1a35080, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x1a350b8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LeftShift, addr 0x1a34f48, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_LeftShift(::Unity::Mathematics::uint2x2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x1a34c68, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LessThan, addr 0x1a34ca8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x1a34ce0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x1a34d18, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x1a34d58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x1a34d90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Modulus, addr 0x1a34b70, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Modulus(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Modulus, addr 0x1a34bac, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Modulus(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x1a34be0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Multiply, addr 0x1a34990, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Multiply(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Multiply, addr 0x1a349bc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Multiply(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x1a349e0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_OnesComplement, addr 0x1a350f0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_OnesComplement(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_RightShift, addr 0x1a34f6c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_RightShift(::Unity::Mathematics::uint2x2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x1a34a80, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Subtraction(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x1a34aac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Subtraction(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x1a34ad0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x1a34f28, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_UnaryNegation(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_UnaryPlus, addr 0x1a34f44, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_UnaryPlus(::Unity::Mathematics::uint2x2 val);

  static inline void setStaticF_identity(::Unity::Mathematics::uint2x2 value);

  static inline void setStaticF_zero(::Unity::Mathematics::uint2x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint2x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value:
  // None }]
  constexpr uint2x2(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint2x2, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x2, c1) == 0x8, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint2x2, "Unity.Mathematics", "uint2x2");
