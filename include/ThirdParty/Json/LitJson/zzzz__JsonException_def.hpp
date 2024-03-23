#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonException)
namespace System {
class Exception;
}
namespace ThirdParty::Json::LitJson {
struct ParserToken;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class JsonException;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::JsonException);
// Type: ThirdParty.Json.LitJson::JsonException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::JsonException*
class CORDL_TYPE JsonException : public ::System::Exception {
public:
  // Declarations
  static inline ::ThirdParty::Json::LitJson::JsonException* New_ctor();

  static inline ::ThirdParty::Json::LitJson::JsonException* New_ctor(int32_t c);

  static inline ::ThirdParty::Json::LitJson::JsonException* New_ctor(int32_t c, ::System::Exception* inner_exception);

  static inline ::ThirdParty::Json::LitJson::JsonException* New_ctor(::StringW message);

  static inline ::ThirdParty::Json::LitJson::JsonException* New_ctor(::StringW message, ::System::Exception* inner_exception);

  static inline ::ThirdParty::Json::LitJson::JsonException* New_ctor(::ThirdParty::Json::LitJson::ParserToken token);

  static inline ::ThirdParty::Json::LitJson::JsonException* New_ctor(::ThirdParty::Json::LitJson::ParserToken token, ::System::Exception* inner_exception);

  /// @brief Method .ctor, addr 0x14a4dec, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x14a4fe4, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(int32_t c);

  /// @brief Method .ctor, addr 0x14a50ac, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(int32_t c, ::System::Exception* inner_exception);

  /// @brief Method .ctor, addr 0x14a5184, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x14a51ec, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner_exception);

  /// @brief Method .ctor, addr 0x14a4e44, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::ThirdParty::Json::LitJson::ParserToken token);

  /// @brief Method .ctor, addr 0x14a4f0c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::ThirdParty::Json::LitJson::ParserToken token, ::System::Exception* inner_exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonException(JsonException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonException(JsonException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::JsonException, 0x90>, "Size mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::JsonException);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::JsonException*, "ThirdParty.Json.LitJson", "JsonException");
