#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HttpResponseMessageBody)
namespace Amazon::Runtime::Internal::Transform {
class IHttpResponseBody;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class HttpResponseMessageBody;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody);
// Type: Amazon.Runtime.Internal.Transform::HttpResponseMessageBody
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::HttpResponseMessageBody*
class CORDL_TYPE HttpResponseMessageBody : public ::System::Object {
public:
  // Declarations
  /// @brief Field _disposeClient, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__disposeClient, put = __cordl_internal_set__disposeClient)) bool _disposeClient;

  /// @brief Field _disposed, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _httpClient, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__httpClient, put = __cordl_internal_set__httpClient))::System::Net::Http::HttpClient* _httpClient;

  /// @brief Field _response, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__response, put = __cordl_internal_set__response))::System::Net::Http::HttpResponseMessage* _response;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IHttpResponseBody"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IHttpResponseBody*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2450278, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x24502e4, size 0x4c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody* New_ctor(::System::Net::Http::HttpResponseMessage* response, ::System::Net::Http::HttpClient* httpClient,
                                                                                          bool disposeClient);

  /// @brief Method OpenResponse, addr 0x2450148, size 0xb8, virtual true, abstract: false, final true
  inline ::System::IO::Stream* OpenResponse();

  /// @brief Method OpenResponseAsync, addr 0x2450200, size 0x78, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenResponseAsync();

  constexpr bool const& __cordl_internal_get__disposeClient() const;

  constexpr bool& __cordl_internal_get__disposeClient();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::System::Net::Http::HttpClient*& __cordl_internal_get__httpClient();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& __cordl_internal_get__httpClient() const;

  constexpr ::System::Net::Http::HttpResponseMessage*& __cordl_internal_get__response();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpResponseMessage*> const& __cordl_internal_get__response() const;

  constexpr void __cordl_internal_set__disposeClient(bool value);

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__httpClient(::System::Net::Http::HttpClient* value);

  constexpr void __cordl_internal_set__response(::System::Net::Http::HttpResponseMessage* value);

  /// @brief Method .ctor, addr 0x244f6f0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpResponseMessage* response, ::System::Net::Http::HttpClient* httpClient, bool disposeClient);

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IHttpResponseBody"
  constexpr ::Amazon::Runtime::Internal::Transform::IHttpResponseBody* i___Amazon__Runtime__Internal__Transform__IHttpResponseBody() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpResponseMessageBody();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpResponseMessageBody", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpResponseMessageBody(HttpResponseMessageBody&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpResponseMessageBody", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpResponseMessageBody(HttpResponseMessageBody const&) = delete;

  /// @brief Field _httpClient, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* ____httpClient;

  /// @brief Field _response, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::HttpResponseMessage* ____response;

  /// @brief Field _disposeClient, offset: 0x20, size: 0x1, def value: None
  bool ____disposeClient;

  /// @brief Field _disposed, offset: 0x21, size: 0x1, def value: None
  bool ____disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody, ____httpClient) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody, ____response) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody, ____disposeClient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody, ____disposed) == 0x21, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*, "Amazon.Runtime.Internal.Transform", "HttpResponseMessageBody");
