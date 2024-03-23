#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncExecutionContext)
namespace Amazon::Runtime::Internal::Auth {
class AbstractAWSSigner;
}
namespace Amazon::Runtime {
class IAsyncExecutionContext;
}
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
namespace Amazon::Runtime::Internal {
class AsyncExecutionContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::AsyncExecutionContext);
// Type: Amazon.Runtime.Internal::AsyncExecutionContext
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::AsyncExecutionContext*
class CORDL_TYPE AsyncExecutionContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RequestContext, put = set_RequestContext))::Amazon::Runtime::IAsyncRequestContext* RequestContext;

  __declspec(property(get = get_ResponseContext, put = set_ResponseContext))::Amazon::Runtime::IAsyncResponseContext* ResponseContext;

  __declspec(property(get = get_RuntimeState, put = set_RuntimeState))::System::Object* RuntimeState;

  /// @brief Field <RequestContext>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestContext_k__BackingField,
                      put = __cordl_internal_set__RequestContext_k__BackingField))::Amazon::Runtime::IAsyncRequestContext* _RequestContext_k__BackingField;

  /// @brief Field <ResponseContext>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ResponseContext_k__BackingField,
                      put = __cordl_internal_set__ResponseContext_k__BackingField))::Amazon::Runtime::IAsyncResponseContext* _ResponseContext_k__BackingField;

  /// @brief Field <RuntimeState>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__RuntimeState_k__BackingField, put = __cordl_internal_set__RuntimeState_k__BackingField))::System::Object* _RuntimeState_k__BackingField;

  /// @brief Convert operator to "::Amazon::Runtime::IAsyncExecutionContext"
  constexpr operator ::Amazon::Runtime::IAsyncExecutionContext*() noexcept;

  static inline ::Amazon::Runtime::Internal::AsyncExecutionContext* New_ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner);

  static inline ::Amazon::Runtime::Internal::AsyncExecutionContext* New_ctor(::Amazon::Runtime::IAsyncRequestContext* requestContext, ::Amazon::Runtime::IAsyncResponseContext* responseContext);

  constexpr ::Amazon::Runtime::IAsyncRequestContext*& __cordl_internal_get__RequestContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IAsyncRequestContext*> const& __cordl_internal_get__RequestContext_k__BackingField() const;

  constexpr ::Amazon::Runtime::IAsyncResponseContext*& __cordl_internal_get__ResponseContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IAsyncResponseContext*> const& __cordl_internal_get__ResponseContext_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__RuntimeState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__RuntimeState_k__BackingField() const;

  constexpr void __cordl_internal_set__RequestContext_k__BackingField(::Amazon::Runtime::IAsyncRequestContext* value);

  constexpr void __cordl_internal_set__ResponseContext_k__BackingField(::Amazon::Runtime::IAsyncResponseContext* value);

  constexpr void __cordl_internal_set__RuntimeState_k__BackingField(::System::Object* value);

  /// @brief Method .ctor, addr 0x23dd010, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner);

  /// @brief Method .ctor, addr 0x23dd0c0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IAsyncRequestContext* requestContext, ::Amazon::Runtime::IAsyncResponseContext* responseContext);

  /// @brief Method get_RequestContext, addr 0x23dcff0, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IAsyncRequestContext* get_RequestContext();

  /// @brief Method get_ResponseContext, addr 0x23dcfe0, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IAsyncResponseContext* get_ResponseContext();

  /// @brief Method get_RuntimeState, addr 0x23dd000, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_RuntimeState();

  /// @brief Convert to "::Amazon::Runtime::IAsyncExecutionContext"
  constexpr ::Amazon::Runtime::IAsyncExecutionContext* i___Amazon__Runtime__IAsyncExecutionContext() noexcept;

  /// @brief Method set_RequestContext, addr 0x23dcff8, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestContext(::Amazon::Runtime::IAsyncRequestContext* value);

  /// @brief Method set_ResponseContext, addr 0x23dcfe8, size 0x8, virtual false, abstract: false, final false
  inline void set_ResponseContext(::Amazon::Runtime::IAsyncResponseContext* value);

  /// @brief Method set_RuntimeState, addr 0x23dd008, size 0x8, virtual true, abstract: false, final true
  inline void set_RuntimeState(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncExecutionContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncExecutionContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncExecutionContext(AsyncExecutionContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncExecutionContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncExecutionContext(AsyncExecutionContext const&) = delete;

  /// @brief Field <ResponseContext>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::IAsyncResponseContext* ____ResponseContext_k__BackingField;

  /// @brief Field <RequestContext>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::IAsyncRequestContext* ____RequestContext_k__BackingField;

  /// @brief Field <RuntimeState>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____RuntimeState_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::AsyncExecutionContext, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::AsyncExecutionContext, ____ResponseContext_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::AsyncExecutionContext, ____RequestContext_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::AsyncExecutionContext, ____RuntimeState_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::AsyncExecutionContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::AsyncExecutionContext*, "Amazon.Runtime.Internal", "AsyncExecutionContext");
