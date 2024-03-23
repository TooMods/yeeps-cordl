#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextToSpeechMessageType)
// Forward declare root types
namespace Unity::Services::Vivox {
struct TextToSpeechMessageType;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::TextToSpeechMessageType);
// Type: Unity.Services.Vivox::TextToSpeechMessageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::TextToSpeechMessageType
struct CORDL_TYPE TextToSpeechMessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextToSpeechMessageType_Unwrapped
  enum struct __TextToSpeechMessageType_Unwrapped : int32_t {
    __E_RemoteTransmission = static_cast<int32_t>(0x0),
    __E_LocalPlayback = static_cast<int32_t>(0x1),
    __E_RemoteTransmissionWithLocalPlayback = static_cast<int32_t>(0x2),
    __E_QueuedRemoteTransmission = static_cast<int32_t>(0x3),
    __E_QueuedLocalPlayback = static_cast<int32_t>(0x4),
    __E_QueuedRemoteTransmissionWithLocalPlayback = static_cast<int32_t>(0x5),
    __E_ScreenReader = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextToSpeechMessageType_Unwrapped() const noexcept {
    return static_cast<__TextToSpeechMessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextToSpeechMessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextToSpeechMessageType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field LocalPlayback value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::TextToSpeechMessageType const LocalPlayback;

  /// @brief Field QueuedLocalPlayback value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Vivox::TextToSpeechMessageType const QueuedLocalPlayback;

  /// @brief Field QueuedRemoteTransmission value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::TextToSpeechMessageType const QueuedRemoteTransmission;

  /// @brief Field QueuedRemoteTransmissionWithLocalPlayback value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::TextToSpeechMessageType const QueuedRemoteTransmissionWithLocalPlayback;

  /// @brief Field RemoteTransmission value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::TextToSpeechMessageType const RemoteTransmission;

  /// @brief Field RemoteTransmissionWithLocalPlayback value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::TextToSpeechMessageType const RemoteTransmissionWithLocalPlayback;

  /// @brief Field ScreenReader value: static_cast<int32_t>(0x6)
  static ::Unity::Services::Vivox::TextToSpeechMessageType const ScreenReader;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::TextToSpeechMessageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TextToSpeechMessageType, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::TextToSpeechMessageType, "Unity.Services.Vivox", "TextToSpeechMessageType");
