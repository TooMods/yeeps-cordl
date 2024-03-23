#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInRoomCallbacks)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Realtime {
class IInRoomCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::IInRoomCallbacks);
// Type: Photon.Realtime::IInRoomCallbacks
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::IInRoomCallbacks*
class CORDL_TYPE IInRoomCallbacks {
public:
  // Declarations
  /// @brief Method OnMasterClientSwitched, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient);

  /// @brief Method OnPlayerEnteredRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);

  /// @brief Method OnPlayerLeftRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);

  /// @brief Method OnPlayerPropertiesUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);

  /// @brief Method OnRoomPropertiesUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);

  // Ctor Parameters [CppParam { name: "", ty: "IInRoomCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInRoomCallbacks(IInRoomCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInRoomCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInRoomCallbacks(IInRoomCallbacks const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::IInRoomCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::IInRoomCallbacks*, "Photon.Realtime", "IInRoomCallbacks");
