#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxLogLevel)
// Forward declare root types
namespace Unity::Services::Vivox {
struct VivoxLogLevel;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::VivoxLogLevel);
// Type: Unity.Services.Vivox::VivoxLogLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::VivoxLogLevel
struct CORDL_TYPE VivoxLogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VivoxLogLevel_Unwrapped
  enum struct __VivoxLogLevel_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_Error = static_cast<int32_t>(0x0),
    __E_Warning = static_cast<int32_t>(0x1),
    __E_Info = static_cast<int32_t>(0x2),
    __E_Debug = static_cast<int32_t>(0x3),
    __E_Trace = static_cast<int32_t>(0x4),
    __E_All = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VivoxLogLevel_Unwrapped() const noexcept {
    return static_cast<__VivoxLogLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxLogLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VivoxLogLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::VivoxLogLevel const All;

  /// @brief Field Debug value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::VivoxLogLevel const Debug;

  /// @brief Field Error value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::VivoxLogLevel const Error;

  /// @brief Field Info value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::VivoxLogLevel const Info;

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::Unity::Services::Vivox::VivoxLogLevel const None;

  /// @brief Field Trace value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::VivoxLogLevel const Trace;

  /// @brief Field Warning value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::VivoxLogLevel const Warning;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxLogLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxLogLevel, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxLogLevel, "Unity.Services.Vivox", "VivoxLogLevel");
