#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_sessiongroup_audio_injection_control_type)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_sessiongroup_audio_injection_control_type;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type);
// Type: Unity.Services.Vivox::vx_sessiongroup_audio_injection_control_type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_sessiongroup_audio_injection_control_type
struct CORDL_TYPE vx_sessiongroup_audio_injection_control_type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_sessiongroup_audio_injection_control_type_Unwrapped
  enum struct __vx_sessiongroup_audio_injection_control_type_Unwrapped : int32_t {
    __E_VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_STOP = static_cast<int32_t>(0x0),
    __E_vx_sessiongroup_audio_injection_control_stop = static_cast<int32_t>(0x0),
    __E_VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_START = static_cast<int32_t>(0x1),
    __E_vx_sessiongroup_audio_injection_control_start = static_cast<int32_t>(0x1),
    __E_VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_RESTART = static_cast<int32_t>(0x2),
    __E_vx_sessiongroup_audio_injection_control_restart = static_cast<int32_t>(0x2),
    __E_VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_MIN = static_cast<int32_t>(0x0),
    __E_vx_sessiongroup_audio_injection_control_min = static_cast<int32_t>(0x0),
    __E_VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_MAX = static_cast<int32_t>(0x2),
    __E_vx_sessiongroup_audio_injection_control_max = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_sessiongroup_audio_injection_control_type_Unwrapped() const noexcept {
    return static_cast<__vx_sessiongroup_audio_injection_control_type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_sessiongroup_audio_injection_control_type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_sessiongroup_audio_injection_control_type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_MAX value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type const VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_MAX;

  /// @brief Field VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_MIN value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type const VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_MIN;

  /// @brief Field VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_RESTART value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type const VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_RESTART;

  /// @brief Field VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_START value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type const VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_START;

  /// @brief Field VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_STOP value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type const VX_SESSIONGROUP_AUDIO_INJECTION_CONTROL_STOP;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field vx_sessiongroup_audio_injection_control_max value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type const vx_sessiongroup_audio_injection_control_max;

  /// @brief Field vx_sessiongroup_audio_injection_control_min value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type const vx_sessiongroup_audio_injection_control_min;

  /// @brief Field vx_sessiongroup_audio_injection_control_restart value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type const vx_sessiongroup_audio_injection_control_restart;

  /// @brief Field vx_sessiongroup_audio_injection_control_start value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type const vx_sessiongroup_audio_injection_control_start;

  /// @brief Field vx_sessiongroup_audio_injection_control_stop value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type const vx_sessiongroup_audio_injection_control_stop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_sessiongroup_audio_injection_control_type, "Unity.Services.Vivox", "vx_sessiongroup_audio_injection_control_type");
