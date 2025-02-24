#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__MemberBinding_def.hpp"
CORDL_MODULE_EXPORT(MemberAssignment)
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MemberAssignment;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MemberAssignment);
// Type: System.Linq.Expressions::MemberAssignment
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::MemberAssignment*
class CORDL_TYPE MemberAssignment : public ::System::Linq::Expressions::MemberBinding {
public:
  // Declarations
  __declspec(property(get = get_Expression))::System::Linq::Expressions::Expression* Expression;

  /// @brief Field _expression, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__expression, put = __cordl_internal_set__expression))::System::Linq::Expressions::Expression* _expression;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__expression();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__expression() const;

  constexpr void __cordl_internal_set__expression(::System::Linq::Expressions::Expression* value);

  /// @brief Method get_Expression, addr 0x1839d7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Expression();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberAssignment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemberAssignment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberAssignment(MemberAssignment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberAssignment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberAssignment(MemberAssignment const&) = delete;

  /// @brief Field _expression, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____expression;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MemberAssignment, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::MemberAssignment, ____expression) == 0x20, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MemberAssignment);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MemberAssignment*, "System.Linq.Expressions", "MemberAssignment");
