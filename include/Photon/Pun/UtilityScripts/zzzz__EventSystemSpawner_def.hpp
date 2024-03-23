#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EventSystemSpawner)
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class EventSystemSpawner;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::EventSystemSpawner);
// Type: Photon.Pun.UtilityScripts::EventSystemSpawner
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::EventSystemSpawner*
class CORDL_TYPE EventSystemSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::Photon::Pun::UtilityScripts::EventSystemSpawner* New_ctor();

  /// @brief Method OnEnable, addr 0x1ecc2b8, size 0x108, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method .ctor, addr 0x1ecc3c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSystemSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventSystemSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventSystemSpawner(EventSystemSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventSystemSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSystemSpawner(EventSystemSpawner const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::EventSystemSpawner, 0x18>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::EventSystemSpawner);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::EventSystemSpawner*, "Photon.Pun.UtilityScripts", "EventSystemSpawner");
