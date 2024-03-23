#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_font_status)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_font_status;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_font_status);
// Type: Unity.Services.Vivox::vx_font_status
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_font_status
struct CORDL_TYPE vx_font_status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_font_status_Unwrapped
  enum struct __vx_font_status_Unwrapped : int32_t {
    __E_status_none = static_cast<int32_t>(0x0),
    __E_status_free = static_cast<int32_t>(0x1),
    __E_status_not_free = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_font_status_Unwrapped() const noexcept {
    return static_cast<__vx_font_status_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_font_status();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_font_status(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field status_free value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_font_status const status_free;

  /// @brief Field status_none value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_font_status const status_none;

  /// @brief Field status_not_free value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_font_status const status_not_free;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_font_status, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_font_status, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_font_status, "Unity.Services.Vivox", "vx_font_status");
