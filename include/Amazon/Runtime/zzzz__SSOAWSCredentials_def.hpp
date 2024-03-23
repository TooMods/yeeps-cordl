#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/SharedInterfaces/zzzz__GetSsoTokenResponse_def.hpp"
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SSOAWSCredentials)
namespace Amazon::Runtime::Credentials::Internal {
class SsoTokenCache;
}
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime::SharedInterfaces {
class GetSsoTokenResponse;
}
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonSSOOIDC;
}
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonSSO;
}
namespace Amazon::Runtime {
class ImmutableCredentials;
}
namespace Amazon::Runtime {
class SSOAWSCredentialsOptions;
}
namespace Amazon::Runtime {
class __RefreshingAWSCredentials__CredentialsRefreshState;
}
namespace Amazon::Runtime {
struct __SSOAWSCredentials___GenerateNewCredentialsAsync_d__24;
}
namespace Amazon::Runtime {
struct __SSOAWSCredentials___GetSsoCredentialsAsync_d__27;
}
namespace Amazon::Runtime {
struct __SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29;
}
namespace Amazon::Runtime {
class __SSOAWSCredentials____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
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
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Amazon::Runtime {
class SSOAWSCredentials;
}
namespace Amazon::Runtime {
class __SSOAWSCredentials____c;
}
namespace Amazon::Runtime {
struct __SSOAWSCredentials___GenerateNewCredentialsAsync_d__24;
}
namespace Amazon::Runtime {
struct __SSOAWSCredentials___GetSsoCredentialsAsync_d__27;
}
namespace Amazon::Runtime {
struct __SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SSOAWSCredentials);
MARK_REF_PTR_T(::Amazon::Runtime::__SSOAWSCredentials____c);
MARK_VAL_T(::Amazon::Runtime::__SSOAWSCredentials___GenerateNewCredentialsAsync_d__24);
MARK_VAL_T(::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27);
MARK_VAL_T(::Amazon::Runtime::__SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29);
// Type: ::<GenerateNewCredentialsAsync>d__24
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::SSOAWSCredentials::<GenerateNewCredentialsAsync>d__24
struct CORDL_TYPE __SSOAWSCredentials___GenerateNewCredentialsAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1ff361c, size 0x4dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1ff3af8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SSOAWSCredentials___GenerateNewCredentialsAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::Amazon::Runtime::SSOAWSCredentials*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*>", modifiers: "", def_value: None }]
  constexpr __SSOAWSCredentials___GenerateNewCredentialsAsync_d__24(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> __t__builder,
      ::Amazon::Runtime::SSOAWSCredentials* __4__this,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::SSOAWSCredentials* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__SSOAWSCredentials___GenerateNewCredentialsAsync_d__24, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GenerateNewCredentialsAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GenerateNewCredentialsAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GenerateNewCredentialsAsync_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GenerateNewCredentialsAsync_d__24, __u__1) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::SSOAWSCredentials::<>c*
class CORDL_TYPE __SSOAWSCredentials____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::__SSOAWSCredentials____c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* __9__25_0;

  /// @brief Field <>9__25_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_1, put = setStaticF___9__25_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* __9__25_1;

  static inline ::Amazon::Runtime::__SSOAWSCredentials____c* New_ctor();

  /// @brief Method <ValidateCredentialsInputs>b__25_0, addr 0x1ff3bbc, size 0x40, virtual false, abstract: false, final false
  inline bool _ValidateCredentialsInputs_b__25_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> propNameToValue);

  /// @brief Method <ValidateCredentialsInputs>b__25_1, addr 0x1ff3bfc, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _ValidateCredentialsInputs_b__25_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> propNameToValue);

  /// @brief Method .ctor, addr 0x1ff3bb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::__SSOAWSCredentials____c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* getStaticF___9__25_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* getStaticF___9__25_1();

  static inline void setStaticF___9(::Amazon::Runtime::__SSOAWSCredentials____c* value);

  static inline void setStaticF___9__25_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* value);

  static inline void setStaticF___9__25_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SSOAWSCredentials____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SSOAWSCredentials____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SSOAWSCredentials____c(__SSOAWSCredentials____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SSOAWSCredentials____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SSOAWSCredentials____c(__SSOAWSCredentials____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__SSOAWSCredentials____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
// Type: ::<GetSsoCredentialsAsync>d__27
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::SSOAWSCredentials::<GetSsoCredentialsAsync>d__27
struct CORDL_TYPE __SSOAWSCredentials___GetSsoCredentialsAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1ff3c38, size 0x5f0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1ff4228, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SSOAWSCredentials___GetSsoCredentialsAsync_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::ImmutableCredentials*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::SSOAWSCredentials*", modifiers: "", def_value: None }, CppParam { name: "oidc", ty: "::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC*", modifiers: "", def_value: None
  // }, CppParam { name: "sso", ty: "::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO*", modifiers: "", def_value: None }, CppParam { name: "_tokenCache_5__2", ty:
  // "::Amazon::Runtime::Credentials::Internal::SsoTokenCache*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*>", modifiers: "", def_value: None }]
  constexpr __SSOAWSCredentials___GetSsoCredentialsAsync_d__27(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::ImmutableCredentials*> __t__builder, ::Amazon::Runtime::SSOAWSCredentials* __4__this,
      ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC* oidc, ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO* sso,
      ::Amazon::Runtime::Credentials::Internal::SsoTokenCache* _tokenCache_5__2,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*> __u__1,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::ImmutableCredentials*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::SSOAWSCredentials* __4__this;

  /// @brief Field oidc, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC* oidc;

  /// @brief Field sso, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO* sso;

  /// @brief Field <tokenCache>5__2, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::Credentials::Internal::SsoTokenCache* _tokenCache_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27, oidc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27, sso) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27, _tokenCache_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27, __u__2) == 0x50, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: ::<GetSsoRoleCredentialsAsync>d__29
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::SSOAWSCredentials::<GetSsoRoleCredentialsAsync>d__29
struct CORDL_TYPE __SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1ff4280, size 0x294, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1ff4514, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::ImmutableCredentials*>", modifiers: "", def_value: None }, CppParam { name: "sso", ty:
  // "::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::SSOAWSCredentials*", modifiers: "", def_value: None
  // }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*>", modifiers: "", def_value: None }]
  constexpr __SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::ImmutableCredentials*> __t__builder,
      ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO* sso, ::Amazon::Runtime::SSOAWSCredentials* __4__this, ::StringW accessToken,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::ImmutableCredentials*> __t__builder;

  /// @brief Field sso, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO* sso;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::SSOAWSCredentials* __4__this;

  /// @brief Field accessToken, offset: 0x30, size: 0x8, def value: None
  ::StringW accessToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::ImmutableCredentials*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29, sso) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29, accessToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29, __u__1) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::SSOAWSCredentials
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::SSOAWSCredentials*
class CORDL_TYPE SSOAWSCredentials : public ::Amazon::Runtime::RefreshingAWSCredentials {
public:
  // Declarations
  using _GenerateNewCredentialsAsync_d__24 = ::Amazon::Runtime::__SSOAWSCredentials___GenerateNewCredentialsAsync_d__24;

  using _GetSsoCredentialsAsync_d__27 = ::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27;

  using _GetSsoRoleCredentialsAsync_d__29 = ::Amazon::Runtime::__SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29;

  using __c = ::Amazon::Runtime::__SSOAWSCredentials____c;

  __declspec(property(get = get_AccountId, put = set_AccountId))::StringW AccountId;

  __declspec(property(get = get_Options, put = set_Options))::Amazon::Runtime::SSOAWSCredentialsOptions* Options;

  __declspec(property(get = get_Region, put = set_Region))::StringW Region;

  __declspec(property(get = get_RoleName, put = set_RoleName))::StringW RoleName;

  __declspec(property(get = get_StartUrl, put = set_StartUrl))::StringW StartUrl;

  /// @brief Field <AccountId>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__AccountId_k__BackingField, put = __cordl_internal_set__AccountId_k__BackingField))::StringW _AccountId_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__Options_k__BackingField, put = __cordl_internal_set__Options_k__BackingField))::Amazon::Runtime::SSOAWSCredentialsOptions* _Options_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Region_k__BackingField, put = __cordl_internal_set__Region_k__BackingField))::StringW _Region_k__BackingField;

  /// @brief Field <RoleName>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__RoleName_k__BackingField, put = __cordl_internal_set__RoleName_k__BackingField))::StringW _RoleName_k__BackingField;

  /// @brief Field <StartUrl>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__StartUrl_k__BackingField, put = __cordl_internal_set__StartUrl_k__BackingField))::StringW _StartUrl_k__BackingField;

  /// @brief Field _logger, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Method CreateClient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T CreateClient(::StringW serviceClassName, ::StringW serviceConfigName, ::StringW parentAssemblyName);

  /// @brief Method GenerateNewCredentialsAsync, addr 0x1ff2e5c, size 0x120, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState*>* GenerateNewCredentialsAsync();

  /// @brief Method GetSsoClientName, addr 0x1ff3428, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW GetSsoClientName();

  /// @brief Method GetSsoCredentialsAsync, addr 0x1ff32f0, size 0x138, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>* GetSsoCredentialsAsync(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC* oidc,
                                                                                                              ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO* sso);

  /// @brief Method GetSsoRoleCredentialsAsync, addr 0x1ff34e8, size 0x134, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>* GetSsoRoleCredentialsAsync(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO* sso, ::StringW accessToken);

  static inline ::Amazon::Runtime::SSOAWSCredentials* New_ctor(::StringW accountId, ::StringW region, ::StringW roleName, ::StringW startUrl);

  static inline ::Amazon::Runtime::SSOAWSCredentials* New_ctor(::StringW accountId, ::StringW region, ::StringW roleName, ::StringW startUrl, ::Amazon::Runtime::SSOAWSCredentialsOptions* options);

  /// @brief Method ValidateCredentialsInputs, addr 0x1ff2f7c, size 0x374, virtual false, abstract: false, final false
  inline void ValidateCredentialsInputs();

  constexpr ::StringW const& __cordl_internal_get__AccountId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccountId_k__BackingField();

  constexpr ::Amazon::Runtime::SSOAWSCredentialsOptions*& __cordl_internal_get__Options_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::SSOAWSCredentialsOptions*> const& __cordl_internal_get__Options_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Region_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Region_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RoleName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RoleName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__StartUrl_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__StartUrl_k__BackingField();

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr void __cordl_internal_set__AccountId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Options_k__BackingField(::Amazon::Runtime::SSOAWSCredentialsOptions* value);

  constexpr void __cordl_internal_set__Region_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__RoleName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__StartUrl_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  /// @brief Method .ctor, addr 0x1ff2c80, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW accountId, ::StringW region, ::StringW roleName, ::StringW startUrl);

  /// @brief Method .ctor, addr 0x1ff2d1c, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::StringW accountId, ::StringW region, ::StringW roleName, ::StringW startUrl, ::Amazon::Runtime::SSOAWSCredentialsOptions* options);

  /// @brief Method get_AccountId, addr 0x1ff2c30, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccountId();

  /// @brief Method get_Options, addr 0x1ff2c70, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::SSOAWSCredentialsOptions* get_Options();

  /// @brief Method get_Region, addr 0x1ff2c40, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Region();

  /// @brief Method get_RoleName, addr 0x1ff2c50, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RoleName();

  /// @brief Method get_StartUrl, addr 0x1ff2c60, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StartUrl();

  /// @brief Method set_AccountId, addr 0x1ff2c38, size 0x8, virtual false, abstract: false, final false
  inline void set_AccountId(::StringW value);

  /// @brief Method set_Options, addr 0x1ff2c78, size 0x8, virtual false, abstract: false, final false
  inline void set_Options(::Amazon::Runtime::SSOAWSCredentialsOptions* value);

  /// @brief Method set_Region, addr 0x1ff2c48, size 0x8, virtual false, abstract: false, final false
  inline void set_Region(::StringW value);

  /// @brief Method set_RoleName, addr 0x1ff2c58, size 0x8, virtual false, abstract: false, final false
  inline void set_RoleName(::StringW value);

  /// @brief Method set_StartUrl, addr 0x1ff2c68, size 0x8, virtual false, abstract: false, final false
  inline void set_StartUrl(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SSOAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SSOAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SSOAWSCredentials(SSOAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SSOAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SSOAWSCredentials(SSOAWSCredentials const&) = delete;

  /// @brief Field _logger, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field <AccountId>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____AccountId_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____Region_k__BackingField;

  /// @brief Field <RoleName>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____RoleName_k__BackingField;

  /// @brief Field <StartUrl>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::StringW ____StartUrl_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::Amazon::Runtime::SSOAWSCredentialsOptions* ____Options_k__BackingField;

  /// @brief Field SsoClientTypePublic offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoClientTypePublic{ u"public" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SSOAWSCredentials, 0x68>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SSOAWSCredentials, ____logger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SSOAWSCredentials, ____AccountId_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SSOAWSCredentials, ____Region_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SSOAWSCredentials, ____RoleName_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SSOAWSCredentials, ____StartUrl_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SSOAWSCredentials, ____Options_k__BackingField) == 0x60, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::SSOAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SSOAWSCredentials*, "Amazon.Runtime", "SSOAWSCredentials");
NEED_NO_BOX(::Amazon::Runtime::__SSOAWSCredentials____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__SSOAWSCredentials____c*, "Amazon.Runtime", "SSOAWSCredentials/<>c");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__SSOAWSCredentials___GenerateNewCredentialsAsync_d__24, "Amazon.Runtime", "SSOAWSCredentials/<GenerateNewCredentialsAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__SSOAWSCredentials___GetSsoCredentialsAsync_d__27, "Amazon.Runtime", "SSOAWSCredentials/<GetSsoCredentialsAsync>d__27");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__SSOAWSCredentials___GetSsoRoleCredentialsAsync_d__29, "Amazon.Runtime", "SSOAWSCredentials/<GetSsoRoleCredentialsAsync>d__29");
