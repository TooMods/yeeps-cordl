#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VXA_ERROR_CODES)
// Forward declare root types
namespace Unity::Services::Vivox {
struct VXA_ERROR_CODES;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::VXA_ERROR_CODES);
// Type: Unity.Services.Vivox::VXA_ERROR_CODES
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::VXA_ERROR_CODES
struct CORDL_TYPE VXA_ERROR_CODES {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VXA_ERROR_CODES_Unwrapped
  enum struct __VXA_ERROR_CODES_Unwrapped : int32_t {
    __E_VXA_SUCCESS = static_cast<int32_t>(0x0),
    __E_VXA_INVALID_PARAMETER = static_cast<int32_t>(0x1),
    __E_VXA_DEVICE_DOES_NOT_EXIST = static_cast<int32_t>(0x2),
    __E_VXA_INTERNAL_ERROR = static_cast<int32_t>(0x3),
    __E_VXA_OUT_OF_MEMORY = static_cast<int32_t>(0x4),
    __E_VXA_INVALID_STATE = static_cast<int32_t>(0x5),
    __E_VXA_NO_MORE_DATA = static_cast<int32_t>(0x6),
    __E_VXA_FEATURE_NOT_SUPPORTED = static_cast<int32_t>(0x7),
    __E_VXA_MAX_DEVICES_EXCEEDED = static_cast<int32_t>(0x8),
    __E_VXA_NO_BUFFERS_AVAILABLE = static_cast<int32_t>(0x9),
    __E_VXA_ACCESS_DENIED = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VXA_ERROR_CODES_Unwrapped() const noexcept {
    return static_cast<__VXA_ERROR_CODES_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VXA_ERROR_CODES();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VXA_ERROR_CODES(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field VXA_ACCESS_DENIED value: static_cast<int32_t>(0xa)
  static ::Unity::Services::Vivox::VXA_ERROR_CODES const VXA_ACCESS_DENIED;

  /// @brief Field VXA_DEVICE_DOES_NOT_EXIST value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::VXA_ERROR_CODES const VXA_DEVICE_DOES_NOT_EXIST;

  /// @brief Field VXA_FEATURE_NOT_SUPPORTED value: static_cast<int32_t>(0x7)
  static ::Unity::Services::Vivox::VXA_ERROR_CODES const VXA_FEATURE_NOT_SUPPORTED;

  /// @brief Field VXA_INTERNAL_ERROR value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::VXA_ERROR_CODES const VXA_INTERNAL_ERROR;

  /// @brief Field VXA_INVALID_PARAMETER value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::VXA_ERROR_CODES const VXA_INVALID_PARAMETER;

  /// @brief Field VXA_INVALID_STATE value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::VXA_ERROR_CODES const VXA_INVALID_STATE;

  /// @brief Field VXA_MAX_DEVICES_EXCEEDED value: static_cast<int32_t>(0x8)
  static ::Unity::Services::Vivox::VXA_ERROR_CODES const VXA_MAX_DEVICES_EXCEEDED;

  /// @brief Field VXA_NO_BUFFERS_AVAILABLE value: static_cast<int32_t>(0x9)
  static ::Unity::Services::Vivox::VXA_ERROR_CODES const VXA_NO_BUFFERS_AVAILABLE;

  /// @brief Field VXA_NO_MORE_DATA value: static_cast<int32_t>(0x6)
  static ::Unity::Services::Vivox::VXA_ERROR_CODES const VXA_NO_MORE_DATA;

  /// @brief Field VXA_OUT_OF_MEMORY value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::VXA_ERROR_CODES const VXA_OUT_OF_MEMORY;

  /// @brief Field VXA_SUCCESS value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::VXA_ERROR_CODES const VXA_SUCCESS;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VXA_ERROR_CODES, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VXA_ERROR_CODES, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VXA_ERROR_CODES, "Unity.Services.Vivox", "VXA_ERROR_CODES");
