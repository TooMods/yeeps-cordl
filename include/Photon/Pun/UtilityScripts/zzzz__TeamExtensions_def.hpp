#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TeamExtensions)
namespace Photon::Pun::UtilityScripts {
struct __PunTeams__Team;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class TeamExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::TeamExtensions);
// Type: Photon.Pun.UtilityScripts::TeamExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::TeamExtensions*
class CORDL_TYPE TeamExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetTeam, addr 0x1ec76b0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Photon::Pun::UtilityScripts::__PunTeams__Team GetTeam(::Photon::Realtime::Player* player);

  /// @brief Method SetTeam, addr 0x1ec777c, size 0x1fc, virtual false, abstract: false, final false
  static inline void SetTeam(::Photon::Realtime::Player* player, ::Photon::Pun::UtilityScripts::__PunTeams__Team team);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeamExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TeamExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeamExtensions(TeamExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeamExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeamExtensions(TeamExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::TeamExtensions, 0x10>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::TeamExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::TeamExtensions*, "Photon.Pun.UtilityScripts", "TeamExtensions");
