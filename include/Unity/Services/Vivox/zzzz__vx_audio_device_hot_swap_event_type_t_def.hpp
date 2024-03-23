#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_audio_device_hot_swap_event_type_t)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_audio_device_hot_swap_event_type_t;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t);
// Type: Unity.Services.Vivox::vx_audio_device_hot_swap_event_type_t
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_audio_device_hot_swap_event_type_t
struct CORDL_TYPE vx_audio_device_hot_swap_event_type_t {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_audio_device_hot_swap_event_type_t_Unwrapped
  enum struct __vx_audio_device_hot_swap_event_type_t_Unwrapped : int32_t {
    __E_vx_audio_device_hot_swap_event_type_disabled_due_to_platform_constraints = static_cast<int32_t>(0x0),
    __E_vx_audio_device_hot_swap_event_type_active_render_device_changed = static_cast<int32_t>(0x1),
    __E_vx_audio_device_hot_swap_event_type_active_capture_device_changed = static_cast<int32_t>(0x2),
    __E_vx_audio_device_hot_swap_event_type_audio_device_added = static_cast<int32_t>(0x3),
    __E_vx_audio_device_hot_swap_event_type_audio_device_removed = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_audio_device_hot_swap_event_type_t_Unwrapped() const noexcept {
    return static_cast<__vx_audio_device_hot_swap_event_type_t_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_audio_device_hot_swap_event_type_t();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_audio_device_hot_swap_event_type_t(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field vx_audio_device_hot_swap_event_type_active_capture_device_changed value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t const vx_audio_device_hot_swap_event_type_active_capture_device_changed;

  /// @brief Field vx_audio_device_hot_swap_event_type_active_render_device_changed value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t const vx_audio_device_hot_swap_event_type_active_render_device_changed;

  /// @brief Field vx_audio_device_hot_swap_event_type_audio_device_added value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t const vx_audio_device_hot_swap_event_type_audio_device_added;

  /// @brief Field vx_audio_device_hot_swap_event_type_audio_device_removed value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t const vx_audio_device_hot_swap_event_type_audio_device_removed;

  /// @brief Field vx_audio_device_hot_swap_event_type_disabled_due_to_platform_constraints value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t const vx_audio_device_hot_swap_event_type_disabled_due_to_platform_constraints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_audio_device_hot_swap_event_type_t, "Unity.Services.Vivox", "vx_audio_device_hot_swap_event_type_t");
