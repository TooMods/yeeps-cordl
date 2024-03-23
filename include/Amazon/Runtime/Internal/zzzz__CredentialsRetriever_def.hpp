#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_def.hpp"
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CredentialsRetriever)
namespace Amazon::Runtime::Internal::Util {
class TimingEvent;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __CredentialsRetriever___InvokeAsync_d__7_1;
}
namespace Amazon::Runtime {
class AWSCredentials;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
class ImmutableCredentials;
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
// Forward declare root types
namespace Amazon::Runtime::Internal {
class CredentialsRetriever;
}
namespace Amazon::Runtime::Internal {
template <typename T> struct __CredentialsRetriever___InvokeAsync_d__7_1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::CredentialsRetriever);
MARK_GEN_VAL_T(::Amazon::Runtime::Internal::__CredentialsRetriever___InvokeAsync_d__7_1);
// Type: ::<InvokeAsync>d__7`1
// SizeInfo { instance_size: 88, native_size: 104, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::CredentialsRetriever::<InvokeAsync>d__7`1<T>
struct CORDL_TYPE __CredentialsRetriever___InvokeAsync_d__7_1 {
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
  constexpr __CredentialsRetriever___InvokeAsync_d__7_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::CredentialsRetriever*",
  // modifiers: "", def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty:
  // "::Amazon::Runtime::Internal::Util::TimingEvent*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*>", modifiers: "", def_value: None }, CppParam { name: "__u__2",
  // ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: None }]
  constexpr __CredentialsRetriever___InvokeAsync_d__7_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                        ::Amazon::Runtime::Internal::CredentialsRetriever* __4__this, ::Amazon::Runtime::IExecutionContext* executionContext,
                                                        ::Amazon::Runtime::Internal::Util::TimingEvent* __7__wrap1,
                                                        ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*> __u__1,
                                                        ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::CredentialsRetriever* __4__this;

  /// @brief Field executionContext, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::TimingEvent* __7__wrap1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::CredentialsRetriever
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::CredentialsRetriever*
class CORDL_TYPE CredentialsRetriever : public ::Amazon::Runtime::Internal::PipelineHandler {
public:
  // Declarations
  template <typename T> using _InvokeAsync_d__7_1 = ::Amazon::Runtime::Internal::__CredentialsRetriever___InvokeAsync_d__7_1<T>;

  __declspec(property(get = get_Credentials, put = set_Credentials))::Amazon::Runtime::AWSCredentials* Credentials;

  /// @brief Field <Credentials>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Credentials_k__BackingField, put = __cordl_internal_set__Credentials_k__BackingField))::Amazon::Runtime::AWSCredentials* _Credentials_k__BackingField;

  /// @brief Method InvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method InvokeSync, addr 0x23e0a1c, size 0x34, virtual true, abstract: false, final false
  inline void InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::CredentialsRetriever* New_ctor(::Amazon::Runtime::AWSCredentials* credentials);

  /// @brief Method PreInvoke, addr 0x23e0670, size 0x3ac, virtual true, abstract: false, final false
  inline void PreInvoke(::Amazon::Runtime::IExecutionContext* executionContext);

  constexpr ::Amazon::Runtime::AWSCredentials*& __cordl_internal_get__Credentials_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AWSCredentials*> const& __cordl_internal_get__Credentials_k__BackingField() const;

  constexpr void __cordl_internal_set__Credentials_k__BackingField(::Amazon::Runtime::AWSCredentials* value);

  /// @brief Method <>n__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* __n__0(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method .ctor, addr 0x23e0638, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AWSCredentials* credentials);

  /// @brief Method get_Credentials, addr 0x23e0660, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* get_Credentials();

  /// @brief Method set_Credentials, addr 0x23e0668, size 0x8, virtual false, abstract: false, final false
  inline void set_Credentials(::Amazon::Runtime::AWSCredentials* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CredentialsRetriever();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CredentialsRetriever", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CredentialsRetriever(CredentialsRetriever&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CredentialsRetriever", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CredentialsRetriever(CredentialsRetriever const&) = delete;

  /// @brief Field <Credentials>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::AWSCredentials* ____Credentials_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::CredentialsRetriever, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::CredentialsRetriever, ____Credentials_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::CredentialsRetriever);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::CredentialsRetriever*, "Amazon.Runtime.Internal", "CredentialsRetriever");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::Runtime::Internal::__CredentialsRetriever___InvokeAsync_d__7_1, "Amazon.Runtime.Internal", "CredentialsRetriever/<InvokeAsync>d__7`1");
