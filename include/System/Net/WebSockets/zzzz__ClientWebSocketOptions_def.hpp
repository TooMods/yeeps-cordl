#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientWebSocketOptions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net {
class CookieContainer;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System {
template <typename T> struct ArraySegment_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::WebSockets {
class ClientWebSocketOptions;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebSockets::ClientWebSocketOptions);
// Type: System.Net.WebSockets::ClientWebSocketOptions
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: ::System.Net.WebSockets::ClientWebSocketOptions*
class CORDL_TYPE ClientWebSocketOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Buffer))::System::Nullable_1<::System::ArraySegment_1<uint8_t>> Buffer;

  __declspec(property(get = get_ClientCertificates))::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ClientCertificates;

  __declspec(property(get = get_Cookies))::System::Net::CookieContainer* Cookies;

  __declspec(property(get = get_KeepAliveInterval))::System::TimeSpan KeepAliveInterval;

  __declspec(property(put = set_Proxy))::System::Net::IWebProxy* Proxy;

  __declspec(property(get = get_ReceiveBufferSize)) int32_t ReceiveBufferSize;

  __declspec(property(get = get_RequestHeaders))::System::Net::WebHeaderCollection* RequestHeaders;

  __declspec(property(get = get_RequestedSubProtocols))::System::Collections::Generic::List_1<::StringW>* RequestedSubProtocols;

  __declspec(property(get = get_SendBufferSize)) int32_t SendBufferSize;

  /// @brief Field _buffer, offset 0x50, size 0x18
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer))::System::Nullable_1<::System::ArraySegment_1<uint8_t>> _buffer;

  /// @brief Field _clientCertificates, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__clientCertificates,
                      put = __cordl_internal_set__clientCertificates))::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _clientCertificates;

  /// @brief Field _cookies, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__cookies, put = __cordl_internal_set__cookies))::System::Net::CookieContainer* _cookies;

  /// @brief Field _isReadOnly, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isReadOnly, put = __cordl_internal_set__isReadOnly)) bool _isReadOnly;

  /// @brief Field _keepAliveInterval, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__keepAliveInterval, put = __cordl_internal_set__keepAliveInterval))::System::TimeSpan _keepAliveInterval;

  /// @brief Field _proxy, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__proxy, put = __cordl_internal_set__proxy))::System::Net::IWebProxy* _proxy;

  /// @brief Field _receiveBufferSize, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__receiveBufferSize, put = __cordl_internal_set__receiveBufferSize)) int32_t _receiveBufferSize;

  /// @brief Field _requestHeaders, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__requestHeaders, put = __cordl_internal_set__requestHeaders))::System::Net::WebHeaderCollection* _requestHeaders;

  /// @brief Field _requestedSubProtocols, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__requestedSubProtocols, put = __cordl_internal_set__requestedSubProtocols))::System::Collections::Generic::List_1<::StringW>* _requestedSubProtocols;

  /// @brief Field _sendBufferSize, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__sendBufferSize, put = __cordl_internal_set__sendBufferSize)) int32_t _sendBufferSize;

  /// @brief Method AddSubProtocol, addr 0x2c98cb4, size 0x25c, virtual false, abstract: false, final false
  inline void AddSubProtocol(::StringW subProtocol);

  static inline ::System::Net::WebSockets::ClientWebSocketOptions* New_ctor();

  /// @brief Method SetToReadOnly, addr 0x2c98018, size 0xc, virtual false, abstract: false, final false
  inline void SetToReadOnly();

  /// @brief Method ThrowIfReadOnly, addr 0x2c98be0, size 0x60, virtual false, abstract: false, final false
  inline void ThrowIfReadOnly();

  constexpr ::System::Nullable_1<::System::ArraySegment_1<uint8_t>> const& __cordl_internal_get__buffer() const;

  constexpr ::System::Nullable_1<::System::ArraySegment_1<uint8_t>>& __cordl_internal_get__buffer();

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get__clientCertificates();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*> const& __cordl_internal_get__clientCertificates() const;

  constexpr ::System::Net::CookieContainer*& __cordl_internal_get__cookies();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieContainer*> const& __cordl_internal_get__cookies() const;

  constexpr bool const& __cordl_internal_get__isReadOnly() const;

  constexpr bool& __cordl_internal_get__isReadOnly();

  constexpr ::System::TimeSpan const& __cordl_internal_get__keepAliveInterval() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__keepAliveInterval();

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get__proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __cordl_internal_get__proxy() const;

  constexpr int32_t const& __cordl_internal_get__receiveBufferSize() const;

  constexpr int32_t& __cordl_internal_get__receiveBufferSize();

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__requestHeaders();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& __cordl_internal_get__requestHeaders() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__requestedSubProtocols();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__requestedSubProtocols() const;

  constexpr int32_t const& __cordl_internal_get__sendBufferSize() const;

  constexpr int32_t& __cordl_internal_get__sendBufferSize();

  constexpr void __cordl_internal_set__buffer(::System::Nullable_1<::System::ArraySegment_1<uint8_t>> value);

  constexpr void __cordl_internal_set__clientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  constexpr void __cordl_internal_set__cookies(::System::Net::CookieContainer* value);

  constexpr void __cordl_internal_set__isReadOnly(bool value);

  constexpr void __cordl_internal_set__keepAliveInterval(::System::TimeSpan value);

  constexpr void __cordl_internal_set__proxy(::System::Net::IWebProxy* value);

  constexpr void __cordl_internal_set__receiveBufferSize(int32_t value);

  constexpr void __cordl_internal_set__requestHeaders(::System::Net::WebHeaderCollection* value);

  constexpr void __cordl_internal_set__requestedSubProtocols(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__sendBufferSize(int32_t value);

  /// @brief Method .ctor, addr 0x2c97b2c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Buffer, addr 0x2c98f28, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::ArraySegment_1<uint8_t>> get_Buffer();

  /// @brief Method get_ClientCertificates, addr 0x2c98c40, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();

  /// @brief Method get_Cookies, addr 0x2c98cac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::CookieContainer* get_Cookies();

  /// @brief Method get_KeepAliveInterval, addr 0x2c98f10, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_KeepAliveInterval();

  /// @brief Method get_ReceiveBufferSize, addr 0x2c98f18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ReceiveBufferSize();

  /// @brief Method get_RequestHeaders, addr 0x2c98bd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_RequestHeaders();

  /// @brief Method get_RequestedSubProtocols, addr 0x2c98bd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_RequestedSubProtocols();

  /// @brief Method get_SendBufferSize, addr 0x2c98f20, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SendBufferSize();

  /// @brief Method set_Proxy, addr 0x2c97bec, size 0x24, virtual false, abstract: false, final false
  inline void set_Proxy(::System::Net::IWebProxy* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientWebSocketOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClientWebSocketOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientWebSocketOptions(ClientWebSocketOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientWebSocketOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientWebSocketOptions(ClientWebSocketOptions const&) = delete;

  /// @brief Field _isReadOnly, offset: 0x10, size: 0x1, def value: None
  bool ____isReadOnly;

  /// @brief Field _requestedSubProtocols, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____requestedSubProtocols;

  /// @brief Field _requestHeaders, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ____requestHeaders;

  /// @brief Field _keepAliveInterval, offset: 0x28, size: 0x8, def value: None
  ::System::TimeSpan ____keepAliveInterval;

  /// @brief Field _proxy, offset: 0x30, size: 0x8, def value: None
  ::System::Net::IWebProxy* ____proxy;

  /// @brief Field _clientCertificates, offset: 0x38, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ____clientCertificates;

  /// @brief Field _cookies, offset: 0x40, size: 0x8, def value: None
  ::System::Net::CookieContainer* ____cookies;

  /// @brief Field _receiveBufferSize, offset: 0x48, size: 0x4, def value: None
  int32_t ____receiveBufferSize;

  /// @brief Field _sendBufferSize, offset: 0x4c, size: 0x4, def value: None
  int32_t ____sendBufferSize;

  /// @brief Field _buffer, offset: 0x50, size: 0x18, def value: None
  ::System::Nullable_1<::System::ArraySegment_1<uint8_t>> ____buffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::ClientWebSocketOptions, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____isReadOnly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____requestedSubProtocols) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____requestHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____keepAliveInterval) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____proxy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____clientCertificates) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____cookies) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____receiveBufferSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____sendBufferSize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____buffer) == 0x50, "Offset mismatch!");

} // namespace System::Net::WebSockets
NEED_NO_BOX(::System::Net::WebSockets::ClientWebSocketOptions);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::ClientWebSocketOptions*, "System.Net.WebSockets", "ClientWebSocketOptions");
