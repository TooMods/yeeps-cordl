#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IMatchmakingCallbacks)
namespace Photon::Realtime {
class FriendInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Photon::Realtime {
class IMatchmakingCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::IMatchmakingCallbacks);
// Type: Photon.Realtime::IMatchmakingCallbacks
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::IMatchmakingCallbacks*
class CORDL_TYPE IMatchmakingCallbacks {
public:
  // Declarations
  /// @brief Method OnCreateRoomFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnCreateRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnCreatedRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnCreatedRoom();

  /// @brief Method OnFriendListUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList);

  /// @brief Method OnJoinRandomFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnJoinRandomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinRoomFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnJoinRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinedRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnJoinedRoom();

  /// @brief Method OnLeftRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnLeftRoom();

  // Ctor Parameters [CppParam { name: "", ty: "IMatchmakingCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMatchmakingCallbacks(IMatchmakingCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMatchmakingCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMatchmakingCallbacks(IMatchmakingCallbacks const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::IMatchmakingCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::IMatchmakingCallbacks*, "Photon.Realtime", "IMatchmakingCallbacks");
