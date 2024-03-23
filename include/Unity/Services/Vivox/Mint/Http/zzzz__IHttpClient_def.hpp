#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IHttpClient)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Unity::Services::Vivox::Mint::Http {
class HttpClientResponse;
}
namespace UnityEngine::Networking {
class IMultipartFormSection;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class IHttpClient;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::IHttpClient);
// Type: Unity.Services.Vivox.Mint.Http::IHttpClient
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::IHttpClient*
class CORDL_TYPE IHttpClient {
public:
  // Declarations
  /// @brief Method MakeRequestAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
  MakeRequestAsync(::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout);

  /// @brief Method MakeRequestAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
  MakeRequestAsync(::StringW method, ::StringW url, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body,
                   ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout, ::StringW boundary);

  // Ctor Parameters [CppParam { name: "", ty: "IHttpClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHttpClient(IHttpClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHttpClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHttpClient(IHttpClient const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::IHttpClient);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::IHttpClient*, "Unity.Services.Vivox.Mint.Http", "IHttpClient");
