#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
CORDL_MODULE_EXPORT(Marshaller)
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class Marshaller;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Marshaller);
// Type: Amazon.Runtime.Internal::Marshaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::Marshaller*
class CORDL_TYPE Marshaller : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23e5008, size 0x2c, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::Marshaller* New_ctor();

  /// @brief Method PreInvoke, addr 0x23e5034, size 0xdc0, virtual false, abstract: false, final false
  static inline void PreInvoke(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method .ctor, addr 0x23e5df4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Marshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Marshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Marshaller(Marshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Marshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Marshaller(Marshaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Marshaller, 0x28>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::Marshaller);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Marshaller*, "Amazon.Runtime.Internal", "Marshaller");
