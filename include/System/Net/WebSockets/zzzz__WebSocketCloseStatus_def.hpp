#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketCloseStatus)
// Forward declare root types
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
// Write type traits
MARK_VAL_T(::System::Net::WebSockets::WebSocketCloseStatus);
// Type: System.Net.WebSockets::WebSocketCloseStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: ::System.Net.WebSockets::WebSocketCloseStatus
struct CORDL_TYPE WebSocketCloseStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WebSocketCloseStatus_Unwrapped
  enum struct __WebSocketCloseStatus_Unwrapped : int32_t {
    __E_NormalClosure = static_cast<int32_t>(0x3e8),
    __E_EndpointUnavailable = static_cast<int32_t>(0x3e9),
    __E_ProtocolError = static_cast<int32_t>(0x3ea),
    __E_InvalidMessageType = static_cast<int32_t>(0x3eb),
    __E_Empty = static_cast<int32_t>(0x3ed),
    __E_InvalidPayloadData = static_cast<int32_t>(0x3ef),
    __E_PolicyViolation = static_cast<int32_t>(0x3f0),
    __E_MessageTooBig = static_cast<int32_t>(0x3f1),
    __E_MandatoryExtension = static_cast<int32_t>(0x3f2),
    __E_InternalServerError = static_cast<int32_t>(0x3f3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WebSocketCloseStatus_Unwrapped() const noexcept {
    return static_cast<__WebSocketCloseStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebSocketCloseStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WebSocketCloseStatus(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Empty value: static_cast<int32_t>(0x3ed)
  static ::System::Net::WebSockets::WebSocketCloseStatus const Empty;

  /// @brief Field EndpointUnavailable value: static_cast<int32_t>(0x3e9)
  static ::System::Net::WebSockets::WebSocketCloseStatus const EndpointUnavailable;

  /// @brief Field InternalServerError value: static_cast<int32_t>(0x3f3)
  static ::System::Net::WebSockets::WebSocketCloseStatus const InternalServerError;

  /// @brief Field InvalidMessageType value: static_cast<int32_t>(0x3eb)
  static ::System::Net::WebSockets::WebSocketCloseStatus const InvalidMessageType;

  /// @brief Field InvalidPayloadData value: static_cast<int32_t>(0x3ef)
  static ::System::Net::WebSockets::WebSocketCloseStatus const InvalidPayloadData;

  /// @brief Field MandatoryExtension value: static_cast<int32_t>(0x3f2)
  static ::System::Net::WebSockets::WebSocketCloseStatus const MandatoryExtension;

  /// @brief Field MessageTooBig value: static_cast<int32_t>(0x3f1)
  static ::System::Net::WebSockets::WebSocketCloseStatus const MessageTooBig;

  /// @brief Field NormalClosure value: static_cast<int32_t>(0x3e8)
  static ::System::Net::WebSockets::WebSocketCloseStatus const NormalClosure;

  /// @brief Field PolicyViolation value: static_cast<int32_t>(0x3f0)
  static ::System::Net::WebSockets::WebSocketCloseStatus const PolicyViolation;

  /// @brief Field ProtocolError value: static_cast<int32_t>(0x3ea)
  static ::System::Net::WebSockets::WebSocketCloseStatus const ProtocolError;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::WebSocketCloseStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketCloseStatus, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::WebSockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::WebSocketCloseStatus, "System.Net.WebSockets", "WebSocketCloseStatus");
