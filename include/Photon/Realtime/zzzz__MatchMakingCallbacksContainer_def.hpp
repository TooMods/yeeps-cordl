#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchMakingCallbacksContainer)
namespace Photon::Realtime {
class FriendInfo;
}
namespace Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Photon::Realtime {
class MatchMakingCallbacksContainer;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::MatchMakingCallbacksContainer);
// Type: Photon.Realtime::MatchMakingCallbacksContainer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::MatchMakingCallbacksContainer*
class CORDL_TYPE MatchMakingCallbacksContainer : public ::System::Collections::Generic::List_1<::Photon::Realtime::IMatchmakingCallbacks*> {
public:
  // Declarations
  /// @brief Field client, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::Photon::Realtime::LoadBalancingClient* client;

  /// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

  static inline ::Photon::Realtime::MatchMakingCallbacksContainer* New_ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Method OnCreateRoomFailed, addr 0x223e9c0, size 0x1cc, virtual true, abstract: false, final true
  inline void OnCreateRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnCreatedRoom, addr 0x223ded8, size 0x1bc, virtual true, abstract: false, final true
  inline void OnCreatedRoom();

  /// @brief Method OnFriendListUpdate, addr 0x224172c, size 0x1c0, virtual true, abstract: false, final true
  inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList);

  /// @brief Method OnJoinRandomFailed, addr 0x223eb8c, size 0x1cc, virtual true, abstract: false, final true
  inline void OnJoinRandomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinRoomFailed, addr 0x223e7f4, size 0x1cc, virtual true, abstract: false, final true
  inline void OnJoinRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinedRoom, addr 0x223e094, size 0x1bc, virtual true, abstract: false, final true
  inline void OnJoinedRoom();

  /// @brief Method OnLeftRoom, addr 0x22424cc, size 0x1bc, virtual true, abstract: false, final true
  inline void OnLeftRoom();

  constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& __cordl_internal_get_client() const;

  constexpr void __cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value);

  /// @brief Method .ctor, addr 0x22395b4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr ::Photon::Realtime::IMatchmakingCallbacks* i___Photon__Realtime__IMatchmakingCallbacks() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchMakingCallbacksContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MatchMakingCallbacksContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchMakingCallbacksContainer(MatchMakingCallbacksContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchMakingCallbacksContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchMakingCallbacksContainer(MatchMakingCallbacksContainer const&) = delete;

  /// @brief Field client, offset: 0x28, size: 0x8, def value: None
  ::Photon::Realtime::LoadBalancingClient* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::MatchMakingCallbacksContainer, 0x30>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::MatchMakingCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::MatchMakingCallbacksContainer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::MatchMakingCallbacksContainer*, "Photon.Realtime", "MatchMakingCallbacksContainer");
