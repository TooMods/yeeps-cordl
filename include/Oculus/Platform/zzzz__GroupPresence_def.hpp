#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroupPresence)
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
namespace Oculus::Platform::Models {
class RejoinDialogResult;
}
namespace Oculus::Platform::Models {
class SendInvitesResult;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform {
class GroupPresenceOptions;
}
namespace Oculus::Platform {
class InviteOptions;
}
namespace Oculus::Platform {
class MultiplayerErrorOptions;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
class RosterOptions;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class GroupPresence;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::GroupPresence);
// Type: Oculus.Platform::GroupPresence
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::GroupPresence*
class CORDL_TYPE GroupPresence : public ::System::Object {
public:
  // Declarations
  /// @brief Method Clear, addr 0x198c438, size 0x144, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* Clear();

  /// @brief Method GetInvitableUsers, addr 0x19be984, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetInvitableUsers(::Oculus::Platform::InviteOptions* options);

  /// @brief Method GetNextApplicationInviteListPage, addr 0x19bf7c8, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList*>* GetNextApplicationInviteListPage(::Oculus::Platform::Models::ApplicationInviteList* list);

  /// @brief Method GetSentInvites, addr 0x19beb24, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList*>* GetSentInvites();

  /// @brief Method LaunchInvitePanel, addr 0x198c754, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::InvitePanelResultInfo*>* LaunchInvitePanel(::Oculus::Platform::InviteOptions* options);

  /// @brief Method LaunchMultiplayerErrorDialog, addr 0x19bec7c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* LaunchMultiplayerErrorDialog(::Oculus::Platform::MultiplayerErrorOptions* options);

  /// @brief Method LaunchRejoinDialog, addr 0x19bee08, size 0x178, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RejoinDialogResult*>* LaunchRejoinDialog(::StringW lobby_session_id, ::StringW match_session_id,
                                                                                                                   ::StringW destination_api_name);

  /// @brief Method LaunchRosterPanel, addr 0x198cab0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* LaunchRosterPanel(::Oculus::Platform::RosterOptions* options);

  /// @brief Method SendInvites, addr 0x19befd8, size 0x174, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SendInvitesResult*>* SendInvites(::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs);

  /// @brief Method Set, addr 0x198c060, size 0x18c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* Set(::Oculus::Platform::GroupPresenceOptions* groupPresenceOptions);

  /// @brief Method SetDeeplinkMessageOverride, addr 0x19bf14c, size 0x14c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* SetDeeplinkMessageOverride(::StringW deeplink_message);

  /// @brief Method SetDestination, addr 0x19bf298, size 0x14c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* SetDestination(::StringW api_name);

  /// @brief Method SetInvitationsSentNotificationCallback, addr 0x198e3f8, size 0x74, virtual false, abstract: false, final false
  static inline void SetInvitationsSentNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>* callback);

  /// @brief Method SetIsJoinable, addr 0x19bf3e4, size 0x14c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* SetIsJoinable(bool is_joinable);

  /// @brief Method SetJoinIntentReceivedNotificationCallback, addr 0x198e310, size 0x74, virtual false, abstract: false, final false
  static inline void SetJoinIntentReceivedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* callback);

  /// @brief Method SetLeaveIntentReceivedNotificationCallback, addr 0x198e384, size 0x74, virtual false, abstract: false, final false
  static inline void SetLeaveIntentReceivedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>* callback);

  /// @brief Method SetLobbySession, addr 0x19bf530, size 0x14c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* SetLobbySession(::StringW id);

  /// @brief Method SetMatchSession, addr 0x19bf67c, size 0x14c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* SetMatchSession(::StringW id);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupPresence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GroupPresence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupPresence(GroupPresence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupPresence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupPresence(GroupPresence const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::GroupPresence, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::GroupPresence);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::GroupPresence*, "Oculus.Platform", "GroupPresence");
