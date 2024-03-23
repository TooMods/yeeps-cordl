#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IXRGrabTransformer)
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
class IXRGrabTransformer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer);
// Type: UnityEngine.XR.Interaction.Toolkit.Transformers::IXRGrabTransformer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Transformers::IXRGrabTransformer*
class CORDL_TYPE IXRGrabTransformer {
public:
  // Declarations
  __declspec(property(get = get_canProcess)) bool canProcess;

  /// @brief Method OnGrab, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnGrab(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable);

  /// @brief Method OnGrabCountChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::Pose targetPose, ::UnityEngine::Vector3 localScale);

  /// @brief Method OnLink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnLink(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable);

  /// @brief Method OnUnlink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUnlink(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable);

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Process(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                      ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale);

  /// @brief Method get_canProcess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_canProcess();

  // Ctor Parameters [CppParam { name: "", ty: "IXRGrabTransformer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRGrabTransformer(IXRGrabTransformer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRGrabTransformer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRGrabTransformer(IXRGrabTransformer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Transformers
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "IXRGrabTransformer");
