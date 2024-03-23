#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SupportLogger)
namespace ExitGames::Client::Photon {
class Hashtable;
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
class LoadBalancingClient;
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
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class SupportLogger;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::SupportLogger);
// Type: Photon.Realtime::SupportLogger
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::SupportLogger*
class CORDL_TYPE SupportLogger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Client, put = set_Client))::Photon::Realtime::LoadBalancingClient* Client;

  /// @brief Field LogTrafficStats, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_LogTrafficStats, put = __cordl_internal_set_LogTrafficStats)) bool LogTrafficStats;

  /// @brief Field client, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::Photon::Realtime::LoadBalancingClient* client;

  /// @brief Field initialOnApplicationPauseSkipped, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_initialOnApplicationPauseSkipped, put = __cordl_internal_set_initialOnApplicationPauseSkipped)) bool initialOnApplicationPauseSkipped;

  /// @brief Field pingMax, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_pingMax, put = __cordl_internal_set_pingMax)) int32_t pingMax;

  /// @brief Field pingMin, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_pingMin, put = __cordl_internal_set_pingMin)) int32_t pingMin;

  /// @brief Field startStopwatch, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_startStopwatch, put = __cordl_internal_set_startStopwatch))::System::Diagnostics::Stopwatch* startStopwatch;

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

  /// @brief Method GetFormattedTimestamp, addr 0x1611160, size 0x1d0, virtual false, abstract: false, final false
  inline ::StringW GetFormattedTimestamp();

  /// @brief Method LogBasics, addr 0x1610664, size 0x980, virtual false, abstract: false, final false
  inline void LogBasics();

  /// @brief Method LogStats, addr 0x16114c4, size 0x1f0, virtual false, abstract: false, final false
  inline void LogStats();

  static inline ::Photon::Realtime::SupportLogger* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x161100c, size 0x154, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pause);

  /// @brief Method OnApplicationQuit, addr 0x1611330, size 0x8, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnConnected, addr 0x16116b4, size 0x10c, virtual true, abstract: false, final true
  inline void OnConnected();

  /// @brief Method OnConnectedToMaster, addr 0x16117c0, size 0x90, virtual true, abstract: false, final true
  inline void OnConnectedToMaster();

  /// @brief Method OnCreateRoomFailed, addr 0x1611a50, size 0x20c, virtual true, abstract: false, final true
  inline void OnCreateRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnCreatedRoom, addr 0x16122e8, size 0x274, virtual true, abstract: false, final true
  inline void OnCreatedRoom();

  /// @brief Method OnCustomAuthenticationFailed, addr 0x1612d04, size 0xb8, virtual true, abstract: false, final true
  inline void OnCustomAuthenticationFailed(::StringW debugMessage);

  /// @brief Method OnCustomAuthenticationResponse, addr 0x1612c10, size 0xf4, virtual true, abstract: false, final true
  inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* data);

  /// @brief Method OnDestroy, addr 0x1610fe4, size 0x28, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisconnected, addr 0x16125ec, size 0x11c, virtual true, abstract: false, final true
  inline void OnDisconnected(::Photon::Realtime::DisconnectCause cause);

  /// @brief Method OnErrorInfo, addr 0x1612e4c, size 0x78, virtual true, abstract: false, final true
  inline void OnErrorInfo(::Photon::Realtime::ErrorInfo* errorInfo);

  /// @brief Method OnFriendListUpdate, addr 0x1611850, size 0x90, virtual true, abstract: false, final true
  inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList);

  /// @brief Method OnJoinRandomFailed, addr 0x16120dc, size 0x20c, virtual true, abstract: false, final true
  inline void OnJoinRandomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinRoomFailed, addr 0x1611ed0, size 0x20c, virtual true, abstract: false, final true
  inline void OnJoinRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinedLobby, addr 0x16118e0, size 0xe0, virtual true, abstract: false, final true
  inline void OnJoinedLobby();

  /// @brief Method OnJoinedRoom, addr 0x1611c5c, size 0x274, virtual true, abstract: false, final true
  inline void OnJoinedRoom();

  /// @brief Method OnLeftLobby, addr 0x16119c0, size 0x90, virtual true, abstract: false, final true
  inline void OnLeftLobby();

  /// @brief Method OnLeftRoom, addr 0x161255c, size 0x90, virtual true, abstract: false, final true
  inline void OnLeftRoom();

  /// @brief Method OnLobbyStatisticsUpdate, addr 0x1612dbc, size 0x90, virtual true, abstract: false, final true
  inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* lobbyStatistics);

  /// @brief Method OnMasterClientSwitched, addr 0x1612b38, size 0xd8, virtual true, abstract: false, final true
  inline void OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient);

  /// @brief Method OnPlayerEnteredRoom, addr 0x1612868, size 0xd8, virtual true, abstract: false, final true
  inline void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);

  /// @brief Method OnPlayerLeftRoom, addr 0x1612940, size 0xd8, virtual true, abstract: false, final true
  inline void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);

  /// @brief Method OnPlayerPropertiesUpdate, addr 0x1612aa8, size 0x90, virtual true, abstract: false, final true
  inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);

  /// @brief Method OnRegionListReceived, addr 0x1612708, size 0x90, virtual true, abstract: false, final true
  inline void OnRegionListReceived(::Photon::Realtime::RegionHandler* regionHandler);

  /// @brief Method OnRoomListUpdate, addr 0x1612798, size 0xd0, virtual true, abstract: false, final true
  inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>* roomList);

  /// @brief Method OnRoomPropertiesUpdate, addr 0x1612a18, size 0x90, virtual true, abstract: false, final true
  inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);

  /// @brief Method Start, addr 0x16105e0, size 0x84, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartLogStats, addr 0x1611338, size 0x54, virtual false, abstract: false, final false
  inline void StartLogStats();

  /// @brief Method StartTrackValues, addr 0x16113d8, size 0x54, virtual false, abstract: false, final false
  inline void StartTrackValues();

  /// @brief Method StopLogStats, addr 0x161138c, size 0x4c, virtual false, abstract: false, final false
  inline void StopLogStats();

  /// @brief Method StopTrackValues, addr 0x161142c, size 0x4c, virtual false, abstract: false, final false
  inline void StopTrackValues();

  /// @brief Method TrackValues, addr 0x1611478, size 0x4c, virtual false, abstract: false, final false
  inline void TrackValues();

  constexpr bool const& __cordl_internal_get_LogTrafficStats() const;

  constexpr bool& __cordl_internal_get_LogTrafficStats();

  constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& __cordl_internal_get_client() const;

  constexpr bool const& __cordl_internal_get_initialOnApplicationPauseSkipped() const;

  constexpr bool& __cordl_internal_get_initialOnApplicationPauseSkipped();

  constexpr int32_t const& __cordl_internal_get_pingMax() const;

  constexpr int32_t& __cordl_internal_get_pingMax();

  constexpr int32_t const& __cordl_internal_get_pingMin() const;

  constexpr int32_t& __cordl_internal_get_pingMin();

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_startStopwatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __cordl_internal_get_startStopwatch() const;

  constexpr void __cordl_internal_set_LogTrafficStats(bool value);

  constexpr void __cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value);

  constexpr void __cordl_internal_set_initialOnApplicationPauseSkipped(bool value);

  constexpr void __cordl_internal_set_pingMax(int32_t value);

  constexpr void __cordl_internal_set_pingMin(int32_t value);

  constexpr void __cordl_internal_set_startStopwatch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method .ctor, addr 0x1612ec4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Client, addr 0x1610580, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::LoadBalancingClient* get_Client();

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

  /// @brief Method set_Client, addr 0x1610588, size 0x58, virtual false, abstract: false, final false
  inline void set_Client(::Photon::Realtime::LoadBalancingClient* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SupportLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupportLogger(SupportLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupportLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupportLogger(SupportLogger const&) = delete;

  /// @brief Field LogTrafficStats, offset: 0x18, size: 0x1, def value: None
  bool ___LogTrafficStats;

  /// @brief Field client, offset: 0x20, size: 0x8, def value: None
  ::Photon::Realtime::LoadBalancingClient* ___client;

  /// @brief Field startStopwatch, offset: 0x28, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ___startStopwatch;

  /// @brief Field initialOnApplicationPauseSkipped, offset: 0x30, size: 0x1, def value: None
  bool ___initialOnApplicationPauseSkipped;

  /// @brief Field pingMax, offset: 0x34, size: 0x4, def value: None
  int32_t ___pingMax;

  /// @brief Field pingMin, offset: 0x38, size: 0x4, def value: None
  int32_t ___pingMin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::SupportLogger, 0x40>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::SupportLogger, ___LogTrafficStats) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::SupportLogger, ___client) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::SupportLogger, ___startStopwatch) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::SupportLogger, ___initialOnApplicationPauseSkipped) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::SupportLogger, ___pingMax) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::SupportLogger, ___pingMin) == 0x38, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::SupportLogger);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::SupportLogger*, "Photon.Realtime", "SupportLogger");
