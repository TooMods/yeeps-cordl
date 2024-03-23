#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResponseLoggingOption)
// Forward declare root types
namespace Amazon {
struct ResponseLoggingOption;
}
// Write type traits
MARK_VAL_T(::Amazon::ResponseLoggingOption);
// Type: Amazon::ResponseLoggingOption
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon {
// Is value type: true
// CS Name: ::Amazon::ResponseLoggingOption
struct CORDL_TYPE ResponseLoggingOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ResponseLoggingOption_Unwrapped
  enum struct __ResponseLoggingOption_Unwrapped : int32_t {
    __E_Never = static_cast<int32_t>(0x0),
    __E_OnError = static_cast<int32_t>(0x1),
    __E_Always = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ResponseLoggingOption_Unwrapped() const noexcept {
    return static_cast<__ResponseLoggingOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseLoggingOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ResponseLoggingOption(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Always value: static_cast<int32_t>(0x2)
  static ::Amazon::ResponseLoggingOption const Always;

  /// @brief Field Never value: static_cast<int32_t>(0x0)
  static ::Amazon::ResponseLoggingOption const Never;

  /// @brief Field OnError value: static_cast<int32_t>(0x1)
  static ::Amazon::ResponseLoggingOption const OnError;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::ResponseLoggingOption, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::ResponseLoggingOption, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon
DEFINE_IL2CPP_ARG_TYPE(::Amazon::ResponseLoggingOption, "Amazon", "ResponseLoggingOption");
