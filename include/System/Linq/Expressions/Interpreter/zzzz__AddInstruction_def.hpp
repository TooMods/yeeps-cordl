#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class __AddInstruction__AddDouble;
}
namespace System::Linq::Expressions::Interpreter {
class __AddInstruction__AddInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __AddInstruction__AddInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __AddInstruction__AddInt64;
}
namespace System::Linq::Expressions::Interpreter {
class __AddInstruction__AddSingle;
}
namespace System::Linq::Expressions::Interpreter {
class __AddInstruction__AddUInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __AddInstruction__AddUInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __AddInstruction__AddUInt64;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class AddInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::AddInstruction);
// Type: System.Linq.Expressions.Interpreter::AddInstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::AddInstruction*
class CORDL_TYPE AddInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using AddDouble = ::System::Linq::Expressions::Interpreter::__AddInstruction__AddDouble;

  using AddInt16 = ::System::Linq::Expressions::Interpreter::__AddInstruction__AddInt16;

  using AddInt32 = ::System::Linq::Expressions::Interpreter::__AddInstruction__AddInt32;

  using AddInt64 = ::System::Linq::Expressions::Interpreter::__AddInstruction__AddInt64;

  using AddSingle = ::System::Linq::Expressions::Interpreter::__AddInstruction__AddSingle;

  using AddUInt16 = ::System::Linq::Expressions::Interpreter::__AddInstruction__AddUInt16;

  using AddUInt32 = ::System::Linq::Expressions::Interpreter::__AddInstruction__AddUInt32;

  using AddUInt64 = ::System::Linq::Expressions::Interpreter::__AddInstruction__AddUInt64;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_Double, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Double, put = setStaticF_s_Double))::System::Linq::Expressions::Interpreter::Instruction* s_Double;

  /// @brief Field s_Int16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int16, put = setStaticF_s_Int16))::System::Linq::Expressions::Interpreter::Instruction* s_Int16;

  /// @brief Field s_Int32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int32, put = setStaticF_s_Int32))::System::Linq::Expressions::Interpreter::Instruction* s_Int32;

  /// @brief Field s_Int64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int64, put = setStaticF_s_Int64))::System::Linq::Expressions::Interpreter::Instruction* s_Int64;

  /// @brief Field s_Single, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Single, put = setStaticF_s_Single))::System::Linq::Expressions::Interpreter::Instruction* s_Single;

  /// @brief Field s_UInt16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt16, put = setStaticF_s_UInt16))::System::Linq::Expressions::Interpreter::Instruction* s_UInt16;

  /// @brief Field s_UInt32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt32, put = setStaticF_s_UInt32))::System::Linq::Expressions::Interpreter::Instruction* s_UInt32;

  /// @brief Field s_UInt64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt64, put = setStaticF_s_UInt64))::System::Linq::Expressions::Interpreter::Instruction* s_UInt64;

  /// @brief Method Create, addr 0x183e49c, size 0x354, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type);

  static inline ::System::Linq::Expressions::Interpreter::AddInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x183e494, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Double();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int64();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Single();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt64();

  /// @brief Method get_ConsumedStack, addr 0x183e444, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x183e454, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x183e44c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_Double(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Single(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddInstruction(AddInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddInstruction(AddInstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::AddInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::AddInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::AddInstruction*, "System.Linq.Expressions.Interpreter", "AddInstruction");
