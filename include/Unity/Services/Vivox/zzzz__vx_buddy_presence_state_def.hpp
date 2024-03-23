#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_buddy_presence_state)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_buddy_presence_state;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_buddy_presence_state);
// Type: Unity.Services.Vivox::vx_buddy_presence_state
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_buddy_presence_state
struct CORDL_TYPE vx_buddy_presence_state {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_buddy_presence_state_Unwrapped
  enum struct __vx_buddy_presence_state_Unwrapped : int32_t {
    __E_buddy_presence_unknown = static_cast<int32_t>(0x0),
    __E_buddy_presence_pending = static_cast<int32_t>(0x1),
    __E_buddy_presence_online = static_cast<int32_t>(0x2),
    __E_buddy_presence_busy = static_cast<int32_t>(0x3),
    __E_buddy_presence_brb = static_cast<int32_t>(0x4),
    __E_buddy_presence_away = static_cast<int32_t>(0x5),
    __E_buddy_presence_onthephone = static_cast<int32_t>(0x6),
    __E_buddy_presence_outtolunch = static_cast<int32_t>(0x7),
    __E_buddy_presence_custom = static_cast<int32_t>(0x8),
    __E_buddy_presence_online_slc = static_cast<int32_t>(0x9),
    __E_buddy_presence_closed = static_cast<int32_t>(0x0),
    __E_buddy_presence_offline = static_cast<int32_t>(0x0),
    __E_buddy_presence_chat = static_cast<int32_t>(0xa),
    __E_buddy_presence_extended_away = static_cast<int32_t>(0xb),
    __E_buddy_presence_min = static_cast<int32_t>(0x0),
    __E_buddy_presence_max = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_buddy_presence_state_Unwrapped() const noexcept {
    return static_cast<__vx_buddy_presence_state_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_buddy_presence_state();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_buddy_presence_state(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field buddy_presence_away value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_away;

  /// @brief Field buddy_presence_brb value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_brb;

  /// @brief Field buddy_presence_busy value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_busy;

  /// @brief Field buddy_presence_chat value: static_cast<int32_t>(0xa)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_chat;

  /// @brief Field buddy_presence_closed value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_closed;

  /// @brief Field buddy_presence_custom value: static_cast<int32_t>(0x8)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_custom;

  /// @brief Field buddy_presence_extended_away value: static_cast<int32_t>(0xb)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_extended_away;

  /// @brief Field buddy_presence_max value: static_cast<int32_t>(0xb)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_max;

  /// @brief Field buddy_presence_min value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_min;

  /// @brief Field buddy_presence_offline value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_offline;

  /// @brief Field buddy_presence_online value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_online;

  /// @brief Field buddy_presence_online_slc value: static_cast<int32_t>(0x9)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_online_slc;

  /// @brief Field buddy_presence_onthephone value: static_cast<int32_t>(0x6)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_onthephone;

  /// @brief Field buddy_presence_outtolunch value: static_cast<int32_t>(0x7)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_outtolunch;

  /// @brief Field buddy_presence_pending value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_pending;

  /// @brief Field buddy_presence_unknown value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_buddy_presence_state const buddy_presence_unknown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_buddy_presence_state, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_buddy_presence_state, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_buddy_presence_state, "Unity.Services.Vivox", "vx_buddy_presence_state");
