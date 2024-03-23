#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBehaviourPunCallbacks)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace Photon::Realtime {
struct DisconnectCause;
}
namespace Photon::Realtime {
class ErrorInfo;
}
namespace Photon::Realtime {
class FriendInfo;
}
namespace Photon::Realtime {
class IConnectionCallbacks;
}
namespace Photon::Realtime {
class IErrorInfoCallback;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class ILobbyCallbacks;
}
namespace Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace Photon::Realtime {
class IWebRpcCallback;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Realtime {
class RegionHandler;
}
namespace Photon::Realtime {
class RoomInfo;
}
namespace Photon::Realtime {
class TypedLobbyInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Pun {
class MonoBehaviourPunCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::MonoBehaviourPunCallbacks);
// Type: Photon.Pun::MonoBehaviourPunCallbacks
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::MonoBehaviourPunCallbacks*
class CORDL_TYPE MonoBehaviourPunCallbacks : public ::Photon::Pun::MonoBehaviourPun {
public:
  // Declarations
  /// @brief Convert operator to "::Photon::Realtime::IConnectionCallbacks"
  constexpr operator ::Photon::Realtime::IConnectionCallbacks*() noexcept;

  /// @brief Convert operator to "::Photon::Realtime::IErrorInfoCallback"
  constexpr operator ::Photon::Realtime::IErrorInfoCallback*() noexcept;

  /// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
  constexpr operator ::Photon::Realtime::IInRoomCallbacks*() noexcept;

  /// @brief Convert operator to "::Photon::Realtime::ILobbyCallbacks"
  constexpr operator ::Photon::Realtime::ILobbyCallbacks*() noexcept;

  /// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

  /// @brief Convert operator to "::Photon::Realtime::IWebRpcCallback"
  constexpr operator ::Photon::Realtime::IWebRpcCallback*() noexcept;

  static inline ::Photon::Pun::MonoBehaviourPunCallbacks* New_ctor();

  /// @brief Method OnConnected, addr 0x2754784, size 0x4, virtual true, abstract: false, final false
  inline void OnConnected();

  /// @brief Method OnConnectedToMaster, addr 0x27547c0, size 0x4, virtual true, abstract: false, final false
  inline void OnConnectedToMaster();

  /// @brief Method OnCreateRoomFailed, addr 0x2754790, size 0x4, virtual true, abstract: false, final false
  inline void OnCreateRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnCreatedRoom, addr 0x2754798, size 0x4, virtual true, abstract: false, final false
  inline void OnCreatedRoom();

  /// @brief Method OnCustomAuthenticationFailed, addr 0x27547d4, size 0x4, virtual true, abstract: false, final false
  inline void OnCustomAuthenticationFailed(::StringW debugMessage);

  /// @brief Method OnCustomAuthenticationResponse, addr 0x27547d0, size 0x4, virtual true, abstract: false, final false
  inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* data);

  /// @brief Method OnDisable, addr 0x2754730, size 0x54, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDisconnected, addr 0x27547a4, size 0x4, virtual true, abstract: false, final false
  inline void OnDisconnected(::Photon::Realtime::DisconnectCause cause);

  /// @brief Method OnEnable, addr 0x27546dc, size 0x54, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnErrorInfo, addr 0x27547e0, size 0x4, virtual true, abstract: false, final false
  inline void OnErrorInfo(::Photon::Realtime::ErrorInfo* errorInfo);

  /// @brief Method OnFriendListUpdate, addr 0x27547cc, size 0x4, virtual true, abstract: false, final false
  inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList);

  /// @brief Method OnJoinRandomFailed, addr 0x27547bc, size 0x4, virtual true, abstract: false, final false
  inline void OnJoinRandomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinRoomFailed, addr 0x2754794, size 0x4, virtual true, abstract: false, final false
  inline void OnJoinRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinedLobby, addr 0x275479c, size 0x4, virtual true, abstract: false, final false
  inline void OnJoinedLobby();

  /// @brief Method OnJoinedRoom, addr 0x27547b0, size 0x4, virtual true, abstract: false, final false
  inline void OnJoinedRoom();

  /// @brief Method OnLeftLobby, addr 0x27547a0, size 0x4, virtual true, abstract: false, final false
  inline void OnLeftLobby();

  /// @brief Method OnLeftRoom, addr 0x2754788, size 0x4, virtual true, abstract: false, final false
  inline void OnLeftRoom();

  /// @brief Method OnLobbyStatisticsUpdate, addr 0x27547dc, size 0x4, virtual true, abstract: false, final false
  inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* lobbyStatistics);

  /// @brief Method OnMasterClientSwitched, addr 0x275478c, size 0x4, virtual true, abstract: false, final false
  inline void OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient);

  /// @brief Method OnPlayerEnteredRoom, addr 0x27547b4, size 0x4, virtual true, abstract: false, final false
  inline void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);

  /// @brief Method OnPlayerLeftRoom, addr 0x27547b8, size 0x4, virtual true, abstract: false, final false
  inline void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);

  /// @brief Method OnPlayerPropertiesUpdate, addr 0x27547c8, size 0x4, virtual true, abstract: false, final false
  inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);

  /// @brief Method OnRegionListReceived, addr 0x27547a8, size 0x4, virtual true, abstract: false, final false
  inline void OnRegionListReceived(::Photon::Realtime::RegionHandler* regionHandler);

  /// @brief Method OnRoomListUpdate, addr 0x27547ac, size 0x4, virtual true, abstract: false, final false
  inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>* roomList);

  /// @brief Method OnRoomPropertiesUpdate, addr 0x27547c4, size 0x4, virtual true, abstract: false, final false
  inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);

  /// @brief Method OnWebRpcResponse, addr 0x27547d8, size 0x4, virtual true, abstract: false, final false
  inline void OnWebRpcResponse(::ExitGames::Client::Photon::OperationResponse* response);

  /// @brief Method .ctor, addr 0x27547e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Photon::Realtime::IConnectionCallbacks"
  constexpr ::Photon::Realtime::IConnectionCallbacks* i___Photon__Realtime__IConnectionCallbacks() noexcept;

  /// @brief Convert to "::Photon::Realtime::IErrorInfoCallback"
  constexpr ::Photon::Realtime::IErrorInfoCallback* i___Photon__Realtime__IErrorInfoCallback() noexcept;

  /// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
  constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

  /// @brief Convert to "::Photon::Realtime::ILobbyCallbacks"
  constexpr ::Photon::Realtime::ILobbyCallbacks* i___Photon__Realtime__ILobbyCallbacks() noexcept;

  /// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr ::Photon::Realtime::IMatchmakingCallbacks* i___Photon__Realtime__IMatchmakingCallbacks() noexcept;

  /// @brief Convert to "::Photon::Realtime::IWebRpcCallback"
  constexpr ::Photon::Realtime::IWebRpcCallback* i___Photon__Realtime__IWebRpcCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoBehaviourPunCallbacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourPunCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoBehaviourPunCallbacks(MonoBehaviourPunCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourPunCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoBehaviourPunCallbacks(MonoBehaviourPunCallbacks const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::MonoBehaviourPunCallbacks, 0x20>, "Size mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::MonoBehaviourPunCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::MonoBehaviourPunCallbacks*, "Photon.Pun", "MonoBehaviourPunCallbacks");
