#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "Amazon/Util/zzzz__ProcessExecutionResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessAWSCredentials)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime {
struct __ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7;
}
namespace Amazon::Runtime {
class __RefreshingAWSCredentials__CredentialsRefreshState;
}
namespace Amazon::Util {
class ProcessExecutionResult;
}
namespace System::Diagnostics {
class ProcessStartInfo;
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
namespace Amazon::Runtime {
class ProcessAWSCredentials;
}
namespace Amazon::Runtime {
struct __ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ProcessAWSCredentials);
MARK_VAL_T(::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7);
// Type: ::<DetermineProcessCredentialAsync>d__7
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::ProcessAWSCredentials::<DetermineProcessCredentialAsync>d__7
struct CORDL_TYPE __ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1fef5f4, size 0x450, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1fefa44, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::Amazon::Runtime::ProcessAWSCredentials*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Util::ProcessExecutionResult*>", modifiers: "", def_value: None }]
  constexpr __ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> __t__builder,
      ::Amazon::Runtime::ProcessAWSCredentials* __4__this,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Util::ProcessExecutionResult*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::ProcessAWSCredentials* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Util::ProcessExecutionResult*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7, __u__1) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::ProcessAWSCredentials
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ProcessAWSCredentials*
class CORDL_TYPE ProcessAWSCredentials : public ::Amazon::Runtime::RefreshingAWSCredentials {
public:
  // Declarations
  using _DetermineProcessCredentialAsync_d__7 = ::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7;

  /// @brief Field _logger, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Field _processStartInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__processStartInfo, put = __cordl_internal_set__processStartInfo))::System::Diagnostics::ProcessStartInfo* _processStartInfo;

  /// @brief Method DetermineProcessCredential, addr 0x1feec08, size 0x20c, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* DetermineProcessCredential();

  /// @brief Method DetermineProcessCredentialAsync, addr 0x1feee18, size 0x120, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* DetermineProcessCredentialAsync();

  /// @brief Method GenerateNewCredentials, addr 0x1feec04, size 0x4, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* GenerateNewCredentials();

  /// @brief Method GenerateNewCredentialsAsync, addr 0x1feee14, size 0x4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* GenerateNewCredentialsAsync();

  static inline ::Amazon::Runtime::ProcessAWSCredentials* New_ctor(::StringW processCredentialInfo);

  /// @brief Method SetCredentialsRefreshState, addr 0x1feef38, size 0x5e4, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* SetCredentialsRefreshState(::Amazon::Util::ProcessExecutionResult* processInfo);

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr ::System::Diagnostics::ProcessStartInfo*& __cordl_internal_get__processStartInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessStartInfo*> const& __cordl_internal_get__processStartInfo() const;

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  constexpr void __cordl_internal_set__processStartInfo(::System::Diagnostics::ProcessStartInfo* value);

  /// @brief Method .ctor, addr 0x1fee8fc, size 0x308, virtual false, abstract: false, final false
  inline void _ctor(::StringW processCredentialInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProcessAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessAWSCredentials(ProcessAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessAWSCredentials(ProcessAWSCredentials const&) = delete;

  /// @brief Field _logger, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field _processStartInfo, offset: 0x40, size: 0x8, def value: None
  ::System::Diagnostics::ProcessStartInfo* ____processStartInfo;

  /// @brief Field _versionString offset 0xffffffff size 0x8
  static constexpr ::ConstString _versionString{ u"Version" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ProcessAWSCredentials, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::ProcessAWSCredentials, ____logger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ProcessAWSCredentials, ____processStartInfo) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ProcessAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ProcessAWSCredentials*, "Amazon.Runtime", "ProcessAWSCredentials");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__ProcessAWSCredentials___DetermineProcessCredentialAsync_d__7, "Amazon.Runtime", "ProcessAWSCredentials/<DetermineProcessCredentialAsync>d__7");
