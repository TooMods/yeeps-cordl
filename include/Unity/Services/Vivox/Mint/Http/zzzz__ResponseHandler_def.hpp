#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResponseHandler)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Services::Vivox::Mint::Http {
class HttpClientResponse;
}
namespace Unity::Services::Vivox::Mint::Http {
class HttpException;
}
namespace Unity::Services::Vivox::Mint::Http {
class IDeserializable;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class ResponseHandler;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::ResponseHandler);
// Type: Unity.Services.Vivox.Mint.Http::ResponseHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::ResponseHandler*
class CORDL_TYPE ResponseHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateHttpException, addr 0x1706dc4, size 0x5a0, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::Mint::Http::HttpException* CreateHttpException(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response, ::System::Type* responseType);

  /// @brief Method CreateOneOfException, addr 0x1706a64, size 0x360, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::Mint::Http::HttpException* CreateOneOfException(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response, ::System::Type* responseType);

  /// @brief Method DeserializeListOfJsonObjects, addr 0x1706458, size 0x280, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*
  DeserializeListOfJsonObjects(::System::Collections::Generic::List_1<::System::Object*>* objectList);

  /// @brief Method GetDeserializedJson, addr 0x1706858, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetDeserializedJson(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method HandleAsyncResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline T HandleAsyncResponse(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response,
                                      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* statusCodeToTypeMap);

  /// @brief Method HandleAsyncResponse, addr 0x1706894, size 0x1d0, virtual false, abstract: false, final false
  static inline void HandleAsyncResponse(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response,
                                         ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* statusCodeToTypeMap);

  /// @brief Method TryDeserializeResponse, addr 0x17066d8, size 0x180, virtual false, abstract: false, final false
  static inline ::System::Object* TryDeserializeResponse(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response, ::System::Type* type);

  /// @brief Method TryDeserializeResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T TryDeserializeResponse(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponseHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseHandler(ResponseHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseHandler(ResponseHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::ResponseHandler, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::ResponseHandler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::ResponseHandler*, "Unity.Services.Vivox.Mint.Http", "ResponseHandler");
