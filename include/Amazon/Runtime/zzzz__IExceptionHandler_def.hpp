#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExceptionHandler)
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime {
class IExceptionHandler;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IExceptionHandler);
// Type: Amazon.Runtime::IExceptionHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IExceptionHandler*
class CORDL_TYPE IExceptionHandler {
public:
  // Declarations
  /// @brief Method Handle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Handle(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method HandleAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* HandleAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  // Ctor Parameters [CppParam { name: "", ty: "IExceptionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IExceptionHandler(IExceptionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IExceptionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExceptionHandler(IExceptionHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IExceptionHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IExceptionHandler*, "Amazon.Runtime", "IExceptionHandler");
