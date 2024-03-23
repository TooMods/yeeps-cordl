#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketError)
// Forward declare root types
namespace System::Net::WebSockets {
struct WebSocketError;
}
// Write type traits
MARK_VAL_T(::System::Net::WebSockets::WebSocketError);
// Type: System.Net.WebSockets::WebSocketError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::System.Net.WebSockets::WebSocketError
struct CORDL_TYPE WebSocketError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WebSocketError_Unwrapped
  enum struct __WebSocketError_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_InvalidMessageType = static_cast<int32_t>(0x1),
    __E_Faulted = static_cast<int32_t>(0x2),
    __E_NativeError = static_cast<int32_t>(0x3),
    __E_NotAWebSocket = static_cast<int32_t>(0x4),
    __E_UnsupportedVersion = static_cast<int32_t>(0x5),
    __E_UnsupportedProtocol = static_cast<int32_t>(0x6),
    __E_HeaderError = static_cast<int32_t>(0x7),
    __E_ConnectionClosedPrematurely = static_cast<int32_t>(0x8),
    __E_InvalidState = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WebSocketError_Unwrapped() const noexcept {
    return static_cast<__WebSocketError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebSocketError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WebSocketError(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ConnectionClosedPrematurely value: static_cast<int32_t>(0x8)
  static ::System::Net::WebSockets::WebSocketError const ConnectionClosedPrematurely;

  /// @brief Field Faulted value: static_cast<int32_t>(0x2)
  static ::System::Net::WebSockets::WebSocketError const Faulted;

  /// @brief Field HeaderError value: static_cast<int32_t>(0x7)
  static ::System::Net::WebSockets::WebSocketError const HeaderError;

  /// @brief Field InvalidMessageType value: static_cast<int32_t>(0x1)
  static ::System::Net::WebSockets::WebSocketError const InvalidMessageType;

  /// @brief Field InvalidState value: static_cast<int32_t>(0x9)
  static ::System::Net::WebSockets::WebSocketError const InvalidState;

  /// @brief Field NativeError value: static_cast<int32_t>(0x3)
  static ::System::Net::WebSockets::WebSocketError const NativeError;

  /// @brief Field NotAWebSocket value: static_cast<int32_t>(0x4)
  static ::System::Net::WebSockets::WebSocketError const NotAWebSocket;

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::System::Net::WebSockets::WebSocketError const Success;

  /// @brief Field UnsupportedProtocol value: static_cast<int32_t>(0x6)
  static ::System::Net::WebSockets::WebSocketError const UnsupportedProtocol;

  /// @brief Field UnsupportedVersion value: static_cast<int32_t>(0x5)
  static ::System::Net::WebSockets::WebSocketError const UnsupportedVersion;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::WebSocketError, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketError, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::WebSockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::WebSocketError, "System.Net.WebSockets", "WebSocketError");
