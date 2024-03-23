#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILobbyCallbacks)
namespace Photon::Realtime {
class RoomInfo;
}
namespace Photon::Realtime {
class TypedLobbyInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Photon::Realtime {
class ILobbyCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::ILobbyCallbacks);
// Type: Photon.Realtime::ILobbyCallbacks
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::ILobbyCallbacks*
class CORDL_TYPE ILobbyCallbacks {
public:
  // Declarations
  /// @brief Method OnJoinedLobby, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnJoinedLobby();

  /// @brief Method OnLeftLobby, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnLeftLobby();

  /// @brief Method OnLobbyStatisticsUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* lobbyStatistics);

  /// @brief Method OnRoomListUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>* roomList);

  // Ctor Parameters [CppParam { name: "", ty: "ILobbyCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILobbyCallbacks(ILobbyCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILobbyCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILobbyCallbacks(ILobbyCallbacks const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::ILobbyCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::ILobbyCallbacks*, "Photon.Realtime", "ILobbyCallbacks");
