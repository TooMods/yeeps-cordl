#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateDelegateInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
class LightDelegateCreator;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class CreateDelegateInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::CreateDelegateInstruction);
// Type: System.Linq.Expressions.Interpreter::CreateDelegateInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::CreateDelegateInstruction*
class CORDL_TYPE CreateDelegateInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _creator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__creator, put = __cordl_internal_set__creator))::System::Linq::Expressions::Interpreter::LightDelegateCreator* _creator;

  static inline ::System::Linq::Expressions::Interpreter::CreateDelegateInstruction* New_ctor(::System::Linq::Expressions::Interpreter::LightDelegateCreator* delegateCreator);

  /// @brief Method Run, addr 0x1b6088c, size 0x178, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Linq::Expressions::Interpreter::LightDelegateCreator*& __cordl_internal_get__creator();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Interpreter::LightDelegateCreator*> const& __cordl_internal_get__creator() const;

  constexpr void __cordl_internal_set__creator(::System::Linq::Expressions::Interpreter::LightDelegateCreator* value);

  /// @brief Method .ctor, addr 0x1b607f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Interpreter::LightDelegateCreator* delegateCreator);

  /// @brief Method get_ConsumedStack, addr 0x1b60820, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x1b6084c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x1b60844, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateDelegateInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateDelegateInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateDelegateInstruction(CreateDelegateInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateDelegateInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateDelegateInstruction(CreateDelegateInstruction const&) = delete;

  /// @brief Field _creator, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::LightDelegateCreator* ____creator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::CreateDelegateInstruction, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::CreateDelegateInstruction, ____creator) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::CreateDelegateInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::CreateDelegateInstruction*, "System.Linq.Expressions.Interpreter", "CreateDelegateInstruction");
