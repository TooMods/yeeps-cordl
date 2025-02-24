#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NumericConvertInstruction_Unchecked)
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NumericConvertInstruction__Unchecked;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Unchecked);
// Type: ::Unchecked
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NumericConvertInstruction::Unchecked*
class CORDL_TYPE __NumericConvertInstruction__Unchecked : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  /// @brief Method Convert, addr 0x1b5ac0c, size 0x368, virtual true, abstract: false, final false
  inline ::System::Object* Convert(::System::Object* obj);

  /// @brief Method ConvertDouble, addr 0x1b5b634, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Object* ConvertDouble(double_t obj);

  /// @brief Method ConvertInt32, addr 0x1b5af74, size 0x25c, virtual false, abstract: false, final false
  inline ::System::Object* ConvertInt32(int32_t obj);

  /// @brief Method ConvertInt64, addr 0x1b5b1d0, size 0x230, virtual false, abstract: false, final false
  inline ::System::Object* ConvertInt64(int64_t obj);

  /// @brief Method ConvertUInt64, addr 0x1b5b400, size 0x234, virtual false, abstract: false, final false
  inline ::System::Object* ConvertUInt64(uint64_t obj);

  static inline ::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Unchecked* New_ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method .ctor, addr 0x1b5abd0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method get_InstructionName, addr 0x1b5ab90, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NumericConvertInstruction__Unchecked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NumericConvertInstruction__Unchecked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NumericConvertInstruction__Unchecked(__NumericConvertInstruction__Unchecked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NumericConvertInstruction__Unchecked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NumericConvertInstruction__Unchecked(__NumericConvertInstruction__Unchecked const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Unchecked, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Unchecked);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Unchecked*, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction/Unchecked");
