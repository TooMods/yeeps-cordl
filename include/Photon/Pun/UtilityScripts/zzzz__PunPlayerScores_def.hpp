#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PunPlayerScores)
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PunPlayerScores;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::PunPlayerScores);
// Type: Photon.Pun.UtilityScripts::PunPlayerScores
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::PunPlayerScores*
class CORDL_TYPE PunPlayerScores : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::Photon::Pun::UtilityScripts::PunPlayerScores* New_ctor();

  /// @brief Method .ctor, addr 0x1ec6afc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PunPlayerScores();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PunPlayerScores", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PunPlayerScores(PunPlayerScores&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PunPlayerScores", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PunPlayerScores(PunPlayerScores const&) = delete;

  /// @brief Field PlayerScoreProp offset 0xffffffff size 0x8
  static constexpr ::ConstString PlayerScoreProp{ u"score" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::PunPlayerScores, 0x18>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PunPlayerScores);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PunPlayerScores*, "Photon.Pun.UtilityScripts", "PunPlayerScores");
