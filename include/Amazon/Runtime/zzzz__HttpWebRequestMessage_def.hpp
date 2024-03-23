#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebRequestMessage)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon::Runtime {
template <typename TRequestContent> class IHttpRequest_1;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace Amazon::Runtime {
class StreamTransferProgressArgs;
}
namespace Amazon::Runtime {
struct __HttpWebRequestMessage___GetResponseAsync_d__20;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
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
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime {
class HttpWebRequestMessage;
}
namespace Amazon::Runtime {
struct __HttpWebRequestMessage___GetResponseAsync_d__20;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::HttpWebRequestMessage);
MARK_VAL_T(::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20);
// Type: ::<GetResponseAsync>d__20
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::HttpWebRequestMessage::<GetResponseAsync>d__20
struct CORDL_TYPE __HttpWebRequestMessage___GetResponseAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x201d0f4, size 0x5a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x201d69c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpWebRequestMessage___GetResponseAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::HttpWebRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value:
  // None }]
  constexpr __HttpWebRequestMessage___GetResponseAsync_d__20(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*> __t__builder,
      ::Amazon::Runtime::HttpWebRequestMessage* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::HttpWebRequestMessage* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20, __u__1) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::HttpWebRequestMessage
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::HttpWebRequestMessage*
class CORDL_TYPE HttpWebRequestMessage : public ::System::Object {
public:
  // Declarations
  using _GetResponseAsync_d__20 = ::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20;

  /// @brief Field ContentHeaderNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ContentHeaderNames, put = setStaticF_ContentHeaderNames))::System::Collections::Generic::HashSet_1<::StringW>* ContentHeaderNames;

  __declspec(property(get = get_HttpClient))::System::Net::Http::HttpClient* HttpClient;

  __declspec(property(get = get_Method, put = set_Method))::StringW Method;

  __declspec(property(get = get_Request))::System::Net::Http::HttpRequestMessage* Request;

  __declspec(property(get = get_RequestUri))::System::Uri* RequestUri;

  /// @brief Field _clientConfig, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__clientConfig, put = __cordl_internal_set__clientConfig))::Amazon::Runtime::IClientConfig* _clientConfig;

  /// @brief Field _disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _httpClient, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__httpClient, put = __cordl_internal_set__httpClient))::System::Net::Http::HttpClient* _httpClient;

  /// @brief Field _request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request))::System::Net::Http::HttpRequestMessage* _request;

  /// @brief Convert operator to "::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>"
  constexpr operator ::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Abort, addr 0x201c28c, size 0x4, virtual true, abstract: false, final true
  inline void Abort();

  /// @brief Method ConfigureRequest, addr 0x201b96c, size 0x164, virtual true, abstract: false, final true
  inline void ConfigureRequest(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method Dispose, addr 0x201cd60, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x201cdd0, size 0x34, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetRequestContent, addr 0x201bed8, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Net::Http::HttpContent* GetRequestContent();

  /// @brief Method GetRequestContentAsync, addr 0x201bfc8, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpContent*>* GetRequestContentAsync();

  /// @brief Method GetResponse, addr 0x201c044, size 0x128, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* GetResponse();

  /// @brief Method GetResponseAsync, addr 0x201c16c, size 0x120, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*>* GetResponseAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::Runtime::HttpWebRequestMessage* New_ctor(::System::Net::Http::HttpClient* httpClient, ::System::Uri* requestUri, ::Amazon::Runtime::IClientConfig* config);

  /// @brief Method SetRequestHeaders, addr 0x201bad0, size 0x408, virtual true, abstract: false, final true
  inline void SetRequestHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers);

  /// @brief Method SetupProgressListeners, addr 0x201ce04, size 0x134, virtual true, abstract: false, final true
  inline ::System::IO::Stream* SetupProgressListeners(::System::IO::Stream* originalStream, int64_t progressUpdateInterval, ::System::Object* sender,
                                                      ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* callback);

  /// @brief Method WriteContentHeaders, addr 0x201c518, size 0x75c, virtual false, abstract: false, final false
  inline void WriteContentHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* contentHeaders);

  /// @brief Method WriteToRequestBody, addr 0x201cc74, size 0xec, virtual true, abstract: false, final true
  inline void WriteToRequestBody(::System::Net::Http::HttpContent* requestContent, ::ArrayW<uint8_t, ::Array<uint8_t>*> content,
                                 ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* contentHeaders);

  /// @brief Method WriteToRequestBody, addr 0x201c290, size 0x288, virtual true, abstract: false, final true
  inline void WriteToRequestBody(::System::Net::Http::HttpContent* requestContent, ::System::IO::Stream* contentStream,
                                 ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* contentHeaders, ::Amazon::Runtime::IRequestContext* requestContext);

  constexpr ::Amazon::Runtime::IClientConfig*& __cordl_internal_get__clientConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IClientConfig*> const& __cordl_internal_get__clientConfig() const;

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::System::Net::Http::HttpClient*& __cordl_internal_get__httpClient();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& __cordl_internal_get__httpClient() const;

  constexpr ::System::Net::Http::HttpRequestMessage*& __cordl_internal_get__request();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpRequestMessage*> const& __cordl_internal_get__request() const;

  constexpr void __cordl_internal_set__clientConfig(::Amazon::Runtime::IClientConfig* value);

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__httpClient(::System::Net::Http::HttpClient* value);

  constexpr void __cordl_internal_set__request(::System::Net::Http::HttpRequestMessage* value);

  /// @brief Method .ctor, addr 0x201adf8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpClient* httpClient, ::System::Uri* requestUri, ::Amazon::Runtime::IClientConfig* config);

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_ContentHeaderNames();

  /// @brief Method get_HttpClient, addr 0x201b89c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Http::HttpClient* get_HttpClient();

  /// @brief Method get_Method, addr 0x201b8ac, size 0x24, virtual true, abstract: false, final true
  inline ::StringW get_Method();

  /// @brief Method get_Request, addr 0x201b8a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Http::HttpRequestMessage* get_Request();

  /// @brief Method get_RequestUri, addr 0x201b950, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Uri* get_RequestUri();

  /// @brief Convert to "::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>"
  constexpr ::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>* i___Amazon__Runtime__IHttpRequest_1___System__Net__Http__HttpContent__() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_ContentHeaderNames(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method set_Method, addr 0x201b8d0, size 0x80, virtual true, abstract: false, final true
  inline void set_Method(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequestMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequestMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpWebRequestMessage(HttpWebRequestMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequestMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpWebRequestMessage(HttpWebRequestMessage const&) = delete;

  /// @brief Field _disposed, offset: 0x10, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _request, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::HttpRequestMessage* ____request;

  /// @brief Field _httpClient, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* ____httpClient;

  /// @brief Field _clientConfig, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::IClientConfig* ____clientConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::HttpWebRequestMessage, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::HttpWebRequestMessage, ____disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::HttpWebRequestMessage, ____request) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::HttpWebRequestMessage, ____httpClient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::HttpWebRequestMessage, ____clientConfig) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::HttpWebRequestMessage);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::HttpWebRequestMessage*, "Amazon.Runtime", "HttpWebRequestMessage");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20, "Amazon.Runtime", "HttpWebRequestMessage/<GetResponseAsync>d__20");
