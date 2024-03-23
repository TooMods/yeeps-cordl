#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StsRegionalEndpointsValue)
// Forward declare root types
namespace Amazon::Runtime {
struct StsRegionalEndpointsValue;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::StsRegionalEndpointsValue);
// Type: Amazon.Runtime::StsRegionalEndpointsValue
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::Amazon.Runtime::StsRegionalEndpointsValue
struct CORDL_TYPE StsRegionalEndpointsValue {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StsRegionalEndpointsValue_Unwrapped
  enum struct __StsRegionalEndpointsValue_Unwrapped : int32_t {
    __E_Legacy = static_cast<int32_t>(0x0),
    __E_Regional = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StsRegionalEndpointsValue_Unwrapped() const noexcept {
    return static_cast<__StsRegionalEndpointsValue_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StsRegionalEndpointsValue();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StsRegionalEndpointsValue(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Legacy value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::StsRegionalEndpointsValue const Legacy;

  /// @brief Field Regional value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::StsRegionalEndpointsValue const Regional;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::StsRegionalEndpointsValue, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::StsRegionalEndpointsValue, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::StsRegionalEndpointsValue, "Amazon.Runtime", "StsRegionalEndpointsValue");
