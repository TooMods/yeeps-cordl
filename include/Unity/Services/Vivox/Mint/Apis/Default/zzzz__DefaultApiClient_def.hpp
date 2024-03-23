#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__BaseApiClient_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClientResponse_def.hpp"
#include "Unity/Services/Vivox/Mint/zzzz__Response_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultApiClient)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Type;
}
namespace Unity::Services::Authentication::Internal {
class IAccessToken;
}
namespace Unity::Services::Vivox::Mint::Apis::Default {
class IDefaultApiClient;
}
namespace Unity::Services::Vivox::Mint::Apis::Default {
struct __DefaultApiClient___ConnectTokenV1Async_d__7;
}
namespace Unity::Services::Vivox::Mint::Apis::Default {
struct __DefaultApiClient___JoinChannelV1Async_d__8;
}
namespace Unity::Services::Vivox::Mint::Default {
class ConnectTokenV1Request;
}
namespace Unity::Services::Vivox::Mint::Default {
class JoinChannelV1Request;
}
namespace Unity::Services::Vivox::Mint::Http {
class HttpClientResponse;
}
namespace Unity::Services::Vivox::Mint::Http {
class IHttpClient;
}
namespace Unity::Services::Vivox::Mint {
class Configuration;
}
namespace Unity::Services::Vivox::Mint {
template <typename T> class Response_1;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Apis::Default {
class DefaultApiClient;
}
namespace Unity::Services::Vivox::Mint::Apis::Default {
struct __DefaultApiClient___ConnectTokenV1Async_d__7;
}
namespace Unity::Services::Vivox::Mint::Apis::Default {
struct __DefaultApiClient___JoinChannelV1Async_d__8;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient);
MARK_VAL_T(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7);
MARK_VAL_T(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8);
// Type: ::<ConnectTokenV1Async>d__7
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Apis::Default {
// Is value type: true
// CS Name: ::DefaultApiClient::<ConnectTokenV1Async>d__7
struct CORDL_TYPE __DefaultApiClient___ConnectTokenV1Async_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x170a530, size 0x51c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x170aa4c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultApiClient___ConnectTokenV1Async_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name:
  // "operationConfiguration", ty: "::Unity::Services::Vivox::Mint::Configuration*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*", modifiers: "", def_value: None }, CppParam { name: "request", ty:
  // "::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request*", modifiers: "", def_value: None }, CppParam { name: "_statusCodeToTypeMap_5__2", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }]
  constexpr __DefaultApiClient___ConnectTokenV1Async_d__7(int32_t __1__state,
                                                          ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __t__builder,
                                                          ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration,
                                                          ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient* __4__this,
                                                          ::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request* request,
                                                          ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* _statusCodeToTypeMap_5__2,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __t__builder;

  /// @brief Field operationConfiguration, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient* __4__this;

  /// @brief Field request, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request* request;

  /// @brief Field <statusCodeToTypeMap>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* _statusCodeToTypeMap_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7, operationConfiguration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7, request) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7, _statusCodeToTypeMap_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Apis::Default
// Type: ::<JoinChannelV1Async>d__8
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Apis::Default {
// Is value type: true
// CS Name: ::DefaultApiClient::<JoinChannelV1Async>d__8
struct CORDL_TYPE __DefaultApiClient___JoinChannelV1Async_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x170aaa4, size 0x51c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x170afc0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultApiClient___JoinChannelV1Async_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name:
  // "operationConfiguration", ty: "::Unity::Services::Vivox::Mint::Configuration*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*", modifiers: "", def_value: None }, CppParam { name: "request", ty:
  // "::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request*", modifiers: "", def_value: None }, CppParam { name: "_statusCodeToTypeMap_5__2", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }]
  constexpr __DefaultApiClient___JoinChannelV1Async_d__8(int32_t __1__state,
                                                         ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __t__builder,
                                                         ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration,
                                                         ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient* __4__this,
                                                         ::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request* request,
                                                         ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* _statusCodeToTypeMap_5__2,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __t__builder;

  /// @brief Field operationConfiguration, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient* __4__this;

  /// @brief Field request, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request* request;

  /// @brief Field <statusCodeToTypeMap>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* _statusCodeToTypeMap_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8, operationConfiguration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8, request) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8, _statusCodeToTypeMap_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8, __u__1) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Apis::Default
// Type: Unity.Services.Vivox.Mint.Apis.Default::DefaultApiClient
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Apis::Default {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Apis.Default::DefaultApiClient*
class CORDL_TYPE DefaultApiClient : public ::Unity::Services::Vivox::Mint::Http::BaseApiClient {
public:
  // Declarations
  using _ConnectTokenV1Async_d__7 = ::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7;

  using _JoinChannelV1Async_d__8 = ::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8;

  __declspec(property(get = get_Configuration, put = set_Configuration))::Unity::Services::Vivox::Mint::Configuration* Configuration;

  /// @brief Field _accessToken, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__accessToken, put = __cordl_internal_set__accessToken))::Unity::Services::Authentication::Internal::IAccessToken* _accessToken;

  /// @brief Field _configuration, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__configuration, put = __cordl_internal_set__configuration))::Unity::Services::Vivox::Mint::Configuration* _configuration;

  /// @brief Convert operator to "::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient"
  constexpr operator ::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*() noexcept;

  /// @brief Method ConnectTokenV1Async, addr 0x170a320, size 0x108, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>* ConnectTokenV1Async(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request* request,
                                                                                                                         ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration);

  /// @brief Method JoinChannelV1Async, addr 0x170a428, size 0x108, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>* JoinChannelV1Async(::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request* request,
                                                                                                                        ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration);

  static inline ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient* New_ctor(::Unity::Services::Vivox::Mint::Http::IHttpClient* httpClient,
                                                                                          ::Unity::Services::Authentication::Internal::IAccessToken* accessToken,
                                                                                          ::Unity::Services::Vivox::Mint::Configuration* configuration);

  constexpr ::Unity::Services::Authentication::Internal::IAccessToken*& __cordl_internal_get__accessToken();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Authentication::Internal::IAccessToken*> const& __cordl_internal_get__accessToken() const;

  constexpr ::Unity::Services::Vivox::Mint::Configuration*& __cordl_internal_get__configuration();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Configuration*> const& __cordl_internal_get__configuration() const;

  constexpr void __cordl_internal_set__accessToken(::Unity::Services::Authentication::Internal::IAccessToken* value);

  constexpr void __cordl_internal_set__configuration(::Unity::Services::Vivox::Mint::Configuration* value);

  /// @brief Method .ctor, addr 0x170a2f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::Mint::Http::IHttpClient* httpClient, ::Unity::Services::Authentication::Internal::IAccessToken* accessToken,
                    ::Unity::Services::Vivox::Mint::Configuration* configuration);

  /// @brief Method get_Configuration, addr 0x170a21c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::Mint::Configuration* get_Configuration();

  /// @brief Convert to "::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient"
  constexpr ::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient* i___Unity__Services__Vivox__Mint__Apis__Default__IDefaultApiClient() noexcept;

  /// @brief Method set_Configuration, addr 0x170a2f0, size 0x8, virtual false, abstract: false, final false
  inline void set_Configuration(::Unity::Services::Vivox::Mint::Configuration* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultApiClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultApiClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultApiClient(DefaultApiClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultApiClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultApiClient(DefaultApiClient const&) = delete;

  /// @brief Field _accessToken, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Authentication::Internal::IAccessToken* ____accessToken;

  /// @brief Field _configuration, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Configuration* ____configuration;

  /// @brief Field _baseTimeout offset 0xffffffff size 0x4
  static constexpr int32_t _baseTimeout{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient, ____accessToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient, ____configuration) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Apis::Default
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*, "Unity.Services.Vivox.Mint.Apis.Default", "DefaultApiClient");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7, "Unity.Services.Vivox.Mint.Apis.Default",
                       "DefaultApiClient/<ConnectTokenV1Async>d__7");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8, "Unity.Services.Vivox.Mint.Apis.Default",
                       "DefaultApiClient/<JoinChannelV1Async>d__8");
