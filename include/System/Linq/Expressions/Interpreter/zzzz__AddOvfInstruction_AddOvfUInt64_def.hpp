#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__AddOvfInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddOvfInstruction_AddOvfUInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __AddOvfInstruction__AddOvfUInt64;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__AddOvfInstruction__AddOvfUInt64);
// Type: ::AddOvfUInt64
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::AddOvfInstruction::AddOvfUInt64*
class CORDL_TYPE __AddOvfInstruction__AddOvfUInt64 : public ::System::Linq::Expressions::Interpreter::AddOvfInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__AddOvfInstruction__AddOvfUInt64* New_ctor();

  /// @brief Method Run, addr 0x1840024, size 0x1cc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x183f588, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddOvfInstruction__AddOvfUInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddOvfInstruction__AddOvfUInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddOvfInstruction__AddOvfUInt64(__AddOvfInstruction__AddOvfUInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddOvfInstruction__AddOvfUInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddOvfInstruction__AddOvfUInt64(__AddOvfInstruction__AddOvfUInt64 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__AddOvfInstruction__AddOvfUInt64, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__AddOvfInstruction__AddOvfUInt64);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__AddOvfInstruction__AddOvfUInt64*, "System.Linq.Expressions.Interpreter", "AddOvfInstruction/AddOvfUInt64");
