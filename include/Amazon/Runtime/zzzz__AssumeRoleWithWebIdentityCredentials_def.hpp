#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AssumeRoleImmutableCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssumeRoleWithWebIdentityCredentials)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonSTS_WebIdentity;
}
namespace Amazon::Runtime {
class AssumeRoleImmutableCredentials;
}
namespace Amazon::Runtime {
class AssumeRoleWithWebIdentityCredentialsOptions;
}
namespace Amazon::Runtime {
struct __AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22;
}
namespace Amazon::Runtime {
class __RefreshingAWSCredentials__CredentialsRefreshState;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::IO {
class FileStream;
}
namespace System::IO {
class StreamReader;
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
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace Amazon::Runtime {
class AssumeRoleWithWebIdentityCredentials;
}
namespace Amazon::Runtime {
struct __AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials);
MARK_VAL_T(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22);
// Type: ::<GenerateNewCredentialsAsync>d__22
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::AssumeRoleWithWebIdentityCredentials::<GenerateNewCredentialsAsync>d__22
struct CORDL_TYPE __AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1fe6dac, size 0xba8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1fe7954, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*", modifiers: "", def_value: None }, CppParam { name: "_token_5__2", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "_retry_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_fileStream_5__4", ty: "::System::IO::FileStream*", modifiers: "", def_value: None }, CppParam {
  // name: "_streamReader_5__5", ty: "::System::IO::StreamReader*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: None }, CppParam { name: "_coreStsClient_5__6", ty:
  // "::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity*", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::AssumeRoleImmutableCredentials*>", modifiers: "", def_value: None }]
  constexpr __AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> __t__builder,
      ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials* __4__this, ::StringW _token_5__2, int32_t _retry_5__3, ::System::IO::FileStream* _fileStream_5__4,
      ::System::IO::StreamReader* _streamReader_5__5, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__1,
      ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity* _coreStsClient_5__6,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::AssumeRoleImmutableCredentials*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials* __4__this;

  /// @brief Field <token>5__2, offset: 0x28, size: 0x8, def value: None
  ::StringW _token_5__2;

  /// @brief Field <retry>5__3, offset: 0x30, size: 0x4, def value: None
  int32_t _retry_5__3;

  /// @brief Field <fileStream>5__4, offset: 0x38, size: 0x8, def value: None
  ::System::IO::FileStream* _fileStream_5__4;

  /// @brief Field <streamReader>5__5, offset: 0x40, size: 0x8, def value: None
  ::System::IO::StreamReader* _streamReader_5__5;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__1;

  /// @brief Field <coreStsClient>5__6, offset: 0x58, size: 0x8, def value: None
  ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity* _coreStsClient_5__6;

  /// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::AssumeRoleImmutableCredentials*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, 0x70>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, _token_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, _retry_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, _fileStream_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, _streamReader_5__5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, _coreStsClient_5__6) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, __u__2) == 0x60, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::AssumeRoleWithWebIdentityCredentials
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AssumeRoleWithWebIdentityCredentials*
class CORDL_TYPE AssumeRoleWithWebIdentityCredentials : public ::Amazon::Runtime::RefreshingAWSCredentials {
public:
  // Declarations
  using _GenerateNewCredentialsAsync_d__22 = ::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22;

  __declspec(property(get = get_RoleArn))::StringW RoleArn;

  __declspec(property(get = get_RoleSessionName))::StringW RoleSessionName;

  __declspec(property(get = get_WebIdentityTokenFile))::StringW WebIdentityTokenFile;

  /// @brief Field <RoleArn>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__RoleArn_k__BackingField, put = __cordl_internal_set__RoleArn_k__BackingField))::StringW _RoleArn_k__BackingField;

  /// @brief Field <RoleSessionName>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__RoleSessionName_k__BackingField, put = __cordl_internal_set__RoleSessionName_k__BackingField))::StringW _RoleSessionName_k__BackingField;

  /// @brief Field <WebIdentityTokenFile>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__WebIdentityTokenFile_k__BackingField,
                      put = __cordl_internal_set__WebIdentityTokenFile_k__BackingField))::StringW _WebIdentityTokenFile_k__BackingField;

  /// @brief Field _defaultSTSClientRegion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaultSTSClientRegion, put = setStaticF__defaultSTSClientRegion))::Amazon::RegionEndpoint* _defaultSTSClientRegion;

  /// @brief Field _logger, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Field _options, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__options, put = __cordl_internal_set__options))::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions* _options;

  /// @brief Field _roleSessionNameDefault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__roleSessionNameDefault, put = setStaticF__roleSessionNameDefault))::StringW _roleSessionNameDefault;

  /// @brief Field _roleSessionNameRegex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__roleSessionNameRegex, put = setStaticF__roleSessionNameRegex))::System::Text::RegularExpressions::Regex* _roleSessionNameRegex;

  /// @brief Method CreateClient, addr 0x1fe69e4, size 0x2c8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity* CreateClient();

  /// @brief Method FromEnvironmentVariables, addr 0x1fe6024, size 0xe4, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials* FromEnvironmentVariables();

  /// @brief Method GenerateNewCredentials, addr 0x1fe6108, size 0x7b4, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* GenerateNewCredentials();

  /// @brief Method GenerateNewCredentialsAsync, addr 0x1fe68bc, size 0x128, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* GenerateNewCredentialsAsync();

  static inline ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials* New_ctor(::StringW webIdentityTokenFile, ::StringW roleArn, ::StringW roleSessionName);

  static inline ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials* New_ctor(::StringW webIdentityTokenFile, ::StringW roleArn, ::StringW roleSessionName,
                                                                                  ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions* options);

  constexpr ::StringW const& __cordl_internal_get__RoleArn_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RoleArn_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RoleSessionName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RoleSessionName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__WebIdentityTokenFile_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__WebIdentityTokenFile_k__BackingField();

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions*& __cordl_internal_get__options();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions*> const& __cordl_internal_get__options() const;

  constexpr void __cordl_internal_set__RoleArn_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__RoleSessionName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__WebIdentityTokenFile_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  constexpr void __cordl_internal_set__options(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions* value);

  /// @brief Method .ctor, addr 0x1fe5c20, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW webIdentityTokenFile, ::StringW roleArn, ::StringW roleSessionName);

  /// @brief Method .ctor, addr 0x1fe5cb4, size 0x370, virtual false, abstract: false, final false
  inline void _ctor(::StringW webIdentityTokenFile, ::StringW roleArn, ::StringW roleSessionName, ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions* options);

  static inline ::Amazon::RegionEndpoint* getStaticF__defaultSTSClientRegion();

  static inline ::StringW getStaticF__roleSessionNameDefault();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF__roleSessionNameRegex();

  /// @brief Method get_RoleArn, addr 0x1fe5c10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RoleArn();

  /// @brief Method get_RoleSessionName, addr 0x1fe5c18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RoleSessionName();

  /// @brief Method get_WebIdentityTokenFile, addr 0x1fe5c08, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_WebIdentityTokenFile();

  static inline void setStaticF__defaultSTSClientRegion(::Amazon::RegionEndpoint* value);

  static inline void setStaticF__roleSessionNameDefault(::StringW value);

  static inline void setStaticF__roleSessionNameRegex(::System::Text::RegularExpressions::Regex* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssumeRoleWithWebIdentityCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssumeRoleWithWebIdentityCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssumeRoleWithWebIdentityCredentials(AssumeRoleWithWebIdentityCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssumeRoleWithWebIdentityCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssumeRoleWithWebIdentityCredentials(AssumeRoleWithWebIdentityCredentials const&) = delete;

  /// @brief Field _logger, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field _options, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions* ____options;

  /// @brief Field <WebIdentityTokenFile>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____WebIdentityTokenFile_k__BackingField;

  /// @brief Field <RoleArn>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____RoleArn_k__BackingField;

  /// @brief Field <RoleSessionName>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::StringW ____RoleSessionName_k__BackingField;

  /// @brief Field PREEMPT_EXPIRY_MINUTES offset 0xffffffff size 0x4
  static constexpr int32_t PREEMPT_EXPIRY_MINUTES{ static_cast<int32_t>(0x5) };

  /// @brief Field RoleArnEnvVariable offset 0xffffffff size 0x8
  static constexpr ::ConstString RoleArnEnvVariable{ u"AWS_ROLE_ARN" };

  /// @brief Field RoleSessionNameEnvVariable offset 0xffffffff size 0x8
  static constexpr ::ConstString RoleSessionNameEnvVariable{ u"AWS_ROLE_SESSION_NAME" };

  /// @brief Field WebIdentityTokenFileEnvVariable offset 0xffffffff size 0x8
  static constexpr ::ConstString WebIdentityTokenFileEnvVariable{ u"AWS_WEB_IDENTITY_TOKEN_FILE" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials, ____logger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials, ____options) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials, ____WebIdentityTokenFile_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials, ____RoleArn_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials, ____RoleSessionName_k__BackingField) == 0x58, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AssumeRoleWithWebIdentityCredentials*, "Amazon.Runtime", "AssumeRoleWithWebIdentityCredentials");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__AssumeRoleWithWebIdentityCredentials___GenerateNewCredentialsAsync_d__22, "Amazon.Runtime",
                       "AssumeRoleWithWebIdentityCredentials/<GenerateNewCredentialsAsync>d__22");
