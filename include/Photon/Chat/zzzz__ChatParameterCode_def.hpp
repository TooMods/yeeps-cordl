#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChatParameterCode)
// Forward declare root types
namespace Photon::Chat {
class ChatParameterCode;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ChatParameterCode);
// Type: Photon.Chat::ChatParameterCode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ChatParameterCode*
class CORDL_TYPE ChatParameterCode : public ::System::Object {
public:
  // Declarations
  static inline ::Photon::Chat::ChatParameterCode* New_ctor();

  /// @brief Method .ctor, addr 0x18106ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatParameterCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChatParameterCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChatParameterCode(ChatParameterCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChatParameterCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChatParameterCode(ChatParameterCode const&) = delete;

  /// @brief Field Broadcast offset 0xffffffff size 0x1
  static constexpr uint8_t Broadcast{ static_cast<uint8_t>(0x1au) };

  /// @brief Field Channel offset 0xffffffff size 0x1
  static constexpr uint8_t Channel{ static_cast<uint8_t>(0x1u) };

  /// @brief Field ChannelSubscribers offset 0xffffffff size 0x1
  static constexpr uint8_t ChannelSubscribers{ static_cast<uint8_t>(0x17u) };

  /// @brief Field ChannelUserCount offset 0xffffffff size 0x1
  static constexpr uint8_t ChannelUserCount{ static_cast<uint8_t>(0x6u) };

  /// @brief Field Channels offset 0xffffffff size 0x1
  static constexpr uint8_t Channels{ static_cast<uint8_t>(0x0u) };

  /// @brief Field DebugData offset 0xffffffff size 0x1
  static constexpr uint8_t DebugData{ static_cast<uint8_t>(0x18u) };

  /// @brief Field DebugMessage offset 0xffffffff size 0x1
  static constexpr uint8_t DebugMessage{ static_cast<uint8_t>(0x11u) };

  /// @brief Field ExpectedValues offset 0xffffffff size 0x1
  static constexpr uint8_t ExpectedValues{ static_cast<uint8_t>(0x19u) };

  /// @brief Field Friends offset 0xffffffff size 0x1
  static constexpr uint8_t Friends{ static_cast<uint8_t>(0xbu) };

  /// @brief Field HistoryLength offset 0xffffffff size 0x1
  static constexpr uint8_t HistoryLength{ static_cast<uint8_t>(0xeu) };

  /// @brief Field Message offset 0xffffffff size 0x1
  static constexpr uint8_t Message{ static_cast<uint8_t>(0x3u) };

  /// @brief Field Messages offset 0xffffffff size 0x1
  static constexpr uint8_t Messages{ static_cast<uint8_t>(0x2u) };

  /// @brief Field MsgId offset 0xffffffff size 0x1
  static constexpr uint8_t MsgId{ static_cast<uint8_t>(0x8u) };

  /// @brief Field MsgIds offset 0xffffffff size 0x1
  static constexpr uint8_t MsgIds{ static_cast<uint8_t>(0x9u) };

  /// @brief Field Properties offset 0xffffffff size 0x1
  static constexpr uint8_t Properties{ static_cast<uint8_t>(0x16u) };

  /// @brief Field Secret offset 0xffffffff size 0x1
  static constexpr uint8_t Secret{ static_cast<uint8_t>(0xddu) };

  /// @brief Field Sender offset 0xffffffff size 0x1
  static constexpr uint8_t Sender{ static_cast<uint8_t>(0x5u) };

  /// @brief Field Senders offset 0xffffffff size 0x1
  static constexpr uint8_t Senders{ static_cast<uint8_t>(0x4u) };

  /// @brief Field SkipMessage offset 0xffffffff size 0x1
  static constexpr uint8_t SkipMessage{ static_cast<uint8_t>(0xcu) };

  /// @brief Field Status offset 0xffffffff size 0x1
  static constexpr uint8_t Status{ static_cast<uint8_t>(0xau) };

  /// @brief Field SubscribeResults offset 0xffffffff size 0x1
  static constexpr uint8_t SubscribeResults{ static_cast<uint8_t>(0xfu) };

  /// @brief Field UniqueRoomId offset 0xffffffff size 0x1
  static constexpr uint8_t UniqueRoomId{ static_cast<uint8_t>(0x1du) };

  /// @brief Field UserId offset 0xffffffff size 0x1
  static constexpr uint8_t UserId{ static_cast<uint8_t>(0xe1u) };

  /// @brief Field UserProperties offset 0xffffffff size 0x1
  static constexpr uint8_t UserProperties{ static_cast<uint8_t>(0x1cu) };

  /// @brief Field WebFlags offset 0xffffffff size 0x1
  static constexpr uint8_t WebFlags{ static_cast<uint8_t>(0x15u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChatParameterCode, 0x10>, "Size mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ChatParameterCode);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatParameterCode*, "Photon.Chat", "ChatParameterCode");
