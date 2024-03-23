#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonToken)
// Forward declare root types
namespace ThirdParty::Json::LitJson {
struct JsonToken;
}
// Write type traits
MARK_VAL_T(::ThirdParty::Json::LitJson::JsonToken);
// Type: ThirdParty.Json.LitJson::JsonToken
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: true
// CS Name: ::ThirdParty.Json.LitJson::JsonToken
struct CORDL_TYPE JsonToken {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JsonToken_Unwrapped
  enum struct __JsonToken_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ObjectStart = static_cast<int32_t>(0x1),
    __E_PropertyName = static_cast<int32_t>(0x2),
    __E_ObjectEnd = static_cast<int32_t>(0x3),
    __E_ArrayStart = static_cast<int32_t>(0x4),
    __E_ArrayEnd = static_cast<int32_t>(0x5),
    __E_Int = static_cast<int32_t>(0x6),
    __E_UInt = static_cast<int32_t>(0x7),
    __E_Long = static_cast<int32_t>(0x8),
    __E_ULong = static_cast<int32_t>(0x9),
    __E_Double = static_cast<int32_t>(0xa),
    __E_String = static_cast<int32_t>(0xb),
    __E_Boolean = static_cast<int32_t>(0xc),
    __E_Null = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JsonToken_Unwrapped() const noexcept {
    return static_cast<__JsonToken_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonToken();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JsonToken(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ArrayEnd value: static_cast<int32_t>(0x5)
  static ::ThirdParty::Json::LitJson::JsonToken const ArrayEnd;

  /// @brief Field ArrayStart value: static_cast<int32_t>(0x4)
  static ::ThirdParty::Json::LitJson::JsonToken const ArrayStart;

  /// @brief Field Boolean value: static_cast<int32_t>(0xc)
  static ::ThirdParty::Json::LitJson::JsonToken const Boolean;

  /// @brief Field Double value: static_cast<int32_t>(0xa)
  static ::ThirdParty::Json::LitJson::JsonToken const Double;

  /// @brief Field Int value: static_cast<int32_t>(0x6)
  static ::ThirdParty::Json::LitJson::JsonToken const Int;

  /// @brief Field Long value: static_cast<int32_t>(0x8)
  static ::ThirdParty::Json::LitJson::JsonToken const Long;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::ThirdParty::Json::LitJson::JsonToken const None;

  /// @brief Field Null value: static_cast<int32_t>(0xd)
  static ::ThirdParty::Json::LitJson::JsonToken const Null;

  /// @brief Field ObjectEnd value: static_cast<int32_t>(0x3)
  static ::ThirdParty::Json::LitJson::JsonToken const ObjectEnd;

  /// @brief Field ObjectStart value: static_cast<int32_t>(0x1)
  static ::ThirdParty::Json::LitJson::JsonToken const ObjectStart;

  /// @brief Field PropertyName value: static_cast<int32_t>(0x2)
  static ::ThirdParty::Json::LitJson::JsonToken const PropertyName;

  /// @brief Field String value: static_cast<int32_t>(0xb)
  static ::ThirdParty::Json::LitJson::JsonToken const String;

  /// @brief Field UInt value: static_cast<int32_t>(0x7)
  static ::ThirdParty::Json::LitJson::JsonToken const UInt;

  /// @brief Field ULong value: static_cast<int32_t>(0x9)
  static ::ThirdParty::Json::LitJson::JsonToken const ULong;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::JsonToken, 0x4>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonToken, value__) == 0x0, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::JsonToken, "ThirdParty.Json.LitJson", "JsonToken");
