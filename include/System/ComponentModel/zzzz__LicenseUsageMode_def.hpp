#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LicenseUsageMode)
// Forward declare root types
namespace System::ComponentModel {
struct LicenseUsageMode;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::LicenseUsageMode);
// Type: System.ComponentModel::LicenseUsageMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: true
// CS Name: ::System.ComponentModel::LicenseUsageMode
struct CORDL_TYPE LicenseUsageMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LicenseUsageMode_Unwrapped
  enum struct __LicenseUsageMode_Unwrapped : int32_t {
    __E_Runtime = static_cast<int32_t>(0x0),
    __E_Designtime = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LicenseUsageMode_Unwrapped() const noexcept {
    return static_cast<__LicenseUsageMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LicenseUsageMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LicenseUsageMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Designtime value: static_cast<int32_t>(0x1)
  static ::System::ComponentModel::LicenseUsageMode const Designtime;

  /// @brief Field Runtime value: static_cast<int32_t>(0x0)
  static ::System::ComponentModel::LicenseUsageMode const Runtime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::LicenseUsageMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::LicenseUsageMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::LicenseUsageMode, "System.ComponentModel", "LicenseUsageMode");
