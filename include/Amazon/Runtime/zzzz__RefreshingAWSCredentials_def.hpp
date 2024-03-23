#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RefreshingAWSCredentials)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime {
class ImmutableCredentials;
}
namespace Amazon::Runtime {
class __RefreshingAWSCredentials__CredentialsRefreshState;
}
namespace Amazon::Runtime {
struct __RefreshingAWSCredentials___GetCredentialsAsync_d__10;
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
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Amazon::Runtime {
class RefreshingAWSCredentials;
}
namespace Amazon::Runtime {
class __RefreshingAWSCredentials__CredentialsRefreshState;
}
namespace Amazon::Runtime {
struct __RefreshingAWSCredentials___GetCredentialsAsync_d__10;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::RefreshingAWSCredentials);
MARK_REF_PTR_T(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState);
MARK_VAL_T(::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10);
// Type: ::CredentialsRefreshState
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::RefreshingAWSCredentials::CredentialsRefreshState*
class CORDL_TYPE __RefreshingAWSCredentials__CredentialsRefreshState : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Credentials, put = set_Credentials))::Amazon::Runtime::ImmutableCredentials* Credentials;

  __declspec(property(get = get_Expiration, put = set_Expiration))::System::DateTime Expiration;

  /// @brief Field <Credentials>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Credentials_k__BackingField,
                      put = __cordl_internal_set__Credentials_k__BackingField))::Amazon::Runtime::ImmutableCredentials* _Credentials_k__BackingField;

  /// @brief Field <Expiration>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Expiration_k__BackingField, put = __cordl_internal_set__Expiration_k__BackingField))::System::DateTime _Expiration_k__BackingField;

  /// @brief Method IsExpiredWithin, addr 0x1feb768, size 0xd0, virtual false, abstract: false, final false
  inline bool IsExpiredWithin(::System::TimeSpan preemptExpiryTime);

  static inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* New_ctor();

  static inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* New_ctor(::Amazon::Runtime::ImmutableCredentials* credentials, ::System::DateTime expiration);

  constexpr ::Amazon::Runtime::ImmutableCredentials*& __cordl_internal_get__Credentials_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ImmutableCredentials*> const& __cordl_internal_get__Credentials_k__BackingField() const;

  constexpr ::System::DateTime const& __cordl_internal_get__Expiration_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__Expiration_k__BackingField();

  constexpr void __cordl_internal_set__Credentials_k__BackingField(::Amazon::Runtime::ImmutableCredentials* value);

  constexpr void __cordl_internal_set__Expiration_k__BackingField(::System::DateTime value);

  /// @brief Method .ctor, addr 0x1ff0500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1fe54ac, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::ImmutableCredentials* credentials, ::System::DateTime expiration);

  /// @brief Method get_Credentials, addr 0x1ff04e0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* get_Credentials();

  /// @brief Method get_Expiration, addr 0x1ff04f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_Expiration();

  /// @brief Method set_Credentials, addr 0x1ff04e8, size 0x8, virtual false, abstract: false, final false
  inline void set_Credentials(::Amazon::Runtime::ImmutableCredentials* value);

  /// @brief Method set_Expiration, addr 0x1ff04f8, size 0x8, virtual false, abstract: false, final false
  inline void set_Expiration(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RefreshingAWSCredentials__CredentialsRefreshState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RefreshingAWSCredentials__CredentialsRefreshState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RefreshingAWSCredentials__CredentialsRefreshState(__RefreshingAWSCredentials__CredentialsRefreshState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RefreshingAWSCredentials__CredentialsRefreshState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RefreshingAWSCredentials__CredentialsRefreshState(__RefreshingAWSCredentials__CredentialsRefreshState const&) = delete;

  /// @brief Field <Credentials>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::ImmutableCredentials* ____Credentials_k__BackingField;

  /// @brief Field <Expiration>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ____Expiration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState, ____Credentials_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState, ____Expiration_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: ::<GetCredentialsAsync>d__10
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::RefreshingAWSCredentials::<GetCredentialsAsync>d__10
struct CORDL_TYPE __RefreshingAWSCredentials___GetCredentialsAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1ff0508, size 0x430, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1ff0938, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RefreshingAWSCredentials___GetCredentialsAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::ImmutableCredentials*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::RefreshingAWSCredentials*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>", modifiers: "", def_value: None
  // }]
  constexpr __RefreshingAWSCredentials___GetCredentialsAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::ImmutableCredentials*> __t__builder, ::Amazon::Runtime::RefreshingAWSCredentials* __4__this,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::ImmutableCredentials*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::RefreshingAWSCredentials* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10, __u__2) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::RefreshingAWSCredentials
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::RefreshingAWSCredentials*
class CORDL_TYPE RefreshingAWSCredentials : public ::Amazon::Runtime::AWSCredentials {
public:
  // Declarations
  using CredentialsRefreshState = ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState;

  using _GetCredentialsAsync_d__10 = ::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10;

  __declspec(property(get = get_PreemptExpiryTime, put = set_PreemptExpiryTime))::System::TimeSpan PreemptExpiryTime;

  __declspec(property(get = get_ShouldUpdate)) bool ShouldUpdate;

  /// @brief Field _disposed, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Field _preemptExpiryTime, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__preemptExpiryTime, put = __cordl_internal_set__preemptExpiryTime))::System::TimeSpan _preemptExpiryTime;

  /// @brief Field _updateGeneratedCredentialsSemaphore, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__updateGeneratedCredentialsSemaphore,
                      put = __cordl_internal_set__updateGeneratedCredentialsSemaphore))::System::Threading::SemaphoreSlim* _updateGeneratedCredentialsSemaphore;

  /// @brief Field currentState, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_currentState, put = __cordl_internal_set_currentState))::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* currentState;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ClearCredentials, addr 0x1fec4d4, size 0x8, virtual true, abstract: false, final false
  inline void ClearCredentials();

  /// @brief Method Dispose, addr 0x1ff0468, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1ff0430, size 0x38, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GenerateNewCredentials, addr 0x1ff0330, size 0x40, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* GenerateNewCredentials();

  /// @brief Method GenerateNewCredentialsAsync, addr 0x1ff0370, size 0xc0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* GenerateNewCredentialsAsync();

  /// @brief Method GetCredentials, addr 0x1fefaa4, size 0x114, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* GetCredentials();

  /// @brief Method GetCredentialsAsync, addr 0x1ff020c, size 0x118, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>* GetCredentialsAsync();

  static inline ::Amazon::Runtime::RefreshingAWSCredentials* New_ctor();

  /// @brief Method ShouldUpdateState, addr 0x1fefbb8, size 0x2a4, virtual false, abstract: false, final false
  static inline bool ShouldUpdateState(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* state, ::System::TimeSpan preemptExpiryTime);

  /// @brief Method UpdateToGeneratedCredentials, addr 0x1fefe5c, size 0x3b0, virtual false, abstract: false, final false
  static inline void UpdateToGeneratedCredentials(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* state, ::System::TimeSpan preemptExpiryTime);

  /// @brief Method <GenerateNewCredentialsAsync>b__16_0, addr 0x1ff04d4, size 0xc, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* _GenerateNewCredentialsAsync_b__16_0();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr ::System::TimeSpan const& __cordl_internal_get__preemptExpiryTime() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__preemptExpiryTime();

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__updateGeneratedCredentialsSemaphore();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __cordl_internal_get__updateGeneratedCredentialsSemaphore() const;

  constexpr ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*& __cordl_internal_get_currentState();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> const& __cordl_internal_get_currentState() const;

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  constexpr void __cordl_internal_set__preemptExpiryTime(::System::TimeSpan value);

  constexpr void __cordl_internal_set__updateGeneratedCredentialsSemaphore(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set_currentState(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* value);

  /// @brief Method .ctor, addr 0x1fe4dd8, size 0x130, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PreemptExpiryTime, addr 0x1fefa9c, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_PreemptExpiryTime();

  /// @brief Method get_ShouldUpdate, addr 0x1ff0324, size 0xc, virtual false, abstract: false, final false
  inline bool get_ShouldUpdate();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_PreemptExpiryTime, addr 0x1fe4f08, size 0xdc, virtual false, abstract: false, final false
  inline void set_PreemptExpiryTime(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RefreshingAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RefreshingAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RefreshingAWSCredentials(RefreshingAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RefreshingAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RefreshingAWSCredentials(RefreshingAWSCredentials const&) = delete;

  /// @brief Field _logger, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field currentState, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* ___currentState;

  /// @brief Field _preemptExpiryTime, offset: 0x20, size: 0x8, def value: None
  ::System::TimeSpan ____preemptExpiryTime;

  /// @brief Field _disposed, offset: 0x28, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _updateGeneratedCredentialsSemaphore, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____updateGeneratedCredentialsSemaphore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::RefreshingAWSCredentials, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::RefreshingAWSCredentials, ____logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::RefreshingAWSCredentials, ___currentState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::RefreshingAWSCredentials, ____preemptExpiryTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::RefreshingAWSCredentials, ____disposed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::RefreshingAWSCredentials, ____updateGeneratedCredentialsSemaphore) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::RefreshingAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::RefreshingAWSCredentials*, "Amazon.Runtime", "RefreshingAWSCredentials");
NEED_NO_BOX(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*, "Amazon.Runtime", "RefreshingAWSCredentials/CredentialsRefreshState");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__RefreshingAWSCredentials___GetCredentialsAsync_d__10, "Amazon.Runtime", "RefreshingAWSCredentials/<GetCredentialsAsync>d__10");
