#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TargetPriorityMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRBaseInteractor)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class BindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
namespace Unity::XR::CoreUtils::Collections {
template <typename T> class HashSetList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRHoverFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRSelectFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRTargetFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRBaseTargetFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class ExposedRegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
template <typename T> class IXRFilterList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRGroupMember;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionStrengthInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionStrengthInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRTargetPriorityInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionLayerMask;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct TargetPriorityMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractorEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRBaseInteractable__MovementType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor);
// Type: UnityEngine.XR.Interaction.Toolkit::XRBaseInteractor
// SizeInfo { instance_size: 400, native_size: -1, calculated_instance_size: 400, calculated_native_size: 400, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRBaseInteractor*
class CORDL_TYPE XRBaseInteractor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <attachPointAngularVelocity>k__BackingField, offset 0x120, size 0xc
  __declspec(property(get = __cordl_internal_get__attachPointAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__attachPointAngularVelocity_k__BackingField))::UnityEngine::Vector3 _attachPointAngularVelocity_k__BackingField;

  /// @brief Field <attachPointVelocity>k__BackingField, offset 0x114, size 0xc
  __declspec(property(get = __cordl_internal_get__attachPointVelocity_k__BackingField,
                      put = __cordl_internal_set__attachPointVelocity_k__BackingField))::UnityEngine::Vector3 _attachPointVelocity_k__BackingField;

  /// @brief Field <containingGroup>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__containingGroup_k__BackingField,
                      put = __cordl_internal_set__containingGroup_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* _containingGroup_k__BackingField;

  /// @brief Field <firstInteractableSelected>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__firstInteractableSelected_k__BackingField,
                      put = __cordl_internal_set__firstInteractableSelected_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* _firstInteractableSelected_k__BackingField;

  /// @brief Field <hoverTargets>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverTargets_k__BackingField, put = __cordl_internal_set__hoverTargets_k__BackingField))::System::Collections::Generic::List_1<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* _hoverTargets_k__BackingField;

  /// @brief Field <isInteractingWithUI>k__BackingField, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__isInteractingWithUI_k__BackingField, put = __cordl_internal_set__isInteractingWithUI_k__BackingField)) bool _isInteractingWithUI_k__BackingField;

  /// @brief Field <targetPriorityMode>k__BackingField, offset 0x12c, size 0x4
  __declspec(property(get = __cordl_internal_get__targetPriorityMode_k__BackingField,
                      put = __cordl_internal_set__targetPriorityMode_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode _targetPriorityMode_k__BackingField;

  /// @brief Field <targetsForSelection>k__BackingField, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__targetsForSelection_k__BackingField, put = __cordl_internal_set__targetsForSelection_k__BackingField))::System::Collections::Generic::List_1<
      ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* _targetsForSelection_k__BackingField;

  /// @brief Field <useAttachPointVelocity>k__BackingField, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get__useAttachPointVelocity_k__BackingField,
                      put = __cordl_internal_set__useAttachPointVelocity_k__BackingField)) bool _useAttachPointVelocity_k__BackingField;

  __declspec(property(get = get_allowHover, put = set_allowHover)) bool allowHover;

  __declspec(property(get = get_allowSelect, put = set_allowSelect)) bool allowSelect;

  __declspec(property(get = get_attachPointAngularVelocity, put = set_attachPointAngularVelocity))::UnityEngine::Vector3 attachPointAngularVelocity;

  __declspec(property(get = get_attachPointVelocity, put = set_attachPointVelocity))::UnityEngine::Vector3 attachPointVelocity;

  __declspec(property(get = get_attachTransform, put = set_attachTransform))::UnityW<::UnityEngine::Transform> attachTransform;

  __declspec(property(get = get_containingGroup, put = set_containingGroup))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* containingGroup;

  __declspec(property(get = get_disableVisualsWhenBlockedInGroup, put = set_disableVisualsWhenBlockedInGroup)) bool disableVisualsWhenBlockedInGroup;

  __declspec(property(get = get_enableInteractions, put = set_enableInteractions)) bool enableInteractions;

  __declspec(property(get = get_firstInteractableSelected, put = set_firstInteractableSelected))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* firstInteractableSelected;

  __declspec(property(get = get_hasHover)) bool hasHover;

  __declspec(property(get = get_hasSelection)) bool hasSelection;

  __declspec(property(get = get_hoverEntered, put = set_hoverEntered))::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* hoverEntered;

  __declspec(property(get = get_hoverExited, put = set_hoverExited))::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* hoverExited;

  __declspec(property(get = get_hoverFilters))::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* hoverFilters;

  __declspec(property(get = get_hoverTargets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* hoverTargets;

  __declspec(property(get = get_interactablesHovered))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* interactablesHovered;

  __declspec(property(get = get_interactablesSelected))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* interactablesSelected;

  __declspec(property(get = get_interactionLayerMask, put = set_interactionLayerMask))::UnityEngine::LayerMask interactionLayerMask;

  __declspec(property(get = get_interactionLayers, put = set_interactionLayers))::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask interactionLayers;

  __declspec(property(get = get_interactionManager, put = set_interactionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> interactionManager;

  __declspec(property(get = get_isHoverActive)) bool isHoverActive;

  __declspec(property(get = get_isInteractingWithUI, put = set_isInteractingWithUI)) bool isInteractingWithUI;

  __declspec(property(get = get_isPerformingManualInteraction)) bool isPerformingManualInteraction;

  __declspec(property(get = get_isSelectActive)) bool isSelectActive;

  __declspec(property(get = get_keepSelectedTargetValid, put = set_keepSelectedTargetValid)) bool keepSelectedTargetValid;

  __declspec(property(get = get_largestInteractionStrength))::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* largestInteractionStrength;

  /// @brief Field m_AllowHover, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowHover, put = __cordl_internal_set_m_AllowHover)) bool m_AllowHover;

  /// @brief Field m_AllowSelect, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowSelect, put = __cordl_internal_set_m_AllowSelect)) bool m_AllowSelect;

  /// @brief Field m_AttachPoseOnSelect, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttachPoseOnSelect,
                      put = __cordl_internal_set_m_AttachPoseOnSelect))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*,
                                                                                                                    ::UnityEngine::Pose>* m_AttachPoseOnSelect;

  /// @brief Field m_AttachTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttachTransform, put = __cordl_internal_set_m_AttachTransform))::UnityW<::UnityEngine::Transform> m_AttachTransform;

  /// @brief Field m_DeltaTimeStart, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DeltaTimeStart, put = __cordl_internal_set_m_DeltaTimeStart)) float_t m_DeltaTimeStart;

  /// @brief Field m_DisableVisualsWhenBlockedInGroup, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisableVisualsWhenBlockedInGroup, put = __cordl_internal_set_m_DisableVisualsWhenBlockedInGroup)) bool m_DisableVisualsWhenBlockedInGroup;

  /// @brief Field m_FrameOn, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FrameOn, put = __cordl_internal_set_m_FrameOn)) int32_t m_FrameOn;

  /// @brief Field m_HoverEntered, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverEntered, put = __cordl_internal_set_m_HoverEntered))::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* m_HoverEntered;

  /// @brief Field m_HoverExited, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverExited, put = __cordl_internal_set_m_HoverExited))::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* m_HoverExited;

  /// @brief Field m_HoverFilters, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverFilters, put = __cordl_internal_set_m_HoverFilters))::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<
      ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* m_HoverFilters;

  /// @brief Field m_InteractablesHovered, offset 0x98, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_InteractablesHovered,
      put = __cordl_internal_set_m_InteractablesHovered))::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* m_InteractablesHovered;

  /// @brief Field m_InteractablesSelected, offset 0xa0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_InteractablesSelected,
      put = __cordl_internal_set_m_InteractablesSelected))::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* m_InteractablesSelected;

  /// @brief Field m_InteractionLayerMask, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InteractionLayerMask, put = __cordl_internal_set_m_InteractionLayerMask))::UnityEngine::LayerMask m_InteractionLayerMask;

  /// @brief Field m_InteractionLayers, offset 0x3c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionLayers, put = __cordl_internal_set_m_InteractionLayers))::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask m_InteractionLayers;

  /// @brief Field m_InteractionManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionManager,
                      put = __cordl_internal_set_m_InteractionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> m_InteractionManager;

  /// @brief Field m_InteractionStrengthInteractables, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionStrengthInteractables, put = __cordl_internal_set_m_InteractionStrengthInteractables))::Unity::XR::CoreUtils::Collections::HashSetList_1<
      ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>* m_InteractionStrengthInteractables;

  /// @brief Field m_InteractionStrengths, offset 0xf8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_InteractionStrengths,
      put = __cordl_internal_set_m_InteractionStrengths))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>* m_InteractionStrengths;

  /// @brief Field m_IsPerformingManualInteraction, offset 0x92, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsPerformingManualInteraction, put = __cordl_internal_set_m_IsPerformingManualInteraction)) bool m_IsPerformingManualInteraction;

  /// @brief Field m_KeepSelectedTargetValid, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_KeepSelectedTargetValid, put = __cordl_internal_set_m_KeepSelectedTargetValid)) bool m_KeepSelectedTargetValid;

  /// @brief Field m_LargestInteractionStrength, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LargestInteractionStrength,
                      put = __cordl_internal_set_m_LargestInteractionStrength))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* m_LargestInteractionStrength;

  /// @brief Field m_LocalAttachPoseOnSelect, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocalAttachPoseOnSelect,
                      put = __cordl_internal_set_m_LocalAttachPoseOnSelect))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*,
                                                                                                                         ::UnityEngine::Pose>* m_LocalAttachPoseOnSelect;

  /// @brief Field m_ManualInteractionInteractable, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ManualInteractionInteractable,
                      put = __cordl_internal_set_m_ManualInteractionInteractable))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* m_ManualInteractionInteractable;

  /// @brief Field m_OnHoverEntered, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnHoverEntered, put = __cordl_internal_set_m_OnHoverEntered))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* m_OnHoverEntered;

  /// @brief Field m_OnHoverExited, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnHoverExited, put = __cordl_internal_set_m_OnHoverExited))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* m_OnHoverExited;

  /// @brief Field m_OnSelectEntered, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnSelectEntered, put = __cordl_internal_set_m_OnSelectEntered))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* m_OnSelectEntered;

  /// @brief Field m_OnSelectExited, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnSelectExited, put = __cordl_internal_set_m_OnSelectExited))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* m_OnSelectExited;

  /// @brief Field m_RegisteredInteractionManager, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegisteredInteractionManager,
                      put = __cordl_internal_set_m_RegisteredInteractionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> m_RegisteredInteractionManager;

  /// @brief Field m_SelectEntered, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectEntered, put = __cordl_internal_set_m_SelectEntered))::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* m_SelectEntered;

  /// @brief Field m_SelectExited, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectExited, put = __cordl_internal_set_m_SelectExited))::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* m_SelectExited;

  /// @brief Field m_SelectFilters, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectFilters, put = __cordl_internal_set_m_SelectFilters))::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<
      ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* m_SelectFilters;

  /// @brief Field m_StartingHoverFilters, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingHoverFilters,
                      put = __cordl_internal_set_m_StartingHoverFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* m_StartingHoverFilters;

  /// @brief Field m_StartingSelectFilters, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingSelectFilters,
                      put = __cordl_internal_set_m_StartingSelectFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* m_StartingSelectFilters;

  /// @brief Field m_StartingSelectedInteractable, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingSelectedInteractable,
                      put = __cordl_internal_set_m_StartingSelectedInteractable))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> m_StartingSelectedInteractable;

  /// @brief Field m_StartingTargetFilter, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingTargetFilter,
                      put = __cordl_internal_set_m_StartingTargetFilter))::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter> m_StartingTargetFilter;

  /// @brief Field m_TargetFilter, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetFilter, put = __cordl_internal_set_m_TargetFilter))::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* m_TargetFilter;

  /// @brief Field m_VelocityNormalsCache, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VelocityNormalsCache,
                      put = __cordl_internal_set_m_VelocityNormalsCache))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_VelocityNormalsCache;

  /// @brief Field m_VelocityNormalsSum, offset 0x15c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_VelocityNormalsSum, put = __cordl_internal_set_m_VelocityNormalsSum))::UnityEngine::Vector3 m_VelocityNormalsSum;

  /// @brief Field m_VelocityPositionsCache, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VelocityPositionsCache,
                      put = __cordl_internal_set_m_VelocityPositionsCache))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_VelocityPositionsCache;

  /// @brief Field m_VelocityPositionsSum, offset 0x150, size 0xc
  __declspec(property(get = __cordl_internal_get_m_VelocityPositionsSum, put = __cordl_internal_set_m_VelocityPositionsSum))::UnityEngine::Vector3 m_VelocityPositionsSum;

  __declspec(property(get = get_onHoverEnter))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* onHoverEnter;

  __declspec(property(get = get_onHoverEntered, put = set_onHoverEntered))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* onHoverEntered;

  __declspec(property(get = get_onHoverExit))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* onHoverExit;

  __declspec(property(get = get_onHoverExited, put = set_onHoverExited))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* onHoverExited;

  __declspec(property(get = get_onSelectEnter))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* onSelectEnter;

  __declspec(property(get = get_onSelectEntered, put = set_onSelectEntered))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* onSelectEntered;

  __declspec(property(get = get_onSelectExit))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* onSelectExit;

  __declspec(property(get = get_onSelectExited, put = set_onSelectExited))::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* onSelectExited;

  /// @brief Field registered, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_registered,
                      put = __cordl_internal_set_registered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* registered;

  __declspec(property(get = get_requireSelectExclusive)) bool requireSelectExclusive;

  /// @brief Field s_InteractionManagerCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InteractionManagerCache,
                             put = setStaticF_s_InteractionManagerCache))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> s_InteractionManagerCache;

  /// @brief Field s_ProcessInteractionStrengthMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProcessInteractionStrengthMarker,
                             put = setStaticF_s_ProcessInteractionStrengthMarker))::Unity::Profiling::ProfilerMarker s_ProcessInteractionStrengthMarker;

  __declspec(property(get = get_selectEntered, put = set_selectEntered))::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* selectEntered;

  __declspec(property(get = get_selectExited, put = set_selectExited))::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* selectExited;

  __declspec(property(get = get_selectFilters))::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* selectFilters;

  __declspec(property(get = get_selectTarget, put = set_selectTarget))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> selectTarget;

  __declspec(property(
      get = get_selectedInteractableMovementTypeOverride))::System::Nullable_1<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType> selectedInteractableMovementTypeOverride;

  __declspec(property(get = get_startingHoverFilters, put = set_startingHoverFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* startingHoverFilters;

  __declspec(property(get = get_startingSelectFilters, put = set_startingSelectFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* startingSelectFilters;

  __declspec(property(get = get_startingSelectedInteractable,
                      put = set_startingSelectedInteractable))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> startingSelectedInteractable;

  __declspec(property(get = get_startingTargetFilter, put = set_startingTargetFilter))::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter> startingTargetFilter;

  __declspec(property(get = get_targetFilter, put = set_targetFilter))::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* targetFilter;

  __declspec(property(get = get_targetPriorityMode, put = set_targetPriorityMode))::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode targetPriorityMode;

  __declspec(property(get = get_targetsForSelection,
                      put = set_targetsForSelection))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* targetsForSelection;

  /// @brief Field unregistered, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_unregistered,
                      put = __cordl_internal_set_unregistered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* unregistered;

  __declspec(property(get = get_useAttachPointVelocity, put = set_useAttachPointVelocity)) bool useAttachPointVelocity;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractor*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*() noexcept;

  /// @brief Method Awake, addr 0x2ceac4c, size 0x31c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CanHover, addr 0x2ceb778, size 0x8, virtual true, abstract: false, final false
  inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method CanHover, addr 0x2ceda7c, size 0x10, virtual true, abstract: false, final false
  inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method CanSelect, addr 0x2ceb780, size 0x8, virtual true, abstract: false, final false
  inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method CanSelect, addr 0x2ceda8c, size 0x10, virtual true, abstract: false, final false
  inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method CaptureAttachPose, addr 0x2ceb928, size 0x240, virtual false, abstract: false, final false
  inline void CaptureAttachPose(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method EndManualInteraction, addr 0x2ced404, size 0x110, virtual true, abstract: false, final false
  inline void EndManualInteraction();

  /// @brief Method FindCreateInteractionManager, addr 0x2ceaf68, size 0x2b8, virtual false, abstract: false, final false
  inline void FindCreateInteractionManager();

  /// @brief Method GetAttachPoseOnSelect, addr 0x2ceb5a4, size 0xd0, virtual true, abstract: false, final true
  inline ::UnityEngine::Pose GetAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method GetAttachTransform, addr 0x2ceb524, size 0x80, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method GetHoverTargets, addr 0x2ced9f0, size 0x88, virtual false, abstract: false, final false
  inline void GetHoverTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* targets);

  /// @brief Method GetInteractionStrength, addr 0x2cebf0c, size 0x7c, virtual true, abstract: false, final true
  inline float_t GetInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method GetLocalAttachPoseOnSelect, addr 0x2ceb674, size 0xd0, virtual true, abstract: false, final true
  inline ::UnityEngine::Pose GetLocalAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method GetValidTargets, addr 0x2ceb744, size 0x4, virtual true, abstract: false, final false
  inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets);

  /// @brief Method GetValidTargets, addr 0x2ceda78, size 0x4, virtual true, abstract: false, final false
  inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* targets);

  /// @brief Method IsHovering, addr 0x2ceb788, size 0x58, virtual true, abstract: false, final true
  inline bool IsHovering(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method IsHovering, addr 0x2ceb838, size 0x74, virtual false, abstract: false, final false
  inline bool IsHovering(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method IsSelecting, addr 0x2ceb8ac, size 0x74, virtual false, abstract: false, final false
  inline bool IsSelecting(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method IsSelecting, addr 0x2ceb7e0, size 0x58, virtual true, abstract: false, final true
  inline bool IsSelecting(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* New_ctor();

  /// @brief Method OnDestroy, addr 0x2ceb384, size 0x1a0, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2ceb238, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2ceb220, size 0x18, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnHoverEntered, addr 0x2cec69c, size 0x7c, virtual true, abstract: false, final false
  inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverEntered, addr 0x2ced748, size 0x60, virtual true, abstract: false, final false
  inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method OnHoverEntering, addr 0x2cec458, size 0x15c, virtual true, abstract: false, final false
  inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverEntering, addr 0x2ced744, size 0x4, virtual true, abstract: false, final false
  inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method OnHoverExited, addr 0x2cec8d0, size 0x7c, virtual true, abstract: false, final false
  inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnHoverExited, addr 0x2ced7ac, size 0x60, virtual true, abstract: false, final false
  inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method OnHoverExiting, addr 0x2cec718, size 0x14c, virtual true, abstract: false, final false
  inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnHoverExiting, addr 0x2ced7a8, size 0x4, virtual true, abstract: false, final false
  inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method OnRegistered, addr 0x2cec1e8, size 0x138, virtual true, abstract: false, final false
  inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* args);

  /// @brief Method OnSelectEntered, addr 0x2cecae4, size 0x7c, virtual true, abstract: false, final false
  inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectEntered, addr 0x2ced810, size 0x60, virtual true, abstract: false, final false
  inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method OnSelectEntering, addr 0x2cec94c, size 0x12c, virtual true, abstract: false, final false
  inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectEntering, addr 0x2ced80c, size 0x4, virtual true, abstract: false, final false
  inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method OnSelectExited, addr 0x2cecce4, size 0xe8, virtual true, abstract: false, final false
  inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method OnSelectExited, addr 0x2ced874, size 0x60, virtual true, abstract: false, final false
  inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method OnSelectExiting, addr 0x2cecb60, size 0x118, virtual true, abstract: false, final false
  inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method OnSelectExiting, addr 0x2ced870, size 0x4, virtual true, abstract: false, final false
  inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method OnUnregistered, addr 0x2cec320, size 0x138, virtual true, abstract: false, final false
  inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* args);

  /// @brief Method PreprocessInteractor, addr 0x2cebb68, size 0x10, virtual true, abstract: false, final false
  inline void PreprocessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessHoverFilters, addr 0x2cec078, size 0x18, virtual false, abstract: false, final false
  inline bool ProcessHoverFilters(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method ProcessInteractionStrength, addr 0x2cecdcc, size 0x540, virtual true, abstract: false, final false
  inline void ProcessInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessInteractor, addr 0x2cebf08, size 0x4, virtual true, abstract: false, final false
  inline void ProcessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessSelectFilters, addr 0x2cec190, size 0x18, virtual false, abstract: false, final false
  inline bool ProcessSelectFilters(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method RegisterWithInteractionManager, addr 0x2cea61c, size 0xcc, virtual false, abstract: false, final false
  inline void RegisterWithInteractionManager();

  /// @brief Method Reset, addr 0x2ceac48, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Start, addr 0x2ceb2c8, size 0xbc, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method StartManualInteraction, addr 0x2ced30c, size 0xf8, virtual true, abstract: false, final false
  inline void StartManualInteraction(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method StartManualInteraction, addr 0x2cedaa4, size 0x10, virtual true, abstract: false, final false
  inline void StartManualInteraction(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRGroupMember.OnRegisteringAsGroupMember, addr 0x2ced514, size 0x188, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRGroupMember_OnRegisteringAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* group);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRGroupMember.OnRegisteringAsNonGroupMember, addr 0x2ced69c, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRGroupMember_OnRegisteringAsNonGroupMember();

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor.CanHover, addr 0x2cebfb8, size 0xc0, virtual true, abstract: false, final true
  inline bool UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractor_CanHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor.OnHoverEntered, addr 0x2cec0a0, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractor_OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor.OnHoverEntering, addr 0x2cec090, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractor_OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor.OnHoverExited, addr 0x2cec0c0, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractor_OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor.OnHoverExiting, addr 0x2cec0b0, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractor_OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractor.ProcessInteractionStrength, addr 0x2cebf88, size 0x10, virtual true, abstract: false, final true
  inline void
  UnityEngine_XR_Interaction_Toolkit_IXRInteractionStrengthInteractor_ProcessInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractor.OnRegistered, addr 0x2cebf98, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRInteractor_OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractor.OnUnregistered, addr 0x2cebfa8, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRInteractor_OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractor.get_transform, addr 0x2cee1a0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_IXRInteractor_get_transform();

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor.CanSelect, addr 0x2cec0d0, size 0xc0, virtual true, abstract: false, final true
  inline bool UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_CanSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor.OnSelectEntered, addr 0x2cec1b8, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor.OnSelectEntering, addr 0x2cec1a8, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor.OnSelectExited, addr 0x2cec1d8, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor.OnSelectExiting, addr 0x2cec1c8, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method UnregisterWithInteractionManager, addr 0x2ceb23c, size 0x8c, virtual false, abstract: false, final false
  inline void UnregisterWithInteractionManager();

  /// @brief Method UpdateVelocityAndAngularVelocity, addr 0x2cebb78, size 0x390, virtual false, abstract: false, final false
  inline void UpdateVelocityAndAngularVelocity();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__attachPointAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__attachPointAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__attachPointVelocity_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__attachPointVelocity_k__BackingField();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*& __cordl_internal_get__containingGroup_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*> const& __cordl_internal_get__containingGroup_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*& __cordl_internal_get__firstInteractableSelected_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*> const& __cordl_internal_get__firstInteractableSelected_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*& __cordl_internal_get__hoverTargets_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*> const&
  __cordl_internal_get__hoverTargets_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__isInteractingWithUI_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isInteractingWithUI_k__BackingField();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode const& __cordl_internal_get__targetPriorityMode_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode& __cordl_internal_get__targetPriorityMode_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*& __cordl_internal_get__targetsForSelection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*> const&
  __cordl_internal_get__targetsForSelection_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__useAttachPointVelocity_k__BackingField() const;

  constexpr bool& __cordl_internal_get__useAttachPointVelocity_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_AllowHover() const;

  constexpr bool& __cordl_internal_get_m_AllowHover();

  constexpr bool const& __cordl_internal_get_m_AllowSelect() const;

  constexpr bool& __cordl_internal_get_m_AllowSelect();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, ::UnityEngine::Pose>*& __cordl_internal_get_m_AttachPoseOnSelect();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, ::UnityEngine::Pose>*> const&
  __cordl_internal_get_m_AttachPoseOnSelect() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_AttachTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_AttachTransform();

  constexpr float_t const& __cordl_internal_get_m_DeltaTimeStart() const;

  constexpr float_t& __cordl_internal_get_m_DeltaTimeStart();

  constexpr bool const& __cordl_internal_get_m_DisableVisualsWhenBlockedInGroup() const;

  constexpr bool& __cordl_internal_get_m_DisableVisualsWhenBlockedInGroup();

  constexpr int32_t const& __cordl_internal_get_m_FrameOn() const;

  constexpr int32_t& __cordl_internal_get_m_FrameOn();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*& __cordl_internal_get_m_HoverEntered();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*> const& __cordl_internal_get_m_HoverEntered() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*& __cordl_internal_get_m_HoverExited();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*> const& __cordl_internal_get_m_HoverExited() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*& __cordl_internal_get_m_HoverFilters();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*> const&
  __cordl_internal_get_m_HoverFilters() const;

  constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>*& __cordl_internal_get_m_InteractablesHovered();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>*> const&
  __cordl_internal_get_m_InteractablesHovered() const;

  constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*& __cordl_internal_get_m_InteractablesSelected();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*> const&
  __cordl_internal_get_m_InteractablesSelected() const;

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_InteractionLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_InteractionLayerMask();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask const& __cordl_internal_get_m_InteractionLayers() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask& __cordl_internal_get_m_InteractionLayers();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_InteractionManager() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_InteractionManager();

  constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>*&
  __cordl_internal_get_m_InteractionStrengthInteractables();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>*> const&
  __cordl_internal_get_m_InteractionStrengthInteractables() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>*& __cordl_internal_get_m_InteractionStrengths();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>*> const&
  __cordl_internal_get_m_InteractionStrengths() const;

  constexpr bool const& __cordl_internal_get_m_IsPerformingManualInteraction() const;

  constexpr bool& __cordl_internal_get_m_IsPerformingManualInteraction();

  constexpr bool const& __cordl_internal_get_m_KeepSelectedTargetValid() const;

  constexpr bool& __cordl_internal_get_m_KeepSelectedTargetValid();

  constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*& __cordl_internal_get_m_LargestInteractionStrength();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*> const& __cordl_internal_get_m_LargestInteractionStrength() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, ::UnityEngine::Pose>*& __cordl_internal_get_m_LocalAttachPoseOnSelect();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, ::UnityEngine::Pose>*> const&
  __cordl_internal_get_m_LocalAttachPoseOnSelect() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*& __cordl_internal_get_m_ManualInteractionInteractable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*> const& __cordl_internal_get_m_ManualInteractionInteractable() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*& __cordl_internal_get_m_OnHoverEntered();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*> const& __cordl_internal_get_m_OnHoverEntered() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*& __cordl_internal_get_m_OnHoverExited();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*> const& __cordl_internal_get_m_OnHoverExited() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*& __cordl_internal_get_m_OnSelectEntered();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*> const& __cordl_internal_get_m_OnSelectEntered() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*& __cordl_internal_get_m_OnSelectExited();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*> const& __cordl_internal_get_m_OnSelectExited() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_RegisteredInteractionManager() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_RegisteredInteractionManager();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*& __cordl_internal_get_m_SelectEntered();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*> const& __cordl_internal_get_m_SelectEntered() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*& __cordl_internal_get_m_SelectExited();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*> const& __cordl_internal_get_m_SelectExited() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*&
  __cordl_internal_get_m_SelectFilters();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*> const&
  __cordl_internal_get_m_SelectFilters() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingHoverFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_m_StartingHoverFilters() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingSelectFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_m_StartingSelectFilters() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> const& __cordl_internal_get_m_StartingSelectedInteractable() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>& __cordl_internal_get_m_StartingSelectedInteractable();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter> const& __cordl_internal_get_m_StartingTargetFilter() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter>& __cordl_internal_get_m_StartingTargetFilter();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*& __cordl_internal_get_m_TargetFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*> const& __cordl_internal_get_m_TargetFilter() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_VelocityNormalsCache() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_VelocityNormalsCache();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_VelocityNormalsSum() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_VelocityNormalsSum();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_VelocityPositionsCache() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_VelocityPositionsCache();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_VelocityPositionsSum() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_VelocityPositionsSum();

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*& __cordl_internal_get_registered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*> const& __cordl_internal_get_registered() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*& __cordl_internal_get_unregistered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*> const& __cordl_internal_get_unregistered() const;

  constexpr void __cordl_internal_set__attachPointAngularVelocity_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__attachPointVelocity_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__containingGroup_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

  constexpr void __cordl_internal_set__firstInteractableSelected_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* value);

  constexpr void __cordl_internal_set__hoverTargets_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* value);

  constexpr void __cordl_internal_set__isInteractingWithUI_k__BackingField(bool value);

  constexpr void __cordl_internal_set__targetPriorityMode_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode value);

  constexpr void __cordl_internal_set__targetsForSelection_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* value);

  constexpr void __cordl_internal_set__useAttachPointVelocity_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_AllowHover(bool value);

  constexpr void __cordl_internal_set_m_AllowSelect(bool value);

  constexpr void __cordl_internal_set_m_AttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, ::UnityEngine::Pose>* value);

  constexpr void __cordl_internal_set_m_AttachTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_DeltaTimeStart(float_t value);

  constexpr void __cordl_internal_set_m_DisableVisualsWhenBlockedInGroup(bool value);

  constexpr void __cordl_internal_set_m_FrameOn(int32_t value);

  constexpr void __cordl_internal_set_m_HoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* value);

  constexpr void __cordl_internal_set_m_HoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* value);

  constexpr void
  __cordl_internal_set_m_HoverFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* value);

  constexpr void __cordl_internal_set_m_InteractablesHovered(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* value);

  constexpr void __cordl_internal_set_m_InteractablesSelected(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* value);

  constexpr void __cordl_internal_set_m_InteractionLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_InteractionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask value);

  constexpr void __cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  constexpr void
  __cordl_internal_set_m_InteractionStrengthInteractables(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>* value);

  constexpr void __cordl_internal_set_m_InteractionStrengths(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>* value);

  constexpr void __cordl_internal_set_m_IsPerformingManualInteraction(bool value);

  constexpr void __cordl_internal_set_m_KeepSelectedTargetValid(bool value);

  constexpr void __cordl_internal_set_m_LargestInteractionStrength(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* value);

  constexpr void
  __cordl_internal_set_m_LocalAttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, ::UnityEngine::Pose>* value);

  constexpr void __cordl_internal_set_m_ManualInteractionInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* value);

  constexpr void __cordl_internal_set_m_OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* value);

  constexpr void __cordl_internal_set_m_OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* value);

  constexpr void __cordl_internal_set_m_OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* value);

  constexpr void __cordl_internal_set_m_OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* value);

  constexpr void __cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  constexpr void __cordl_internal_set_m_SelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* value);

  constexpr void __cordl_internal_set_m_SelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* value);

  constexpr void
  __cordl_internal_set_m_SelectFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* value);

  constexpr void __cordl_internal_set_m_StartingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set_m_StartingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set_m_StartingSelectedInteractable(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> value);

  constexpr void __cordl_internal_set_m_StartingTargetFilter(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter> value);

  constexpr void __cordl_internal_set_m_TargetFilter(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* value);

  constexpr void __cordl_internal_set_m_VelocityNormalsCache(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_VelocityNormalsSum(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_VelocityPositionsCache(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_VelocityPositionsSum(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* value);

  /// @brief Method .ctor, addr 0x2cedab4, size 0x504, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_registered, addr 0x2cea318, size 0xb0, virtual true, abstract: false, final true
  inline void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* value);

  /// @brief Method add_unregistered, addr 0x2cea478, size 0xb0, virtual true, abstract: false, final true
  inline void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* value);

  static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> getStaticF_s_InteractionManagerCache();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractionStrengthMarker();

  /// @brief Method get_allowHover, addr 0x2cea990, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowHover();

  /// @brief Method get_allowSelect, addr 0x2cea9a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowSelect();

  /// @brief Method get_attachPointAngularVelocity, addr 0x2ceac28, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_attachPointAngularVelocity();

  /// @brief Method get_attachPointVelocity, addr 0x2ceac08, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_attachPointVelocity();

  /// @brief Method get_attachTransform, addr 0x2cea708, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_attachTransform();

  /// @brief Method get_containingGroup, addr 0x2cea6e8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* get_containingGroup();

  /// @brief Method get_disableVisualsWhenBlockedInGroup, addr 0x2cea72c, size 0x8, virtual false, abstract: false, final false
  inline bool get_disableVisualsWhenBlockedInGroup();

  /// @brief Method get_enableInteractions, addr 0x2ced6b4, size 0x20, virtual false, abstract: false, final false
  inline bool get_enableInteractions();

  /// @brief Method get_firstInteractableSelected, addr 0x2ceab3c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* get_firstInteractableSelected();

  /// @brief Method get_hasHover, addr 0x2ceaa50, size 0x5c, virtual true, abstract: false, final true
  inline bool get_hasHover();

  /// @brief Method get_hasSelection, addr 0x2ceab4c, size 0x5c, virtual true, abstract: false, final true
  inline bool get_hasSelection();

  /// @brief Method get_hoverEntered, addr 0x2cea760, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_hoverEntered();

  /// @brief Method get_hoverExited, addr 0x2cea770, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_hoverExited();

  /// @brief Method get_hoverFilters, addr 0x2ceabcc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* get_hoverFilters();

  /// @brief Method get_hoverTargets, addr 0x2ced9e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* get_hoverTargets();

  /// @brief Method get_interactablesHovered, addr 0x2cea9c0, size 0x90, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* get_interactablesHovered();

  /// @brief Method get_interactablesSelected, addr 0x2ceaaac, size 0x90, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* get_interactablesSelected();

  /// @brief Method get_interactionLayerMask, addr 0x2ced6a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_interactionLayerMask();

  /// @brief Method get_interactionLayers, addr 0x2cea6f8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask get_interactionLayers();

  /// @brief Method get_interactionManager, addr 0x2cea5d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_interactionManager();

  /// @brief Method get_isHoverActive, addr 0x2ceb748, size 0x8, virtual true, abstract: false, final false
  inline bool get_isHoverActive();

  /// @brief Method get_isInteractingWithUI, addr 0x2ceaba8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInteractingWithUI();

  /// @brief Method get_isPerformingManualInteraction, addr 0x2cea9b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPerformingManualInteraction();

  /// @brief Method get_isSelectActive, addr 0x2ceb750, size 0x8, virtual true, abstract: false, final false
  inline bool get_isSelectActive();

  /// @brief Method get_keepSelectedTargetValid, addr 0x2cea718, size 0x8, virtual true, abstract: false, final true
  inline bool get_keepSelectedTargetValid();

  /// @brief Method get_largestInteractionStrength, addr 0x2ceabec, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* get_largestInteractionStrength();

  /// @brief Method get_onHoverEnter, addr 0x2ced724, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onHoverEnter();

  /// @brief Method get_onHoverEntered, addr 0x2ced6e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onHoverEntered();

  /// @brief Method get_onHoverExit, addr 0x2ced72c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onHoverExit();

  /// @brief Method get_onHoverExited, addr 0x2ced6f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onHoverExited();

  /// @brief Method get_onSelectEnter, addr 0x2ced734, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onSelectEnter();

  /// @brief Method get_onSelectEntered, addr 0x2ced704, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onSelectEntered();

  /// @brief Method get_onSelectExit, addr 0x2ced73c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onSelectExit();

  /// @brief Method get_onSelectExited, addr 0x2ced714, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onSelectExited();

  /// @brief Method get_requireSelectExclusive, addr 0x2ceda9c, size 0x8, virtual true, abstract: false, final false
  inline bool get_requireSelectExclusive();

  /// @brief Method get_selectEntered, addr 0x2cea780, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_selectEntered();

  /// @brief Method get_selectExited, addr 0x2cea790, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_selectExited();

  /// @brief Method get_selectFilters, addr 0x2ceabe4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* get_selectFilters();

  /// @brief Method get_selectTarget, addr 0x2ced8d4, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> get_selectTarget();

  /// @brief Method get_selectedInteractableMovementTypeOverride, addr 0x2ceb920, size 0x8, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType> get_selectedInteractableMovementTypeOverride();

  /// @brief Method get_startingHoverFilters, addr 0x2ceabbc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingHoverFilters();

  /// @brief Method get_startingSelectFilters, addr 0x2ceabd4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingSelectFilters();

  /// @brief Method get_startingSelectedInteractable, addr 0x2cea740, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> get_startingSelectedInteractable();

  /// @brief Method get_startingTargetFilter, addr 0x2cea750, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter> get_startingTargetFilter();

  /// @brief Method get_targetFilter, addr 0x2cea7a0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* get_targetFilter();

  /// @brief Method get_targetPriorityMode, addr 0x2ceb758, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode get_targetPriorityMode();

  /// @brief Method get_targetsForSelection, addr 0x2ceb768, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* get_targetsForSelection();

  /// @brief Method get_useAttachPointVelocity, addr 0x2ceabf4, size 0x8, virtual false, abstract: false, final false
  inline bool get_useAttachPointVelocity();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* i___UnityEngine__XR__Interaction__Toolkit__IXRGroupMember() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* i___UnityEngine__XR__Interaction__Toolkit__IXRHoverInteractor() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractor* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractionStrengthInteractor() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractor() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* i___UnityEngine__XR__Interaction__Toolkit__IXRSelectInteractor() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor* i___UnityEngine__XR__Interaction__Toolkit__IXRTargetPriorityInteractor() noexcept;

  /// @brief Method remove_registered, addr 0x2cea3c8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* value);

  /// @brief Method remove_unregistered, addr 0x2cea528, size 0xb0, virtual true, abstract: false, final true
  inline void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* value);

  static inline void setStaticF_s_InteractionManagerCache(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  static inline void setStaticF_s_ProcessInteractionStrengthMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_allowHover, addr 0x2cea998, size 0xc, virtual false, abstract: false, final false
  inline void set_allowHover(bool value);

  /// @brief Method set_allowSelect, addr 0x2cea9ac, size 0xc, virtual false, abstract: false, final false
  inline void set_allowSelect(bool value);

  /// @brief Method set_attachPointAngularVelocity, addr 0x2ceac38, size 0x10, virtual false, abstract: false, final false
  inline void set_attachPointAngularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_attachPointVelocity, addr 0x2ceac18, size 0x10, virtual false, abstract: false, final false
  inline void set_attachPointVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_attachTransform, addr 0x2cea710, size 0x8, virtual false, abstract: false, final false
  inline void set_attachTransform(::UnityEngine::Transform* value);

  /// @brief Method set_containingGroup, addr 0x2cea6f0, size 0x8, virtual false, abstract: false, final false
  inline void set_containingGroup(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

  /// @brief Method set_disableVisualsWhenBlockedInGroup, addr 0x2cea734, size 0xc, virtual false, abstract: false, final false
  inline void set_disableVisualsWhenBlockedInGroup(bool value);

  /// @brief Method set_enableInteractions, addr 0x2ced6d4, size 0x10, virtual false, abstract: false, final false
  inline void set_enableInteractions(bool value);

  /// @brief Method set_firstInteractableSelected, addr 0x2ceab44, size 0x8, virtual false, abstract: false, final false
  inline void set_firstInteractableSelected(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* value);

  /// @brief Method set_hoverEntered, addr 0x2cea768, size 0x8, virtual false, abstract: false, final false
  inline void set_hoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* value);

  /// @brief Method set_hoverExited, addr 0x2cea778, size 0x8, virtual false, abstract: false, final false
  inline void set_hoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* value);

  /// @brief Method set_interactionLayerMask, addr 0x2ced6ac, size 0x8, virtual false, abstract: false, final false
  inline void set_interactionLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_interactionLayers, addr 0x2cea700, size 0x8, virtual false, abstract: false, final false
  inline void set_interactionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask value);

  /// @brief Method set_interactionManager, addr 0x2cea5e0, size 0x3c, virtual false, abstract: false, final false
  inline void set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* value);

  /// @brief Method set_isInteractingWithUI, addr 0x2ceabb0, size 0xc, virtual false, abstract: false, final false
  inline void set_isInteractingWithUI(bool value);

  /// @brief Method set_keepSelectedTargetValid, addr 0x2cea720, size 0xc, virtual false, abstract: false, final false
  inline void set_keepSelectedTargetValid(bool value);

  /// @brief Method set_onHoverEntered, addr 0x2ced6ec, size 0x8, virtual false, abstract: false, final false
  inline void set_onHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* value);

  /// @brief Method set_onHoverExited, addr 0x2ced6fc, size 0x8, virtual false, abstract: false, final false
  inline void set_onHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* value);

  /// @brief Method set_onSelectEntered, addr 0x2ced70c, size 0x8, virtual false, abstract: false, final false
  inline void set_onSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* value);

  /// @brief Method set_onSelectExited, addr 0x2ced71c, size 0x8, virtual false, abstract: false, final false
  inline void set_onSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* value);

  /// @brief Method set_selectEntered, addr 0x2cea788, size 0x8, virtual false, abstract: false, final false
  inline void set_selectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* value);

  /// @brief Method set_selectExited, addr 0x2cea798, size 0x8, virtual false, abstract: false, final false
  inline void set_selectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* value);

  /// @brief Method set_selectTarget, addr 0x2ced988, size 0x60, virtual false, abstract: false, final false
  inline void set_selectTarget(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* value);

  /// @brief Method set_startingHoverFilters, addr 0x2ceabc4, size 0x8, virtual false, abstract: false, final false
  inline void set_startingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  /// @brief Method set_startingSelectFilters, addr 0x2ceabdc, size 0x8, virtual false, abstract: false, final false
  inline void set_startingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  /// @brief Method set_startingSelectedInteractable, addr 0x2cea748, size 0x8, virtual false, abstract: false, final false
  inline void set_startingSelectedInteractable(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* value);

  /// @brief Method set_startingTargetFilter, addr 0x2cea758, size 0x8, virtual false, abstract: false, final false
  inline void set_startingTargetFilter(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter* value);

  /// @brief Method set_targetFilter, addr 0x2cea840, size 0x150, virtual false, abstract: false, final false
  inline void set_targetFilter(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* value);

  /// @brief Method set_targetPriorityMode, addr 0x2ceb760, size 0x8, virtual true, abstract: false, final false
  inline void set_targetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode value);

  /// @brief Method set_targetsForSelection, addr 0x2ceb770, size 0x8, virtual true, abstract: false, final false
  inline void set_targetsForSelection(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* value);

  /// @brief Method set_useAttachPointVelocity, addr 0x2ceabfc, size 0xc, virtual false, abstract: false, final false
  inline void set_useAttachPointVelocity(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRBaseInteractor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRBaseInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRBaseInteractor(XRBaseInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRBaseInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRBaseInteractor(XRBaseInteractor const&) = delete;

  /// @brief Field registered, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* ___registered;

  /// @brief Field unregistered, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* ___unregistered;

  /// @brief Field m_InteractionManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> ___m_InteractionManager;

  /// @brief Field <containingGroup>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* ____containingGroup_k__BackingField;

  /// @brief Field m_InteractionLayerMask, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_InteractionLayerMask;

  /// @brief Field m_InteractionLayers, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask ___m_InteractionLayers;

  /// @brief Field m_AttachTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_AttachTransform;

  /// @brief Field m_KeepSelectedTargetValid, offset: 0x50, size: 0x1, def value: None
  bool ___m_KeepSelectedTargetValid;

  /// @brief Field m_DisableVisualsWhenBlockedInGroup, offset: 0x51, size: 0x1, def value: None
  bool ___m_DisableVisualsWhenBlockedInGroup;

  /// @brief Field m_StartingSelectedInteractable, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> ___m_StartingSelectedInteractable;

  /// @brief Field m_StartingTargetFilter, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter> ___m_StartingTargetFilter;

  /// @brief Field m_HoverEntered, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* ___m_HoverEntered;

  /// @brief Field m_HoverExited, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* ___m_HoverExited;

  /// @brief Field m_SelectEntered, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* ___m_SelectEntered;

  /// @brief Field m_SelectExited, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* ___m_SelectExited;

  /// @brief Field m_TargetFilter, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* ___m_TargetFilter;

  /// @brief Field m_AllowHover, offset: 0x90, size: 0x1, def value: None
  bool ___m_AllowHover;

  /// @brief Field m_AllowSelect, offset: 0x91, size: 0x1, def value: None
  bool ___m_AllowSelect;

  /// @brief Field m_IsPerformingManualInteraction, offset: 0x92, size: 0x1, def value: None
  bool ___m_IsPerformingManualInteraction;

  /// @brief Field m_InteractablesHovered, offset: 0x98, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* ___m_InteractablesHovered;

  /// @brief Field m_InteractablesSelected, offset: 0xa0, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* ___m_InteractablesSelected;

  /// @brief Field <firstInteractableSelected>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* ____firstInteractableSelected_k__BackingField;

  /// @brief Field <isInteractingWithUI>k__BackingField, offset: 0xb0, size: 0x1, def value: None
  bool ____isInteractingWithUI_k__BackingField;

  /// @brief Field m_StartingHoverFilters, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* ___m_StartingHoverFilters;

  /// @brief Field m_HoverFilters, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* ___m_HoverFilters;

  /// @brief Field m_StartingSelectFilters, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* ___m_StartingSelectFilters;

  /// @brief Field m_SelectFilters, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* ___m_SelectFilters;

  /// @brief Field m_LargestInteractionStrength, offset: 0xd8, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* ___m_LargestInteractionStrength;

  /// @brief Field m_AttachPoseOnSelect, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, ::UnityEngine::Pose>* ___m_AttachPoseOnSelect;

  /// @brief Field m_LocalAttachPoseOnSelect, offset: 0xe8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, ::UnityEngine::Pose>* ___m_LocalAttachPoseOnSelect;

  /// @brief Field m_InteractionStrengthInteractables, offset: 0xf0, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*>* ___m_InteractionStrengthInteractables;

  /// @brief Field m_InteractionStrengths, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>* ___m_InteractionStrengths;

  /// @brief Field m_ManualInteractionInteractable, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* ___m_ManualInteractionInteractable;

  /// @brief Field m_RegisteredInteractionManager, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> ___m_RegisteredInteractionManager;

  /// @brief Field <useAttachPointVelocity>k__BackingField, offset: 0x110, size: 0x1, def value: None
  bool ____useAttachPointVelocity_k__BackingField;

  /// @brief Field <attachPointVelocity>k__BackingField, offset: 0x114, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____attachPointVelocity_k__BackingField;

  /// @brief Field <attachPointAngularVelocity>k__BackingField, offset: 0x120, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____attachPointAngularVelocity_k__BackingField;

  /// @brief Field <targetPriorityMode>k__BackingField, offset: 0x12c, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode ____targetPriorityMode_k__BackingField;

  /// @brief Field <targetsForSelection>k__BackingField, offset: 0x130, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* ____targetsForSelection_k__BackingField;

  /// @brief Field m_DeltaTimeStart, offset: 0x138, size: 0x4, def value: None
  float_t ___m_DeltaTimeStart;

  /// @brief Field m_FrameOn, offset: 0x13c, size: 0x4, def value: None
  int32_t ___m_FrameOn;

  /// @brief Field m_VelocityPositionsCache, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_VelocityPositionsCache;

  /// @brief Field m_VelocityNormalsCache, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_VelocityNormalsCache;

  /// @brief Field m_VelocityPositionsSum, offset: 0x150, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_VelocityPositionsSum;

  /// @brief Field m_VelocityNormalsSum, offset: 0x15c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_VelocityNormalsSum;

  /// @brief Field m_OnHoverEntered, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* ___m_OnHoverEntered;

  /// @brief Field m_OnHoverExited, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* ___m_OnHoverExited;

  /// @brief Field m_OnSelectEntered, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* ___m_OnSelectEntered;

  /// @brief Field m_OnSelectExited, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* ___m_OnSelectExited;

  /// @brief Field <hoverTargets>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* ____hoverTargets_k__BackingField;

  /// @brief Field k_InteractionStrengthHover offset 0xffffffff size 0x4
  static constexpr float_t k_InteractionStrengthHover{ 0.0 };

  /// @brief Field k_InteractionStrengthSelect offset 0xffffffff size 0x4
  static constexpr float_t k_InteractionStrengthSelect{ 1.0 };

  /// @brief Field k_VelocityUpdateInterval offset 0xffffffff size 0x4
  static constexpr int32_t k_VelocityUpdateInterval{ static_cast<int32_t>(0x6) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, 0x190>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___registered) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___unregistered) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_InteractionManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ____containingGroup_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_InteractionLayerMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_InteractionLayers) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_AttachTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_KeepSelectedTargetValid) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_DisableVisualsWhenBlockedInGroup) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_StartingSelectedInteractable) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_StartingTargetFilter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_HoverEntered) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_HoverExited) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_SelectEntered) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_SelectExited) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_TargetFilter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_AllowHover) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_AllowSelect) == 0x91, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_IsPerformingManualInteraction) == 0x92, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_InteractablesHovered) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_InteractablesSelected) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ____firstInteractableSelected_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ____isInteractingWithUI_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_StartingHoverFilters) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_HoverFilters) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_StartingSelectFilters) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_SelectFilters) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_LargestInteractionStrength) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_AttachPoseOnSelect) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_LocalAttachPoseOnSelect) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_InteractionStrengthInteractables) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_InteractionStrengths) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_ManualInteractionInteractable) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_RegisteredInteractionManager) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ____useAttachPointVelocity_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ____attachPointVelocity_k__BackingField) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ____attachPointAngularVelocity_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ____targetPriorityMode_k__BackingField) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ____targetsForSelection_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_DeltaTimeStart) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_FrameOn) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_VelocityPositionsCache) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_VelocityNormalsCache) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_VelocityPositionsSum) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_VelocityNormalsSum) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_OnHoverEntered) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_OnHoverExited) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_OnSelectEntered) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ___m_OnSelectExited) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor, ____hoverTargets_k__BackingField) == 0x188, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*, "UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractor");
