#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerMarkerDataType)
// Forward declare root types
namespace Unity::Profiling::LowLevel {
struct ProfilerMarkerDataType;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::LowLevel::ProfilerMarkerDataType);
// Type: Unity.Profiling.LowLevel::ProfilerMarkerDataType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Profiling::LowLevel {
// Is value type: true
// CS Name: ::Unity.Profiling.LowLevel::ProfilerMarkerDataType
struct CORDL_TYPE ProfilerMarkerDataType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __ProfilerMarkerDataType_Unwrapped
  enum struct __ProfilerMarkerDataType_Unwrapped : uint8_t {
    __E_Int32 = static_cast<uint8_t>(0x2u),
    __E_UInt32 = static_cast<uint8_t>(0x3u),
    __E_Int64 = static_cast<uint8_t>(0x4u),
    __E_UInt64 = static_cast<uint8_t>(0x5u),
    __E_Float = static_cast<uint8_t>(0x6u),
    __E_Double = static_cast<uint8_t>(0x7u),
    __E_String16 = static_cast<uint8_t>(0x9u),
    __E_Blob8 = static_cast<uint8_t>(0xbu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProfilerMarkerDataType_Unwrapped() const noexcept {
    return static_cast<__ProfilerMarkerDataType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerMarkerDataType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ProfilerMarkerDataType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Blob8 value: static_cast<uint8_t>(0xbu)
  static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType const Blob8;

  /// @brief Field Double value: static_cast<uint8_t>(0x7u)
  static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType const Double;

  /// @brief Field Float value: static_cast<uint8_t>(0x6u)
  static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType const Float;

  /// @brief Field Int32 value: static_cast<uint8_t>(0x2u)
  static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType const Int32;

  /// @brief Field Int64 value: static_cast<uint8_t>(0x4u)
  static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType const Int64;

  /// @brief Field String16 value: static_cast<uint8_t>(0x9u)
  static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType const String16;

  /// @brief Field UInt32 value: static_cast<uint8_t>(0x3u)
  static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType const UInt32;

  /// @brief Field UInt64 value: static_cast<uint8_t>(0x5u)
  static ::Unity::Profiling::LowLevel::ProfilerMarkerDataType const UInt64;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::LowLevel::ProfilerMarkerDataType, 0x1>, "Size mismatch!");

static_assert(offsetof(::Unity::Profiling::LowLevel::ProfilerMarkerDataType, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Profiling::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::LowLevel::ProfilerMarkerDataType, "Unity.Profiling.LowLevel", "ProfilerMarkerDataType");
