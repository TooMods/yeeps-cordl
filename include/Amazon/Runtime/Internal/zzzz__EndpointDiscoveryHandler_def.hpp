#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EndpointDiscoveryHandler)
namespace Amazon::Runtime::Internal {
class DiscoveryEndpointBase;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __EndpointDiscoveryHandler___InvokeAsync_d__2_1;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Exception;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class EndpointDiscoveryHandler;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __EndpointDiscoveryHandler___InvokeAsync_d__2_1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::EndpointDiscoveryHandler);
MARK_GEN_VAL_T(::Amazon::Runtime::Internal::__EndpointDiscoveryHandler___InvokeAsync_d__2_1);
// Type: ::<InvokeAsync>d__2`1
// SizeInfo { instance_size: 80, native_size: 96, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::EndpointDiscoveryHandler::<InvokeAsync>d__2`1<T>
struct CORDL_TYPE __EndpointDiscoveryHandler___InvokeAsync_d__2_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EndpointDiscoveryHandler___InvokeAsync_d__2_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::EndpointDiscoveryHandler*", modifiers: "", def_value: None }, CppParam { name: "_requestContext_5__2", ty:
  // "::Amazon::Runtime::IRequestContext*", modifiers: "", def_value: None }, CppParam { name: "_regionalEndpoint_5__3", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: None }]
  constexpr __EndpointDiscoveryHandler___InvokeAsync_d__2_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                            ::Amazon::Runtime::IExecutionContext* executionContext, ::Amazon::Runtime::Internal::EndpointDiscoveryHandler* __4__this,
                                                            ::Amazon::Runtime::IRequestContext* _requestContext_5__2, ::System::Uri* _regionalEndpoint_5__3,
                                                            ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field executionContext, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::EndpointDiscoveryHandler* __4__this;

  /// @brief Field <requestContext>5__2, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::IRequestContext* _requestContext_5__2;

  /// @brief Field <regionalEndpoint>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Uri* _regionalEndpoint_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::EndpointDiscoveryHandler
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::EndpointDiscoveryHandler*
class CORDL_TYPE EndpointDiscoveryHandler : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  template <typename T> using _InvokeAsync_d__2_1 = ::Amazon::Runtime::Internal::__EndpointDiscoveryHandler___InvokeAsync_d__2_1<T>;

  /// @brief Method DiscoverEndpoints, addr 0x23e3c10, size 0x4f4, virtual false, abstract: false, final false
  static inline void DiscoverEndpoints(::Amazon::Runtime::IRequestContext* requestContext, bool evictCacheKey);

  /// @brief Method EvictCacheKeyForRequest, addr 0x23e3ae4, size 0x12c, virtual false, abstract: false, final false
  static inline void EvictCacheKeyForRequest(::Amazon::Runtime::IRequestContext* requestContext, ::System::Uri* regionalEndpoint);

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23e376c, size 0x248, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method IsInvalidEndpointException, addr 0x23e3a5c, size 0x88, virtual false, abstract: false, final false
  static inline bool IsInvalidEndpointException(::System::Exception* exception);

  static inline ::Amazon::Runtime::Internal::EndpointDiscoveryHandler* New_ctor();

  /// @brief Method OperationNameFromRequestName, addr 0x23e44e4, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW OperationNameFromRequestName(::StringW requestName);

  /// @brief Method PreInvoke, addr 0x23e39b4, size 0xa8, virtual false, abstract: false, final false
  static inline void PreInvoke(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method ProcessEndpointDiscovery, addr 0x23e4104, size 0x3e0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::DiscoveryEndpointBase*>* ProcessEndpointDiscovery(::Amazon::Runtime::IRequestContext* requestContext,
                                                                                                                                             bool evictCacheKey, ::System::Uri* evictUri);

  /// @brief Method <>n__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* __n__0(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method .ctor, addr 0x23e4568, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndpointDiscoveryHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndpointDiscoveryHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndpointDiscoveryHandler(EndpointDiscoveryHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndpointDiscoveryHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndpointDiscoveryHandler(EndpointDiscoveryHandler const&) = delete;

  /// @brief Field INVALID_ENDPOINT_EXCEPTION_STATUSCODE offset 0xffffffff size 0x4
  static constexpr int32_t INVALID_ENDPOINT_EXCEPTION_STATUSCODE{ static_cast<int32_t>(0x1a5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::EndpointDiscoveryHandler, 0x28>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::EndpointDiscoveryHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::EndpointDiscoveryHandler*, "Amazon.Runtime.Internal", "EndpointDiscoveryHandler");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::Runtime::Internal::__EndpointDiscoveryHandler___InvokeAsync_d__2_1, "Amazon.Runtime.Internal", "EndpointDiscoveryHandler/<InvokeAsync>d__2`1");
