#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IMonoHttpClientHandler)
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
namespace System::Net {
struct DecompressionMethods;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http {
class IMonoHttpClientHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::IMonoHttpClientHandler);
// Type: System.Net.Http::IMonoHttpClientHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// CS Name: ::System.Net.Http::IMonoHttpClientHandler*
class CORDL_TYPE IMonoHttpClientHandler {
public:
  // Declarations
  __declspec(property(put = set_AllowAutoRedirect)) bool AllowAutoRedirect;

  __declspec(property(put = set_AutomaticDecompression))::System::Net::DecompressionMethods AutomaticDecompression;

  __declspec(property(put = set_MaxConnectionsPerServer)) int32_t MaxConnectionsPerServer;

  __declspec(property(get = get_Proxy, put = set_Proxy))::System::Net::IWebProxy* Proxy;

  __declspec(property(get = get_SslOptions, put = set_SslOptions))::System::Net::Security::SslClientAuthenticationOptions* SslOptions;

  __declspec(property(put = set_UseProxy)) bool UseProxy;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method SendAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SetWebRequestTimeout, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetWebRequestTimeout(::System::TimeSpan timeout);

  /// @brief Method get_Proxy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Net::IWebProxy* get_Proxy();

  /// @brief Method get_SslOptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Net::Security::SslClientAuthenticationOptions* get_SslOptions();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_AllowAutoRedirect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_AllowAutoRedirect(bool value);

  /// @brief Method set_AutomaticDecompression, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_AutomaticDecompression(::System::Net::DecompressionMethods value);

  /// @brief Method set_MaxConnectionsPerServer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_MaxConnectionsPerServer(int32_t value);

  /// @brief Method set_Proxy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Proxy(::System::Net::IWebProxy* value);

  /// @brief Method set_SslOptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_SslOptions(::System::Net::Security::SslClientAuthenticationOptions* value);

  /// @brief Method set_UseProxy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_UseProxy(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IMonoHttpClientHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMonoHttpClientHandler(IMonoHttpClientHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMonoHttpClientHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMonoHttpClientHandler(IMonoHttpClientHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::IMonoHttpClientHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::IMonoHttpClientHandler*, "System.Net.Http", "IMonoHttpClientHandler");
