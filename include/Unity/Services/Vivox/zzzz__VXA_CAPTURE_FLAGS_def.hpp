#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VXA_CAPTURE_FLAGS)
// Forward declare root types
namespace Unity::Services::Vivox {
struct VXA_CAPTURE_FLAGS;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::VXA_CAPTURE_FLAGS);
// Type: Unity.Services.Vivox::VXA_CAPTURE_FLAGS
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::VXA_CAPTURE_FLAGS
struct CORDL_TYPE VXA_CAPTURE_FLAGS {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VXA_CAPTURE_FLAGS_Unwrapped
  enum struct __VXA_CAPTURE_FLAGS_Unwrapped : int32_t {
    __E_VXA_CAPTURE_OPEN_FLAG_USE_AEC = static_cast<int32_t>(0x1),
    __E_VXA_CAPTURE_OPEN_FLAG_USE_AGC = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VXA_CAPTURE_FLAGS_Unwrapped() const noexcept {
    return static_cast<__VXA_CAPTURE_FLAGS_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VXA_CAPTURE_FLAGS();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VXA_CAPTURE_FLAGS(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field VXA_CAPTURE_OPEN_FLAG_USE_AEC value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::VXA_CAPTURE_FLAGS const VXA_CAPTURE_OPEN_FLAG_USE_AEC;

  /// @brief Field VXA_CAPTURE_OPEN_FLAG_USE_AGC value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::VXA_CAPTURE_FLAGS const VXA_CAPTURE_OPEN_FLAG_USE_AGC;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VXA_CAPTURE_FLAGS, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VXA_CAPTURE_FLAGS, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VXA_CAPTURE_FLAGS, "Unity.Services.Vivox", "VXA_CAPTURE_FLAGS");
