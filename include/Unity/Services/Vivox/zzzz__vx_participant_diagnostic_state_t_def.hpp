#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_participant_diagnostic_state_t)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_participant_diagnostic_state_t;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_participant_diagnostic_state_t);
// Type: Unity.Services.Vivox::vx_participant_diagnostic_state_t
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_participant_diagnostic_state_t
struct CORDL_TYPE vx_participant_diagnostic_state_t {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_participant_diagnostic_state_t_Unwrapped
  enum struct __vx_participant_diagnostic_state_t_Unwrapped : int32_t {
    __E_participant_diagnostic_state_speaking_while_mic_muted = static_cast<int32_t>(0x1),
    __E_participant_diagnostic_state_speaking_while_mic_volume_zero = static_cast<int32_t>(0x2),
    __E_participant_diagnostic_state_no_capture_device = static_cast<int32_t>(0x3),
    __E_participant_diagnostic_state_no_render_device = static_cast<int32_t>(0x4),
    __E_participant_diagnostic_state_capture_device_read_errors = static_cast<int32_t>(0x5),
    __E_participant_diagnostic_state_render_device_write_errors = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_participant_diagnostic_state_t_Unwrapped() const noexcept {
    return static_cast<__vx_participant_diagnostic_state_t_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_participant_diagnostic_state_t();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_participant_diagnostic_state_t(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field participant_diagnostic_state_capture_device_read_errors value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::vx_participant_diagnostic_state_t const participant_diagnostic_state_capture_device_read_errors;

  /// @brief Field participant_diagnostic_state_no_capture_device value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::vx_participant_diagnostic_state_t const participant_diagnostic_state_no_capture_device;

  /// @brief Field participant_diagnostic_state_no_render_device value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::vx_participant_diagnostic_state_t const participant_diagnostic_state_no_render_device;

  /// @brief Field participant_diagnostic_state_render_device_write_errors value: static_cast<int32_t>(0x6)
  static ::Unity::Services::Vivox::vx_participant_diagnostic_state_t const participant_diagnostic_state_render_device_write_errors;

  /// @brief Field participant_diagnostic_state_speaking_while_mic_muted value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_participant_diagnostic_state_t const participant_diagnostic_state_speaking_while_mic_muted;

  /// @brief Field participant_diagnostic_state_speaking_while_mic_volume_zero value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_participant_diagnostic_state_t const participant_diagnostic_state_speaking_while_mic_volume_zero;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_participant_diagnostic_state_t, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_participant_diagnostic_state_t, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_participant_diagnostic_state_t, "Unity.Services.Vivox", "vx_participant_diagnostic_state_t");
