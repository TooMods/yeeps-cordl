#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IHttpRequest_1)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime {
class IRequestContext;
}
namespace Amazon::Runtime {
class StreamTransferProgressArgs;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::IO {
class Stream;
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
template <typename TRequestContent> class IHttpRequest_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::IHttpRequest_1);
// Type: Amazon.Runtime::IHttpRequest`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// cpp template
template <typename TRequestContent>
// Is value type: false
// CS Name: ::Amazon.Runtime::IHttpRequest`1<TRequestContent>*
class CORDL_TYPE IHttpRequest_1 {
public:
  // Declarations
  __declspec(property(get = get_Method, put = set_Method))::StringW Method;

  __declspec(property(get = get_RequestUri))::System::Uri* RequestUri;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Abort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Abort();

  /// @brief Method ConfigureRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ConfigureRequest(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method GetRequestContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TRequestContent GetRequestContent();

  /// @brief Method GetRequestContentAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<TRequestContent>* GetRequestContentAsync();

  /// @brief Method GetResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* GetResponse();

  /// @brief Method GetResponseAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*>* GetResponseAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SetRequestHeaders, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRequestHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers);

  /// @brief Method SetupProgressListeners, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IO::Stream* SetupProgressListeners(::System::IO::Stream* originalStream, int64_t progressUpdateInterval, ::System::Object* sender,
                                                      ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* callback);

  /// @brief Method WriteToRequestBody, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteToRequestBody(TRequestContent requestContent, ::ArrayW<uint8_t, ::Array<uint8_t>*> content, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* contentHeaders);

  /// @brief Method WriteToRequestBody, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteToRequestBody(TRequestContent requestContent, ::System::IO::Stream* contentStream, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* contentHeaders,
                                 ::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method get_Method, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Method();

  /// @brief Method get_RequestUri, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Uri* get_RequestUri();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_Method, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Method(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "IHttpRequest_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHttpRequest_1(IHttpRequest_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHttpRequest_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHttpRequest_1(IHttpRequest_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::IHttpRequest_1, "Amazon.Runtime", "IHttpRequest`1");
