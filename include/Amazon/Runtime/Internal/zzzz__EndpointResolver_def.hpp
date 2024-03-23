#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
CORDL_MODULE_EXPORT(EndpointResolver)
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class EndpointResolver;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::EndpointResolver);
// Type: Amazon.Runtime.Internal::EndpointResolver
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::EndpointResolver*
class CORDL_TYPE EndpointResolver : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  /// @brief Method DetermineEndpoint, addr 0x23e49e4, size 0x33c, virtual false, abstract: false, final false
  static inline ::System::Uri* DetermineEndpoint(::Amazon::Runtime::IClientConfig* config, ::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method DetermineEndpoint, addr 0x23e48d8, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Uri* DetermineEndpoint(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method InjectHostPrefix, addr 0x23e4d20, size 0x1fc, virtual false, abstract: false, final false
  static inline ::System::Uri* InjectHostPrefix(::Amazon::Runtime::IClientConfig* config, ::Amazon::Runtime::Internal::IRequest* request, ::System::Uri* endpoint);

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23e4570, size 0x28, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::EndpointResolver* New_ctor();

  /// @brief Method PreInvoke, addr 0x23e4598, size 0x340, virtual false, abstract: false, final false
  inline void PreInvoke(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method .ctor, addr 0x23e4f1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndpointResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndpointResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndpointResolver(EndpointResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndpointResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndpointResolver(EndpointResolver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::EndpointResolver, 0x28>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::EndpointResolver);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::EndpointResolver*, "Amazon.Runtime.Internal", "EndpointResolver");
