#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParserToken)
// Forward declare root types
namespace ThirdParty::Json::LitJson {
struct ParserToken;
}
// Write type traits
MARK_VAL_T(::ThirdParty::Json::LitJson::ParserToken);
// Type: ThirdParty.Json.LitJson::ParserToken
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: true
// CS Name: ::ThirdParty.Json.LitJson::ParserToken
struct CORDL_TYPE ParserToken {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParserToken_Unwrapped
  enum struct __ParserToken_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x10000),
    __E_Number = static_cast<int32_t>(0x10001),
    __E_True = static_cast<int32_t>(0x10002),
    __E_False = static_cast<int32_t>(0x10003),
    __E_Null = static_cast<int32_t>(0x10004),
    __E_CharSeq = static_cast<int32_t>(0x10005),
    __E_Char = static_cast<int32_t>(0x10006),
    __E_Text = static_cast<int32_t>(0x10007),
    __E_Object = static_cast<int32_t>(0x10008),
    __E_ObjectPrime = static_cast<int32_t>(0x10009),
    __E_Pair = static_cast<int32_t>(0x1000a),
    __E_PairRest = static_cast<int32_t>(0x1000b),
    __E_Array = static_cast<int32_t>(0x1000c),
    __E_ArrayPrime = static_cast<int32_t>(0x1000d),
    __E_Value = static_cast<int32_t>(0x1000e),
    __E_ValueRest = static_cast<int32_t>(0x1000f),
    __E_String = static_cast<int32_t>(0x10010),
    __E_End = static_cast<int32_t>(0x10011),
    __E_Epsilon = static_cast<int32_t>(0x10012),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParserToken_Unwrapped() const noexcept {
    return static_cast<__ParserToken_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParserToken();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParserToken(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Array value: static_cast<int32_t>(0x1000c)
  static ::ThirdParty::Json::LitJson::ParserToken const Array;

  /// @brief Field ArrayPrime value: static_cast<int32_t>(0x1000d)
  static ::ThirdParty::Json::LitJson::ParserToken const ArrayPrime;

  /// @brief Field Char value: static_cast<int32_t>(0x10006)
  static ::ThirdParty::Json::LitJson::ParserToken const Char;

  /// @brief Field CharSeq value: static_cast<int32_t>(0x10005)
  static ::ThirdParty::Json::LitJson::ParserToken const CharSeq;

  /// @brief Field End value: static_cast<int32_t>(0x10011)
  static ::ThirdParty::Json::LitJson::ParserToken const End;

  /// @brief Field Epsilon value: static_cast<int32_t>(0x10012)
  static ::ThirdParty::Json::LitJson::ParserToken const Epsilon;

  /// @brief Field False value: static_cast<int32_t>(0x10003)
  static ::ThirdParty::Json::LitJson::ParserToken const False;

  /// @brief Field None value: static_cast<int32_t>(0x10000)
  static ::ThirdParty::Json::LitJson::ParserToken const None;

  /// @brief Field Null value: static_cast<int32_t>(0x10004)
  static ::ThirdParty::Json::LitJson::ParserToken const Null;

  /// @brief Field Number value: static_cast<int32_t>(0x10001)
  static ::ThirdParty::Json::LitJson::ParserToken const Number;

  /// @brief Field Object value: static_cast<int32_t>(0x10008)
  static ::ThirdParty::Json::LitJson::ParserToken const Object;

  /// @brief Field ObjectPrime value: static_cast<int32_t>(0x10009)
  static ::ThirdParty::Json::LitJson::ParserToken const ObjectPrime;

  /// @brief Field Pair value: static_cast<int32_t>(0x1000a)
  static ::ThirdParty::Json::LitJson::ParserToken const Pair;

  /// @brief Field PairRest value: static_cast<int32_t>(0x1000b)
  static ::ThirdParty::Json::LitJson::ParserToken const PairRest;

  /// @brief Field String value: static_cast<int32_t>(0x10010)
  static ::ThirdParty::Json::LitJson::ParserToken const String;

  /// @brief Field Text value: static_cast<int32_t>(0x10007)
  static ::ThirdParty::Json::LitJson::ParserToken const Text;

  /// @brief Field True value: static_cast<int32_t>(0x10002)
  static ::ThirdParty::Json::LitJson::ParserToken const True;

  /// @brief Field Value value: static_cast<int32_t>(0x1000e)
  static ::ThirdParty::Json::LitJson::ParserToken const Value;

  /// @brief Field ValueRest value: static_cast<int32_t>(0x1000f)
  static ::ThirdParty::Json::LitJson::ParserToken const ValueRest;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::ParserToken, 0x4>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::ParserToken, value__) == 0x0, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::ParserToken, "ThirdParty.Json.LitJson", "ParserToken");
