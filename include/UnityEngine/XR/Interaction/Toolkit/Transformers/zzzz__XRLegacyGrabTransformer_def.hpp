#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(XRLegacyGrabTransformer)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
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
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRLegacyGrabTransformer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer);
// Type: UnityEngine.XR.Interaction.Toolkit.Transformers::XRLegacyGrabTransformer
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Transformers::XRLegacyGrabTransformer*
class CORDL_TYPE XRLegacyGrabTransformer : public ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer {
public:
  // Declarations
  /// @brief Field m_OffsetPose, offset 0x20, size 0x1c
  __declspec(property(get = __cordl_internal_get_m_OffsetPose, put = __cordl_internal_set_m_OffsetPose))::UnityEngine::Pose m_OffsetPose;

  /// @brief Field m_Rigidbody, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rigidbody, put = __cordl_internal_set_m_Rigidbody))::UnityW<::UnityEngine::Rigidbody> m_Rigidbody;

  /// @brief Method CalculateOffsetPoseLegacy, addr 0x2fee218, size 0x278, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose CalculateOffsetPoseLegacy(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor,
                                                       ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer* New_ctor();

  /// @brief Method OnGrabCountChanged, addr 0x2fee14c, size 0xcc, virtual true, abstract: false, final false
  inline void OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::Pose targetPose, ::UnityEngine::Vector3 localScale);

  /// @brief Method OnLink, addr 0x2fee0f0, size 0x5c, virtual true, abstract: false, final false
  inline void OnLink(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable);

  /// @brief Method Process, addr 0x2fee490, size 0x18, virtual true, abstract: false, final false
  inline void Process(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                      ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale);

  /// @brief Method UpdateTarget, addr 0x2fee4a8, size 0x234, virtual false, abstract: false, final false
  inline void UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ByRef<::UnityEngine::Pose> targetPose);

  constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_OffsetPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get_m_OffsetPose();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_Rigidbody() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_Rigidbody();

  constexpr void __cordl_internal_set_m_OffsetPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set_m_Rigidbody(::UnityW<::UnityEngine::Rigidbody> value);

  /// @brief Method .ctor, addr 0x2fee6dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRLegacyGrabTransformer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRLegacyGrabTransformer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRLegacyGrabTransformer(XRLegacyGrabTransformer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRLegacyGrabTransformer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRLegacyGrabTransformer(XRLegacyGrabTransformer const&) = delete;

  /// @brief Field m_Rigidbody, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___m_Rigidbody;

  /// @brief Field m_OffsetPose, offset: 0x20, size: 0x1c, def value: None
  ::UnityEngine::Pose ___m_OffsetPose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer, ___m_Rigidbody) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer, ___m_OffsetPose) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Transformers
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRLegacyGrabTransformer");
