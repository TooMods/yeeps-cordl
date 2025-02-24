#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestRetryMode)
// Forward declare root types
namespace Amazon::Runtime {
struct RequestRetryMode;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::RequestRetryMode);
// Type: Amazon.Runtime::RequestRetryMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::Amazon.Runtime::RequestRetryMode
struct CORDL_TYPE RequestRetryMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RequestRetryMode_Unwrapped
  enum struct __RequestRetryMode_Unwrapped : int32_t {
    __E_Legacy = static_cast<int32_t>(0x0),
    __E_Standard = static_cast<int32_t>(0x1),
    __E_Adaptive = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RequestRetryMode_Unwrapped() const noexcept {
    return static_cast<__RequestRetryMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestRetryMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RequestRetryMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Adaptive value: static_cast<int32_t>(0x2)
  static ::Amazon::Runtime::RequestRetryMode const Adaptive;

  /// @brief Field Legacy value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::RequestRetryMode const Legacy;

  /// @brief Field Standard value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::RequestRetryMode const Standard;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::RequestRetryMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::RequestRetryMode, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::RequestRetryMode, "Amazon.Runtime", "RequestRetryMode");
