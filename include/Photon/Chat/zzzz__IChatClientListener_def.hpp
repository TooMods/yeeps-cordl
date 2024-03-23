#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IChatClientListener)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace Photon::Chat {
struct ChatState;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Chat {
class IChatClientListener;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::IChatClientListener);
// Type: Photon.Chat::IChatClientListener
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::IChatClientListener*
class CORDL_TYPE IChatClientListener {
public:
  // Declarations
  /// @brief Method DebugReturn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DebugReturn(::ExitGames::Client::Photon::DebugLevel level, ::StringW message);

  /// @brief Method OnChatStateChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnChatStateChange(::Photon::Chat::ChatState state);

  /// @brief Method OnConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnConnected();

  /// @brief Method OnDisconnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDisconnected();

  /// @brief Method OnGetMessages, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnGetMessages(::StringW channelName, ::ArrayW<::StringW, ::Array<::StringW>*> senders, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> messages);

  /// @brief Method OnPrivateMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPrivateMessage(::StringW sender, ::System::Object* message, ::StringW channelName);

  /// @brief Method OnStatusUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnStatusUpdate(::StringW user, int32_t status, bool gotMessage, ::System::Object* message);

  /// @brief Method OnSubscribed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSubscribed(::ArrayW<::StringW, ::Array<::StringW>*> channels, ::ArrayW<bool, ::Array<bool>*> results);

  /// @brief Method OnUnsubscribed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUnsubscribed(::ArrayW<::StringW, ::Array<::StringW>*> channels);

  /// @brief Method OnUserSubscribed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUserSubscribed(::StringW channel, ::StringW user);

  /// @brief Method OnUserUnsubscribed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUserUnsubscribed(::StringW channel, ::StringW user);

  // Ctor Parameters [CppParam { name: "", ty: "IChatClientListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IChatClientListener(IChatClientListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IChatClientListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IChatClientListener(IChatClientListener const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::IChatClientListener);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::IChatClientListener*, "Photon.Chat", "IChatClientListener");
