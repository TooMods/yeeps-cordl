#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__JoinMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnterRoomParams)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Realtime {
class RoomOptions;
}
namespace Photon::Realtime {
class TypedLobby;
}
// Forward declare root types
namespace Photon::Realtime {
class EnterRoomParams;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::EnterRoomParams);
// Type: Photon.Realtime::EnterRoomParams
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::EnterRoomParams*
class CORDL_TYPE EnterRoomParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field ExpectedUsers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ExpectedUsers, put = __cordl_internal_set_ExpectedUsers))::ArrayW<::StringW, ::Array<::StringW>*> ExpectedUsers;

  /// @brief Field JoinMode, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_JoinMode, put = __cordl_internal_set_JoinMode))::Photon::Realtime::JoinMode JoinMode;

  /// @brief Field Lobby, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Lobby, put = __cordl_internal_set_Lobby))::Photon::Realtime::TypedLobby* Lobby;

  /// @brief Field OnGameServer, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_OnGameServer, put = __cordl_internal_set_OnGameServer)) bool OnGameServer;

  /// @brief Field PlayerProperties, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PlayerProperties, put = __cordl_internal_set_PlayerProperties))::ExitGames::Client::Photon::Hashtable* PlayerProperties;

  /// @brief Field RoomName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_RoomName, put = __cordl_internal_set_RoomName))::StringW RoomName;

  /// @brief Field RoomOptions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_RoomOptions, put = __cordl_internal_set_RoomOptions))::Photon::Realtime::RoomOptions* RoomOptions;

  static inline ::Photon::Realtime::EnterRoomParams* New_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_ExpectedUsers() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_ExpectedUsers();

  constexpr ::Photon::Realtime::JoinMode const& __cordl_internal_get_JoinMode() const;

  constexpr ::Photon::Realtime::JoinMode& __cordl_internal_get_JoinMode();

  constexpr ::Photon::Realtime::TypedLobby*& __cordl_internal_get_Lobby();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::TypedLobby*> const& __cordl_internal_get_Lobby() const;

  constexpr bool const& __cordl_internal_get_OnGameServer() const;

  constexpr bool& __cordl_internal_get_OnGameServer();

  constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get_PlayerProperties();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::Hashtable*> const& __cordl_internal_get_PlayerProperties() const;

  constexpr ::StringW const& __cordl_internal_get_RoomName() const;

  constexpr ::StringW& __cordl_internal_get_RoomName();

  constexpr ::Photon::Realtime::RoomOptions*& __cordl_internal_get_RoomOptions();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::RoomOptions*> const& __cordl_internal_get_RoomOptions() const;

  constexpr void __cordl_internal_set_ExpectedUsers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_JoinMode(::Photon::Realtime::JoinMode value);

  constexpr void __cordl_internal_set_Lobby(::Photon::Realtime::TypedLobby* value);

  constexpr void __cordl_internal_set_OnGameServer(bool value);

  constexpr void __cordl_internal_set_PlayerProperties(::ExitGames::Client::Photon::Hashtable* value);

  constexpr void __cordl_internal_set_RoomName(::StringW value);

  constexpr void __cordl_internal_set_RoomOptions(::Photon::Realtime::RoomOptions* value);

  /// @brief Method .ctor, addr 0x223b924, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnterRoomParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnterRoomParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnterRoomParams(EnterRoomParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnterRoomParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnterRoomParams(EnterRoomParams const&) = delete;

  /// @brief Field RoomName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___RoomName;

  /// @brief Field RoomOptions, offset: 0x18, size: 0x8, def value: None
  ::Photon::Realtime::RoomOptions* ___RoomOptions;

  /// @brief Field Lobby, offset: 0x20, size: 0x8, def value: None
  ::Photon::Realtime::TypedLobby* ___Lobby;

  /// @brief Field PlayerProperties, offset: 0x28, size: 0x8, def value: None
  ::ExitGames::Client::Photon::Hashtable* ___PlayerProperties;

  /// @brief Field OnGameServer, offset: 0x30, size: 0x1, def value: None
  bool ___OnGameServer;

  /// @brief Field JoinMode, offset: 0x31, size: 0x1, def value: None
  ::Photon::Realtime::JoinMode ___JoinMode;

  /// @brief Field ExpectedUsers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___ExpectedUsers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::EnterRoomParams, 0x40>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___RoomName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___RoomOptions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___Lobby) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___PlayerProperties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___OnGameServer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___JoinMode) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___ExpectedUsers) == 0x38, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::EnterRoomParams);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::EnterRoomParams*, "Photon.Realtime", "EnterRoomParams");
