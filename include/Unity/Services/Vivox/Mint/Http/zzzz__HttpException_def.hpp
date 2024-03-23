#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpException)
namespace System {
class Exception;
}
namespace Unity::Services::Vivox::Mint::Http {
class HttpClientResponse;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class HttpException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::HttpException);
// Type: Unity.Services.Vivox.Mint.Http::HttpException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::HttpException*
class CORDL_TYPE HttpException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field Response, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_Response, put = __cordl_internal_set_Response))::Unity::Services::Vivox::Mint::Http::HttpClientResponse* Response;

  static inline ::Unity::Services::Vivox::Mint::Http::HttpException* New_ctor();

  static inline ::Unity::Services::Vivox::Mint::Http::HttpException* New_ctor(::StringW message);

  static inline ::Unity::Services::Vivox::Mint::Http::HttpException* New_ctor(::StringW message, ::System::Exception* inner);

  static inline ::Unity::Services::Vivox::Mint::Http::HttpException* New_ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response);

  constexpr ::Unity::Services::Vivox::Mint::Http::HttpClientResponse*& __cordl_internal_get_Response();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> const& __cordl_internal_get_Response() const;

  constexpr void __cordl_internal_set_Response(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* value);

  /// @brief Method .ctor, addr 0x1704604, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x170465c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x17046c4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x1704734, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpException(HttpException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpException(HttpException const&) = delete;

  /// @brief Field Response, offset: 0x90, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::HttpClientResponse* ___Response;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::HttpException, 0x98>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::HttpException, ___Response) == 0x90, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::HttpException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::HttpException*, "Unity.Services.Vivox.Mint.Http", "HttpException");
