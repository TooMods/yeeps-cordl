#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(InRoomCallbacksContainer)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Realtime {
class InRoomCallbacksContainer;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::InRoomCallbacksContainer);
// Type: Photon.Realtime::InRoomCallbacksContainer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::InRoomCallbacksContainer*
class CORDL_TYPE InRoomCallbacksContainer : public ::System::Collections::Generic::List_1<::Photon::Realtime::IInRoomCallbacks*> {
public:
  // Declarations
  /// @brief Field client, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::Photon::Realtime::LoadBalancingClient* client;

  /// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
  constexpr operator ::Photon::Realtime::IInRoomCallbacks*() noexcept;

  static inline ::Photon::Realtime::InRoomCallbacksContainer* New_ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Method OnMasterClientSwitched, addr 0x22435c8, size 0x1c4, virtual true, abstract: false, final true
  inline void OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient);

  /// @brief Method OnPlayerEnteredRoom, addr 0x2243408, size 0x1c0, virtual true, abstract: false, final true
  inline void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);

  /// @brief Method OnPlayerLeftRoom, addr 0x224378c, size 0x1c4, virtual true, abstract: false, final true
  inline void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);

  /// @brief Method OnPlayerPropertiesUpdate, addr 0x223c96c, size 0x1cc, virtual true, abstract: false, final true
  inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProp);

  /// @brief Method OnRoomPropertiesUpdate, addr 0x223d190, size 0x1c4, virtual true, abstract: false, final true
  inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);

  constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& __cordl_internal_get_client() const;

  constexpr void __cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value);

  /// @brief Method .ctor, addr 0x2239634, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
  constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InRoomCallbacksContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InRoomCallbacksContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InRoomCallbacksContainer(InRoomCallbacksContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InRoomCallbacksContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InRoomCallbacksContainer(InRoomCallbacksContainer const&) = delete;

  /// @brief Field client, offset: 0x28, size: 0x8, def value: None
  ::Photon::Realtime::LoadBalancingClient* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::InRoomCallbacksContainer, 0x30>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::InRoomCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::InRoomCallbacksContainer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::InRoomCallbacksContainer*, "Photon.Realtime", "InRoomCallbacksContainer");
