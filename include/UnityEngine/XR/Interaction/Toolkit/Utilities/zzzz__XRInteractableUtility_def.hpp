#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(XRInteractableUtility)
namespace UnityEngine::XR::Interaction::Toolkit {
struct DistanceInfo;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class XRInteractableUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities::XRInteractableUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities::XRInteractableUtility*
class CORDL_TYPE XRInteractableUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryGetClosestCollider, addr 0x301f468, size 0x328, virtual false, abstract: false, final false
  static inline bool TryGetClosestCollider(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable, ::UnityEngine::Vector3 position,
                                           ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo> distanceInfo);

  /// @brief Method TryGetClosestPointOnCollider, addr 0x301f790, size 0x318, virtual false, abstract: false, final false
  static inline bool TryGetClosestPointOnCollider(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable, ::UnityEngine::Vector3 position,
                                                  ByRef<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo> distanceInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRInteractableUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRInteractableUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRInteractableUtility(XRInteractableUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRInteractableUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRInteractableUtility(XRInteractableUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "XRInteractableUtility");
