#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(S3UsEast1RegionalEndpointValue)
// Forward declare root types
namespace Amazon::Runtime {
struct S3UsEast1RegionalEndpointValue;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::S3UsEast1RegionalEndpointValue);
// Type: Amazon.Runtime::S3UsEast1RegionalEndpointValue
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::Amazon.Runtime::S3UsEast1RegionalEndpointValue
struct CORDL_TYPE S3UsEast1RegionalEndpointValue {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __S3UsEast1RegionalEndpointValue_Unwrapped
  enum struct __S3UsEast1RegionalEndpointValue_Unwrapped : int32_t {
    __E_Legacy = static_cast<int32_t>(0x0),
    __E_Regional = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __S3UsEast1RegionalEndpointValue_Unwrapped() const noexcept {
    return static_cast<__S3UsEast1RegionalEndpointValue_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr S3UsEast1RegionalEndpointValue();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr S3UsEast1RegionalEndpointValue(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Legacy value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::S3UsEast1RegionalEndpointValue const Legacy;

  /// @brief Field Regional value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::S3UsEast1RegionalEndpointValue const Regional;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::S3UsEast1RegionalEndpointValue, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::S3UsEast1RegionalEndpointValue, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::S3UsEast1RegionalEndpointValue, "Amazon.Runtime", "S3UsEast1RegionalEndpointValue");
