#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_channel_mode)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_channel_mode;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_channel_mode);
// Type: Unity.Services.Vivox::vx_channel_mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_channel_mode
struct CORDL_TYPE vx_channel_mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_channel_mode_Unwrapped
  enum struct __vx_channel_mode_Unwrapped : int32_t {
    __E_channel_mode_none = static_cast<int32_t>(0x0),
    __E_channel_mode_normal = static_cast<int32_t>(0x1),
    __E_channel_mode_presentation = static_cast<int32_t>(0x2),
    __E_channel_mode_lecture = static_cast<int32_t>(0x3),
    __E_channel_mode_open = static_cast<int32_t>(0x4),
    __E_channel_mode_auditorium = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_channel_mode_Unwrapped() const noexcept {
    return static_cast<__vx_channel_mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_channel_mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_channel_mode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field channel_mode_auditorium value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::vx_channel_mode const channel_mode_auditorium;

  /// @brief Field channel_mode_lecture value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::vx_channel_mode const channel_mode_lecture;

  /// @brief Field channel_mode_none value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_channel_mode const channel_mode_none;

  /// @brief Field channel_mode_normal value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_channel_mode const channel_mode_normal;

  /// @brief Field channel_mode_open value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::vx_channel_mode const channel_mode_open;

  /// @brief Field channel_mode_presentation value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_channel_mode const channel_mode_presentation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_channel_mode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_channel_mode, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_channel_mode, "Unity.Services.Vivox", "vx_channel_mode");
