#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__ILobbyCallbacks_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(LobbyCallbacksContainer)
namespace Photon::Realtime {
class ILobbyCallbacks;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
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
class LobbyCallbacksContainer;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::LobbyCallbacksContainer);
// Type: Photon.Realtime::LobbyCallbacksContainer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::LobbyCallbacksContainer*
class CORDL_TYPE LobbyCallbacksContainer : public ::System::Collections::Generic::List_1<::Photon::Realtime::ILobbyCallbacks*> {
public:
  // Declarations
  /// @brief Field client, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::Photon::Realtime::LoadBalancingClient* client;

  /// @brief Convert operator to "::Photon::Realtime::ILobbyCallbacks"
  constexpr operator ::Photon::Realtime::ILobbyCallbacks*() noexcept;

  static inline ::Photon::Realtime::LobbyCallbacksContainer* New_ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Method OnJoinedLobby, addr 0x22413b8, size 0x1b8, virtual true, abstract: false, final true
  inline void OnJoinedLobby();

  /// @brief Method OnLeftLobby, addr 0x2241570, size 0x1bc, virtual true, abstract: false, final true
  inline void OnLeftLobby();

  /// @brief Method OnLobbyStatisticsUpdate, addr 0x22439a8, size 0x1c4, virtual true, abstract: false, final true
  inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* lobbyStatistics);

  /// @brief Method OnRoomListUpdate, addr 0x22411f4, size 0x1c4, virtual true, abstract: false, final true
  inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>* roomList);

  constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& __cordl_internal_get_client() const;

  constexpr void __cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value);

  /// @brief Method .ctor, addr 0x22396b4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Convert to "::Photon::Realtime::ILobbyCallbacks"
  constexpr ::Photon::Realtime::ILobbyCallbacks* i___Photon__Realtime__ILobbyCallbacks() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyCallbacksContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LobbyCallbacksContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyCallbacksContainer(LobbyCallbacksContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyCallbacksContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyCallbacksContainer(LobbyCallbacksContainer const&) = delete;

  /// @brief Field client, offset: 0x28, size: 0x8, def value: None
  ::Photon::Realtime::LoadBalancingClient* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::LobbyCallbacksContainer, 0x30>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::LobbyCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::LobbyCallbacksContainer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::LobbyCallbacksContainer*, "Photon.Realtime", "LobbyCallbacksContainer");
