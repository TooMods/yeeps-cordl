#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncExecutionContext)
namespace Amazon::Runtime {
class IAsyncRequestContext;
}
namespace Amazon::Runtime {
class IAsyncResponseContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class IAsyncExecutionContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IAsyncExecutionContext);
// Type: Amazon.Runtime::IAsyncExecutionContext
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IAsyncExecutionContext*
class CORDL_TYPE IAsyncExecutionContext {
public:
  // Declarations
  __declspec(property(get = get_RequestContext))::Amazon::Runtime::IAsyncRequestContext* RequestContext;

  __declspec(property(get = get_ResponseContext))::Amazon::Runtime::IAsyncResponseContext* ResponseContext;

  __declspec(property(get = get_RuntimeState, put = set_RuntimeState))::System::Object* RuntimeState;

  /// @brief Method get_RequestContext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IAsyncRequestContext* get_RequestContext();

  /// @brief Method get_ResponseContext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IAsyncResponseContext* get_ResponseContext();

  /// @brief Method get_RuntimeState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_RuntimeState();

  /// @brief Method set_RuntimeState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_RuntimeState(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncExecutionContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncExecutionContext(IAsyncExecutionContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncExecutionContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncExecutionContext(IAsyncExecutionContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IAsyncExecutionContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IAsyncExecutionContext*, "Amazon.Runtime", "IAsyncExecutionContext");
