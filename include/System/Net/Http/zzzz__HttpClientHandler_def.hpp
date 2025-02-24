#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__ClientCertificateOption_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpClientHandler)
namespace System::Net::Http {
struct ClientCertificateOption;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class IMonoHttpClientHandler;
}
namespace System::Net::Http {
class __HttpClientHandler____c;
}
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
namespace System::Net {
struct DecompressionMethods;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http {
class HttpClientHandler;
}
namespace System::Net::Http {
class __HttpClientHandler____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpClientHandler);
MARK_REF_PTR_T(::System::Net::Http::__HttpClientHandler____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// CS Name: ::HttpClientHandler::<>c*
class CORDL_TYPE __HttpClientHandler____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Net::Http::__HttpClientHandler____c* __9;

  /// @brief Field <>9__23_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__23_1, put = setStaticF___9__23_1))::System::Net::Security::LocalCertificateSelectionCallback* __9__23_1;

  static inline ::System::Net::Http::__HttpClientHandler____c* New_ctor();

  /// @brief Method .ctor, addr 0x1616590, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_ClientCertificateOptions>b__23_1, addr 0x1616598, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
  _set_ClientCertificateOptions_b__23_1(::System::Object* sender, ::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                        ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers);

  static inline ::System::Net::Http::__HttpClientHandler____c* getStaticF___9();

  static inline ::System::Net::Security::LocalCertificateSelectionCallback* getStaticF___9__23_1();

  static inline void setStaticF___9(::System::Net::Http::__HttpClientHandler____c* value);

  static inline void setStaticF___9__23_1(::System::Net::Security::LocalCertificateSelectionCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClientHandler____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HttpClientHandler____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HttpClientHandler____c(__HttpClientHandler____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HttpClientHandler____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HttpClientHandler____c(__HttpClientHandler____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpClientHandler____c, 0x10>, "Size mismatch!");

} // namespace System::Net::Http
// Type: System.Net.Http::HttpClientHandler
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// CS Name: ::System.Net.Http::HttpClientHandler*
class CORDL_TYPE HttpClientHandler : public ::System::Net::Http::HttpMessageHandler {
public:
  // Declarations
  using __c = ::System::Net::Http::__HttpClientHandler____c;

  __declspec(property(put = set_AllowAutoRedirect)) bool AllowAutoRedirect;

  __declspec(property(put = set_AutomaticDecompression))::System::Net::DecompressionMethods AutomaticDecompression;

  __declspec(property(get = get_ClientCertificateOptions, put = set_ClientCertificateOptions))::System::Net::Http::ClientCertificateOption ClientCertificateOptions;

  __declspec(property(get = get_ClientCertificates))::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ClientCertificates;

  __declspec(property(put = set_MaxConnectionsPerServer)) int32_t MaxConnectionsPerServer;

  __declspec(property(get = get_Proxy, put = set_Proxy))::System::Net::IWebProxy* Proxy;

  __declspec(property(put = set_UseProxy)) bool UseProxy;

  /// @brief Field _clientCertificateOptions, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__clientCertificateOptions,
                      put = __cordl_internal_set__clientCertificateOptions))::System::Net::Http::ClientCertificateOption _clientCertificateOptions;

  /// @brief Field _delegatingHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__delegatingHandler, put = __cordl_internal_set__delegatingHandler))::System::Net::Http::IMonoHttpClientHandler* _delegatingHandler;

  /// @brief Method CreateDefaultHandler, addr 0x1615718, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Net::Http::IMonoHttpClientHandler* CreateDefaultHandler();

  /// @brief Method Dispose, addr 0x1615c10, size 0xb4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::Net::Http::HttpClientHandler* New_ctor();

  static inline ::System::Net::Http::HttpClientHandler* New_ctor(::System::Net::Http::IMonoHttpClientHandler* handler);

  /// @brief Method SendAsync, addr 0x161645c, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SetWebRequestTimeout, addr 0x16163b0, size 0xac, virtual false, abstract: false, final false
  inline void SetWebRequestTimeout(::System::TimeSpan timeout);

  /// @brief Method ThrowForModifiedManagedSslOptionsIfStarted, addr 0x1615cc8, size 0x104, virtual false, abstract: false, final false
  inline void ThrowForModifiedManagedSslOptionsIfStarted();

  constexpr ::System::Net::Http::ClientCertificateOption const& __cordl_internal_get__clientCertificateOptions() const;

  constexpr ::System::Net::Http::ClientCertificateOption& __cordl_internal_get__clientCertificateOptions();

  constexpr ::System::Net::Http::IMonoHttpClientHandler*& __cordl_internal_get__delegatingHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::IMonoHttpClientHandler*> const& __cordl_internal_get__delegatingHandler() const;

  constexpr void __cordl_internal_set__clientCertificateOptions(::System::Net::Http::ClientCertificateOption value);

  constexpr void __cordl_internal_set__delegatingHandler(::System::Net::Http::IMonoHttpClientHandler* value);

  /// @brief Method .ctor, addr 0x1615920, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1615958, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::IMonoHttpClientHandler* handler);

  /// @brief Method <set_ClientCertificateOptions>b__23_0, addr 0x1616518, size 0x14, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
  _set_ClientCertificateOptions_b__23_0(::System::Object* sender, ::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                        ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers);

  /// @brief Method get_ClientCertificateOptions, addr 0x1615dcc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Http::ClientCertificateOption get_ClientCertificateOptions();

  /// @brief Method get_ClientCertificates, addr 0x1615dd4, size 0x1dc, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();

  /// @brief Method get_Proxy, addr 0x1616108, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Net::IWebProxy* get_Proxy();

  /// @brief Method set_AllowAutoRedirect, addr 0x1616258, size 0xac, virtual false, abstract: false, final false
  inline void set_AllowAutoRedirect(bool value);

  /// @brief Method set_AutomaticDecompression, addr 0x1615fb0, size 0xac, virtual false, abstract: false, final false
  inline void set_AutomaticDecompression(::System::Net::DecompressionMethods value);

  /// @brief Method set_ClientCertificateOptions, addr 0x1615990, size 0x280, virtual false, abstract: false, final false
  inline void set_ClientCertificateOptions(::System::Net::Http::ClientCertificateOption value);

  /// @brief Method set_MaxConnectionsPerServer, addr 0x1616304, size 0xac, virtual false, abstract: false, final false
  inline void set_MaxConnectionsPerServer(int32_t value);

  /// @brief Method set_Proxy, addr 0x16161ac, size 0xac, virtual false, abstract: false, final false
  inline void set_Proxy(::System::Net::IWebProxy* value);

  /// @brief Method set_UseProxy, addr 0x161605c, size 0xac, virtual false, abstract: false, final false
  inline void set_UseProxy(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpClientHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpClientHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpClientHandler(HttpClientHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpClientHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpClientHandler(HttpClientHandler const&) = delete;

  /// @brief Field _delegatingHandler, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::IMonoHttpClientHandler* ____delegatingHandler;

  /// @brief Field _clientCertificateOptions, offset: 0x18, size: 0x4, def value: None
  ::System::Net::Http::ClientCertificateOption ____clientCertificateOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpClientHandler, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClientHandler, ____delegatingHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClientHandler, ____clientCertificateOptions) == 0x18, "Offset mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpClientHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpClientHandler*, "System.Net.Http", "HttpClientHandler");
NEED_NO_BOX(::System::Net::Http::__HttpClientHandler____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpClientHandler____c*, "System.Net.Http", "HttpClientHandler/<>c");
