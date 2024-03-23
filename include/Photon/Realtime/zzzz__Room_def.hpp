#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Room)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Realtime {
class RoomOptions;
}
namespace Photon::Realtime {
class WebFlags;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Photon::Realtime {
class Room;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::Room);
// Type: Photon.Realtime::Room
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 125, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::Room*
class CORDL_TYPE Room : public ::Photon::Realtime::RoomInfo {
public:
  // Declarations
  __declspec(property(get = get_AutoCleanUp)) bool AutoCleanUp;

  __declspec(property(get = get_BroadcastPropertiesChangeToAll, put = set_BroadcastPropertiesChangeToAll)) bool BroadcastPropertiesChangeToAll;

  __declspec(property(get = get_DeleteNullProperties, put = set_DeleteNullProperties)) bool DeleteNullProperties;

  __declspec(property(get = get_EmptyRoomTtl, put = set_EmptyRoomTtl)) int32_t EmptyRoomTtl;

  __declspec(property(get = get_ExpectedUsers))::ArrayW<::StringW, ::Array<::StringW>*> ExpectedUsers;

  __declspec(property(get = get_IsOffline, put = set_IsOffline)) bool IsOffline;

  __declspec(property(get = get_IsOpen, put = set_IsOpen)) bool IsOpen;

  __declspec(property(get = get_IsVisible, put = set_IsVisible)) bool IsVisible;

  __declspec(property(get = get_LoadBalancingClient, put = set_LoadBalancingClient))::Photon::Realtime::LoadBalancingClient* LoadBalancingClient;

  __declspec(property(get = get_MasterClientId)) int32_t MasterClientId;

  __declspec(property(get = get_MaxPlayers, put = set_MaxPlayers)) uint8_t MaxPlayers;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_PlayerCount)) uint8_t PlayerCount;

  __declspec(property(get = get_PlayerTtl, put = set_PlayerTtl)) int32_t PlayerTtl;

  __declspec(property(get = get_Players, put = set_Players))::System::Collections::Generic::Dictionary_2<int32_t, ::Photon::Realtime::Player*>* Players;

  __declspec(property(get = get_PropertiesListedInLobby, put = set_PropertiesListedInLobby))::ArrayW<::StringW, ::Array<::StringW>*> PropertiesListedInLobby;

  __declspec(property(get = get_PublishUserId, put = set_PublishUserId)) bool PublishUserId;

  __declspec(property(get = get_SuppressPlayerInfo, put = set_SuppressPlayerInfo)) bool SuppressPlayerInfo;

  __declspec(property(get = get_SuppressRoomEvents, put = set_SuppressRoomEvents)) bool SuppressRoomEvents;

  /// @brief Field <BroadcastPropertiesChangeToAll>k__BackingField, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField,
                      put = __cordl_internal_set__BroadcastPropertiesChangeToAll_k__BackingField)) bool _BroadcastPropertiesChangeToAll_k__BackingField;

  /// @brief Field <DeleteNullProperties>k__BackingField, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get__DeleteNullProperties_k__BackingField, put = __cordl_internal_set__DeleteNullProperties_k__BackingField)) bool _DeleteNullProperties_k__BackingField;

  /// @brief Field <LoadBalancingClient>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__LoadBalancingClient_k__BackingField,
                      put = __cordl_internal_set__LoadBalancingClient_k__BackingField))::Photon::Realtime::LoadBalancingClient* _LoadBalancingClient_k__BackingField;

  /// @brief Field <PublishUserId>k__BackingField, offset 0x7b, size 0x1
  __declspec(property(get = __cordl_internal_get__PublishUserId_k__BackingField, put = __cordl_internal_set__PublishUserId_k__BackingField)) bool _PublishUserId_k__BackingField;

  /// @brief Field <SuppressPlayerInfo>k__BackingField, offset 0x7a, size 0x1
  __declspec(property(get = __cordl_internal_get__SuppressPlayerInfo_k__BackingField, put = __cordl_internal_set__SuppressPlayerInfo_k__BackingField)) bool _SuppressPlayerInfo_k__BackingField;

  /// @brief Field <SuppressRoomEvents>k__BackingField, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__SuppressRoomEvents_k__BackingField, put = __cordl_internal_set__SuppressRoomEvents_k__BackingField)) bool _SuppressRoomEvents_k__BackingField;

  /// @brief Field isOffline, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_isOffline, put = __cordl_internal_set_isOffline)) bool isOffline;

  /// @brief Field players, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_players, put = __cordl_internal_set_players))::System::Collections::Generic::Dictionary_2<int32_t, ::Photon::Realtime::Player*>* players;

  /// @brief Method AddPlayer, addr 0x160f7c0, size 0x84, virtual true, abstract: false, final false
  inline bool AddPlayer(::Photon::Realtime::Player* player);

  /// @brief Method ClearExpectedUsers, addr 0x160f934, size 0x78, virtual false, abstract: false, final false
  inline bool ClearExpectedUsers();

  /// @brief Method GetPlayer, addr 0x160f8b0, size 0x84, virtual true, abstract: false, final false
  inline ::Photon::Realtime::Player* GetPlayer(int32_t id, bool findMaster);

  /// @brief Method InternalCacheProperties, addr 0x160ef2c, size 0x70, virtual true, abstract: false, final false
  inline void InternalCacheProperties(::ExitGames::Client::Photon::Hashtable* propertiesToCache);

  /// @brief Method InternalCacheRoomFlags, addr 0x160eef4, size 0x38, virtual false, abstract: false, final false
  inline void InternalCacheRoomFlags(int32_t roomFlags);

  static inline ::Photon::Realtime::Room* New_ctor(::StringW roomName, ::Photon::Realtime::RoomOptions* options, bool isOffline);

  /// @brief Method RemovePlayer, addr 0x160f670, size 0x30, virtual true, abstract: false, final false
  inline void RemovePlayer(int32_t id);

  /// @brief Method RemovePlayer, addr 0x160f60c, size 0x64, virtual true, abstract: false, final false
  inline void RemovePlayer(::Photon::Realtime::Player* player);

  /// @brief Method SetCustomProperties, addr 0x160f420, size 0x148, virtual true, abstract: false, final false
  inline bool SetCustomProperties(::ExitGames::Client::Photon::Hashtable* propertiesToSet, ::ExitGames::Client::Photon::Hashtable* expectedProperties, ::Photon::Realtime::WebFlags* webFlags);

  /// @brief Method SetExpectedUsers, addr 0x160faa0, size 0x90, virtual false, abstract: false, final false
  inline bool SetExpectedUsers(::ArrayW<::StringW, ::Array<::StringW>*> newExpectedUsers);

  /// @brief Method SetExpectedUsers, addr 0x160f9ac, size 0xf4, virtual false, abstract: false, final false
  inline bool SetExpectedUsers(::ArrayW<::StringW, ::Array<::StringW>*> newExpectedUsers, ::ArrayW<::StringW, ::Array<::StringW>*> oldExpectedUsers);

  /// @brief Method SetMasterClient, addr 0x160f6a0, size 0x120, virtual false, abstract: false, final false
  inline bool SetMasterClient(::Photon::Realtime::Player* masterClientPlayer);

  /// @brief Method SetPropertiesListedInLobby, addr 0x160f568, size 0xa4, virtual false, abstract: false, final false
  inline bool SetPropertiesListedInLobby(::ArrayW<::StringW, ::Array<::StringW>*> lobbyProps);

  /// @brief Method StorePlayer, addr 0x160f844, size 0x6c, virtual true, abstract: false, final false
  inline ::Photon::Realtime::Player* StorePlayer(::Photon::Realtime::Player* player);

  /// @brief Method ToString, addr 0x160fb30, size 0x224, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToStringFull, addr 0x160fd54, size 0x284, virtual false, abstract: false, final false
  inline ::StringW ToStringFull();

  constexpr bool const& __cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField() const;

  constexpr bool& __cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField();

  constexpr bool const& __cordl_internal_get__DeleteNullProperties_k__BackingField() const;

  constexpr bool& __cordl_internal_get__DeleteNullProperties_k__BackingField();

  constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get__LoadBalancingClient_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& __cordl_internal_get__LoadBalancingClient_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__PublishUserId_k__BackingField() const;

  constexpr bool& __cordl_internal_get__PublishUserId_k__BackingField();

  constexpr bool const& __cordl_internal_get__SuppressPlayerInfo_k__BackingField() const;

  constexpr bool& __cordl_internal_get__SuppressPlayerInfo_k__BackingField();

  constexpr bool const& __cordl_internal_get__SuppressRoomEvents_k__BackingField() const;

  constexpr bool& __cordl_internal_get__SuppressRoomEvents_k__BackingField();

  constexpr bool const& __cordl_internal_get_isOffline() const;

  constexpr bool& __cordl_internal_get_isOffline();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Photon::Realtime::Player*>*& __cordl_internal_get_players();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::Photon::Realtime::Player*>*> const& __cordl_internal_get_players() const;

  constexpr void __cordl_internal_set__BroadcastPropertiesChangeToAll_k__BackingField(bool value);

  constexpr void __cordl_internal_set__DeleteNullProperties_k__BackingField(bool value);

  constexpr void __cordl_internal_set__LoadBalancingClient_k__BackingField(::Photon::Realtime::LoadBalancingClient* value);

  constexpr void __cordl_internal_set__PublishUserId_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SuppressPlayerInfo_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SuppressRoomEvents_k__BackingField(bool value);

  constexpr void __cordl_internal_set_isOffline(bool value);

  constexpr void __cordl_internal_set_players(::System::Collections::Generic::Dictionary_2<int32_t, ::Photon::Realtime::Player*>* value);

  /// @brief Method .ctor, addr 0x160ed70, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::StringW roomName, ::Photon::Realtime::RoomOptions* options, bool isOffline);

  /// @brief Method get_AutoCleanUp, addr 0x160ed04, size 0x8, virtual false, abstract: false, final false
  inline bool get_AutoCleanUp();

  /// @brief Method get_BroadcastPropertiesChangeToAll, addr 0x160ed0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_BroadcastPropertiesChangeToAll();

  /// @brief Method get_DeleteNullProperties, addr 0x160ed5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_DeleteNullProperties();

  /// @brief Method get_EmptyRoomTtl, addr 0x160ec50, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_EmptyRoomTtl();

  /// @brief Method get_ExpectedUsers, addr 0x160ebac, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_ExpectedUsers();

  /// @brief Method get_IsOffline, addr 0x160e880, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsOffline();

  /// @brief Method get_IsOpen, addr 0x160e894, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsOpen();

  /// @brief Method get_IsVisible, addr 0x160e97c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsVisible();

  /// @brief Method get_LoadBalancingClient, addr 0x160e860, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::LoadBalancingClient* get_LoadBalancingClient();

  /// @brief Method get_MasterClientId, addr 0x160ecec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MasterClientId();

  /// @brief Method get_MaxPlayers, addr 0x160ea64, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_MaxPlayers();

  /// @brief Method get_Name, addr 0x160e870, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_PlayerCount, addr 0x160eb4c, size 0x50, virtual false, abstract: false, final false
  inline uint8_t get_PlayerCount();

  /// @brief Method get_PlayerTtl, addr 0x160ebb4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PlayerTtl();

  /// @brief Method get_Players, addr 0x160eb9c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<int32_t, ::Photon::Realtime::Player*>* get_Players();

  /// @brief Method get_PropertiesListedInLobby, addr 0x160ecf4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_PropertiesListedInLobby();

  /// @brief Method get_PublishUserId, addr 0x160ed48, size 0x8, virtual false, abstract: false, final false
  inline bool get_PublishUserId();

  /// @brief Method get_SuppressPlayerInfo, addr 0x160ed34, size 0x8, virtual false, abstract: false, final false
  inline bool get_SuppressPlayerInfo();

  /// @brief Method get_SuppressRoomEvents, addr 0x160ed20, size 0x8, virtual false, abstract: false, final false
  inline bool get_SuppressRoomEvents();

  /// @brief Method set_BroadcastPropertiesChangeToAll, addr 0x160ed14, size 0xc, virtual false, abstract: false, final false
  inline void set_BroadcastPropertiesChangeToAll(bool value);

  /// @brief Method set_DeleteNullProperties, addr 0x160ed64, size 0xc, virtual false, abstract: false, final false
  inline void set_DeleteNullProperties(bool value);

  /// @brief Method set_EmptyRoomTtl, addr 0x160ec58, size 0x94, virtual false, abstract: false, final false
  inline void set_EmptyRoomTtl(int32_t value);

  /// @brief Method set_IsOffline, addr 0x160e888, size 0xc, virtual false, abstract: false, final false
  inline void set_IsOffline(bool value);

  /// @brief Method set_IsOpen, addr 0x160e89c, size 0xe0, virtual false, abstract: false, final false
  inline void set_IsOpen(bool value);

  /// @brief Method set_IsVisible, addr 0x160e984, size 0xe0, virtual false, abstract: false, final false
  inline void set_IsVisible(bool value);

  /// @brief Method set_LoadBalancingClient, addr 0x160e868, size 0x8, virtual false, abstract: false, final false
  inline void set_LoadBalancingClient(::Photon::Realtime::LoadBalancingClient* value);

  /// @brief Method set_MaxPlayers, addr 0x160ea6c, size 0xe0, virtual false, abstract: false, final false
  inline void set_MaxPlayers(uint8_t value);

  /// @brief Method set_Name, addr 0x160e878, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_PlayerTtl, addr 0x160ebbc, size 0x94, virtual false, abstract: false, final false
  inline void set_PlayerTtl(int32_t value);

  /// @brief Method set_Players, addr 0x160eba4, size 0x8, virtual false, abstract: false, final false
  inline void set_Players(::System::Collections::Generic::Dictionary_2<int32_t, ::Photon::Realtime::Player*>* value);

  /// @brief Method set_PropertiesListedInLobby, addr 0x160ecfc, size 0x8, virtual false, abstract: false, final false
  inline void set_PropertiesListedInLobby(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_PublishUserId, addr 0x160ed50, size 0xc, virtual false, abstract: false, final false
  inline void set_PublishUserId(bool value);

  /// @brief Method set_SuppressPlayerInfo, addr 0x160ed3c, size 0xc, virtual false, abstract: false, final false
  inline void set_SuppressPlayerInfo(bool value);

  /// @brief Method set_SuppressRoomEvents, addr 0x160ed28, size 0xc, virtual false, abstract: false, final false
  inline void set_SuppressRoomEvents(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Room();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Room", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Room(Room&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Room", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Room(Room const&) = delete;

  /// @brief Field <LoadBalancingClient>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::Photon::Realtime::LoadBalancingClient* ____LoadBalancingClient_k__BackingField;

  /// @brief Field isOffline, offset: 0x68, size: 0x1, def value: None
  bool ___isOffline;

  /// @brief Field players, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::Photon::Realtime::Player*>* ___players;

  /// @brief Field <BroadcastPropertiesChangeToAll>k__BackingField, offset: 0x78, size: 0x1, def value: None
  bool ____BroadcastPropertiesChangeToAll_k__BackingField;

  /// @brief Field <SuppressRoomEvents>k__BackingField, offset: 0x79, size: 0x1, def value: None
  bool ____SuppressRoomEvents_k__BackingField;

  /// @brief Field <SuppressPlayerInfo>k__BackingField, offset: 0x7a, size: 0x1, def value: None
  bool ____SuppressPlayerInfo_k__BackingField;

  /// @brief Field <PublishUserId>k__BackingField, offset: 0x7b, size: 0x1, def value: None
  bool ____PublishUserId_k__BackingField;

  /// @brief Field <DeleteNullProperties>k__BackingField, offset: 0x7c, size: 0x1, def value: None
  bool ____DeleteNullProperties_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::Room, 0x80>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ____LoadBalancingClient_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ___isOffline) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ___players) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ____BroadcastPropertiesChangeToAll_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ____SuppressRoomEvents_k__BackingField) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ____SuppressPlayerInfo_k__BackingField) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ____PublishUserId_k__BackingField) == 0x7b, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ____DeleteNullProperties_k__BackingField) == 0x7c, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::Room);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::Room*, "Photon.Realtime", "Room");
