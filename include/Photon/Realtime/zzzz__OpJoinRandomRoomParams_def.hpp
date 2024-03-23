#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__MatchmakingMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpJoinRandomRoomParams)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Realtime {
class TypedLobby;
}
// Forward declare root types
namespace Photon::Realtime {
class OpJoinRandomRoomParams;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::OpJoinRandomRoomParams);
// Type: Photon.Realtime::OpJoinRandomRoomParams
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::OpJoinRandomRoomParams*
class CORDL_TYPE OpJoinRandomRoomParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field ExpectedCustomRoomProperties, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ExpectedCustomRoomProperties,
                      put = __cordl_internal_set_ExpectedCustomRoomProperties))::ExitGames::Client::Photon::Hashtable* ExpectedCustomRoomProperties;

  /// @brief Field ExpectedMaxPlayers, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_ExpectedMaxPlayers, put = __cordl_internal_set_ExpectedMaxPlayers)) uint8_t ExpectedMaxPlayers;

  /// @brief Field ExpectedUsers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ExpectedUsers, put = __cordl_internal_set_ExpectedUsers))::ArrayW<::StringW, ::Array<::StringW>*> ExpectedUsers;

  /// @brief Field MatchingType, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_MatchingType, put = __cordl_internal_set_MatchingType))::Photon::Realtime::MatchmakingMode MatchingType;

  /// @brief Field SqlLobbyFilter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_SqlLobbyFilter, put = __cordl_internal_set_SqlLobbyFilter))::StringW SqlLobbyFilter;

  /// @brief Field TypedLobby, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_TypedLobby, put = __cordl_internal_set_TypedLobby))::Photon::Realtime::TypedLobby* TypedLobby;

  static inline ::Photon::Realtime::OpJoinRandomRoomParams* New_ctor();

  constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get_ExpectedCustomRoomProperties();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::Hashtable*> const& __cordl_internal_get_ExpectedCustomRoomProperties() const;

  constexpr uint8_t const& __cordl_internal_get_ExpectedMaxPlayers() const;

  constexpr uint8_t& __cordl_internal_get_ExpectedMaxPlayers();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_ExpectedUsers() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_ExpectedUsers();

  constexpr ::Photon::Realtime::MatchmakingMode const& __cordl_internal_get_MatchingType() const;

  constexpr ::Photon::Realtime::MatchmakingMode& __cordl_internal_get_MatchingType();

  constexpr ::StringW const& __cordl_internal_get_SqlLobbyFilter() const;

  constexpr ::StringW& __cordl_internal_get_SqlLobbyFilter();

  constexpr ::Photon::Realtime::TypedLobby*& __cordl_internal_get_TypedLobby();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::TypedLobby*> const& __cordl_internal_get_TypedLobby() const;

  constexpr void __cordl_internal_set_ExpectedCustomRoomProperties(::ExitGames::Client::Photon::Hashtable* value);

  constexpr void __cordl_internal_set_ExpectedMaxPlayers(uint8_t value);

  constexpr void __cordl_internal_set_ExpectedUsers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_MatchingType(::Photon::Realtime::MatchmakingMode value);

  constexpr void __cordl_internal_set_SqlLobbyFilter(::StringW value);

  constexpr void __cordl_internal_set_TypedLobby(::Photon::Realtime::TypedLobby* value);

  /// @brief Method .ctor, addr 0x223b91c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpJoinRandomRoomParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpJoinRandomRoomParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpJoinRandomRoomParams(OpJoinRandomRoomParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpJoinRandomRoomParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpJoinRandomRoomParams(OpJoinRandomRoomParams const&) = delete;

  /// @brief Field ExpectedCustomRoomProperties, offset: 0x10, size: 0x8, def value: None
  ::ExitGames::Client::Photon::Hashtable* ___ExpectedCustomRoomProperties;

  /// @brief Field ExpectedMaxPlayers, offset: 0x18, size: 0x1, def value: None
  uint8_t ___ExpectedMaxPlayers;

  /// @brief Field MatchingType, offset: 0x19, size: 0x1, def value: None
  ::Photon::Realtime::MatchmakingMode ___MatchingType;

  /// @brief Field TypedLobby, offset: 0x20, size: 0x8, def value: None
  ::Photon::Realtime::TypedLobby* ___TypedLobby;

  /// @brief Field SqlLobbyFilter, offset: 0x28, size: 0x8, def value: None
  ::StringW ___SqlLobbyFilter;

  /// @brief Field ExpectedUsers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___ExpectedUsers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::OpJoinRandomRoomParams, 0x38>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::OpJoinRandomRoomParams, ___ExpectedCustomRoomProperties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::OpJoinRandomRoomParams, ___ExpectedMaxPlayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::OpJoinRandomRoomParams, ___MatchingType) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::OpJoinRandomRoomParams, ___TypedLobby) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::OpJoinRandomRoomParams, ___SqlLobbyFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::OpJoinRandomRoomParams, ___ExpectedUsers) == 0x30, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::OpJoinRandomRoomParams);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::OpJoinRandomRoomParams*, "Photon.Realtime", "OpJoinRandomRoomParams");
