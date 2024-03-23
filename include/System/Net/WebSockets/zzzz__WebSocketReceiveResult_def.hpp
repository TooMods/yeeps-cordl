#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketReceiveResult)
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
namespace System::Net::WebSockets {
struct WebSocketMessageType;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace System::Net::WebSockets {
class WebSocketReceiveResult;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebSockets::WebSocketReceiveResult);
// Type: System.Net.WebSockets::WebSocketReceiveResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: ::System.Net.WebSockets::WebSocketReceiveResult*
class CORDL_TYPE WebSocketReceiveResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_EndOfMessage)) bool EndOfMessage;

  /// @brief Field <CloseStatusDescription>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__CloseStatusDescription_k__BackingField,
                      put = __cordl_internal_set__CloseStatusDescription_k__BackingField))::StringW _CloseStatusDescription_k__BackingField;

  /// @brief Field <CloseStatus>k__BackingField, offset 0x1c, size 0x8
  __declspec(property(get = __cordl_internal_get__CloseStatus_k__BackingField,
                      put = __cordl_internal_set__CloseStatus_k__BackingField))::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> _CloseStatus_k__BackingField;

  /// @brief Field <Count>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Count_k__BackingField, put = __cordl_internal_set__Count_k__BackingField)) int32_t _Count_k__BackingField;

  /// @brief Field <EndOfMessage>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__EndOfMessage_k__BackingField, put = __cordl_internal_set__EndOfMessage_k__BackingField)) bool _EndOfMessage_k__BackingField;

  /// @brief Field <MessageType>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__MessageType_k__BackingField,
                      put = __cordl_internal_set__MessageType_k__BackingField))::System::Net::WebSockets::WebSocketMessageType _MessageType_k__BackingField;

  static inline ::System::Net::WebSockets::WebSocketReceiveResult* New_ctor(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage);

  static inline ::System::Net::WebSockets::WebSocketReceiveResult* New_ctor(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage,
                                                                            ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> closeStatus, ::StringW closeStatusDescription);

  constexpr ::StringW const& __cordl_internal_get__CloseStatusDescription_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CloseStatusDescription_k__BackingField();

  constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> const& __cordl_internal_get__CloseStatus_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>& __cordl_internal_get__CloseStatus_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Count_k__BackingField();

  constexpr bool const& __cordl_internal_get__EndOfMessage_k__BackingField() const;

  constexpr bool& __cordl_internal_get__EndOfMessage_k__BackingField();

  constexpr ::System::Net::WebSockets::WebSocketMessageType const& __cordl_internal_get__MessageType_k__BackingField() const;

  constexpr ::System::Net::WebSockets::WebSocketMessageType& __cordl_internal_get__MessageType_k__BackingField();

  constexpr void __cordl_internal_set__CloseStatusDescription_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__CloseStatus_k__BackingField(::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> value);

  constexpr void __cordl_internal_set__Count_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__EndOfMessage_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MessageType_k__BackingField(::System::Net::WebSockets::WebSocketMessageType value);

  /// @brief Method .ctor, addr 0x2c93f8c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage);

  /// @brief Method .ctor, addr 0x2c9402c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> closeStatus,
                    ::StringW closeStatusDescription);

  /// @brief Method get_Count, addr 0x2c9ca50, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_EndOfMessage, addr 0x2c9ca58, size 0x8, virtual false, abstract: false, final false
  inline bool get_EndOfMessage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebSocketReceiveResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebSocketReceiveResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebSocketReceiveResult(WebSocketReceiveResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebSocketReceiveResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebSocketReceiveResult(WebSocketReceiveResult const&) = delete;

  /// @brief Field <Count>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____Count_k__BackingField;

  /// @brief Field <EndOfMessage>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____EndOfMessage_k__BackingField;

  /// @brief Field <MessageType>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::System::Net::WebSockets::WebSocketMessageType ____MessageType_k__BackingField;

  /// @brief Field <CloseStatus>k__BackingField, offset: 0x1c, size: 0x8, def value: None
  ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> ____CloseStatus_k__BackingField;

  /// @brief Field <CloseStatusDescription>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____CloseStatusDescription_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebSockets::WebSocketReceiveResult, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketReceiveResult, ____Count_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketReceiveResult, ____EndOfMessage_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketReceiveResult, ____MessageType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketReceiveResult, ____CloseStatus_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketReceiveResult, ____CloseStatusDescription_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace System::Net::WebSockets
NEED_NO_BOX(::System::Net::WebSockets::WebSocketReceiveResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::WebSocketReceiveResult*, "System.Net.WebSockets", "WebSocketReceiveResult");
