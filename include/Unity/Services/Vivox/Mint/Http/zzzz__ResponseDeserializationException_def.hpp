#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResponseDeserializationException)
namespace System {
class Exception;
}
namespace Unity::Services::Vivox::Mint::Http {
class HttpClientResponse;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class ResponseDeserializationException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::ResponseDeserializationException);
// Type: Unity.Services.Vivox.Mint.Http::ResponseDeserializationException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::ResponseDeserializationException*
class CORDL_TYPE ResponseDeserializationException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field response, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_response, put = __cordl_internal_set_response))::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response;

  static inline ::Unity::Services::Vivox::Mint::Http::ResponseDeserializationException* New_ctor();

  static inline ::Unity::Services::Vivox::Mint::Http::ResponseDeserializationException* New_ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpClientResponse);

  static inline ::Unity::Services::Vivox::Mint::Http::ResponseDeserializationException* New_ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpClientResponse,
                                                                                                 ::System::Exception* inner, ::StringW message);

  static inline ::Unity::Services::Vivox::Mint::Http::ResponseDeserializationException* New_ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpClientResponse, ::StringW message);

  static inline ::Unity::Services::Vivox::Mint::Http::ResponseDeserializationException* New_ctor(::System::Exception* inner, ::StringW message);

  static inline ::Unity::Services::Vivox::Mint::Http::ResponseDeserializationException* New_ctor(::StringW message);

  constexpr ::Unity::Services::Vivox::Mint::Http::HttpClientResponse*& __cordl_internal_get_response();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> const& __cordl_internal_get_response() const;

  constexpr void __cordl_internal_set_response(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* value);

  /// @brief Method .ctor, addr 0x17061ac, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x17062dc, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpClientResponse);

  /// @brief Method .ctor, addr 0x17063d4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpClientResponse, ::System::Exception* inner, ::StringW message);

  /// @brief Method .ctor, addr 0x1706360, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpClientResponse, ::StringW message);

  /// @brief Method .ctor, addr 0x170626c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* inner, ::StringW message);

  /// @brief Method .ctor, addr 0x1706204, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseDeserializationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponseDeserializationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseDeserializationException(ResponseDeserializationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseDeserializationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseDeserializationException(ResponseDeserializationException const&) = delete;

  /// @brief Field response, offset: 0x90, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::HttpClientResponse* ___response;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::ResponseDeserializationException, 0x98>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::ResponseDeserializationException, ___response) == 0x90, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::ResponseDeserializationException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::ResponseDeserializationException*, "Unity.Services.Vivox.Mint.Http", "ResponseDeserializationException");
