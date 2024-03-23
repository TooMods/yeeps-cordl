#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomOptions)
namespace ExitGames::Client::Photon {
class Hashtable;
}
// Forward declare root types
namespace Photon::Realtime {
class RoomOptions;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::RoomOptions);
// Type: Photon.Realtime::RoomOptions
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 61, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::RoomOptions*
class CORDL_TYPE RoomOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BroadcastPropsChangeToAll, put = set_BroadcastPropsChangeToAll)) bool BroadcastPropsChangeToAll;

  __declspec(property(get = get_CleanupCacheOnLeave, put = set_CleanupCacheOnLeave)) bool CleanupCacheOnLeave;

  /// @brief Field CustomRoomProperties, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomRoomProperties, put = __cordl_internal_set_CustomRoomProperties))::ExitGames::Client::Photon::Hashtable* CustomRoomProperties;

  /// @brief Field CustomRoomPropertiesForLobby, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomRoomPropertiesForLobby,
                      put = __cordl_internal_set_CustomRoomPropertiesForLobby))::ArrayW<::StringW, ::Array<::StringW>*> CustomRoomPropertiesForLobby;

  __declspec(property(get = get_DeleteNullProperties, put = set_DeleteNullProperties)) bool DeleteNullProperties;

  /// @brief Field EmptyRoomTtl, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_EmptyRoomTtl, put = __cordl_internal_set_EmptyRoomTtl)) int32_t EmptyRoomTtl;

  __declspec(property(get = get_IsOpen, put = set_IsOpen)) bool IsOpen;

  __declspec(property(get = get_IsVisible, put = set_IsVisible)) bool IsVisible;

  /// @brief Field MaxPlayers, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_MaxPlayers, put = __cordl_internal_set_MaxPlayers)) uint8_t MaxPlayers;

  /// @brief Field PlayerTtl, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_PlayerTtl, put = __cordl_internal_set_PlayerTtl)) int32_t PlayerTtl;

  /// @brief Field Plugins, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Plugins, put = __cordl_internal_set_Plugins))::ArrayW<::StringW, ::Array<::StringW>*> Plugins;

  __declspec(property(get = get_PublishUserId, put = set_PublishUserId)) bool PublishUserId;

  __declspec(property(get = get_SuppressPlayerInfo, put = set_SuppressPlayerInfo)) bool SuppressPlayerInfo;

  __declspec(property(get = get_SuppressRoomEvents, put = set_SuppressRoomEvents)) bool SuppressRoomEvents;

  /// @brief Field <DeleteNullProperties>k__BackingField, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get__DeleteNullProperties_k__BackingField, put = __cordl_internal_set__DeleteNullProperties_k__BackingField)) bool _DeleteNullProperties_k__BackingField;

  /// @brief Field <PublishUserId>k__BackingField, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get__PublishUserId_k__BackingField, put = __cordl_internal_set__PublishUserId_k__BackingField)) bool _PublishUserId_k__BackingField;

  /// @brief Field <SuppressPlayerInfo>k__BackingField, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__SuppressPlayerInfo_k__BackingField, put = __cordl_internal_set__SuppressPlayerInfo_k__BackingField)) bool _SuppressPlayerInfo_k__BackingField;

  /// @brief Field <SuppressRoomEvents>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__SuppressRoomEvents_k__BackingField, put = __cordl_internal_set__SuppressRoomEvents_k__BackingField)) bool _SuppressRoomEvents_k__BackingField;

  /// @brief Field broadcastPropsChangeToAll, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_broadcastPropsChangeToAll, put = __cordl_internal_set_broadcastPropsChangeToAll)) bool broadcastPropsChangeToAll;

  /// @brief Field cleanupCacheOnLeave, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_cleanupCacheOnLeave, put = __cordl_internal_set_cleanupCacheOnLeave)) bool cleanupCacheOnLeave;

  /// @brief Field isOpen, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_isOpen, put = __cordl_internal_set_isOpen)) bool isOpen;

  /// @brief Field isVisible, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isVisible, put = __cordl_internal_set_isVisible)) bool isVisible;

  static inline ::Photon::Realtime::RoomOptions* New_ctor();

  constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get_CustomRoomProperties();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::Hashtable*> const& __cordl_internal_get_CustomRoomProperties() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_CustomRoomPropertiesForLobby() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_CustomRoomPropertiesForLobby();

  constexpr int32_t const& __cordl_internal_get_EmptyRoomTtl() const;

  constexpr int32_t& __cordl_internal_get_EmptyRoomTtl();

  constexpr uint8_t const& __cordl_internal_get_MaxPlayers() const;

  constexpr uint8_t& __cordl_internal_get_MaxPlayers();

  constexpr int32_t const& __cordl_internal_get_PlayerTtl() const;

  constexpr int32_t& __cordl_internal_get_PlayerTtl();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_Plugins() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_Plugins();

  constexpr bool const& __cordl_internal_get__DeleteNullProperties_k__BackingField() const;

  constexpr bool& __cordl_internal_get__DeleteNullProperties_k__BackingField();

  constexpr bool const& __cordl_internal_get__PublishUserId_k__BackingField() const;

  constexpr bool& __cordl_internal_get__PublishUserId_k__BackingField();

  constexpr bool const& __cordl_internal_get__SuppressPlayerInfo_k__BackingField() const;

  constexpr bool& __cordl_internal_get__SuppressPlayerInfo_k__BackingField();

  constexpr bool const& __cordl_internal_get__SuppressRoomEvents_k__BackingField() const;

  constexpr bool& __cordl_internal_get__SuppressRoomEvents_k__BackingField();

  constexpr bool const& __cordl_internal_get_broadcastPropsChangeToAll() const;

  constexpr bool& __cordl_internal_get_broadcastPropsChangeToAll();

  constexpr bool const& __cordl_internal_get_cleanupCacheOnLeave() const;

  constexpr bool& __cordl_internal_get_cleanupCacheOnLeave();

  constexpr bool const& __cordl_internal_get_isOpen() const;

  constexpr bool& __cordl_internal_get_isOpen();

  constexpr bool const& __cordl_internal_get_isVisible() const;

  constexpr bool& __cordl_internal_get_isVisible();

  constexpr void __cordl_internal_set_CustomRoomProperties(::ExitGames::Client::Photon::Hashtable* value);

  constexpr void __cordl_internal_set_CustomRoomPropertiesForLobby(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_EmptyRoomTtl(int32_t value);

  constexpr void __cordl_internal_set_MaxPlayers(uint8_t value);

  constexpr void __cordl_internal_set_PlayerTtl(int32_t value);

  constexpr void __cordl_internal_set_Plugins(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__DeleteNullProperties_k__BackingField(bool value);

  constexpr void __cordl_internal_set__PublishUserId_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SuppressPlayerInfo_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SuppressRoomEvents_k__BackingField(bool value);

  constexpr void __cordl_internal_set_broadcastPropsChangeToAll(bool value);

  constexpr void __cordl_internal_set_cleanupCacheOnLeave(bool value);

  constexpr void __cordl_internal_set_isOpen(bool value);

  constexpr void __cordl_internal_set_isVisible(bool value);

  /// @brief Method .ctor, addr 0x2245614, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BroadcastPropsChangeToAll, addr 0x2247ce8, size 0x8, virtual false, abstract: false, final false
  inline bool get_BroadcastPropsChangeToAll();

  /// @brief Method get_CleanupCacheOnLeave, addr 0x2247c84, size 0x8, virtual false, abstract: false, final false
  inline bool get_CleanupCacheOnLeave();

  /// @brief Method get_DeleteNullProperties, addr 0x2247cd4, size 0x8, virtual false, abstract: false, final false
  inline bool get_DeleteNullProperties();

  /// @brief Method get_IsOpen, addr 0x2247c70, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsOpen();

  /// @brief Method get_IsVisible, addr 0x2247c5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsVisible();

  /// @brief Method get_PublishUserId, addr 0x2247cc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_PublishUserId();

  /// @brief Method get_SuppressPlayerInfo, addr 0x2247cac, size 0x8, virtual false, abstract: false, final false
  inline bool get_SuppressPlayerInfo();

  /// @brief Method get_SuppressRoomEvents, addr 0x2247c98, size 0x8, virtual false, abstract: false, final false
  inline bool get_SuppressRoomEvents();

  /// @brief Method set_BroadcastPropsChangeToAll, addr 0x2247cf0, size 0xc, virtual false, abstract: false, final false
  inline void set_BroadcastPropsChangeToAll(bool value);

  /// @brief Method set_CleanupCacheOnLeave, addr 0x2247c8c, size 0xc, virtual false, abstract: false, final false
  inline void set_CleanupCacheOnLeave(bool value);

  /// @brief Method set_DeleteNullProperties, addr 0x2247cdc, size 0xc, virtual false, abstract: false, final false
  inline void set_DeleteNullProperties(bool value);

  /// @brief Method set_IsOpen, addr 0x2247c78, size 0xc, virtual false, abstract: false, final false
  inline void set_IsOpen(bool value);

  /// @brief Method set_IsVisible, addr 0x2247c64, size 0xc, virtual false, abstract: false, final false
  inline void set_IsVisible(bool value);

  /// @brief Method set_PublishUserId, addr 0x2247cc8, size 0xc, virtual false, abstract: false, final false
  inline void set_PublishUserId(bool value);

  /// @brief Method set_SuppressPlayerInfo, addr 0x2247cb4, size 0xc, virtual false, abstract: false, final false
  inline void set_SuppressPlayerInfo(bool value);

  /// @brief Method set_SuppressRoomEvents, addr 0x2247ca0, size 0xc, virtual false, abstract: false, final false
  inline void set_SuppressRoomEvents(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomOptions(RoomOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomOptions(RoomOptions const&) = delete;

  /// @brief Field isVisible, offset: 0x10, size: 0x1, def value: None
  bool ___isVisible;

  /// @brief Field isOpen, offset: 0x11, size: 0x1, def value: None
  bool ___isOpen;

  /// @brief Field MaxPlayers, offset: 0x12, size: 0x1, def value: None
  uint8_t ___MaxPlayers;

  /// @brief Field PlayerTtl, offset: 0x14, size: 0x4, def value: None
  int32_t ___PlayerTtl;

  /// @brief Field EmptyRoomTtl, offset: 0x18, size: 0x4, def value: None
  int32_t ___EmptyRoomTtl;

  /// @brief Field cleanupCacheOnLeave, offset: 0x1c, size: 0x1, def value: None
  bool ___cleanupCacheOnLeave;

  /// @brief Field CustomRoomProperties, offset: 0x20, size: 0x8, def value: None
  ::ExitGames::Client::Photon::Hashtable* ___CustomRoomProperties;

  /// @brief Field CustomRoomPropertiesForLobby, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___CustomRoomPropertiesForLobby;

  /// @brief Field Plugins, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___Plugins;

  /// @brief Field <SuppressRoomEvents>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____SuppressRoomEvents_k__BackingField;

  /// @brief Field <SuppressPlayerInfo>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool ____SuppressPlayerInfo_k__BackingField;

  /// @brief Field <PublishUserId>k__BackingField, offset: 0x3a, size: 0x1, def value: None
  bool ____PublishUserId_k__BackingField;

  /// @brief Field <DeleteNullProperties>k__BackingField, offset: 0x3b, size: 0x1, def value: None
  bool ____DeleteNullProperties_k__BackingField;

  /// @brief Field broadcastPropsChangeToAll, offset: 0x3c, size: 0x1, def value: None
  bool ___broadcastPropsChangeToAll;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::RoomOptions, 0x40>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___isVisible) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___isOpen) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___MaxPlayers) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___PlayerTtl) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___EmptyRoomTtl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___cleanupCacheOnLeave) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___CustomRoomProperties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___CustomRoomPropertiesForLobby) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___Plugins) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ____SuppressRoomEvents_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ____SuppressPlayerInfo_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ____PublishUserId_k__BackingField) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ____DeleteNullProperties_k__BackingField) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___broadcastPropsChangeToAll) == 0x3c, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::RoomOptions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::RoomOptions*, "Photon.Realtime", "RoomOptions");
