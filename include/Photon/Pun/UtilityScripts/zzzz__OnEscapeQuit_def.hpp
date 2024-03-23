#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OnEscapeQuit)
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class OnEscapeQuit;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::OnEscapeQuit);
// Type: Photon.Pun.UtilityScripts::OnEscapeQuit
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::OnEscapeQuit*
class CORDL_TYPE OnEscapeQuit : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::Photon::Pun::UtilityScripts::OnEscapeQuit* New_ctor();

  /// @brief Method Update, addr 0x1ec9470, size 0x28, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method .ctor, addr 0x1ec9498, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnEscapeQuit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnEscapeQuit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnEscapeQuit(OnEscapeQuit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnEscapeQuit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnEscapeQuit(OnEscapeQuit const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::OnEscapeQuit, 0x18>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::OnEscapeQuit);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::OnEscapeQuit*, "Photon.Pun.UtilityScripts", "OnEscapeQuit");
