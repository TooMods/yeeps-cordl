#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPipelineHandler)
namespace Amazon::Runtime::Internal::Util {
class ILogger;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace Amazon::Runtime {
class IPipelineHandler;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IPipelineHandler);
// Type: Amazon.Runtime::IPipelineHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IPipelineHandler*
class CORDL_TYPE IPipelineHandler {
public:
  // Declarations
  __declspec(property(get = get_InnerHandler, put = set_InnerHandler))::Amazon::Runtime::IPipelineHandler* InnerHandler;

  __declspec(property(get = get_Logger, put = set_Logger))::Amazon::Runtime::Internal::Util::ILogger* Logger;

  __declspec(property(get = get_OuterHandler, put = set_OuterHandler))::Amazon::Runtime::IPipelineHandler* OuterHandler;

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method get_InnerHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPipelineHandler* get_InnerHandler();

  /// @brief Method get_Logger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Util::ILogger* get_Logger();

  /// @brief Method get_OuterHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPipelineHandler* get_OuterHandler();

  /// @brief Method set_InnerHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_InnerHandler(::Amazon::Runtime::IPipelineHandler* value);

  /// @brief Method set_Logger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Logger(::Amazon::Runtime::Internal::Util::ILogger* value);

  /// @brief Method set_OuterHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_OuterHandler(::Amazon::Runtime::IPipelineHandler* value);

  // Ctor Parameters [CppParam { name: "", ty: "IPipelineHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPipelineHandler(IPipelineHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPipelineHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPipelineHandler(IPipelineHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IPipelineHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IPipelineHandler*, "Amazon.Runtime", "IPipelineHandler");
