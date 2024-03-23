#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExecutionContext)
namespace Amazon::Runtime::Internal::Auth {
class AbstractAWSSigner;
}
namespace Amazon::Runtime {
class IAsyncExecutionContext;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace Amazon::Runtime {
class IResponseContext;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class ExecutionContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ExecutionContext);
// Type: Amazon.Runtime.Internal::ExecutionContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ExecutionContext*
class CORDL_TYPE ExecutionContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RequestContext, put = set_RequestContext))::Amazon::Runtime::IRequestContext* RequestContext;

  __declspec(property(get = get_ResponseContext, put = set_ResponseContext))::Amazon::Runtime::IResponseContext* ResponseContext;

  /// @brief Field <RequestContext>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestContext_k__BackingField,
                      put = __cordl_internal_set__RequestContext_k__BackingField))::Amazon::Runtime::IRequestContext* _RequestContext_k__BackingField;

  /// @brief Field <ResponseContext>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ResponseContext_k__BackingField,
                      put = __cordl_internal_set__ResponseContext_k__BackingField))::Amazon::Runtime::IResponseContext* _ResponseContext_k__BackingField;

  /// @brief Convert operator to "::Amazon::Runtime::IExecutionContext"
  constexpr operator ::Amazon::Runtime::IExecutionContext*() noexcept;

  /// @brief Method CreateFromAsyncContext, addr 0x23dcea4, size 0x13c, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::IExecutionContext* CreateFromAsyncContext(::Amazon::Runtime::IAsyncExecutionContext* asyncContext);

  static inline ::Amazon::Runtime::Internal::ExecutionContext* New_ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner);

  static inline ::Amazon::Runtime::Internal::ExecutionContext* New_ctor(::Amazon::Runtime::IRequestContext* requestContext, ::Amazon::Runtime::IResponseContext* responseContext);

  constexpr ::Amazon::Runtime::IRequestContext*& __cordl_internal_get__RequestContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IRequestContext*> const& __cordl_internal_get__RequestContext_k__BackingField() const;

  constexpr ::Amazon::Runtime::IResponseContext*& __cordl_internal_get__ResponseContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IResponseContext*> const& __cordl_internal_get__ResponseContext_k__BackingField() const;

  constexpr void __cordl_internal_set__RequestContext_k__BackingField(::Amazon::Runtime::IRequestContext* value);

  constexpr void __cordl_internal_set__ResponseContext_k__BackingField(::Amazon::Runtime::IResponseContext* value);

  /// @brief Method .ctor, addr 0x23dcdc8, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner);

  /// @brief Method .ctor, addr 0x23dce78, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IRequestContext* requestContext, ::Amazon::Runtime::IResponseContext* responseContext);

  /// @brief Method get_RequestContext, addr 0x23dcda8, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IRequestContext* get_RequestContext();

  /// @brief Method get_ResponseContext, addr 0x23dcdb8, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IResponseContext* get_ResponseContext();

  /// @brief Convert to "::Amazon::Runtime::IExecutionContext"
  constexpr ::Amazon::Runtime::IExecutionContext* i___Amazon__Runtime__IExecutionContext() noexcept;

  /// @brief Method set_RequestContext, addr 0x23dcdb0, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestContext(::Amazon::Runtime::IRequestContext* value);

  /// @brief Method set_ResponseContext, addr 0x23dcdc0, size 0x8, virtual false, abstract: false, final false
  inline void set_ResponseContext(::Amazon::Runtime::IResponseContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecutionContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecutionContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecutionContext(ExecutionContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecutionContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecutionContext(ExecutionContext const&) = delete;

  /// @brief Field <RequestContext>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::IRequestContext* ____RequestContext_k__BackingField;

  /// @brief Field <ResponseContext>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::IResponseContext* ____ResponseContext_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ExecutionContext, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ExecutionContext, ____RequestContext_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ExecutionContext, ____ResponseContext_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ExecutionContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ExecutionContext*, "Amazon.Runtime.Internal", "ExecutionContext");
