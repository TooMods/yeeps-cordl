#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IHttpClient)
namespace Unity::Services::Core::Internal {
template <typename T> class IAsyncOperation_1;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
namespace Unity::Services::Core::Networking::Internal {
struct HttpOptions;
}
namespace Unity::Services::Core::Networking::Internal {
class HttpRequest;
}
namespace Unity::Services::Core::Networking::Internal {
struct ReadOnlyHttpResponse;
}
// Forward declare root types
namespace Unity::Services::Core::Networking::Internal {
class IHttpClient;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Networking::Internal::IHttpClient);
// Type: Unity.Services.Core.Networking.Internal::IHttpClient
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Networking::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Networking.Internal::IHttpClient*
class CORDL_TYPE IHttpClient {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method CreateRequestForService, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpRequest* CreateRequestForService(::StringW serviceId, ::StringW resourcePath);

  /// @brief Method GetBaseUrlFor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetBaseUrlFor(::StringW serviceId);

  /// @brief Method GetDefaultOptionsFor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Core::Networking::Internal::HttpOptions GetDefaultOptionsFor(::StringW serviceId);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Core::Internal::IAsyncOperation_1<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpResponse>*
  Send(::Unity::Services::Core::Networking::Internal::HttpRequest* request);

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IHttpClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHttpClient(IHttpClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHttpClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHttpClient(IHttpClient const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Networking::Internal
NEED_NO_BOX(::Unity::Services::Core::Networking::Internal::IHttpClient);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Networking::Internal::IHttpClient*, "Unity.Services.Core.Networking.Internal", "IHttpClient");
