#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerNumberingExtensions)
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PlayerNumberingExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::PlayerNumberingExtensions);
// Type: Photon.Pun.UtilityScripts::PlayerNumberingExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::PlayerNumberingExtensions*
class CORDL_TYPE PlayerNumberingExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPlayerNumber, addr 0x1ec64e0, size 0x150, virtual false, abstract: false, final false
  static inline int32_t GetPlayerNumber(::Photon::Realtime::Player* player);

  /// @brief Method SetPlayerNumber, addr 0x1ec6630, size 0x334, virtual false, abstract: false, final false
  static inline void SetPlayerNumber(::Photon::Realtime::Player* player, int32_t playerNumber);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerNumberingExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerNumberingExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerNumberingExtensions(PlayerNumberingExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerNumberingExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerNumberingExtensions(PlayerNumberingExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::PlayerNumberingExtensions, 0x10>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PlayerNumberingExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PlayerNumberingExtensions*, "Photon.Pun.UtilityScripts", "PlayerNumberingExtensions");
