#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__RequestContext_def.hpp"
CORDL_MODULE_EXPORT(AsyncRequestContext)
namespace Amazon::Runtime::Internal::Auth {
class AbstractAWSSigner;
}
namespace Amazon::Runtime {
class IAsyncRequestContext;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class AsyncRequestContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::AsyncRequestContext);
// Type: Amazon.Runtime.Internal::AsyncRequestContext
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::AsyncRequestContext*
class CORDL_TYPE AsyncRequestContext : public ::Amazon::Runtime::Internal::RequestContext {
public:
  // Declarations
  __declspec(property(get = get_Callback, put = set_Callback))::System::AsyncCallback* Callback;

  __declspec(property(get = get_State, put = set_State))::System::Object* State;

  /// @brief Field <Callback>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__Callback_k__BackingField, put = __cordl_internal_set__Callback_k__BackingField))::System::AsyncCallback* _Callback_k__BackingField;

  /// @brief Field <State>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__State_k__BackingField, put = __cordl_internal_set__State_k__BackingField))::System::Object* _State_k__BackingField;

  /// @brief Convert operator to "::Amazon::Runtime::IAsyncRequestContext"
  constexpr operator ::Amazon::Runtime::IAsyncRequestContext*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::IRequestContext"
  constexpr operator ::Amazon::Runtime::IRequestContext*() noexcept;

  static inline ::Amazon::Runtime::Internal::AsyncRequestContext* New_ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner);

  constexpr ::System::AsyncCallback*& __cordl_internal_get__Callback_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __cordl_internal_get__Callback_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__State_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__State_k__BackingField() const;

  constexpr void __cordl_internal_set__Callback_k__BackingField(::System::AsyncCallback* value);

  constexpr void __cordl_internal_set__State_k__BackingField(::System::Object* value);

  /// @brief Method .ctor, addr 0x23dcd50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool enableMetrics, ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* clientSigner);

  /// @brief Method get_Callback, addr 0x23dcd58, size 0x8, virtual true, abstract: false, final true
  inline ::System::AsyncCallback* get_Callback();

  /// @brief Method get_State, addr 0x23dcd68, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_State();

  /// @brief Convert to "::Amazon::Runtime::IAsyncRequestContext"
  constexpr ::Amazon::Runtime::IAsyncRequestContext* i___Amazon__Runtime__IAsyncRequestContext() noexcept;

  /// @brief Convert to "::Amazon::Runtime::IRequestContext"
  constexpr ::Amazon::Runtime::IRequestContext* i___Amazon__Runtime__IRequestContext() noexcept;

  /// @brief Method set_Callback, addr 0x23dcd60, size 0x8, virtual false, abstract: false, final false
  inline void set_Callback(::System::AsyncCallback* value);

  /// @brief Method set_State, addr 0x23dcd70, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncRequestContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncRequestContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncRequestContext(AsyncRequestContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncRequestContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncRequestContext(AsyncRequestContext const&) = delete;

  /// @brief Field <Callback>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::AsyncCallback* ____Callback_k__BackingField;

  /// @brief Field <State>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::System::Object* ____State_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::AsyncRequestContext, 0xb0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::AsyncRequestContext, ____Callback_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::AsyncRequestContext, ____State_k__BackingField) == 0xa8, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::AsyncRequestContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::AsyncRequestContext*, "Amazon.Runtime.Internal", "AsyncRequestContext");
