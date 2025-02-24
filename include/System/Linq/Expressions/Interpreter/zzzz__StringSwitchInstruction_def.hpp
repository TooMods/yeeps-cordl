#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringSwitchInstruction)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Runtime::CompilerServices {
template <typename T> class StrongBox_1;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class StringSwitchInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::StringSwitchInstruction);
// Type: System.Linq.Expressions.Interpreter::StringSwitchInstruction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::StringSwitchInstruction*
class CORDL_TYPE StringSwitchInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  /// @brief Field _cases, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cases, put = __cordl_internal_set__cases))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _cases;

  /// @brief Field _nullCase, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__nullCase, put = __cordl_internal_set__nullCase))::System::Runtime::CompilerServices::StrongBox_1<int32_t>* _nullCase;

  static inline ::System::Linq::Expressions::Interpreter::StringSwitchInstruction* New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* cases,
                                                                                            ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* nullCase);

  /// @brief Method Run, addr 0x18455e0, size 0xcc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get__cases();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __cordl_internal_get__cases() const;

  constexpr ::System::Runtime::CompilerServices::StrongBox_1<int32_t>*& __cordl_internal_get__nullCase();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::StrongBox_1<int32_t>*> const& __cordl_internal_get__nullCase() const;

  constexpr void __cordl_internal_set__cases(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set__nullCase(::System::Runtime::CompilerServices::StrongBox_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x184556c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* cases, ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* nullCase);

  /// @brief Method get_ConsumedStack, addr 0x18455d8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x1845598, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringSwitchInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringSwitchInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringSwitchInstruction(StringSwitchInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringSwitchInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringSwitchInstruction(StringSwitchInstruction const&) = delete;

  /// @brief Field _cases, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ____cases;

  /// @brief Field _nullCase, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* ____nullCase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::StringSwitchInstruction, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::StringSwitchInstruction, ____cases) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::StringSwitchInstruction, ____nullCase) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::StringSwitchInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::StringSwitchInstruction*, "System.Linq.Expressions.Interpreter", "StringSwitchInstruction");
