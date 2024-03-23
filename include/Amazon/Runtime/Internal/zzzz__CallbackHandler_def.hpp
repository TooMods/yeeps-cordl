#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackHandler)
namespace Amazon::Runtime::Internal {
template <typename T> struct __CallbackHandler___InvokeAsync_d__9_1;
}
namespace Amazon::Runtime {
class IExecutionContext;
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
template <typename T> class Action_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class CallbackHandler;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __CallbackHandler___InvokeAsync_d__9_1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::CallbackHandler);
MARK_GEN_VAL_T(::Amazon::Runtime::Internal::__CallbackHandler___InvokeAsync_d__9_1);
// Type: ::<InvokeAsync>d__9`1
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::CallbackHandler::<InvokeAsync>d__9`1<T>
struct CORDL_TYPE __CallbackHandler___InvokeAsync_d__9_1 {
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
  constexpr __CallbackHandler___InvokeAsync_d__9_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::CallbackHandler*", modifiers:
  // "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: None }]
  constexpr __CallbackHandler___InvokeAsync_d__9_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                   ::Amazon::Runtime::Internal::CallbackHandler* __4__this, ::Amazon::Runtime::IExecutionContext* executionContext,
                                                   ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::CallbackHandler* __4__this;

  /// @brief Field executionContext, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::CallbackHandler
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::CallbackHandler*
class CORDL_TYPE CallbackHandler : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  template <typename T> using _InvokeAsync_d__9_1 = ::Amazon::Runtime::Internal::__CallbackHandler___InvokeAsync_d__9_1<T>;

  __declspec(property(get = get_OnPostInvoke, put = set_OnPostInvoke))::System::Action_1<::Amazon::Runtime::IExecutionContext*>* OnPostInvoke;

  __declspec(property(get = get_OnPreInvoke, put = set_OnPreInvoke))::System::Action_1<::Amazon::Runtime::IExecutionContext*>* OnPreInvoke;

  /// @brief Field <OnPostInvoke>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__OnPostInvoke_k__BackingField,
                      put = __cordl_internal_set__OnPostInvoke_k__BackingField))::System::Action_1<::Amazon::Runtime::IExecutionContext*>* _OnPostInvoke_k__BackingField;

  /// @brief Field <OnPreInvoke>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__OnPreInvoke_k__BackingField,
                      put = __cordl_internal_set__OnPreInvoke_k__BackingField))::System::Action_1<::Amazon::Runtime::IExecutionContext*>* _OnPreInvoke_k__BackingField;

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23e0558, size 0x68, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::CallbackHandler* New_ctor();

  /// @brief Method PostInvoke, addr 0x23e05dc, size 0x1c, virtual false, abstract: false, final false
  inline void PostInvoke(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method PreInvoke, addr 0x23e05c0, size 0x1c, virtual false, abstract: false, final false
  inline void PreInvoke(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method RaiseOnPostInvoke, addr 0x23e0614, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseOnPostInvoke(::Amazon::Runtime::IExecutionContext* context);

  /// @brief Method RaiseOnPreInvoke, addr 0x23e05f8, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseOnPreInvoke(::Amazon::Runtime::IExecutionContext* context);

  constexpr ::System::Action_1<::Amazon::Runtime::IExecutionContext*>*& __cordl_internal_get__OnPostInvoke_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Amazon::Runtime::IExecutionContext*>*> const& __cordl_internal_get__OnPostInvoke_k__BackingField() const;

  constexpr ::System::Action_1<::Amazon::Runtime::IExecutionContext*>*& __cordl_internal_get__OnPreInvoke_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Amazon::Runtime::IExecutionContext*>*> const& __cordl_internal_get__OnPreInvoke_k__BackingField() const;

  constexpr void __cordl_internal_set__OnPostInvoke_k__BackingField(::System::Action_1<::Amazon::Runtime::IExecutionContext*>* value);

  constexpr void __cordl_internal_set__OnPreInvoke_k__BackingField(::System::Action_1<::Amazon::Runtime::IExecutionContext*>* value);

  /// @brief Method <>n__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* __n__0(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method .ctor, addr 0x23e0630, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_OnPostInvoke, addr 0x23e0548, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::Amazon::Runtime::IExecutionContext*>* get_OnPostInvoke();

  /// @brief Method get_OnPreInvoke, addr 0x23e0538, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::Amazon::Runtime::IExecutionContext*>* get_OnPreInvoke();

  /// @brief Method set_OnPostInvoke, addr 0x23e0550, size 0x8, virtual false, abstract: false, final false
  inline void set_OnPostInvoke(::System::Action_1<::Amazon::Runtime::IExecutionContext*>* value);

  /// @brief Method set_OnPreInvoke, addr 0x23e0540, size 0x8, virtual false, abstract: false, final false
  inline void set_OnPreInvoke(::System::Action_1<::Amazon::Runtime::IExecutionContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallbackHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallbackHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallbackHandler(CallbackHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallbackHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallbackHandler(CallbackHandler const&) = delete;

  /// @brief Field <OnPreInvoke>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Amazon::Runtime::IExecutionContext*>* ____OnPreInvoke_k__BackingField;

  /// @brief Field <OnPostInvoke>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::Amazon::Runtime::IExecutionContext*>* ____OnPostInvoke_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::CallbackHandler, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CallbackHandler, ____OnPreInvoke_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CallbackHandler, ____OnPostInvoke_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::CallbackHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::CallbackHandler*, "Amazon.Runtime.Internal", "CallbackHandler");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::Runtime::Internal::__CallbackHandler___InvokeAsync_d__9_1, "Amazon.Runtime.Internal", "CallbackHandler/<InvokeAsync>d__9`1");
