#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(XRSingleGrabFreeTransformer)
namespace UnityEngine::XR::Interaction::Toolkit {
class XRGrabInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSingleGrabFreeTransformer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer);
// Type: UnityEngine.XR.Interaction.Toolkit.Transformers::XRSingleGrabFreeTransformer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Transformers::XRSingleGrabFreeTransformer*
class CORDL_TYPE XRSingleGrabFreeTransformer : public ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer* New_ctor();

  /// @brief Method Process, addr 0x2fee6e4, size 0x1c, virtual true, abstract: false, final false
  inline void Process(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                      ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale);

  /// @brief Method UpdateTarget, addr 0x2feb134, size 0x344, virtual false, abstract: false, final false
  static inline void UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ByRef<::UnityEngine::Pose> targetPose);

  /// @brief Method .ctor, addr 0x2fee700, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSingleGrabFreeTransformer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSingleGrabFreeTransformer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSingleGrabFreeTransformer(XRSingleGrabFreeTransformer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSingleGrabFreeTransformer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSingleGrabFreeTransformer(XRSingleGrabFreeTransformer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer, 0x18>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Transformers
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRSingleGrabFreeTransformer");
