#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoggingOptions)
// Forward declare root types
namespace Amazon {
struct LoggingOptions;
}
// Write type traits
MARK_VAL_T(::Amazon::LoggingOptions);
// Type: Amazon::LoggingOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon {
// Is value type: true
// CS Name: ::Amazon::LoggingOptions
struct CORDL_TYPE LoggingOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LoggingOptions_Unwrapped
  enum struct __LoggingOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Log4Net = static_cast<int32_t>(0x1),
    __E_SystemDiagnostics = static_cast<int32_t>(0x2),
    __E_Console = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LoggingOptions_Unwrapped() const noexcept {
    return static_cast<__LoggingOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoggingOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LoggingOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Console value: static_cast<int32_t>(0x10)
  static ::Amazon::LoggingOptions const Console;

  /// @brief Field Log4Net value: static_cast<int32_t>(0x1)
  static ::Amazon::LoggingOptions const Log4Net;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Amazon::LoggingOptions const None;

  /// @brief Field SystemDiagnostics value: static_cast<int32_t>(0x2)
  static ::Amazon::LoggingOptions const SystemDiagnostics;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::LoggingOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::LoggingOptions, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon
DEFINE_IL2CPP_ARG_TYPE(::Amazon::LoggingOptions, "Amazon", "LoggingOptions");
