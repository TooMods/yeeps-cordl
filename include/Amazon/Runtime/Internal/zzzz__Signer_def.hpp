#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
CORDL_MODULE_EXPORT(Signer)
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class Signer;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Signer);
// Type: Amazon.Runtime.Internal::Signer
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::Signer*
class CORDL_TYPE Signer : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23e720c, size 0x2c, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::Signer* New_ctor();

  /// @brief Method PreInvoke, addr 0x23e7238, size 0x1ec, virtual false, abstract: false, final false
  static inline void PreInvoke(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method ShouldSign, addr 0x23e7424, size 0x188, virtual false, abstract: false, final false
  static inline bool ShouldSign(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method SignRequest, addr 0x23e75ac, size 0x880, virtual false, abstract: false, final false
  static inline void SignRequest(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method .ctor, addr 0x23e7e2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Signer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Signer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Signer(Signer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Signer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Signer(Signer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Signer, 0x28>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::Signer);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Signer*, "Amazon.Runtime.Internal", "Signer");
