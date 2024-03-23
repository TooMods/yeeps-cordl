#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IXRInteractable)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionLayerMask;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRInteractable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRInteractable*
class CORDL_TYPE IXRInteractable {
public:
  // Declarations
  __declspec(property(get = get_colliders))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* colliders;

  __declspec(property(get = get_interactionLayers))::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask interactionLayers;

  __declspec(property(get = get_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Method GetAttachTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::Transform> GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method GetDistanceSqrToInteractor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t GetDistanceSqrToInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method OnRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* args);

  /// @brief Method OnUnregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* args);

  /// @brief Method ProcessInteractable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessInteractable(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method add_registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);

  /// @brief Method add_unregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);

  /// @brief Method get_colliders, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* get_colliders();

  /// @brief Method get_interactionLayers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask get_interactionLayers();

  /// @brief Method get_transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// @brief Method remove_registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);

  /// @brief Method remove_unregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IXRInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRInteractable(IXRInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRInteractable(IXRInteractable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, "UnityEngine.XR.Interaction.Toolkit", "IXRInteractable");
