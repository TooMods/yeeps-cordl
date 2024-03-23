#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableSelectMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRBaseInteractable)
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
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
template <typename T> class Predicate_1;
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
class IXRInteractionStrengthFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRSelectFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class ExposedRegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct DistanceInfo;
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
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
template <typename T> class IXRFilterList_1;
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
class IXRInteractionStrengthInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXROverridesGazeAutoSelect;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractableSelectMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionLayerMask;
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
class XRBaseControllerInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractableEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRBaseInteractable__DistanceCalculationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRBaseInteractable__MovementType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRBaseInteractable____c;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
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
struct __XRBaseInteractable__DistanceCalculationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRBaseInteractable__MovementType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRBaseInteractable____c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c);
// Type: ::MovementType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRBaseInteractable::MovementType
struct CORDL_TYPE __XRBaseInteractable__MovementType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRBaseInteractable__MovementType_Unwrapped
  enum struct ____XRBaseInteractable__MovementType_Unwrapped : int32_t {
    __E_VelocityTracking = static_cast<int32_t>(0x0),
    __E_Kinematic = static_cast<int32_t>(0x1),
    __E_Instantaneous = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRBaseInteractable__MovementType_Unwrapped() const noexcept {
    return static_cast<____XRBaseInteractable__MovementType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRBaseInteractable__MovementType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRBaseInteractable__MovementType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Instantaneous value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType const Instantaneous;

  /// @brief Field Kinematic value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType const Kinematic;

  /// @brief Field VelocityTracking value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType const VelocityTracking;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::DistanceCalculationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRBaseInteractable::DistanceCalculationMode
struct CORDL_TYPE __XRBaseInteractable__DistanceCalculationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRBaseInteractable__DistanceCalculationMode_Unwrapped
  enum struct ____XRBaseInteractable__DistanceCalculationMode_Unwrapped : int32_t {
    __E_TransformPosition = static_cast<int32_t>(0x0),
    __E_ColliderPosition = static_cast<int32_t>(0x1),
    __E_ColliderVolume = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRBaseInteractable__DistanceCalculationMode_Unwrapped() const noexcept {
    return static_cast<____XRBaseInteractable__DistanceCalculationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRBaseInteractable__DistanceCalculationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRBaseInteractable__DistanceCalculationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ColliderPosition value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode const ColliderPosition;

  /// @brief Field ColliderVolume value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode const ColliderVolume;

  /// @brief Field TransformPosition value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode const TransformPosition;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::XRBaseInteractable::<>c*
class CORDL_TYPE __XRBaseInteractable____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c* __9;

  /// @brief Field <>9__153_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__153_0, put = setStaticF___9__153_0))::System::Predicate_1<::UnityW<::UnityEngine::Collider>>* __9__153_0;

  static inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c* New_ctor();

  /// @brief Method <Awake>b__153_0, addr 0x25a05c4, size 0x18, virtual false, abstract: false, final false
  inline bool _Awake_b__153_0(::UnityEngine::Collider* col);

  /// @brief Method .ctor, addr 0x25a05bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityW<::UnityEngine::Collider>>* getStaticF___9__153_0();

  static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c* value);

  static inline void setStaticF___9__153_0(::System::Predicate_1<::UnityW<::UnityEngine::Collider>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRBaseInteractable____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRBaseInteractable____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRBaseInteractable____c(__XRBaseInteractable____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRBaseInteractable____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRBaseInteractable____c(__XRBaseInteractable____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRBaseInteractable
// SizeInfo { instance_size: 408, native_size: -1, calculated_instance_size: 408, calculated_native_size: 408, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRBaseInteractable*
class CORDL_TYPE XRBaseInteractable : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using DistanceCalculationMode = ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode;

  using MovementType = ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType;

  using __c = ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c;

  /// @brief Field <firstInteractorSelecting>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__firstInteractorSelecting_k__BackingField,
                      put = __cordl_internal_set__firstInteractorSelecting_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* _firstInteractorSelecting_k__BackingField;

  /// @brief Field <getDistanceOverride>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__getDistanceOverride_k__BackingField,
                      put = __cordl_internal_set__getDistanceOverride_k__BackingField))::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3,
                                                                                                        ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>* _getDistanceOverride_k__BackingField;

  /// @brief Field <hoveringInteractors>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__hoveringInteractors_k__BackingField, put = __cordl_internal_set__hoveringInteractors_k__BackingField))::System::Collections::Generic::List_1<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>* _hoveringInteractors_k__BackingField;

  __declspec(property(get = get_activated, put = set_activated))::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* activated;

  __declspec(property(get = get_allowGazeAssistance, put = set_allowGazeAssistance)) bool allowGazeAssistance;

  __declspec(property(get = get_allowGazeInteraction, put = set_allowGazeInteraction)) bool allowGazeInteraction;

  __declspec(property(get = get_allowGazeSelect, put = set_allowGazeSelect)) bool allowGazeSelect;

  __declspec(property(get = get_colliders))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* colliders;

  __declspec(property(get = get_customReticle, put = set_customReticle))::UnityW<::UnityEngine::GameObject> customReticle;

  __declspec(property(get = get_deactivated, put = set_deactivated))::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* deactivated;

  __declspec(property(get = get_distanceCalculationMode,
                      put = set_distanceCalculationMode))::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode distanceCalculationMode;

  __declspec(property(get = get_firstHoverEntered, put = set_firstHoverEntered))::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* firstHoverEntered;

  __declspec(property(get = get_firstInteractorSelecting, put = set_firstInteractorSelecting))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* firstInteractorSelecting;

  __declspec(property(get = get_firstSelectEntered, put = set_firstSelectEntered))::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* firstSelectEntered;

  __declspec(property(get = get_gazeTimeToSelect, put = set_gazeTimeToSelect)) float_t gazeTimeToSelect;

  __declspec(property(get = get_getDistanceOverride, put = set_getDistanceOverride))::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3,
                                                                                                     ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>* getDistanceOverride;

  __declspec(property(get = get_hoverEntered, put = set_hoverEntered))::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* hoverEntered;

  __declspec(property(get = get_hoverExited, put = set_hoverExited))::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* hoverExited;

  __declspec(property(get = get_hoverFilters))::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* hoverFilters;

  __declspec(property(get = get_hoveringInteractors))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>* hoveringInteractors;

  __declspec(property(get = get_interactionLayerMask, put = set_interactionLayerMask))::UnityEngine::LayerMask interactionLayerMask;

  __declspec(property(get = get_interactionLayers, put = set_interactionLayers))::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask interactionLayers;

  __declspec(property(get = get_interactionManager, put = set_interactionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> interactionManager;

  __declspec(property(get = get_interactionStrengthFilters))::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<
      ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* interactionStrengthFilters;

  __declspec(property(get = get_interactorsHovering))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* interactorsHovering;

  __declspec(property(get = get_interactorsSelecting))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* interactorsSelecting;

  __declspec(property(get = get_isHovered)) bool isHovered;

  __declspec(property(get = get_isSelected)) bool isSelected;

  __declspec(property(get = get_largestInteractionStrength))::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* largestInteractionStrength;

  __declspec(property(get = get_lastHoverExited, put = set_lastHoverExited))::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* lastHoverExited;

  __declspec(property(get = get_lastSelectExited, put = set_lastSelectExited))::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* lastSelectExited;

  /// @brief Field m_Activated, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Activated, put = __cordl_internal_set_m_Activated))::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* m_Activated;

  /// @brief Field m_AllowGazeAssistance, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowGazeAssistance, put = __cordl_internal_set_m_AllowGazeAssistance)) bool m_AllowGazeAssistance;

  /// @brief Field m_AllowGazeInteraction, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowGazeInteraction, put = __cordl_internal_set_m_AllowGazeInteraction)) bool m_AllowGazeInteraction;

  /// @brief Field m_AllowGazeSelect, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowGazeSelect, put = __cordl_internal_set_m_AllowGazeSelect)) bool m_AllowGazeSelect;

  /// @brief Field m_AttachPoseOnSelect, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttachPoseOnSelect,
                      put = __cordl_internal_set_m_AttachPoseOnSelect))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*,
                                                                                                                    ::UnityEngine::Pose>* m_AttachPoseOnSelect;

  /// @brief Field m_Colliders, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Colliders, put = __cordl_internal_set_m_Colliders))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* m_Colliders;

  /// @brief Field m_CustomReticle, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CustomReticle, put = __cordl_internal_set_m_CustomReticle))::UnityW<::UnityEngine::GameObject> m_CustomReticle;

  /// @brief Field m_Deactivated, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Deactivated, put = __cordl_internal_set_m_Deactivated))::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* m_Deactivated;

  /// @brief Field m_DistanceCalculationMode, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DistanceCalculationMode,
                      put = __cordl_internal_set_m_DistanceCalculationMode))::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode m_DistanceCalculationMode;

  /// @brief Field m_FirstHoverEntered, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstHoverEntered, put = __cordl_internal_set_m_FirstHoverEntered))::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* m_FirstHoverEntered;

  /// @brief Field m_FirstSelectEntered, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstSelectEntered, put = __cordl_internal_set_m_FirstSelectEntered))::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* m_FirstSelectEntered;

  /// @brief Field m_GazeTimeToSelect, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GazeTimeToSelect, put = __cordl_internal_set_m_GazeTimeToSelect)) float_t m_GazeTimeToSelect;

  /// @brief Field m_HoverEntered, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverEntered, put = __cordl_internal_set_m_HoverEntered))::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* m_HoverEntered;

  /// @brief Field m_HoverExited, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverExited, put = __cordl_internal_set_m_HoverExited))::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* m_HoverExited;

  /// @brief Field m_HoverFilters, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverFilters, put = __cordl_internal_set_m_HoverFilters))::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<
      ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* m_HoverFilters;

  /// @brief Field m_InteractionLayerMask, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InteractionLayerMask, put = __cordl_internal_set_m_InteractionLayerMask))::UnityEngine::LayerMask m_InteractionLayerMask;

  /// @brief Field m_InteractionLayers, offset 0x44, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionLayers, put = __cordl_internal_set_m_InteractionLayers))::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask m_InteractionLayers;

  /// @brief Field m_InteractionManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionManager,
                      put = __cordl_internal_set_m_InteractionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> m_InteractionManager;

  /// @brief Field m_InteractionStrengthFilters, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionStrengthFilters, put = __cordl_internal_set_m_InteractionStrengthFilters))::UnityEngine::XR::Interaction::Toolkit::Utilities::
      ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* m_InteractionStrengthFilters;

  /// @brief Field m_InteractionStrengths, offset 0x138, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_InteractionStrengths,
      put = __cordl_internal_set_m_InteractionStrengths))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, float_t>* m_InteractionStrengths;

  /// @brief Field m_InteractorsHovering, offset 0xc8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_InteractorsHovering,
      put = __cordl_internal_set_m_InteractorsHovering))::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* m_InteractorsHovering;

  /// @brief Field m_InteractorsSelecting, offset 0xd0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_InteractorsSelecting,
      put = __cordl_internal_set_m_InteractorsSelecting))::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* m_InteractorsSelecting;

  /// @brief Field m_LargestInteractionStrength, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LargestInteractionStrength,
                      put = __cordl_internal_set_m_LargestInteractionStrength))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* m_LargestInteractionStrength;

  /// @brief Field m_LastHoverExited, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastHoverExited, put = __cordl_internal_set_m_LastHoverExited))::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* m_LastHoverExited;

  /// @brief Field m_LastSelectExited, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastSelectExited, put = __cordl_internal_set_m_LastSelectExited))::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* m_LastSelectExited;

  /// @brief Field m_LocalAttachPoseOnSelect, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocalAttachPoseOnSelect,
                      put = __cordl_internal_set_m_LocalAttachPoseOnSelect))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*,
                                                                                                                         ::UnityEngine::Pose>* m_LocalAttachPoseOnSelect;

  /// @brief Field m_OnActivate, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnActivate, put = __cordl_internal_set_m_OnActivate))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* m_OnActivate;

  /// @brief Field m_OnDeactivate, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnDeactivate, put = __cordl_internal_set_m_OnDeactivate))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* m_OnDeactivate;

  /// @brief Field m_OnFirstHoverEntered, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnFirstHoverEntered,
                      put = __cordl_internal_set_m_OnFirstHoverEntered))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* m_OnFirstHoverEntered;

  /// @brief Field m_OnHoverEntered, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnHoverEntered, put = __cordl_internal_set_m_OnHoverEntered))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* m_OnHoverEntered;

  /// @brief Field m_OnHoverExited, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnHoverExited, put = __cordl_internal_set_m_OnHoverExited))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* m_OnHoverExited;

  /// @brief Field m_OnLastHoverExited, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnLastHoverExited, put = __cordl_internal_set_m_OnLastHoverExited))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* m_OnLastHoverExited;

  /// @brief Field m_OnSelectCanceled, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnSelectCanceled, put = __cordl_internal_set_m_OnSelectCanceled))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* m_OnSelectCanceled;

  /// @brief Field m_OnSelectEntered, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnSelectEntered, put = __cordl_internal_set_m_OnSelectEntered))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* m_OnSelectEntered;

  /// @brief Field m_OnSelectExited, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnSelectExited, put = __cordl_internal_set_m_OnSelectExited))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* m_OnSelectExited;

  /// @brief Field m_OverrideGazeTimeToSelect, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OverrideGazeTimeToSelect, put = __cordl_internal_set_m_OverrideGazeTimeToSelect)) bool m_OverrideGazeTimeToSelect;

  /// @brief Field m_OverrideTimeToAutoDeselectGaze, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OverrideTimeToAutoDeselectGaze, put = __cordl_internal_set_m_OverrideTimeToAutoDeselectGaze)) bool m_OverrideTimeToAutoDeselectGaze;

  /// @brief Field m_RegisteredInteractionManager, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegisteredInteractionManager,
                      put = __cordl_internal_set_m_RegisteredInteractionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> m_RegisteredInteractionManager;

  /// @brief Field m_ReticleCache, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReticleCache,
                      put = __cordl_internal_set_m_ReticleCache))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*,
                                                                                                              ::UnityW<::UnityEngine::GameObject>>* m_ReticleCache;

  /// @brief Field m_SelectEntered, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectEntered, put = __cordl_internal_set_m_SelectEntered))::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* m_SelectEntered;

  /// @brief Field m_SelectExited, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectExited, put = __cordl_internal_set_m_SelectExited))::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* m_SelectExited;

  /// @brief Field m_SelectFilters, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectFilters, put = __cordl_internal_set_m_SelectFilters))::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<
      ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* m_SelectFilters;

  /// @brief Field m_SelectMode, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectMode, put = __cordl_internal_set_m_SelectMode))::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode m_SelectMode;

  /// @brief Field m_StartingHoverFilters, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingHoverFilters,
                      put = __cordl_internal_set_m_StartingHoverFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* m_StartingHoverFilters;

  /// @brief Field m_StartingInteractionStrengthFilters, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingInteractionStrengthFilters,
                      put = __cordl_internal_set_m_StartingInteractionStrengthFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* m_StartingInteractionStrengthFilters;

  /// @brief Field m_StartingSelectFilters, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingSelectFilters,
                      put = __cordl_internal_set_m_StartingSelectFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* m_StartingSelectFilters;

  /// @brief Field m_TimeToAutoDeselectGaze, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimeToAutoDeselectGaze, put = __cordl_internal_set_m_TimeToAutoDeselectGaze)) float_t m_TimeToAutoDeselectGaze;

  /// @brief Field m_VariableSelectInteractors, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VariableSelectInteractors, put = __cordl_internal_set_m_VariableSelectInteractors))::Unity::XR::CoreUtils::Collections::HashSetList_1<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor>>* m_VariableSelectInteractors;

  __declspec(property(get = get_onActivate, put = set_onActivate))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onActivate;

  __declspec(property(get = get_onDeactivate, put = set_onDeactivate))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onDeactivate;

  __declspec(property(get = get_onFirstHoverEnter))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onFirstHoverEnter;

  __declspec(property(get = get_onFirstHoverEntered, put = set_onFirstHoverEntered))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onFirstHoverEntered;

  __declspec(property(get = get_onHoverEnter))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onHoverEnter;

  __declspec(property(get = get_onHoverEntered, put = set_onHoverEntered))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onHoverEntered;

  __declspec(property(get = get_onHoverExit))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onHoverExit;

  __declspec(property(get = get_onHoverExited, put = set_onHoverExited))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onHoverExited;

  __declspec(property(get = get_onLastHoverExit))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onLastHoverExit;

  __declspec(property(get = get_onLastHoverExited, put = set_onLastHoverExited))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onLastHoverExited;

  __declspec(property(get = get_onSelectCancel))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onSelectCancel;

  __declspec(property(get = get_onSelectCanceled, put = set_onSelectCanceled))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onSelectCanceled;

  __declspec(property(get = get_onSelectEnter))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onSelectEnter;

  __declspec(property(get = get_onSelectEntered, put = set_onSelectEntered))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onSelectEntered;

  __declspec(property(get = get_onSelectExit))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onSelectExit;

  __declspec(property(get = get_onSelectExited, put = set_onSelectExited))::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* onSelectExited;

  __declspec(property(get = get_overrideGazeTimeToSelect, put = set_overrideGazeTimeToSelect)) bool overrideGazeTimeToSelect;

  __declspec(property(get = get_overrideTimeToAutoDeselectGaze, put = set_overrideTimeToAutoDeselectGaze)) bool overrideTimeToAutoDeselectGaze;

  /// @brief Field registered, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_registered,
                      put = __cordl_internal_set_registered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* registered;

  /// @brief Field s_InteractionManagerCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InteractionManagerCache,
                             put = setStaticF_s_InteractionManagerCache))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> s_InteractionManagerCache;

  /// @brief Field s_ProcessInteractionStrengthMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProcessInteractionStrengthMarker,
                             put = setStaticF_s_ProcessInteractionStrengthMarker))::Unity::Profiling::ProfilerMarker s_ProcessInteractionStrengthMarker;

  __declspec(property(get = get_selectEntered, put = set_selectEntered))::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* selectEntered;

  __declspec(property(get = get_selectExited, put = set_selectExited))::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* selectExited;

  __declspec(property(get = get_selectFilters))::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* selectFilters;

  __declspec(property(get = get_selectMode, put = set_selectMode))::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode selectMode;

  __declspec(property(get = get_selectingInteractor, put = set_selectingInteractor))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> selectingInteractor;

  __declspec(property(get = get_startingHoverFilters, put = set_startingHoverFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* startingHoverFilters;

  __declspec(property(get = get_startingInteractionStrengthFilters,
                      put = set_startingInteractionStrengthFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* startingInteractionStrengthFilters;

  __declspec(property(get = get_startingSelectFilters, put = set_startingSelectFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* startingSelectFilters;

  __declspec(property(get = get_timeToAutoDeselectGaze, put = set_timeToAutoDeselectGaze)) float_t timeToAutoDeselectGaze;

  /// @brief Field unregistered, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_unregistered,
                      put = __cordl_internal_set_unregistered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* unregistered;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*() noexcept;

  /// @brief Method AttachCustomReticle, addr 0x259d9f0, size 0x2a4, virtual true, abstract: false, final false
  inline void AttachCustomReticle(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method AttachCustomReticle, addr 0x259fb90, size 0x10, virtual true, abstract: false, final false
  inline void AttachCustomReticle(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method Awake, addr 0x259cbf4, size 0x2f8, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CaptureAttachPose, addr 0x259dea0, size 0x240, virtual false, abstract: false, final false
  inline void CaptureAttachPose(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method FindCreateInteractionManager, addr 0x259ceec, size 0x2b8, virtual false, abstract: false, final false
  inline void FindCreateInteractionManager();

  /// @brief Method GetAttachPoseOnSelect, addr 0x259d258, size 0xd0, virtual true, abstract: false, final true
  inline ::UnityEngine::Pose GetAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method GetAttachTransform, addr 0x259d250, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method GetCustomReticle, addr 0x259d978, size 0x78, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetCustomReticle(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method GetDistance, addr 0x259d520, size 0x134, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo GetDistance(::UnityEngine::Vector3 position);

  /// @brief Method GetDistanceSqrToInteractor, addr 0x259d3f8, size 0x128, virtual true, abstract: false, final false
  inline float_t GetDistanceSqrToInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method GetDistanceSqrToInteractor, addr 0x259fb80, size 0x10, virtual true, abstract: false, final false
  inline float_t GetDistanceSqrToInteractor(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method GetInteractionStrength, addr 0x259d654, size 0x7c, virtual true, abstract: false, final true
  inline float_t GetInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method GetLocalAttachPoseOnSelect, addr 0x259d328, size 0xd0, virtual true, abstract: false, final true
  inline ::UnityEngine::Pose GetLocalAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method IsHoverableBy, addr 0x259d6d0, size 0x84, virtual true, abstract: false, final false
  inline bool IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor);

  /// @brief Method IsHoverableBy, addr 0x259fd54, size 0x10, virtual true, abstract: false, final false
  inline bool IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method IsHovered, addr 0x259d7e0, size 0x58, virtual false, abstract: false, final false
  inline bool IsHovered(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor);

  /// @brief Method IsHovered, addr 0x259d890, size 0x74, virtual false, abstract: false, final false
  inline bool IsHovered(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method IsSelectableBy, addr 0x259d754, size 0x8c, virtual true, abstract: false, final false
  inline bool IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method IsSelectableBy, addr 0x259fd64, size 0x10, virtual true, abstract: false, final false
  inline bool IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method IsSelected, addr 0x259d904, size 0x74, virtual false, abstract: false, final false
  inline bool IsSelected(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method IsSelected, addr 0x259d838, size 0x58, virtual false, abstract: false, final false
  inline bool IsSelected(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* New_ctor();

  /// @brief Method OnActivate, addr 0x259fac0, size 0x60, virtual true, abstract: false, final false
  inline void OnActivate(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnActivated, addr 0x259f09c, size 0x80, virtual true, abstract: false, final false
  inline void OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* args);

  /// @brief Method OnDeactivate, addr 0x259fb20, size 0x60, virtual true, abstract: false, final false
  inline void OnDeactivate(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnDeactivated, addr 0x259f11c, size 0x80, virtual true, abstract: false, final false
  inline void OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* args);

  /// @brief Method OnDestroy, addr 0x259d24c, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x259d1bc, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x259d1a4, size 0x18, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnHoverEntered, addr 0x259e820, size 0xc0, virtual true, abstract: false, final false
  inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverEntered, addr 0x259f864, size 0x98, virtual true, abstract: false, final false
  inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnHoverEntering, addr 0x259e5c4, size 0x25c, virtual true, abstract: false, final false
  inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverEntering, addr 0x259f860, size 0x4, virtual true, abstract: false, final false
  inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnHoverExited, addr 0x259eb34, size 0xbc, virtual true, abstract: false, final false
  inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnHoverExited, addr 0x259f900, size 0x94, virtual true, abstract: false, final false
  inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnHoverExiting, addr 0x259e8e0, size 0x254, virtual true, abstract: false, final false
  inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnHoverExiting, addr 0x259f8fc, size 0x4, virtual true, abstract: false, final false
  inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnRegistered, addr 0x259e354, size 0x138, virtual true, abstract: false, final false
  inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* args);

  /// @brief Method OnSelectCanceled, addr 0x259fa60, size 0x60, virtual true, abstract: false, final false
  inline void OnSelectCanceled(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnSelectCanceling, addr 0x259fa5c, size 0x4, virtual true, abstract: false, final false
  inline void OnSelectCanceling(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnSelectEntered, addr 0x259ed4c, size 0xc0, virtual true, abstract: false, final false
  inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectEntered, addr 0x259f998, size 0x60, virtual true, abstract: false, final false
  inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnSelectEntering, addr 0x259ebf0, size 0x15c, virtual true, abstract: false, final false
  inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectEntering, addr 0x259f994, size 0x4, virtual true, abstract: false, final false
  inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnSelectExited, addr 0x259ef68, size 0x134, virtual true, abstract: false, final false
  inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method OnSelectExited, addr 0x259f9fc, size 0x60, virtual true, abstract: false, final false
  inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnSelectExiting, addr 0x259ee0c, size 0x15c, virtual true, abstract: false, final false
  inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method OnSelectExiting, addr 0x259f9f8, size 0x4, virtual true, abstract: false, final false
  inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method OnUnregistered, addr 0x259e48c, size 0x138, virtual true, abstract: false, final false
  inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* args);

  /// @brief Method ProcessHoverFilters, addr 0x259e1f4, size 0x10, virtual false, abstract: false, final false
  inline bool ProcessHoverFilters(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor);

  /// @brief Method ProcessInteractable, addr 0x259e0e0, size 0x4, virtual true, abstract: false, final false
  inline void ProcessInteractable(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessInteractionStrength, addr 0x259f19c, size 0x5dc, virtual true, abstract: false, final false
  inline void ProcessInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessInteractionStrengthFilters, addr 0x259f778, size 0x10, virtual false, abstract: false, final false
  inline float_t ProcessInteractionStrengthFilters(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, float_t interactionStrength);

  /// @brief Method ProcessSelectFilters, addr 0x259e304, size 0x10, virtual false, abstract: false, final false
  inline bool ProcessSelectFilters(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method RegisterWithInteractionManager, addr 0x259c780, size 0xcc, virtual false, abstract: false, final false
  inline void RegisterWithInteractionManager();

  /// @brief Method RemoveCustomReticle, addr 0x259dc94, size 0x20c, virtual true, abstract: false, final false
  inline void RemoveCustomReticle(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method RemoveCustomReticle, addr 0x259fba0, size 0x10, virtual true, abstract: false, final false
  inline void RemoveCustomReticle(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method Reset, addr 0x259cbf0, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable.OnActivated, addr 0x259e114, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractable_OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable.OnDeactivated, addr 0x259e124, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractable_OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.IsHoverableBy, addr 0x259e134, size 0xc0, virtual true, abstract: false, final true
  inline bool UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverEntered, addr 0x259e214, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverEntering, addr 0x259e204, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverExited, addr 0x259e234, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable.OnHoverExiting, addr 0x259e224, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRHoverInteractable_OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractable.OnRegistered, addr 0x259e0f4, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRInteractable_OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractable.OnUnregistered, addr 0x259e104, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRInteractable_OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractable.get_transform, addr 0x25a0550, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_IXRInteractable_get_transform();

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable.ProcessInteractionStrength, addr 0x259e0e4, size 0x10, virtual true, abstract: false, final true
  inline void
  UnityEngine_XR_Interaction_Toolkit_IXRInteractionStrengthInteractable_ProcessInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.IsSelectableBy, addr 0x259e244, size 0xc0, virtual true, abstract: false, final true
  inline bool UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectEntered, addr 0x259e324, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectEntering, addr 0x259e314, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectExited, addr 0x259e344, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectExiting, addr 0x259e334, size 0x10, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method UnregisterWithInteractionManager, addr 0x259d1c0, size 0x8c, virtual false, abstract: false, final false
  inline void UnregisterWithInteractionManager();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*& __cordl_internal_get__firstInteractorSelecting_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*> const& __cordl_internal_get__firstInteractorSelecting_k__BackingField() const;

  constexpr ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>*&
  __cordl_internal_get__getDistanceOverride_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>*> const&
  __cordl_internal_get__getDistanceOverride_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>*& __cordl_internal_get__hoveringInteractors_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>*> const&
  __cordl_internal_get__hoveringInteractors_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*& __cordl_internal_get_m_Activated();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*> const& __cordl_internal_get_m_Activated() const;

  constexpr bool const& __cordl_internal_get_m_AllowGazeAssistance() const;

  constexpr bool& __cordl_internal_get_m_AllowGazeAssistance();

  constexpr bool const& __cordl_internal_get_m_AllowGazeInteraction() const;

  constexpr bool& __cordl_internal_get_m_AllowGazeInteraction();

  constexpr bool const& __cordl_internal_get_m_AllowGazeSelect() const;

  constexpr bool& __cordl_internal_get_m_AllowGazeSelect();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>*& __cordl_internal_get_m_AttachPoseOnSelect();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>*> const&
  __cordl_internal_get_m_AttachPoseOnSelect() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_Colliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get_m_Colliders() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_CustomReticle() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_CustomReticle();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*& __cordl_internal_get_m_Deactivated();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*> const& __cordl_internal_get_m_Deactivated() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode const& __cordl_internal_get_m_DistanceCalculationMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode& __cordl_internal_get_m_DistanceCalculationMode();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*& __cordl_internal_get_m_FirstHoverEntered();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*> const& __cordl_internal_get_m_FirstHoverEntered() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*& __cordl_internal_get_m_FirstSelectEntered();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*> const& __cordl_internal_get_m_FirstSelectEntered() const;

  constexpr float_t const& __cordl_internal_get_m_GazeTimeToSelect() const;

  constexpr float_t& __cordl_internal_get_m_GazeTimeToSelect();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*& __cordl_internal_get_m_HoverEntered();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*> const& __cordl_internal_get_m_HoverEntered() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*& __cordl_internal_get_m_HoverExited();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*> const& __cordl_internal_get_m_HoverExited() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*& __cordl_internal_get_m_HoverFilters();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*> const&
  __cordl_internal_get_m_HoverFilters() const;

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_InteractionLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_InteractionLayerMask();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask const& __cordl_internal_get_m_InteractionLayers() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask& __cordl_internal_get_m_InteractionLayers();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_InteractionManager() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_InteractionManager();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*&
  __cordl_internal_get_m_InteractionStrengthFilters();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*> const&
  __cordl_internal_get_m_InteractionStrengthFilters() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, float_t>*& __cordl_internal_get_m_InteractionStrengths();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, float_t>*> const&
  __cordl_internal_get_m_InteractionStrengths() const;

  constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>*& __cordl_internal_get_m_InteractorsHovering();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>*> const&
  __cordl_internal_get_m_InteractorsHovering() const;

  constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>*& __cordl_internal_get_m_InteractorsSelecting();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>*> const&
  __cordl_internal_get_m_InteractorsSelecting() const;

  constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*& __cordl_internal_get_m_LargestInteractionStrength();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*> const& __cordl_internal_get_m_LargestInteractionStrength() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*& __cordl_internal_get_m_LastHoverExited();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*> const& __cordl_internal_get_m_LastHoverExited() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*& __cordl_internal_get_m_LastSelectExited();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*> const& __cordl_internal_get_m_LastSelectExited() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>*& __cordl_internal_get_m_LocalAttachPoseOnSelect();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>*> const&
  __cordl_internal_get_m_LocalAttachPoseOnSelect() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& __cordl_internal_get_m_OnActivate();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const& __cordl_internal_get_m_OnActivate() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& __cordl_internal_get_m_OnDeactivate();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const& __cordl_internal_get_m_OnDeactivate() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& __cordl_internal_get_m_OnFirstHoverEntered();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const& __cordl_internal_get_m_OnFirstHoverEntered() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& __cordl_internal_get_m_OnHoverEntered();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const& __cordl_internal_get_m_OnHoverEntered() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& __cordl_internal_get_m_OnHoverExited();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const& __cordl_internal_get_m_OnHoverExited() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& __cordl_internal_get_m_OnLastHoverExited();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const& __cordl_internal_get_m_OnLastHoverExited() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& __cordl_internal_get_m_OnSelectCanceled();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const& __cordl_internal_get_m_OnSelectCanceled() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& __cordl_internal_get_m_OnSelectEntered();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const& __cordl_internal_get_m_OnSelectEntered() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*& __cordl_internal_get_m_OnSelectExited();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*> const& __cordl_internal_get_m_OnSelectExited() const;

  constexpr bool const& __cordl_internal_get_m_OverrideGazeTimeToSelect() const;

  constexpr bool& __cordl_internal_get_m_OverrideGazeTimeToSelect();

  constexpr bool const& __cordl_internal_get_m_OverrideTimeToAutoDeselectGaze() const;

  constexpr bool& __cordl_internal_get_m_OverrideTimeToAutoDeselectGaze();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_RegisteredInteractionManager() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_RegisteredInteractionManager();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_ReticleCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityW<::UnityEngine::GameObject>>*> const&
  __cordl_internal_get_m_ReticleCache() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*& __cordl_internal_get_m_SelectEntered();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*> const& __cordl_internal_get_m_SelectEntered() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*& __cordl_internal_get_m_SelectExited();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*> const& __cordl_internal_get_m_SelectExited() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*&
  __cordl_internal_get_m_SelectFilters();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*> const&
  __cordl_internal_get_m_SelectFilters() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode const& __cordl_internal_get_m_SelectMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode& __cordl_internal_get_m_SelectMode();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingHoverFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_m_StartingHoverFilters() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingInteractionStrengthFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_m_StartingInteractionStrengthFilters() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingSelectFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_m_StartingSelectFilters() const;

  constexpr float_t const& __cordl_internal_get_m_TimeToAutoDeselectGaze() const;

  constexpr float_t& __cordl_internal_get_m_TimeToAutoDeselectGaze();

  constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor>>*& __cordl_internal_get_m_VariableSelectInteractors();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor>>*> const&
  __cordl_internal_get_m_VariableSelectInteractors() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*& __cordl_internal_get_registered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*> const& __cordl_internal_get_registered() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*& __cordl_internal_get_unregistered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*> const& __cordl_internal_get_unregistered() const;

  constexpr void __cordl_internal_set__firstInteractorSelecting_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* value);

  constexpr void __cordl_internal_set__getDistanceOverride_k__BackingField(
      ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>* value);

  constexpr void __cordl_internal_set__hoveringInteractors_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>* value);

  constexpr void __cordl_internal_set_m_Activated(::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* value);

  constexpr void __cordl_internal_set_m_AllowGazeAssistance(bool value);

  constexpr void __cordl_internal_set_m_AllowGazeInteraction(bool value);

  constexpr void __cordl_internal_set_m_AllowGazeSelect(bool value);

  constexpr void __cordl_internal_set_m_AttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>* value);

  constexpr void __cordl_internal_set_m_Colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value);

  constexpr void __cordl_internal_set_m_CustomReticle(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_Deactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* value);

  constexpr void __cordl_internal_set_m_DistanceCalculationMode(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode value);

  constexpr void __cordl_internal_set_m_FirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* value);

  constexpr void __cordl_internal_set_m_FirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* value);

  constexpr void __cordl_internal_set_m_GazeTimeToSelect(float_t value);

  constexpr void __cordl_internal_set_m_HoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* value);

  constexpr void __cordl_internal_set_m_HoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* value);

  constexpr void
  __cordl_internal_set_m_HoverFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* value);

  constexpr void __cordl_internal_set_m_InteractionLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_InteractionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask value);

  constexpr void __cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  constexpr void __cordl_internal_set_m_InteractionStrengthFilters(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* value);

  constexpr void __cordl_internal_set_m_InteractionStrengths(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, float_t>* value);

  constexpr void __cordl_internal_set_m_InteractorsHovering(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* value);

  constexpr void __cordl_internal_set_m_InteractorsSelecting(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* value);

  constexpr void __cordl_internal_set_m_LargestInteractionStrength(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* value);

  constexpr void __cordl_internal_set_m_LastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* value);

  constexpr void __cordl_internal_set_m_LastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* value);

  constexpr void
  __cordl_internal_set_m_LocalAttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>* value);

  constexpr void __cordl_internal_set_m_OnActivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  constexpr void __cordl_internal_set_m_OnDeactivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  constexpr void __cordl_internal_set_m_OnFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  constexpr void __cordl_internal_set_m_OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  constexpr void __cordl_internal_set_m_OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  constexpr void __cordl_internal_set_m_OnLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  constexpr void __cordl_internal_set_m_OnSelectCanceled(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  constexpr void __cordl_internal_set_m_OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  constexpr void __cordl_internal_set_m_OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  constexpr void __cordl_internal_set_m_OverrideGazeTimeToSelect(bool value);

  constexpr void __cordl_internal_set_m_OverrideTimeToAutoDeselectGaze(bool value);

  constexpr void __cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  constexpr void __cordl_internal_set_m_ReticleCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_m_SelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* value);

  constexpr void __cordl_internal_set_m_SelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* value);

  constexpr void
  __cordl_internal_set_m_SelectFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* value);

  constexpr void __cordl_internal_set_m_SelectMode(::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode value);

  constexpr void __cordl_internal_set_m_StartingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set_m_StartingInteractionStrengthFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set_m_StartingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set_m_TimeToAutoDeselectGaze(float_t value);

  constexpr void
  __cordl_internal_set_m_VariableSelectInteractors(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor>>* value);

  constexpr void __cordl_internal_set_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);

  /// @brief Method .ctor, addr 0x259fd74, size 0x768, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_registered, addr 0x259c46c, size 0xb0, virtual true, abstract: false, final true
  inline void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);

  /// @brief Method add_unregistered, addr 0x259c5cc, size 0xb0, virtual true, abstract: false, final true
  inline void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);

  static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> getStaticF_s_InteractionManagerCache();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractionStrengthMarker();

  /// @brief Method get_activated, addr 0x259c998, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* get_activated();

  /// @brief Method get_allowGazeAssistance, addr 0x259c904, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowGazeAssistance();

  /// @brief Method get_allowGazeInteraction, addr 0x259c894, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowGazeInteraction();

  /// @brief Method get_allowGazeSelect, addr 0x259c8a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowGazeSelect();

  /// @brief Method get_colliders, addr 0x259c84c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* get_colliders();

  /// @brief Method get_customReticle, addr 0x259c884, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_customReticle();

  /// @brief Method get_deactivated, addr 0x259c9a8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* get_deactivated();

  /// @brief Method get_distanceCalculationMode, addr 0x259c864, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode get_distanceCalculationMode();

  /// @brief Method get_firstHoverEntered, addr 0x259c918, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_firstHoverEntered();

  /// @brief Method get_firstInteractorSelecting, addr 0x259cb34, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* get_firstInteractorSelecting();

  /// @brief Method get_firstSelectEntered, addr 0x259c958, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_firstSelectEntered();

  /// @brief Method get_gazeTimeToSelect, addr 0x259c8d0, size 0x8, virtual true, abstract: false, final true
  inline float_t get_gazeTimeToSelect();

  /// @brief Method get_getDistanceOverride, addr 0x259c72c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>* get_getDistanceOverride();

  /// @brief Method get_hoverEntered, addr 0x259c938, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_hoverEntered();

  /// @brief Method get_hoverExited, addr 0x259c948, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_hoverExited();

  /// @brief Method get_hoverFilters, addr 0x259cbb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* get_hoverFilters();

  /// @brief Method get_hoveringInteractors, addr 0x259fbb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>* get_hoveringInteractors();

  /// @brief Method get_interactionLayerMask, addr 0x259f788, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_interactionLayerMask();

  /// @brief Method get_interactionLayers, addr 0x259c854, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask get_interactionLayers();

  /// @brief Method get_interactionManager, addr 0x259c73c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_interactionManager();

  /// @brief Method get_interactionStrengthFilters, addr 0x259cbe0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* get_interactionStrengthFilters();

  /// @brief Method get_interactorsHovering, addr 0x259c9b8, size 0x90, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* get_interactorsHovering();

  /// @brief Method get_interactorsSelecting, addr 0x259caa4, size 0x90, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* get_interactorsSelecting();

  /// @brief Method get_isHovered, addr 0x259ca48, size 0x5c, virtual true, abstract: false, final true
  inline bool get_isHovered();

  /// @brief Method get_isSelected, addr 0x259cb44, size 0x5c, virtual true, abstract: false, final true
  inline bool get_isSelected();

  /// @brief Method get_largestInteractionStrength, addr 0x259cbe8, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* get_largestInteractionStrength();

  /// @brief Method get_lastHoverExited, addr 0x259c928, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_lastHoverExited();

  /// @brief Method get_lastSelectExited, addr 0x259c968, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_lastSelectExited();

  /// @brief Method get_onActivate, addr 0x259f808, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onActivate();

  /// @brief Method get_onDeactivate, addr 0x259f818, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onDeactivate();

  /// @brief Method get_onFirstHoverEnter, addr 0x259f828, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onFirstHoverEnter();

  /// @brief Method get_onFirstHoverEntered, addr 0x259f798, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onFirstHoverEntered();

  /// @brief Method get_onHoverEnter, addr 0x259f830, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onHoverEnter();

  /// @brief Method get_onHoverEntered, addr 0x259f7b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onHoverEntered();

  /// @brief Method get_onHoverExit, addr 0x259f838, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onHoverExit();

  /// @brief Method get_onHoverExited, addr 0x259f7c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onHoverExited();

  /// @brief Method get_onLastHoverExit, addr 0x259f840, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onLastHoverExit();

  /// @brief Method get_onLastHoverExited, addr 0x259f7a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onLastHoverExited();

  /// @brief Method get_onSelectCancel, addr 0x259f858, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectCancel();

  /// @brief Method get_onSelectCanceled, addr 0x259f7f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectCanceled();

  /// @brief Method get_onSelectEnter, addr 0x259f848, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectEnter();

  /// @brief Method get_onSelectEntered, addr 0x259f7d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectEntered();

  /// @brief Method get_onSelectExit, addr 0x259f850, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectExit();

  /// @brief Method get_onSelectExited, addr 0x259f7e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectExited();

  /// @brief Method get_overrideGazeTimeToSelect, addr 0x259c8bc, size 0x8, virtual true, abstract: false, final true
  inline bool get_overrideGazeTimeToSelect();

  /// @brief Method get_overrideTimeToAutoDeselectGaze, addr 0x259c8e0, size 0x8, virtual true, abstract: false, final true
  inline bool get_overrideTimeToAutoDeselectGaze();

  /// @brief Method get_selectEntered, addr 0x259c978, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_selectEntered();

  /// @brief Method get_selectExited, addr 0x259c988, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_selectExited();

  /// @brief Method get_selectFilters, addr 0x259cbc8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* get_selectFilters();

  /// @brief Method get_selectMode, addr 0x259c874, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode get_selectMode();

  /// @brief Method get_selectingInteractor, addr 0x259fbb8, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> get_selectingInteractor();

  /// @brief Method get_startingHoverFilters, addr 0x259cba0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingHoverFilters();

  /// @brief Method get_startingInteractionStrengthFilters, addr 0x259cbd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingInteractionStrengthFilters();

  /// @brief Method get_startingSelectFilters, addr 0x259cbb8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingSelectFilters();

  /// @brief Method get_timeToAutoDeselectGaze, addr 0x259c8f4, size 0x8, virtual true, abstract: false, final true
  inline float_t get_timeToAutoDeselectGaze();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable* i___UnityEngine__XR__Interaction__Toolkit__IXRActivateInteractable() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* i___UnityEngine__XR__Interaction__Toolkit__IXRHoverInteractable() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractable() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractionStrengthInteractable() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect* i___UnityEngine__XR__Interaction__Toolkit__IXROverridesGazeAutoSelect() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* i___UnityEngine__XR__Interaction__Toolkit__IXRSelectInteractable() noexcept;

  /// @brief Method remove_registered, addr 0x259c51c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);

  /// @brief Method remove_unregistered, addr 0x259c67c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);

  static inline void setStaticF_s_InteractionManagerCache(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  static inline void setStaticF_s_ProcessInteractionStrengthMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_activated, addr 0x259c9a0, size 0x8, virtual false, abstract: false, final false
  inline void set_activated(::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* value);

  /// @brief Method set_allowGazeAssistance, addr 0x259c90c, size 0xc, virtual false, abstract: false, final false
  inline void set_allowGazeAssistance(bool value);

  /// @brief Method set_allowGazeInteraction, addr 0x259c89c, size 0xc, virtual false, abstract: false, final false
  inline void set_allowGazeInteraction(bool value);

  /// @brief Method set_allowGazeSelect, addr 0x259c8b0, size 0xc, virtual false, abstract: false, final false
  inline void set_allowGazeSelect(bool value);

  /// @brief Method set_customReticle, addr 0x259c88c, size 0x8, virtual false, abstract: false, final false
  inline void set_customReticle(::UnityEngine::GameObject* value);

  /// @brief Method set_deactivated, addr 0x259c9b0, size 0x8, virtual false, abstract: false, final false
  inline void set_deactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* value);

  /// @brief Method set_distanceCalculationMode, addr 0x259c86c, size 0x8, virtual false, abstract: false, final false
  inline void set_distanceCalculationMode(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode value);

  /// @brief Method set_firstHoverEntered, addr 0x259c920, size 0x8, virtual false, abstract: false, final false
  inline void set_firstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* value);

  /// @brief Method set_firstInteractorSelecting, addr 0x259cb3c, size 0x8, virtual false, abstract: false, final false
  inline void set_firstInteractorSelecting(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* value);

  /// @brief Method set_firstSelectEntered, addr 0x259c960, size 0x8, virtual false, abstract: false, final false
  inline void set_firstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* value);

  /// @brief Method set_gazeTimeToSelect, addr 0x259c8d8, size 0x8, virtual false, abstract: false, final false
  inline void set_gazeTimeToSelect(float_t value);

  /// @brief Method set_getDistanceOverride, addr 0x259c734, size 0x8, virtual false, abstract: false, final false
  inline void
  set_getDistanceOverride(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>* value);

  /// @brief Method set_hoverEntered, addr 0x259c940, size 0x8, virtual false, abstract: false, final false
  inline void set_hoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* value);

  /// @brief Method set_hoverExited, addr 0x259c950, size 0x8, virtual false, abstract: false, final false
  inline void set_hoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* value);

  /// @brief Method set_interactionLayerMask, addr 0x259f790, size 0x8, virtual false, abstract: false, final false
  inline void set_interactionLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_interactionLayers, addr 0x259c85c, size 0x8, virtual false, abstract: false, final false
  inline void set_interactionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask value);

  /// @brief Method set_interactionManager, addr 0x259c744, size 0x3c, virtual false, abstract: false, final false
  inline void set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* value);

  /// @brief Method set_lastHoverExited, addr 0x259c930, size 0x8, virtual false, abstract: false, final false
  inline void set_lastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* value);

  /// @brief Method set_lastSelectExited, addr 0x259c970, size 0x8, virtual false, abstract: false, final false
  inline void set_lastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* value);

  /// @brief Method set_onActivate, addr 0x259f810, size 0x8, virtual false, abstract: false, final false
  inline void set_onActivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  /// @brief Method set_onDeactivate, addr 0x259f820, size 0x8, virtual false, abstract: false, final false
  inline void set_onDeactivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  /// @brief Method set_onFirstHoverEntered, addr 0x259f7a0, size 0x8, virtual false, abstract: false, final false
  inline void set_onFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  /// @brief Method set_onHoverEntered, addr 0x259f7c0, size 0x8, virtual false, abstract: false, final false
  inline void set_onHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  /// @brief Method set_onHoverExited, addr 0x259f7d0, size 0x8, virtual false, abstract: false, final false
  inline void set_onHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  /// @brief Method set_onLastHoverExited, addr 0x259f7b0, size 0x8, virtual false, abstract: false, final false
  inline void set_onLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  /// @brief Method set_onSelectCanceled, addr 0x259f800, size 0x8, virtual false, abstract: false, final false
  inline void set_onSelectCanceled(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  /// @brief Method set_onSelectEntered, addr 0x259f7e0, size 0x8, virtual false, abstract: false, final false
  inline void set_onSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  /// @brief Method set_onSelectExited, addr 0x259f7f0, size 0x8, virtual false, abstract: false, final false
  inline void set_onSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* value);

  /// @brief Method set_overrideGazeTimeToSelect, addr 0x259c8c4, size 0xc, virtual false, abstract: false, final false
  inline void set_overrideGazeTimeToSelect(bool value);

  /// @brief Method set_overrideTimeToAutoDeselectGaze, addr 0x259c8e8, size 0xc, virtual false, abstract: false, final false
  inline void set_overrideTimeToAutoDeselectGaze(bool value);

  /// @brief Method set_selectEntered, addr 0x259c980, size 0x8, virtual false, abstract: false, final false
  inline void set_selectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* value);

  /// @brief Method set_selectExited, addr 0x259c990, size 0x8, virtual false, abstract: false, final false
  inline void set_selectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* value);

  /// @brief Method set_selectMode, addr 0x259c87c, size 0x8, virtual false, abstract: false, final false
  inline void set_selectMode(::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode value);

  /// @brief Method set_selectingInteractor, addr 0x259fc6c, size 0xe8, virtual false, abstract: false, final false
  inline void set_selectingInteractor(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* value);

  /// @brief Method set_startingHoverFilters, addr 0x259cba8, size 0x8, virtual false, abstract: false, final false
  inline void set_startingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  /// @brief Method set_startingInteractionStrengthFilters, addr 0x259cbd8, size 0x8, virtual false, abstract: false, final false
  inline void set_startingInteractionStrengthFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  /// @brief Method set_startingSelectFilters, addr 0x259cbc0, size 0x8, virtual false, abstract: false, final false
  inline void set_startingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  /// @brief Method set_timeToAutoDeselectGaze, addr 0x259c8fc, size 0x8, virtual false, abstract: false, final false
  inline void set_timeToAutoDeselectGaze(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRBaseInteractable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRBaseInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRBaseInteractable(XRBaseInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRBaseInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRBaseInteractable(XRBaseInteractable const&) = delete;

  /// @brief Field registered, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* ___registered;

  /// @brief Field unregistered, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* ___unregistered;

  /// @brief Field <getDistanceOverride>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::UnityEngine::Vector3, ::UnityEngine::XR::Interaction::Toolkit::DistanceInfo>* ____getDistanceOverride_k__BackingField;

  /// @brief Field m_InteractionManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> ___m_InteractionManager;

  /// @brief Field m_Colliders, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* ___m_Colliders;

  /// @brief Field m_InteractionLayerMask, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_InteractionLayerMask;

  /// @brief Field m_InteractionLayers, offset: 0x44, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask ___m_InteractionLayers;

  /// @brief Field m_DistanceCalculationMode, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode ___m_DistanceCalculationMode;

  /// @brief Field m_SelectMode, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::InteractableSelectMode ___m_SelectMode;

  /// @brief Field m_CustomReticle, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_CustomReticle;

  /// @brief Field m_AllowGazeInteraction, offset: 0x60, size: 0x1, def value: None
  bool ___m_AllowGazeInteraction;

  /// @brief Field m_AllowGazeSelect, offset: 0x61, size: 0x1, def value: None
  bool ___m_AllowGazeSelect;

  /// @brief Field m_OverrideGazeTimeToSelect, offset: 0x62, size: 0x1, def value: None
  bool ___m_OverrideGazeTimeToSelect;

  /// @brief Field m_GazeTimeToSelect, offset: 0x64, size: 0x4, def value: None
  float_t ___m_GazeTimeToSelect;

  /// @brief Field m_OverrideTimeToAutoDeselectGaze, offset: 0x68, size: 0x1, def value: None
  bool ___m_OverrideTimeToAutoDeselectGaze;

  /// @brief Field m_TimeToAutoDeselectGaze, offset: 0x6c, size: 0x4, def value: None
  float_t ___m_TimeToAutoDeselectGaze;

  /// @brief Field m_AllowGazeAssistance, offset: 0x70, size: 0x1, def value: None
  bool ___m_AllowGazeAssistance;

  /// @brief Field m_FirstHoverEntered, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* ___m_FirstHoverEntered;

  /// @brief Field m_LastHoverExited, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* ___m_LastHoverExited;

  /// @brief Field m_HoverEntered, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* ___m_HoverEntered;

  /// @brief Field m_HoverExited, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* ___m_HoverExited;

  /// @brief Field m_FirstSelectEntered, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* ___m_FirstSelectEntered;

  /// @brief Field m_LastSelectExited, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* ___m_LastSelectExited;

  /// @brief Field m_SelectEntered, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* ___m_SelectEntered;

  /// @brief Field m_SelectExited, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* ___m_SelectExited;

  /// @brief Field m_Activated, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* ___m_Activated;

  /// @brief Field m_Deactivated, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* ___m_Deactivated;

  /// @brief Field m_InteractorsHovering, offset: 0xc8, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>* ___m_InteractorsHovering;

  /// @brief Field m_InteractorsSelecting, offset: 0xd0, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>* ___m_InteractorsSelecting;

  /// @brief Field <firstInteractorSelecting>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* ____firstInteractorSelecting_k__BackingField;

  /// @brief Field m_StartingHoverFilters, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* ___m_StartingHoverFilters;

  /// @brief Field m_HoverFilters, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* ___m_HoverFilters;

  /// @brief Field m_StartingSelectFilters, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* ___m_StartingSelectFilters;

  /// @brief Field m_SelectFilters, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* ___m_SelectFilters;

  /// @brief Field m_StartingInteractionStrengthFilters, offset: 0x100, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* ___m_StartingInteractionStrengthFilters;

  /// @brief Field m_InteractionStrengthFilters, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* ___m_InteractionStrengthFilters;

  /// @brief Field m_LargestInteractionStrength, offset: 0x110, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* ___m_LargestInteractionStrength;

  /// @brief Field m_AttachPoseOnSelect, offset: 0x118, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>* ___m_AttachPoseOnSelect;

  /// @brief Field m_LocalAttachPoseOnSelect, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityEngine::Pose>* ___m_LocalAttachPoseOnSelect;

  /// @brief Field m_ReticleCache, offset: 0x128, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityW<::UnityEngine::GameObject>>* ___m_ReticleCache;

  /// @brief Field m_VariableSelectInteractors, offset: 0x130, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor>>* ___m_VariableSelectInteractors;

  /// @brief Field m_InteractionStrengths, offset: 0x138, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, float_t>* ___m_InteractionStrengths;

  /// @brief Field m_RegisteredInteractionManager, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> ___m_RegisteredInteractionManager;

  /// @brief Field m_OnFirstHoverEntered, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* ___m_OnFirstHoverEntered;

  /// @brief Field m_OnLastHoverExited, offset: 0x150, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* ___m_OnLastHoverExited;

  /// @brief Field m_OnHoverEntered, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* ___m_OnHoverEntered;

  /// @brief Field m_OnHoverExited, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* ___m_OnHoverExited;

  /// @brief Field m_OnSelectEntered, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* ___m_OnSelectEntered;

  /// @brief Field m_OnSelectExited, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* ___m_OnSelectExited;

  /// @brief Field m_OnSelectCanceled, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* ___m_OnSelectCanceled;

  /// @brief Field m_OnActivate, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* ___m_OnActivate;

  /// @brief Field m_OnDeactivate, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* ___m_OnDeactivate;

  /// @brief Field <hoveringInteractors>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>* ____hoveringInteractors_k__BackingField;

  /// @brief Field k_InteractionStrengthHover offset 0xffffffff size 0x4
  static constexpr float_t k_InteractionStrengthHover{ 0.0 };

  /// @brief Field k_InteractionStrengthSelect offset 0xffffffff size 0x4
  static constexpr float_t k_InteractionStrengthSelect{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, 0x198>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___registered) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___unregistered) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ____getDistanceOverride_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_InteractionManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_Colliders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_InteractionLayerMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_InteractionLayers) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_DistanceCalculationMode) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_SelectMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_CustomReticle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_AllowGazeInteraction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_AllowGazeSelect) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_OverrideGazeTimeToSelect) == 0x62, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_GazeTimeToSelect) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_OverrideTimeToAutoDeselectGaze) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_TimeToAutoDeselectGaze) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_AllowGazeAssistance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_FirstHoverEntered) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_LastHoverExited) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_HoverEntered) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_HoverExited) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_FirstSelectEntered) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_LastSelectExited) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_SelectEntered) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_SelectExited) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_Activated) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_Deactivated) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_InteractorsHovering) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_InteractorsSelecting) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ____firstInteractorSelecting_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_StartingHoverFilters) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_HoverFilters) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_StartingSelectFilters) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_SelectFilters) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_StartingInteractionStrengthFilters) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_InteractionStrengthFilters) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_LargestInteractionStrength) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_AttachPoseOnSelect) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_LocalAttachPoseOnSelect) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_ReticleCache) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_VariableSelectInteractors) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_InteractionStrengths) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_RegisteredInteractionManager) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_OnFirstHoverEntered) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_OnLastHoverExited) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_OnHoverEntered) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_OnHoverExited) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_OnSelectEntered) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_OnSelectExited) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_OnSelectCanceled) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_OnActivate) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ___m_OnDeactivate) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable, ____hoveringInteractors_k__BackingField) == 0x190, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__DistanceCalculationMode, "UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractable/DistanceCalculationMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType, "UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractable/MovementType");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*, "UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractable");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable____c*, "UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractable/<>c");
