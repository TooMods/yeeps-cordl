#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SourceLevels)
// Forward declare root types
namespace System::Diagnostics {
struct SourceLevels;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::SourceLevels);
// Type: System.Diagnostics::SourceLevels
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: true
// CS Name: ::System.Diagnostics::SourceLevels
struct CORDL_TYPE SourceLevels {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SourceLevels_Unwrapped
  enum struct __SourceLevels_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Critical = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x3),
    __E_Warning = static_cast<int32_t>(0x7),
    __E_Information = static_cast<int32_t>(0xf),
    __E_Verbose = static_cast<int32_t>(0x1f),
    __E_ActivityTracing = static_cast<int32_t>(0xff00),
    __E_All = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SourceLevels_Unwrapped() const noexcept {
    return static_cast<__SourceLevels_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SourceLevels();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SourceLevels(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ActivityTracing value: static_cast<int32_t>(0xff00)
  static ::System::Diagnostics::SourceLevels const ActivityTracing;

  /// @brief Field All value: static_cast<int32_t>(0xffffffff)
  static ::System::Diagnostics::SourceLevels const All;

  /// @brief Field Critical value: static_cast<int32_t>(0x1)
  static ::System::Diagnostics::SourceLevels const Critical;

  /// @brief Field Error value: static_cast<int32_t>(0x3)
  static ::System::Diagnostics::SourceLevels const Error;

  /// @brief Field Information value: static_cast<int32_t>(0xf)
  static ::System::Diagnostics::SourceLevels const Information;

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::System::Diagnostics::SourceLevels const Off;

  /// @brief Field Verbose value: static_cast<int32_t>(0x1f)
  static ::System::Diagnostics::SourceLevels const Verbose;

  /// @brief Field Warning value: static_cast<int32_t>(0x7)
  static ::System::Diagnostics::SourceLevels const Warning;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::SourceLevels, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::SourceLevels, value__) == 0x0, "Offset mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::SourceLevels, "System.Diagnostics", "SourceLevels");
