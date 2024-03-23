#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExecutionContext)
namespace Amazon::Runtime {
class IRequestContext;
}
namespace Amazon::Runtime {
class IResponseContext;
}
// Forward declare root types
namespace Amazon::Runtime {
class IExecutionContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IExecutionContext);
// Type: Amazon.Runtime::IExecutionContext
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IExecutionContext*
class CORDL_TYPE IExecutionContext {
public:
  // Declarations
  __declspec(property(get = get_RequestContext))::Amazon::Runtime::IRequestContext* RequestContext;

  __declspec(property(get = get_ResponseContext))::Amazon::Runtime::IResponseContext* ResponseContext;

  /// @brief Method get_RequestContext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IRequestContext* get_RequestContext();

  /// @brief Method get_ResponseContext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IResponseContext* get_ResponseContext();

  // Ctor Parameters [CppParam { name: "", ty: "IExecutionContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IExecutionContext(IExecutionContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IExecutionContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExecutionContext(IExecutionContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IExecutionContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IExecutionContext*, "Amazon.Runtime", "IExecutionContext");
