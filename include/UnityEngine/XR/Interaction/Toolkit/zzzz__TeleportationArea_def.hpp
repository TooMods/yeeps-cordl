#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseTeleportationInteractable_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(TeleportationArea)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct TeleportRequest;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class TeleportationArea;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::TeleportationArea);
// Type: UnityEngine.XR.Interaction.Toolkit::TeleportationArea
// SizeInfo { instance_size: 464, native_size: -1, calculated_instance_size: 464, calculated_native_size: 464, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::TeleportationArea*
class CORDL_TYPE TeleportationArea : public ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable {
public:
  // Declarations
  /// @brief Method GenerateTeleportRequest, addr 0x301add4, size 0xcc, virtual true, abstract: false, final false
  inline bool GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::RaycastHit raycastHit,
                                      ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest> teleportRequest);

  static inline ::UnityEngine::XR::Interaction::Toolkit::TeleportationArea* New_ctor();

  /// @brief Method .ctor, addr 0x301aea0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeleportationArea();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TeleportationArea", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeleportationArea(TeleportationArea&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeleportationArea", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeleportationArea(TeleportationArea const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::TeleportationArea, 0x1d0>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::TeleportationArea);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TeleportationArea*, "UnityEngine.XR.Interaction.Toolkit", "TeleportationArea");
