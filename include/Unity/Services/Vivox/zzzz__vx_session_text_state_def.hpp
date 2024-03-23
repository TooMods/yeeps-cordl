#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_session_text_state)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_session_text_state;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_session_text_state);
// Type: Unity.Services.Vivox::vx_session_text_state
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_session_text_state
struct CORDL_TYPE vx_session_text_state {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_session_text_state_Unwrapped
  enum struct __vx_session_text_state_Unwrapped : int32_t {
    __E_session_text_disconnected = static_cast<int32_t>(0x0),
    __E_session_text_connected = static_cast<int32_t>(0x1),
    __E_session_text_connecting = static_cast<int32_t>(0x2),
    __E_session_text_disconnecting = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_session_text_state_Unwrapped() const noexcept {
    return static_cast<__vx_session_text_state_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_session_text_state();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_session_text_state(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field session_text_connected value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_session_text_state const session_text_connected;

  /// @brief Field session_text_connecting value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_session_text_state const session_text_connecting;

  /// @brief Field session_text_disconnected value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_session_text_state const session_text_disconnected;

  /// @brief Field session_text_disconnecting value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::vx_session_text_state const session_text_disconnecting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_session_text_state, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_session_text_state, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_session_text_state, "Unity.Services.Vivox", "vx_session_text_state");
