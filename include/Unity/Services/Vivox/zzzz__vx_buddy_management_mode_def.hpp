#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_buddy_management_mode)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_buddy_management_mode;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_buddy_management_mode);
// Type: Unity.Services.Vivox::vx_buddy_management_mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_buddy_management_mode
struct CORDL_TYPE vx_buddy_management_mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_buddy_management_mode_Unwrapped
  enum struct __vx_buddy_management_mode_Unwrapped : int32_t {
    __E_mode_auto_accept = static_cast<int32_t>(0x0),
    __E_mode_auto_add = static_cast<int32_t>(0x1),
    __E_mode_block = static_cast<int32_t>(0x2),
    __E_mode_hide = static_cast<int32_t>(0x3),
    __E_mode_application = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_buddy_management_mode_Unwrapped() const noexcept {
    return static_cast<__vx_buddy_management_mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_buddy_management_mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_buddy_management_mode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field mode_application value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::vx_buddy_management_mode const mode_application;

  /// @brief Field mode_auto_accept value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_buddy_management_mode const mode_auto_accept;

  /// @brief Field mode_auto_add value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_buddy_management_mode const mode_auto_add;

  /// @brief Field mode_block value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_buddy_management_mode const mode_block;

  /// @brief Field mode_hide value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::vx_buddy_management_mode const mode_hide;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_buddy_management_mode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_buddy_management_mode, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_buddy_management_mode, "Unity.Services.Vivox", "vx_buddy_management_mode");
