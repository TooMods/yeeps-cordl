#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool4x2)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct bool4x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::bool4x2);
// Type: Unity.Mathematics::bool4x2
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::bool4x2
struct CORDL_TYPE bool4x2 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::bool4 Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool4x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool4x2>*();

  /// @brief Method Equals, addr 0x20c1080, size 0xec, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x20c0ff4, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method GetHashCode, addr 0x20c116c, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x20c1264, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x20c0bcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1);

  /// @brief Method .ctor, addr 0x20c0bd4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31);

  /// @brief Method .ctor, addr 0x20c0c18, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method get_Item, addr 0x20c0fec, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::bool4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool4x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool4x2>* i___System__IEquatable_1___Unity__Mathematics__bool4x2_();

  /// @brief Method op_BitwiseAnd, addr 0x20c0e14, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseAnd(::Unity::Mathematics::bool4x2 lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x20c0e20, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseAnd(::Unity::Mathematics::bool4x2 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x20c0e48, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x20c0e70, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseOr(::Unity::Mathematics::bool4x2 lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x20c0e7c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseOr(::Unity::Mathematics::bool4x2 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x20c0ee0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_Equality, addr 0x20c0c40, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::bool4x2 lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_Equality, addr 0x20c0c4c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::bool4x2 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x20c0cbc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(bool lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x20c0f10, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_ExclusiveOr(::Unity::Mathematics::bool4x2 lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x20c0f1c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_ExclusiveOr(::Unity::Mathematics::bool4x2 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x20c0f84, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_Implicit, addr 0x20c0c2c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Implicit___Unity__Mathematics__bool4x2(bool v);

  /// @brief Method op_Inequality, addr 0x20c0d2c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::bool4x2 lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_Inequality, addr 0x20c0d38, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::bool4x2 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x20c0da0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(bool lhs, ::Unity::Mathematics::bool4x2 rhs);

  /// @brief Method op_LogicalNot, addr 0x20c0e08, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LogicalNot(::Unity::Mathematics::bool4x2 val);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool4x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::bool4", modifiers: "", def_value:
  // None }]
  constexpr bool4x2(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x4, def value: None
  ::Unity::Mathematics::bool4 c0;

  /// @brief Field c1, offset: 0x4, size: 0x4, def value: None
  ::Unity::Mathematics::bool4 c1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool4x2, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool4x2, c1) == 0x4, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool4x2, "Unity.Mathematics", "bool4x2");
