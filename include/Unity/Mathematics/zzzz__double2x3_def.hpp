#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2x3)
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
struct bool2x3;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct float2x3;
}
namespace Unity::Mathematics {
struct int2x3;
}
namespace Unity::Mathematics {
struct uint2x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double2x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double2x3);
// Type: Unity.Mathematics::double2x3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::double2x3
struct CORDL_TYPE double2x3 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::double2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::double2x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double2x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x20c5804, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x20c5798, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double2x3 rhs);

  /// @brief Method GetHashCode, addr 0x20c58cc, size 0xbc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x20c5988, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x20c5bb4, size 0x214, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x20c4a30, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2);

  /// @brief Method .ctor, addr 0x20c4a40, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12);

  /// @brief Method .ctor, addr 0x20c4a80, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x3 v);

  /// @brief Method .ctor, addr 0x20c4b6c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x3 v);

  /// @brief Method .ctor, addr 0x20c4adc, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x3 v);

  /// @brief Method .ctor, addr 0x20c4b24, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x3 v);

  /// @brief Method .ctor, addr 0x20c4a60, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x20c4a50, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x20c4b58, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x20c4ac8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x20c4b10, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double2x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x20c5790, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::double2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double2x3>* i___System__IEquatable_1___Unity__Mathematics__double2x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x20c4d38, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Addition, addr 0x20c4d60, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x20c4d84, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Addition(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Decrement, addr 0x20c50b8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Decrement(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_Division, addr 0x20c4e18, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Division, addr 0x20c4e40, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x20c4e64, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Division(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Equality, addr 0x20c5568, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Equality, addr 0x20c55cc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x20c5624, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Explicit, addr 0x20c4bc4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Explicit___Unity__Mathematics__double2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method op_Explicit, addr 0x20c4ba4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Explicit___Unity__Mathematics__double2x3(bool v);

  /// @brief Method op_GreaterThan, addr 0x20c530c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x20c5370, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x20c53c8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x20c5420, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x20c5484, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x20c54dc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Implicit, addr 0x20c4cb0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method op_Implicit, addr 0x20c4c20, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method op_Implicit, addr 0x20c4c68, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method op_Implicit, addr 0x20c4b94, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(double_t v);

  /// @brief Method op_Implicit, addr 0x20c4c9c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(float_t v);

  /// @brief Method op_Implicit, addr 0x20c4c0c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x20c4c54, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Implicit___Unity__Mathematics__double2x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x20c508c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Increment(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_Inequality, addr 0x20c567c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Inequality, addr 0x20c56e0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x20c5738, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThan, addr 0x20c50e4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThan, addr 0x20c5148, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x20c51a0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x20c51f8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x20c525c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x20c52b4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Modulus, addr 0x20c4e88, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Modulus, addr 0x20c4f38, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x20c4fe8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Modulus(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Multiply, addr 0x20c4cd0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Multiply, addr 0x20c4cf8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x20c4d18, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Multiply(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x20c4da8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(::Unity::Mathematics::double2x3 lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x20c4dd0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(::Unity::Mathematics::double2x3 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x20c4df4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_Subtraction(double_t lhs, ::Unity::Mathematics::double2x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x20c5534, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_UnaryNegation(::Unity::Mathematics::double2x3 val);

  /// @brief Method op_UnaryPlus, addr 0x20c5554, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 op_UnaryPlus(::Unity::Mathematics::double2x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double2x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double2x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double2", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }]
  constexpr double2x3(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double2x3, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x3, c2) == 0x20, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double2x3, "Unity.Mathematics", "double2x3");
