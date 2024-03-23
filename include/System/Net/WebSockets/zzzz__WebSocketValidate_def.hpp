#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketValidate)
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
namespace System::Net::WebSockets {
struct WebSocketState;
}
namespace System {
template <typename T> struct ArraySegment_1;
}
// Forward declare root types
namespace System::Net::WebSockets {
class WebSocketValidate;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebSockets::WebSocketValidate);
// Type: System.Net.WebSockets::WebSocketValidate
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: ::System.Net.WebSockets::WebSocketValidate*
class CORDL_TYPE WebSocketValidate : public ::System::Object {
public:
  // Declarations
  /// @brief Method ThrowIfInvalidState, addr 0x2c91478, size 0x198, virtual false, abstract: false, final false
  static inline void ThrowIfInvalidState(::System::Net::WebSockets::WebSocketState currentState, bool isDisposed,
                                         ::ArrayW<::System::Net::WebSockets::WebSocketState, ::Array<::System::Net::WebSockets::WebSocketState>*> validStates);

  /// @brief Method ValidateArraySegment, addr 0x2c90ff0, size 0x13c, virtual false, abstract: false, final false
  static inline void ValidateArraySegment(::System::ArraySegment_1<uint8_t> arraySegment, ::StringW parameterName);

  /// @brief Method ValidateCloseStatus, addr 0x2c91b80, size 0x1a0, virtual false, abstract: false, final false
  static inline void ValidateCloseStatus(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::StringW statusDescription);

  /// @brief Method ValidateSubprotocol, addr 0x2c976e4, size 0x280, virtual false, abstract: false, final false
  static inline void ValidateSubprotocol(::StringW subProtocol);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebSocketValidate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebSocketValidate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebSocketValidate(WebSocketValidate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebSocketValidate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebSocketValidate(WebSocketValidate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::WebSocketValidate, 0x10>, "Size mismatch!");

} // namespace System::Net::WebSockets
NEED_NO_BOX(::System::Net::WebSockets::WebSocketValidate);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::WebSocketValidate*, "System.Net.WebSockets", "WebSocketValidate");
