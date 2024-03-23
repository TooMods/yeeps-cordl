#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Condition)
// Forward declare root types
namespace ThirdParty::Json::LitJson {
struct Condition;
}
// Write type traits
MARK_VAL_T(::ThirdParty::Json::LitJson::Condition);
// Type: ThirdParty.Json.LitJson::Condition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: true
// CS Name: ::ThirdParty.Json.LitJson::Condition
struct CORDL_TYPE Condition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Condition_Unwrapped
  enum struct __Condition_Unwrapped : int32_t {
    __E_InArray = static_cast<int32_t>(0x0),
    __E_InObject = static_cast<int32_t>(0x1),
    __E_NotAProperty = static_cast<int32_t>(0x2),
    __E_Property = static_cast<int32_t>(0x3),
    __E_Value = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Condition_Unwrapped() const noexcept {
    return static_cast<__Condition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Condition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Condition(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field InArray value: static_cast<int32_t>(0x0)
  static ::ThirdParty::Json::LitJson::Condition const InArray;

  /// @brief Field InObject value: static_cast<int32_t>(0x1)
  static ::ThirdParty::Json::LitJson::Condition const InObject;

  /// @brief Field NotAProperty value: static_cast<int32_t>(0x2)
  static ::ThirdParty::Json::LitJson::Condition const NotAProperty;

  /// @brief Field Property value: static_cast<int32_t>(0x3)
  static ::ThirdParty::Json::LitJson::Condition const Property;

  /// @brief Field Value value: static_cast<int32_t>(0x4)
  static ::ThirdParty::Json::LitJson::Condition const Value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::Condition, 0x4>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Condition, value__) == 0x0, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::Condition, "ThirdParty.Json.LitJson", "Condition");
