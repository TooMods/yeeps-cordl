#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ApplicationSettingsMode)
// Forward declare root types
namespace Amazon::Util::Internal::PlatformServices {
struct ApplicationSettingsMode;
}
// Write type traits
MARK_VAL_T(::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode);
// Type: Amazon.Util.Internal.PlatformServices::ApplicationSettingsMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: true
// CS Name: ::Amazon.Util.Internal.PlatformServices::ApplicationSettingsMode
struct CORDL_TYPE ApplicationSettingsMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ApplicationSettingsMode_Unwrapped
  enum struct __ApplicationSettingsMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Local = static_cast<int32_t>(0x1),
    __E_Roaming = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ApplicationSettingsMode_Unwrapped() const noexcept {
    return static_cast<__ApplicationSettingsMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationSettingsMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ApplicationSettingsMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Local value: static_cast<int32_t>(0x1)
  static ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode const Local;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode const None;

  /// @brief Field Roaming value: static_cast<int32_t>(0x2)
  static ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode const Roaming;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Util::Internal::PlatformServices
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode, "Amazon.Util.Internal.PlatformServices", "ApplicationSettingsMode");
