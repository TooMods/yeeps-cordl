#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NewExpression)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Reflection {
class ConstructorInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class NewExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::NewExpression);
// Type: System.Linq.Expressions::NewExpression
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::NewExpression*
class CORDL_TYPE NewExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Constructor))::System::Reflection::ConstructorInfo* Constructor;

  /// @brief Field <Constructor>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Constructor_k__BackingField,
                      put = __cordl_internal_set__Constructor_k__BackingField))::System::Reflection::ConstructorInfo* _Constructor_k__BackingField;

  /// @brief Field _arguments, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__arguments,
                      put = __cordl_internal_set__arguments))::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _arguments;

  /// @brief Method GetArgument, addr 0x183be4c, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  constexpr ::System::Reflection::ConstructorInfo*& __cordl_internal_get__Constructor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __cordl_internal_get__Constructor_k__BackingField() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& __cordl_internal_get__arguments();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*> const& __cordl_internal_get__arguments() const;

  constexpr void __cordl_internal_set__Constructor_k__BackingField(::System::Reflection::ConstructorInfo* value);

  constexpr void __cordl_internal_set__arguments(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value);

  /// @brief Method get_Constructor, addr 0x183be44, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* get_Constructor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NewExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NewExpression(NewExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NewExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NewExpression(NewExpression const&) = delete;

  /// @brief Field _arguments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* ____arguments;

  /// @brief Field <Constructor>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ____Constructor_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::NewExpression, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::NewExpression, ____arguments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::NewExpression, ____Constructor_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::NewExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::NewExpression*, "System.Linq.Expressions", "NewExpression");
