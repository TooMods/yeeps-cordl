#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketState)
// Forward declare root types
namespace System::Net::WebSockets {
struct WebSocketState;
}
// Write type traits
MARK_VAL_T(::System::Net::WebSockets::WebSocketState);
// Type: System.Net.WebSockets::WebSocketState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::System.Net.WebSockets::WebSocketState
struct CORDL_TYPE WebSocketState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WebSocketState_Unwrapped
  enum struct __WebSocketState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Open = static_cast<int32_t>(0x2),
    __E_CloseSent = static_cast<int32_t>(0x3),
    __E_CloseReceived = static_cast<int32_t>(0x4),
    __E_Closed = static_cast<int32_t>(0x5),
    __E_Aborted = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WebSocketState_Unwrapped() const noexcept {
    return static_cast<__WebSocketState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebSocketState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WebSocketState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Aborted value: static_cast<int32_t>(0x6)
  static ::System::Net::WebSockets::WebSocketState const Aborted;

  /// @brief Field CloseReceived value: static_cast<int32_t>(0x4)
  static ::System::Net::WebSockets::WebSocketState const CloseReceived;

  /// @brief Field CloseSent value: static_cast<int32_t>(0x3)
  static ::System::Net::WebSockets::WebSocketState const CloseSent;

  /// @brief Field Closed value: static_cast<int32_t>(0x5)
  static ::System::Net::WebSockets::WebSocketState const Closed;

  /// @brief Field Connecting value: static_cast<int32_t>(0x1)
  static ::System::Net::WebSockets::WebSocketState const Connecting;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Net::WebSockets::WebSocketState const None;

  /// @brief Field Open value: static_cast<int32_t>(0x2)
  static ::System::Net::WebSockets::WebSocketState const Open;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::WebSocketState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::WebSockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::WebSocketState, "System.Net.WebSockets", "WebSocketState");
