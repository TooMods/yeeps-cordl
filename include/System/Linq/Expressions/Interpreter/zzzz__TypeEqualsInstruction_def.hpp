#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeEqualsInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class TypeEqualsInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::TypeEqualsInstruction);
// Type: System.Linq.Expressions.Interpreter::TypeEqualsInstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::TypeEqualsInstruction*
class CORDL_TYPE TypeEqualsInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::System::Linq::Expressions::Interpreter::TypeEqualsInstruction* Instance;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  static inline ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction* New_ctor();

  /// @brief Method Run, addr 0x1b60ce8, size 0x60, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x1b60ce0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::TypeEqualsInstruction* getStaticF_Instance();

  /// @brief Method get_ConsumedStack, addr 0x1b60c90, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x1b60ca0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x1b60c98, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_Instance(::System::Linq::Expressions::Interpreter::TypeEqualsInstruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeEqualsInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeEqualsInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeEqualsInstruction(TypeEqualsInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeEqualsInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeEqualsInstruction(TypeEqualsInstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::TypeEqualsInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::TypeEqualsInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::TypeEqualsInstruction*, "System.Linq.Expressions.Interpreter", "TypeEqualsInstruction");
