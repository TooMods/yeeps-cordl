#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RightShiftInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class __RightShiftInstruction__RightShiftByte;
}
namespace System::Linq::Expressions::Interpreter {
class __RightShiftInstruction__RightShiftInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __RightShiftInstruction__RightShiftInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __RightShiftInstruction__RightShiftInt64;
}
namespace System::Linq::Expressions::Interpreter {
class __RightShiftInstruction__RightShiftSByte;
}
namespace System::Linq::Expressions::Interpreter {
class __RightShiftInstruction__RightShiftUInt16;
}
namespace System::Linq::Expressions::Interpreter {
class __RightShiftInstruction__RightShiftUInt32;
}
namespace System::Linq::Expressions::Interpreter {
class __RightShiftInstruction__RightShiftUInt64;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class RightShiftInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::RightShiftInstruction);
// Type: System.Linq.Expressions.Interpreter::RightShiftInstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::RightShiftInstruction*
class CORDL_TYPE RightShiftInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using RightShiftByte = ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftByte;

  using RightShiftInt16 = ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftInt16;

  using RightShiftInt32 = ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftInt32;

  using RightShiftInt64 = ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftInt64;

  using RightShiftSByte = ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftSByte;

  using RightShiftUInt16 = ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt16;

  using RightShiftUInt32 = ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32;

  using RightShiftUInt64 = ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt64;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_Byte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Byte, put = setStaticF_s_Byte))::System::Linq::Expressions::Interpreter::Instruction* s_Byte;

  /// @brief Field s_Int16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int16, put = setStaticF_s_Int16))::System::Linq::Expressions::Interpreter::Instruction* s_Int16;

  /// @brief Field s_Int32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int32, put = setStaticF_s_Int32))::System::Linq::Expressions::Interpreter::Instruction* s_Int32;

  /// @brief Field s_Int64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Int64, put = setStaticF_s_Int64))::System::Linq::Expressions::Interpreter::Instruction* s_Int64;

  /// @brief Field s_SByte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SByte, put = setStaticF_s_SByte))::System::Linq::Expressions::Interpreter::Instruction* s_SByte;

  /// @brief Field s_UInt16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt16, put = setStaticF_s_UInt16))::System::Linq::Expressions::Interpreter::Instruction* s_UInt16;

  /// @brief Field s_UInt32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt32, put = setStaticF_s_UInt32))::System::Linq::Expressions::Interpreter::Instruction* s_UInt32;

  /// @brief Field s_UInt64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UInt64, put = setStaticF_s_UInt64))::System::Linq::Expressions::Interpreter::Instruction* s_UInt64;

  /// @brief Method Create, addr 0x1b5d880, size 0x354, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type);

  static inline ::System::Linq::Expressions::Interpreter::RightShiftInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x1b5d878, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Byte();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_Int64();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_SByte();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt16();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt32();

  static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_UInt64();

  /// @brief Method get_ConsumedStack, addr 0x1b5d828, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x1b5d838, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x1b5d830, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_Byte(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_SByte(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction* value);

  static inline void setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RightShiftInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RightShiftInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RightShiftInstruction(RightShiftInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RightShiftInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RightShiftInstruction(RightShiftInstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::RightShiftInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::RightShiftInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::RightShiftInstruction*, "System.Linq.Expressions.Interpreter", "RightShiftInstruction");
