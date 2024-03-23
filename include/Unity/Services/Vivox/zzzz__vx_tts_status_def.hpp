#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_tts_status)
// Forward declare root types
namespace Unity::Services::Vivox {
struct vx_tts_status;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::vx_tts_status);
// Type: Unity.Services.Vivox::vx_tts_status
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::vx_tts_status
struct CORDL_TYPE vx_tts_status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __vx_tts_status_Unwrapped
  enum struct __vx_tts_status_Unwrapped : int32_t {
    __E_tts_status_success = static_cast<int32_t>(0x0),
    __E_tts_error_invalid_engine_type = static_cast<int32_t>(0xfffffc17),
    __E_tts_error_engine_allocation_failed = static_cast<int32_t>(0xfffffc16),
    __E_tts_error_not_supported = static_cast<int32_t>(0xfffffc15),
    __E_tts_error_max_characters_exceeded = static_cast<int32_t>(0xfffffc14),
    __E_tts_error_utterance_below_min_duration = static_cast<int32_t>(0xfffffc13),
    __E_tts_status_input_text_was_enqueued = static_cast<int32_t>(0xfffffc12),
    __E_tts_error_sdk_not_initialized = static_cast<int32_t>(0xfffffc11),
    __E_tts_error_destination_queue_is_full = static_cast<int32_t>(0xfffffc10),
    __E_tts_status_enqueue_not_necessary = static_cast<int32_t>(0xfffffc0f),
    __E_tts_error_utterance_not_found = static_cast<int32_t>(0xfffffc0e),
    __E_tts_error_manager_not_found = static_cast<int32_t>(0xfffffc0d),
    __E_tts_error_invalid_argument = static_cast<int32_t>(0xfffffc0c),
    __E_tts_error_internal = static_cast<int32_t>(0xfffffc0b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __vx_tts_status_Unwrapped() const noexcept {
    return static_cast<__vx_tts_status_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_tts_status();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr vx_tts_status(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field tts_error_destination_queue_is_full value: static_cast<int32_t>(0xfffffc10)
  static ::Unity::Services::Vivox::vx_tts_status const tts_error_destination_queue_is_full;

  /// @brief Field tts_error_engine_allocation_failed value: static_cast<int32_t>(0xfffffc16)
  static ::Unity::Services::Vivox::vx_tts_status const tts_error_engine_allocation_failed;

  /// @brief Field tts_error_internal value: static_cast<int32_t>(0xfffffc0b)
  static ::Unity::Services::Vivox::vx_tts_status const tts_error_internal;

  /// @brief Field tts_error_invalid_argument value: static_cast<int32_t>(0xfffffc0c)
  static ::Unity::Services::Vivox::vx_tts_status const tts_error_invalid_argument;

  /// @brief Field tts_error_invalid_engine_type value: static_cast<int32_t>(0xfffffc17)
  static ::Unity::Services::Vivox::vx_tts_status const tts_error_invalid_engine_type;

  /// @brief Field tts_error_manager_not_found value: static_cast<int32_t>(0xfffffc0d)
  static ::Unity::Services::Vivox::vx_tts_status const tts_error_manager_not_found;

  /// @brief Field tts_error_max_characters_exceeded value: static_cast<int32_t>(0xfffffc14)
  static ::Unity::Services::Vivox::vx_tts_status const tts_error_max_characters_exceeded;

  /// @brief Field tts_error_not_supported value: static_cast<int32_t>(0xfffffc15)
  static ::Unity::Services::Vivox::vx_tts_status const tts_error_not_supported;

  /// @brief Field tts_error_sdk_not_initialized value: static_cast<int32_t>(0xfffffc11)
  static ::Unity::Services::Vivox::vx_tts_status const tts_error_sdk_not_initialized;

  /// @brief Field tts_error_utterance_below_min_duration value: static_cast<int32_t>(0xfffffc13)
  static ::Unity::Services::Vivox::vx_tts_status const tts_error_utterance_below_min_duration;

  /// @brief Field tts_error_utterance_not_found value: static_cast<int32_t>(0xfffffc0e)
  static ::Unity::Services::Vivox::vx_tts_status const tts_error_utterance_not_found;

  /// @brief Field tts_status_enqueue_not_necessary value: static_cast<int32_t>(0xfffffc0f)
  static ::Unity::Services::Vivox::vx_tts_status const tts_status_enqueue_not_necessary;

  /// @brief Field tts_status_input_text_was_enqueued value: static_cast<int32_t>(0xfffffc12)
  static ::Unity::Services::Vivox::vx_tts_status const tts_status_input_text_was_enqueued;

  /// @brief Field tts_status_success value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::vx_tts_status const tts_status_success;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_tts_status, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_tts_status, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_tts_status, "Unity.Services.Vivox", "vx_tts_status");
