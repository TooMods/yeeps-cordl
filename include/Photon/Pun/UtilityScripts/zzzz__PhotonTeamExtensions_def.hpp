#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTeamExtensions)
namespace Photon::Pun::UtilityScripts {
class PhotonTeam;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PhotonTeamExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::PhotonTeamExtensions);
// Type: Photon.Pun.UtilityScripts::PhotonTeamExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::PhotonTeamExtensions*
class CORDL_TYPE PhotonTeamExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPhotonTeam, addr 0x1ec4370, size 0xf4, virtual false, abstract: false, final false
  static inline ::Photon::Pun::UtilityScripts::PhotonTeam* GetPhotonTeam(::Photon::Realtime::Player* player);

  /// @brief Method JoinTeam, addr 0x1ec51b0, size 0x208, virtual false, abstract: false, final false
  static inline bool JoinTeam(::Photon::Realtime::Player* player, ::Photon::Pun::UtilityScripts::PhotonTeam* team);

  /// @brief Method JoinTeam, addr 0x1ec53b8, size 0x54, virtual false, abstract: false, final false
  static inline bool JoinTeam(::Photon::Realtime::Player* player, uint8_t teamCode);

  /// @brief Method JoinTeam, addr 0x1ec540c, size 0x54, virtual false, abstract: false, final false
  static inline bool JoinTeam(::Photon::Realtime::Player* player, ::StringW teamName);

  /// @brief Method LeaveCurrentTeam, addr 0x1ec57d4, size 0x1e0, virtual false, abstract: false, final false
  static inline bool LeaveCurrentTeam(::Photon::Realtime::Player* player);

  /// @brief Method SwitchTeam, addr 0x1ec5460, size 0x2cc, virtual false, abstract: false, final false
  static inline bool SwitchTeam(::Photon::Realtime::Player* player, ::Photon::Pun::UtilityScripts::PhotonTeam* team);

  /// @brief Method SwitchTeam, addr 0x1ec572c, size 0x54, virtual false, abstract: false, final false
  static inline bool SwitchTeam(::Photon::Realtime::Player* player, uint8_t teamCode);

  /// @brief Method SwitchTeam, addr 0x1ec5780, size 0x54, virtual false, abstract: false, final false
  static inline bool SwitchTeam(::Photon::Realtime::Player* player, ::StringW teamName);

  /// @brief Method TryGetTeamMates, addr 0x1ec59b4, size 0x30, virtual false, abstract: false, final false
  static inline bool TryGetTeamMates(::Photon::Realtime::Player* player, ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>> teamMates);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonTeamExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonTeamExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonTeamExtensions(PhotonTeamExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonTeamExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonTeamExtensions(PhotonTeamExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::PhotonTeamExtensions, 0x10>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PhotonTeamExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PhotonTeamExtensions*, "Photon.Pun.UtilityScripts", "PhotonTeamExtensions");
