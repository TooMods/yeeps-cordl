#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_def.hpp"
CORDL_MODULE_EXPORT(AsyncIteratorStateMachineAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class AsyncIteratorStateMachineAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::AsyncIteratorStateMachineAttribute);
// Type: System.Runtime.CompilerServices::AsyncIteratorStateMachineAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::AsyncIteratorStateMachineAttribute*
class CORDL_TYPE AsyncIteratorStateMachineAttribute : public ::System::Runtime::CompilerServices::StateMachineAttribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::AsyncIteratorStateMachineAttribute* New_ctor(::System::Type* stateMachineType);

  /// @brief Method .ctor, addr 0x2c55720, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* stateMachineType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncIteratorStateMachineAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncIteratorStateMachineAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncIteratorStateMachineAttribute(AsyncIteratorStateMachineAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncIteratorStateMachineAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncIteratorStateMachineAttribute(AsyncIteratorStateMachineAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncIteratorStateMachineAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncIteratorStateMachineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncIteratorStateMachineAttribute*, "System.Runtime.CompilerServices", "AsyncIteratorStateMachineAttribute");
