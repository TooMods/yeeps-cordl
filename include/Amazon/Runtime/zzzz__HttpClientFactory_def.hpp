#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpClientFactory)
namespace Amazon::Runtime {
class IClientConfig;
}
namespace System::Net::Http {
class HttpClient;
}
// Forward declare root types
namespace Amazon::Runtime {
class HttpClientFactory;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::HttpClientFactory);
// Type: Amazon.Runtime::HttpClientFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::HttpClientFactory*
class CORDL_TYPE HttpClientFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateHttpClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Net::Http::HttpClient* CreateHttpClient(::Amazon::Runtime::IClientConfig* clientConfig);

  /// @brief Method DisposeHttpClientsAfterUse, addr 0x201a3f4, size 0x20, virtual true, abstract: false, final false
  inline bool DisposeHttpClientsAfterUse(::Amazon::Runtime::IClientConfig* clientConfig);

  /// @brief Method GetConfigUniqueString, addr 0x201a414, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetConfigUniqueString(::Amazon::Runtime::IClientConfig* clientConfig);

  static inline ::Amazon::Runtime::HttpClientFactory* New_ctor();

  /// @brief Method UseSDKHttpClientCaching, addr 0x201a354, size 0xa0, virtual true, abstract: false, final false
  inline bool UseSDKHttpClientCaching(::Amazon::Runtime::IClientConfig* clientConfig);

  /// @brief Method .ctor, addr 0x201a41c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpClientFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpClientFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpClientFactory(HttpClientFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpClientFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpClientFactory(HttpClientFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::HttpClientFactory, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::HttpClientFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::HttpClientFactory*, "Amazon.Runtime", "HttpClientFactory");
