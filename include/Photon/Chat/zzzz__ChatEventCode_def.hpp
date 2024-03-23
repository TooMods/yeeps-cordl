#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChatEventCode)
// Forward declare root types
namespace Photon::Chat {
class ChatEventCode;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ChatEventCode);
// Type: Photon.Chat::ChatEventCode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ChatEventCode*
class CORDL_TYPE ChatEventCode : public ::System::Object {
public:
  // Declarations
  static inline ::Photon::Chat::ChatEventCode* New_ctor();

  /// @brief Method .ctor, addr 0x181069c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatEventCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChatEventCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChatEventCode(ChatEventCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChatEventCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChatEventCode(ChatEventCode const&) = delete;

  /// @brief Field ChatMessages offset 0xffffffff size 0x1
  static constexpr uint8_t ChatMessages{ static_cast<uint8_t>(0x0u) };

  /// @brief Field ErrorInfo offset 0xffffffff size 0x1
  static constexpr uint8_t ErrorInfo{ static_cast<uint8_t>(0xau) };

  /// @brief Field FriendsList offset 0xffffffff size 0x1
  static constexpr uint8_t FriendsList{ static_cast<uint8_t>(0x3u) };

  /// @brief Field PrivateMessage offset 0xffffffff size 0x1
  static constexpr uint8_t PrivateMessage{ static_cast<uint8_t>(0x2u) };

  /// @brief Field PropertiesChanged offset 0xffffffff size 0x1
  static constexpr uint8_t PropertiesChanged{ static_cast<uint8_t>(0x7u) };

  /// @brief Field StatusUpdate offset 0xffffffff size 0x1
  static constexpr uint8_t StatusUpdate{ static_cast<uint8_t>(0x4u) };

  /// @brief Field Subscribe offset 0xffffffff size 0x1
  static constexpr uint8_t Subscribe{ static_cast<uint8_t>(0x5u) };

  /// @brief Field Unsubscribe offset 0xffffffff size 0x1
  static constexpr uint8_t Unsubscribe{ static_cast<uint8_t>(0x6u) };

  /// @brief Field UserSubscribed offset 0xffffffff size 0x1
  static constexpr uint8_t UserSubscribed{ static_cast<uint8_t>(0x8u) };

  /// @brief Field UserUnsubscribed offset 0xffffffff size 0x1
  static constexpr uint8_t UserUnsubscribed{ static_cast<uint8_t>(0x9u) };

  /// @brief Field Users offset 0xffffffff size 0x1
  static constexpr uint8_t Users{ static_cast<uint8_t>(0x1u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChatEventCode, 0x10>, "Size mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ChatEventCode);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatEventCode*, "Photon.Chat", "ChatEventCode");
