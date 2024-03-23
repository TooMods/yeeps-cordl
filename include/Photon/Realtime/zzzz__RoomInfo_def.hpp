#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomInfo)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class RoomInfo;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::RoomInfo);
// Type: Photon.Realtime::RoomInfo
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::RoomInfo*
class CORDL_TYPE RoomInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CustomProperties))::ExitGames::Client::Photon::Hashtable* CustomProperties;

  __declspec(property(get = get_IsOpen)) bool IsOpen;

  __declspec(property(get = get_IsVisible)) bool IsVisible;

  __declspec(property(get = get_MaxPlayers)) uint8_t MaxPlayers;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_PlayerCount, put = set_PlayerCount)) int32_t PlayerCount;

  /// @brief Field RemovedFromList, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_RemovedFromList, put = __cordl_internal_set_RemovedFromList)) bool RemovedFromList;

  /// @brief Field <PlayerCount>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__PlayerCount_k__BackingField, put = __cordl_internal_set__PlayerCount_k__BackingField)) int32_t _PlayerCount_k__BackingField;

  /// @brief Field autoCleanUp, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_autoCleanUp, put = __cordl_internal_set_autoCleanUp)) bool autoCleanUp;

  /// @brief Field customProperties, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_customProperties, put = __cordl_internal_set_customProperties))::ExitGames::Client::Photon::Hashtable* customProperties;

  /// @brief Field emptyRoomTtl, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_emptyRoomTtl, put = __cordl_internal_set_emptyRoomTtl)) int32_t emptyRoomTtl;

  /// @brief Field expectedUsers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_expectedUsers, put = __cordl_internal_set_expectedUsers))::ArrayW<::StringW, ::Array<::StringW>*> expectedUsers;

  /// @brief Field isOpen, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isOpen, put = __cordl_internal_set_isOpen)) bool isOpen;

  /// @brief Field isVisible, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_isVisible, put = __cordl_internal_set_isVisible)) bool isVisible;

  /// @brief Field masterClientId, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_masterClientId, put = __cordl_internal_set_masterClientId)) int32_t masterClientId;

  /// @brief Field maxPlayers, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_maxPlayers, put = __cordl_internal_set_maxPlayers)) uint8_t maxPlayers;

  /// @brief Field name, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field playerTtl, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_playerTtl, put = __cordl_internal_set_playerTtl)) int32_t playerTtl;

  /// @brief Field propertiesListedInLobby, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_propertiesListedInLobby, put = __cordl_internal_set_propertiesListedInLobby))::ArrayW<::StringW, ::Array<::StringW>*> propertiesListedInLobby;

  /// @brief Method Equals, addr 0x1610010, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x16100b0, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InternalCacheProperties, addr 0x160ef9c, size 0x484, virtual true, abstract: false, final false
  inline void InternalCacheProperties(::ExitGames::Client::Photon::Hashtable* propertiesToCache);

  static inline ::Photon::Realtime::RoomInfo* New_ctor(::StringW roomName, ::ExitGames::Client::Photon::Hashtable* roomProperties);

  /// @brief Method ToString, addr 0x16100d0, size 0x228, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToStringFull, addr 0x16102f8, size 0x288, virtual false, abstract: false, final false
  inline ::StringW ToStringFull();

  constexpr bool const& __cordl_internal_get_RemovedFromList() const;

  constexpr bool& __cordl_internal_get_RemovedFromList();

  constexpr int32_t const& __cordl_internal_get__PlayerCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__PlayerCount_k__BackingField();

  constexpr bool const& __cordl_internal_get_autoCleanUp() const;

  constexpr bool& __cordl_internal_get_autoCleanUp();

  constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get_customProperties();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::Hashtable*> const& __cordl_internal_get_customProperties() const;

  constexpr int32_t const& __cordl_internal_get_emptyRoomTtl() const;

  constexpr int32_t& __cordl_internal_get_emptyRoomTtl();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_expectedUsers() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_expectedUsers();

  constexpr bool const& __cordl_internal_get_isOpen() const;

  constexpr bool& __cordl_internal_get_isOpen();

  constexpr bool const& __cordl_internal_get_isVisible() const;

  constexpr bool& __cordl_internal_get_isVisible();

  constexpr int32_t const& __cordl_internal_get_masterClientId() const;

  constexpr int32_t& __cordl_internal_get_masterClientId();

  constexpr uint8_t const& __cordl_internal_get_maxPlayers() const;

  constexpr uint8_t& __cordl_internal_get_maxPlayers();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr int32_t const& __cordl_internal_get_playerTtl() const;

  constexpr int32_t& __cordl_internal_get_playerTtl();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_propertiesListedInLobby() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_propertiesListedInLobby();

  constexpr void __cordl_internal_set_RemovedFromList(bool value);

  constexpr void __cordl_internal_set__PlayerCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_autoCleanUp(bool value);

  constexpr void __cordl_internal_set_customProperties(::ExitGames::Client::Photon::Hashtable* value);

  constexpr void __cordl_internal_set_emptyRoomTtl(int32_t value);

  constexpr void __cordl_internal_set_expectedUsers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_isOpen(bool value);

  constexpr void __cordl_internal_set_isVisible(bool value);

  constexpr void __cordl_internal_set_masterClientId(int32_t value);

  constexpr void __cordl_internal_set_maxPlayers(uint8_t value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_playerTtl(int32_t value);

  constexpr void __cordl_internal_set_propertiesListedInLobby(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x160ee50, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW roomName, ::ExitGames::Client::Photon::Hashtable* roomProperties);

  /// @brief Method get_CustomProperties, addr 0x160ffd8, size 0x8, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::Hashtable* get_CustomProperties();

  /// @brief Method get_IsOpen, addr 0x1610000, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsOpen();

  /// @brief Method get_IsVisible, addr 0x1610008, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsVisible();

  /// @brief Method get_MaxPlayers, addr 0x160fff8, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_MaxPlayers();

  /// @brief Method get_Name, addr 0x160ffe0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_PlayerCount, addr 0x160ffe8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PlayerCount();

  /// @brief Method set_PlayerCount, addr 0x160fff0, size 0x8, virtual false, abstract: false, final false
  inline void set_PlayerCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomInfo(RoomInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomInfo(RoomInfo const&) = delete;

  /// @brief Field RemovedFromList, offset: 0x10, size: 0x1, def value: None
  bool ___RemovedFromList;

  /// @brief Field customProperties, offset: 0x18, size: 0x8, def value: None
  ::ExitGames::Client::Photon::Hashtable* ___customProperties;

  /// @brief Field maxPlayers, offset: 0x20, size: 0x1, def value: None
  uint8_t ___maxPlayers;

  /// @brief Field emptyRoomTtl, offset: 0x24, size: 0x4, def value: None
  int32_t ___emptyRoomTtl;

  /// @brief Field playerTtl, offset: 0x28, size: 0x4, def value: None
  int32_t ___playerTtl;

  /// @brief Field expectedUsers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___expectedUsers;

  /// @brief Field isOpen, offset: 0x38, size: 0x1, def value: None
  bool ___isOpen;

  /// @brief Field isVisible, offset: 0x39, size: 0x1, def value: None
  bool ___isVisible;

  /// @brief Field autoCleanUp, offset: 0x3a, size: 0x1, def value: None
  bool ___autoCleanUp;

  /// @brief Field name, offset: 0x40, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field masterClientId, offset: 0x48, size: 0x4, def value: None
  int32_t ___masterClientId;

  /// @brief Field propertiesListedInLobby, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___propertiesListedInLobby;

  /// @brief Field <PlayerCount>k__BackingField, offset: 0x58, size: 0x4, def value: None
  int32_t ____PlayerCount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::RoomInfo, 0x60>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___RemovedFromList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___customProperties) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___maxPlayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___emptyRoomTtl) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___playerTtl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___expectedUsers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___isOpen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___isVisible) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___autoCleanUp) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___name) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___masterClientId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ___propertiesListedInLobby) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomInfo, ____PlayerCount_k__BackingField) == 0x58, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::RoomInfo);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::RoomInfo*, "Photon.Realtime", "RoomInfo");
