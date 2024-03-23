#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectAndJoinRandomLb)
namespace Photon::Realtime {
class AppSettings;
}
namespace Photon::Realtime {
class ConnectionHandler;
}
namespace Photon::Realtime {
struct DisconnectCause;
}
namespace Photon::Realtime {
class FriendInfo;
}
namespace Photon::Realtime {
class IConnectionCallbacks;
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
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Photon::Realtime::Demo {
class ConnectAndJoinRandomLb;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::Demo::ConnectAndJoinRandomLb);
// Type: Photon.Realtime.Demo::ConnectAndJoinRandomLb
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime::Demo {
// Is value type: false
// CS Name: ::Photon.Realtime.Demo::ConnectAndJoinRandomLb*
class CORDL_TYPE ConnectAndJoinRandomLb : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field StateUiText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_StateUiText, put = __cordl_internal_set_StateUiText))::UnityW<::UnityEngine::UI::Text> StateUiText;

  /// @brief Field appSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_appSettings, put = __cordl_internal_set_appSettings))::Photon::Realtime::AppSettings* appSettings;

  /// @brief Field ch, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ch, put = __cordl_internal_set_ch))::UnityW<::Photon::Realtime::ConnectionHandler> ch;

  /// @brief Field lbc, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lbc, put = __cordl_internal_set_lbc))::Photon::Realtime::LoadBalancingClient* lbc;

  /// @brief Convert operator to "::Photon::Realtime::IConnectionCallbacks"
  constexpr operator ::Photon::Realtime::IConnectionCallbacks*() noexcept;

  /// @brief Convert operator to "::Photon::Realtime::ILobbyCallbacks"
  constexpr operator ::Photon::Realtime::ILobbyCallbacks*() noexcept;

  /// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

  static inline ::Photon::Realtime::Demo::ConnectAndJoinRandomLb* New_ctor();

  /// @brief Method OnConnected, addr 0xf35a88, size 0x4, virtual true, abstract: false, final true
  inline void OnConnected();

  /// @brief Method OnConnectedToMaster, addr 0xf35a8c, size 0x84, virtual true, abstract: false, final true
  inline void OnConnectedToMaster();

  /// @brief Method OnCreateRoomFailed, addr 0xf35cf8, size 0x4, virtual true, abstract: false, final true
  inline void OnCreateRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnCreatedRoom, addr 0xf35cf4, size 0x4, virtual true, abstract: false, final true
  inline void OnCreatedRoom();

  /// @brief Method OnCustomAuthenticationFailed, addr 0xf35c00, size 0x4, virtual true, abstract: false, final true
  inline void OnCustomAuthenticationFailed(::StringW debugMessage);

  /// @brief Method OnCustomAuthenticationResponse, addr 0xf35bfc, size 0x4, virtual true, abstract: false, final true
  inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* data);

  /// @brief Method OnDisconnected, addr 0xf35b10, size 0xec, virtual true, abstract: false, final true
  inline void OnDisconnected(::Photon::Realtime::DisconnectCause cause);

  /// @brief Method OnFriendListUpdate, addr 0xf35cf0, size 0x4, virtual true, abstract: false, final true
  inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList);

  /// @brief Method OnJoinRandomFailed, addr 0xf35d68, size 0xb4, virtual true, abstract: false, final true
  inline void OnJoinRandomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinRoomFailed, addr 0xf35d64, size 0x4, virtual true, abstract: false, final true
  inline void OnJoinRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinedLobby, addr 0xf35ce8, size 0x4, virtual true, abstract: false, final true
  inline void OnJoinedLobby();

  /// @brief Method OnJoinedRoom, addr 0xf35cfc, size 0x68, virtual true, abstract: false, final true
  inline void OnJoinedRoom();

  /// @brief Method OnLeftLobby, addr 0xf35cec, size 0x4, virtual true, abstract: false, final true
  inline void OnLeftLobby();

  /// @brief Method OnLeftRoom, addr 0xf35e1c, size 0x4, virtual true, abstract: false, final true
  inline void OnLeftRoom();

  /// @brief Method OnLobbyStatisticsUpdate, addr 0xf35ce4, size 0x4, virtual true, abstract: false, final true
  inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* lobbyStatistics);

  /// @brief Method OnRegionListReceived, addr 0xf35c04, size 0xdc, virtual true, abstract: false, final true
  inline void OnRegionListReceived(::Photon::Realtime::RegionHandler* regionHandler);

  /// @brief Method OnRegionPingCompleted, addr 0xf35e20, size 0x124, virtual false, abstract: false, final false
  inline void OnRegionPingCompleted(::Photon::Realtime::RegionHandler* regionHandler);

  /// @brief Method OnRoomListUpdate, addr 0xf35ce0, size 0x4, virtual true, abstract: false, final true
  inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>* roomList);

  /// @brief Method Start, addr 0xf357f4, size 0x160, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0xf35954, size 0x134, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_StateUiText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_StateUiText();

  constexpr ::Photon::Realtime::AppSettings*& __cordl_internal_get_appSettings();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::AppSettings*> const& __cordl_internal_get_appSettings() const;

  constexpr ::UnityW<::Photon::Realtime::ConnectionHandler> const& __cordl_internal_get_ch() const;

  constexpr ::UnityW<::Photon::Realtime::ConnectionHandler>& __cordl_internal_get_ch();

  constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_lbc();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& __cordl_internal_get_lbc() const;

  constexpr void __cordl_internal_set_StateUiText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_appSettings(::Photon::Realtime::AppSettings* value);

  constexpr void __cordl_internal_set_ch(::UnityW<::Photon::Realtime::ConnectionHandler> value);

  constexpr void __cordl_internal_set_lbc(::Photon::Realtime::LoadBalancingClient* value);

  /// @brief Method .ctor, addr 0xf35f44, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Photon::Realtime::IConnectionCallbacks"
  constexpr ::Photon::Realtime::IConnectionCallbacks* i___Photon__Realtime__IConnectionCallbacks() noexcept;

  /// @brief Convert to "::Photon::Realtime::ILobbyCallbacks"
  constexpr ::Photon::Realtime::ILobbyCallbacks* i___Photon__Realtime__ILobbyCallbacks() noexcept;

  /// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr ::Photon::Realtime::IMatchmakingCallbacks* i___Photon__Realtime__IMatchmakingCallbacks() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectAndJoinRandomLb();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectAndJoinRandomLb", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectAndJoinRandomLb(ConnectAndJoinRandomLb&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectAndJoinRandomLb", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectAndJoinRandomLb(ConnectAndJoinRandomLb const&) = delete;

  /// @brief Field appSettings, offset: 0x18, size: 0x8, def value: None
  ::Photon::Realtime::AppSettings* ___appSettings;

  /// @brief Field lbc, offset: 0x20, size: 0x8, def value: None
  ::Photon::Realtime::LoadBalancingClient* ___lbc;

  /// @brief Field ch, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Photon::Realtime::ConnectionHandler> ___ch;

  /// @brief Field StateUiText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___StateUiText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::Demo::ConnectAndJoinRandomLb, 0x38>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::Demo::ConnectAndJoinRandomLb, ___appSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Demo::ConnectAndJoinRandomLb, ___lbc) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Demo::ConnectAndJoinRandomLb, ___ch) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Demo::ConnectAndJoinRandomLb, ___StateUiText) == 0x30, "Offset mismatch!");

} // namespace Photon::Realtime::Demo
NEED_NO_BOX(::Photon::Realtime::Demo::ConnectAndJoinRandomLb);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::Demo::ConnectAndJoinRandomLb*, "Photon.Realtime.Demo", "ConnectAndJoinRandomLb");
