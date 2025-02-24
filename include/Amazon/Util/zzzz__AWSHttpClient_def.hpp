#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AWSHttpClient)
namespace Amazon::Util {
class AWSStreamContent;
}
namespace Amazon::Util {
struct __AWSHttpClient___GetResponseHeadersAsync_d__17;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpMessageHandler;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
class IWebProxy;
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
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
struct TimeSpan;
}
namespace System {
template <typename T1, typename T2, typename T3> class Tuple_3;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Util {
class AWSHttpClient;
}
namespace Amazon::Util {
struct __AWSHttpClient___GetResponseHeadersAsync_d__17;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::AWSHttpClient);
MARK_VAL_T(::Amazon::Util::__AWSHttpClient___GetResponseHeadersAsync_d__17);
// Type: ::<GetResponseHeadersAsync>d__17
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: true
// CS Name: ::AWSHttpClient::<GetResponseHeadersAsync>d__17
struct CORDL_TYPE __AWSHttpClient___GetResponseHeadersAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2210594, size 0x6a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2210c3c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSHttpClient___GetResponseHeadersAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::System::Tuple_3<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*,::System::Net::HttpStatusCode>*>*>",
  // modifiers: "", def_value: None }, CppParam { name: "httpMethodValue", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::Amazon::Util::AWSHttpClient*", modifiers: "", def_value: None }, CppParam { name: "_headers_5__2", ty:
  // "::System::Collections::Generic::List_1<::System::Tuple_3<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*,::System::Net::HttpStatusCode>*>*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None
  // }]
  constexpr __AWSHttpClient___GetResponseHeadersAsync_d__17(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
          ::System::Collections::Generic::List_1<::System::Tuple_3<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Net::HttpStatusCode>*>*>
          __t__builder,
      ::StringW httpMethodValue, ::StringW url, ::Amazon::Util::AWSHttpClient* __4__this,
      ::System::Collections::Generic::List_1<::System::Tuple_3<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Net::HttpStatusCode>*>* _headers_5__2,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
      ::System::Collections::Generic::List_1<::System::Tuple_3<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Net::HttpStatusCode>*>*>
      __t__builder;

  /// @brief Field httpMethodValue, offset: 0x20, size: 0x8, def value: None
  ::StringW httpMethodValue;

  /// @brief Field url, offset: 0x28, size: 0x8, def value: None
  ::StringW url;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Util::AWSHttpClient* __4__this;

  /// @brief Field <headers>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Tuple_3<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Net::HttpStatusCode>*>* _headers_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSHttpClient___GetResponseHeadersAsync_d__17, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSHttpClient___GetResponseHeadersAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSHttpClient___GetResponseHeadersAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSHttpClient___GetResponseHeadersAsync_d__17, httpMethodValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSHttpClient___GetResponseHeadersAsync_d__17, url) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSHttpClient___GetResponseHeadersAsync_d__17, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSHttpClient___GetResponseHeadersAsync_d__17, _headers_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSHttpClient___GetResponseHeadersAsync_d__17, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::Util
// Type: Amazon.Util::AWSHttpClient
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::AWSHttpClient*
class CORDL_TYPE AWSHttpClient : public ::System::Object {
public:
  // Declarations
  using _GetResponseHeadersAsync_d__17 = ::Amazon::Util::__AWSHttpClient___GetResponseHeadersAsync_d__17;

  __declspec(property(get = get_BaseAddress, put = set_BaseAddress))::System::Uri* BaseAddress;

  __declspec(property(get = get_MaxResponseContentBufferSize, put = set_MaxResponseContentBufferSize)) int64_t MaxResponseContentBufferSize;

  __declspec(property(get = get_Timeout, put = set_Timeout))::System::TimeSpan Timeout;

  /// @brief Field _httpClient, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__httpClient, put = __cordl_internal_set__httpClient))::System::Net::Http::HttpClient* _httpClient;

  /// @brief Field disposed, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2210478, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x22104e4, size 0x38, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetResponseHeadersAsync, addr 0x2210340, size 0x138, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<
      ::System::Collections::Generic::List_1<::System::Tuple_3<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Net::HttpStatusCode>*>*>*
  GetResponseHeadersAsync(::StringW httpMethodValue, ::StringW url);

  /// @brief Method GetStreamAsync, addr 0x220ff4c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetStreamAsync(::StringW requestUri);

  /// @brief Method IsHttpInnerException, addr 0x221051c, size 0x78, virtual false, abstract: false, final false
  static inline bool IsHttpInnerException(::System::Exception* exception);

  static inline ::Amazon::Util::AWSHttpClient* New_ctor();

  static inline ::Amazon::Util::AWSHttpClient* New_ctor(::System::Net::Http::HttpMessageHandler* handler);

  static inline ::Amazon::Util::AWSHttpClient* New_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler);

  static inline ::Amazon::Util::AWSHttpClient* New_ctor(::System::Net::IWebProxy* proxy, bool useProxy);

  /// @brief Method PutRequestUriAsync, addr 0x220ff68, size 0x3d8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PutRequestUriAsync(::StringW requestUri, ::Amazon::Util::AWSStreamContent* content,
                                                              ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* requestHeaders);

  constexpr ::System::Net::Http::HttpClient*& __cordl_internal_get__httpClient();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& __cordl_internal_get__httpClient() const;

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr void __cordl_internal_set__httpClient(::System::Net::Http::HttpClient* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  /// @brief Method .ctor, addr 0x220fc6c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x220fda4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpMessageHandler* handler);

  /// @brief Method .ctor, addr 0x220fe20, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler);

  /// @brief Method .ctor, addr 0x220fcd8, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IWebProxy* proxy, bool useProxy);

  /// @brief Method get_BaseAddress, addr 0x220fea4, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Uri* get_BaseAddress();

  /// @brief Method get_MaxResponseContentBufferSize, addr 0x220ff14, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_MaxResponseContentBufferSize();

  /// @brief Method get_Timeout, addr 0x220fedc, size 0x1c, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_Timeout();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_BaseAddress, addr 0x220fec0, size 0x1c, virtual false, abstract: false, final false
  inline void set_BaseAddress(::System::Uri* value);

  /// @brief Method set_MaxResponseContentBufferSize, addr 0x220ff30, size 0x1c, virtual false, abstract: false, final false
  inline void set_MaxResponseContentBufferSize(int64_t value);

  /// @brief Method set_Timeout, addr 0x220fef8, size 0x1c, virtual false, abstract: false, final false
  inline void set_Timeout(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSHttpClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSHttpClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSHttpClient(AWSHttpClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSHttpClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSHttpClient(AWSHttpClient const&) = delete;

  /// @brief Field _httpClient, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* ____httpClient;

  /// @brief Field disposed, offset: 0x18, size: 0x1, def value: None
  bool ___disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::AWSHttpClient, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::AWSHttpClient, ____httpClient) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::AWSHttpClient, ___disposed) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::AWSHttpClient);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::AWSHttpClient*, "Amazon.Util", "AWSHttpClient");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSHttpClient___GetResponseHeadersAsync_d__17, "Amazon.Util", "AWSHttpClient/<GetResponseHeadersAsync>d__17");
