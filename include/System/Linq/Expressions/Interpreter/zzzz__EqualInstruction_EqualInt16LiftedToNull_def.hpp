#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EqualInstruction_EqualInt16LiftedToNull)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualInt16LiftedToNull;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualInt16LiftedToNull);
// Type: ::EqualInt16LiftedToNull
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::EqualInstruction::EqualInt16LiftedToNull*
class CORDL_TYPE __EqualInstruction__EqualInt16LiftedToNull : public ::System::Linq::Expressions::Interpreter::EqualInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualInt16LiftedToNull* New_ctor();

  /// @brief Method Run, addr 0x184856c, size 0xe8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x1847800, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EqualInstruction__EqualInt16LiftedToNull();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EqualInstruction__EqualInt16LiftedToNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EqualInstruction__EqualInt16LiftedToNull(__EqualInstruction__EqualInt16LiftedToNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EqualInstruction__EqualInt16LiftedToNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EqualInstruction__EqualInt16LiftedToNull(__EqualInstruction__EqualInt16LiftedToNull const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualInt16LiftedToNull, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualInt16LiftedToNull);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualInt16LiftedToNull*, "System.Linq.Expressions.Interpreter", "EqualInstruction/EqualInt16LiftedToNull");
