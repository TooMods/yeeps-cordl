#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseApiClient)
namespace Unity::Services::Vivox::Mint::Http {
class IHttpClient;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class BaseApiClient;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::BaseApiClient);
// Type: Unity.Services.Vivox.Mint.Http::BaseApiClient
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::BaseApiClient*
class CORDL_TYPE BaseApiClient : public ::System::Object {
public:
  // Declarations
  /// @brief Field HttpClient, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_HttpClient, put = __cordl_internal_set_HttpClient))::Unity::Services::Vivox::Mint::Http::IHttpClient* HttpClient;

  static inline ::Unity::Services::Vivox::Mint::Http::BaseApiClient* New_ctor(::Unity::Services::Vivox::Mint::Http::IHttpClient* httpClient);

  constexpr ::Unity::Services::Vivox::Mint::Http::IHttpClient*& __cordl_internal_get_HttpClient();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Http::IHttpClient*> const& __cordl_internal_get_HttpClient() const;

  constexpr void __cordl_internal_set_HttpClient(::Unity::Services::Vivox::Mint::Http::IHttpClient* value);

  /// @brief Method .ctor, addr 0x17019fc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::Mint::Http::IHttpClient* httpClient);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseApiClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseApiClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseApiClient(BaseApiClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseApiClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseApiClient(BaseApiClient const&) = delete;

  /// @brief Field HttpClient, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::IHttpClient* ___HttpClient;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::BaseApiClient, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::BaseApiClient, ___HttpClient) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::BaseApiClient);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::BaseApiClient*, "Unity.Services.Vivox.Mint.Http", "BaseApiClient");
