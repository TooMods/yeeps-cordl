#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreExtensions)
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class ScoreExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::ScoreExtensions);
// Type: Photon.Pun.UtilityScripts::ScoreExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::ScoreExtensions*
class CORDL_TYPE ScoreExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddScore, addr 0x1ec6bdc, size 0xec, virtual false, abstract: false, final false
  static inline void AddScore(::Photon::Realtime::Player* player, int32_t scoreToAddToCurrent);

  /// @brief Method GetScore, addr 0x1ec6cc8, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t GetScore(::Photon::Realtime::Player* player);

  /// @brief Method SetScore, addr 0x1ec6b04, size 0xd8, virtual false, abstract: false, final false
  static inline void SetScore(::Photon::Realtime::Player* player, int32_t newScore);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoreExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreExtensions(ScoreExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreExtensions(ScoreExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::ScoreExtensions, 0x10>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::ScoreExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::ScoreExtensions*, "Photon.Pun.UtilityScripts", "ScoreExtensions");
