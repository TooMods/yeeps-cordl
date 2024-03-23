#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRGrabInteractable)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class IXRGrabTransformer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRBaseGrabTransformer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class BaseRegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class SmallRegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TeleportationMonitor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRBaseInteractable__MovementType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRGrabInteractable__AttachPointCompatibilityMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRGrabInteractable__AttachPointCompatibilityMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRGrabInteractable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable);
// Type: ::AttachPointCompatibilityMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRGrabInteractable::AttachPointCompatibilityMode
struct CORDL_TYPE __XRGrabInteractable__AttachPointCompatibilityMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRGrabInteractable__AttachPointCompatibilityMode_Unwrapped
  enum struct ____XRGrabInteractable__AttachPointCompatibilityMode_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Legacy = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRGrabInteractable__AttachPointCompatibilityMode_Unwrapped() const noexcept {
    return static_cast<____XRGrabInteractable__AttachPointCompatibilityMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRGrabInteractable__AttachPointCompatibilityMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRGrabInteractable__AttachPointCompatibilityMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode const Default;

  /// @brief Field Legacy value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode const Legacy;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRGrabInteractable
// SizeInfo { instance_size: 760, native_size: -1, calculated_instance_size: 760, calculated_native_size: 760, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRGrabInteractable*
class CORDL_TYPE XRGrabInteractable : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable {
public:
  // Declarations
  using AttachPointCompatibilityMode = ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode;

  __declspec(property(get = get_addDefaultGrabTransformers, put = set_addDefaultGrabTransformers)) bool addDefaultGrabTransformers;

  __declspec(property(get = get_angularVelocityDamping, put = set_angularVelocityDamping)) float_t angularVelocityDamping;

  __declspec(property(get = get_angularVelocityScale, put = set_angularVelocityScale)) float_t angularVelocityScale;

  __declspec(property(get = get_attachEaseInTime, put = set_attachEaseInTime)) float_t attachEaseInTime;

  __declspec(property(get = get_attachPointCompatibilityMode,
                      put = set_attachPointCompatibilityMode))::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode attachPointCompatibilityMode;

  __declspec(property(get = get_attachTransform, put = set_attachTransform))::UnityW<::UnityEngine::Transform> attachTransform;

  __declspec(property(get = get_forceGravityOnDetach, put = set_forceGravityOnDetach)) bool forceGravityOnDetach;

  __declspec(property(get = get_gravityOnDetach, put = set_gravityOnDetach)) bool gravityOnDetach;

  /// @brief Field m_AddDefaultGrabTransformers, offset 0x210, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AddDefaultGrabTransformers, put = __cordl_internal_set_m_AddDefaultGrabTransformers)) bool m_AddDefaultGrabTransformers;

  /// @brief Field m_AngularVelocityDamping, offset 0x1c0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AngularVelocityDamping, put = __cordl_internal_set_m_AngularVelocityDamping)) float_t m_AngularVelocityDamping;

  /// @brief Field m_AngularVelocityScale, offset 0x1c4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AngularVelocityScale, put = __cordl_internal_set_m_AngularVelocityScale)) float_t m_AngularVelocityScale;

  /// @brief Field m_AttachEaseInTime, offset 0x1b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AttachEaseInTime, put = __cordl_internal_set_m_AttachEaseInTime)) float_t m_AttachEaseInTime;

  /// @brief Field m_AttachPointCompatibilityMode, offset 0x1fc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AttachPointCompatibilityMode,
                      put = __cordl_internal_set_m_AttachPointCompatibilityMode))::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode
      m_AttachPointCompatibilityMode;

  /// @brief Field m_AttachTransform, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttachTransform, put = __cordl_internal_set_m_AttachTransform))::UnityW<::UnityEngine::Transform> m_AttachTransform;

  /// @brief Field m_CurrentAttachEaseTime, offset 0x268, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentAttachEaseTime, put = __cordl_internal_set_m_CurrentAttachEaseTime)) float_t m_CurrentAttachEaseTime;

  /// @brief Field m_CurrentMovementType, offset 0x26c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentMovementType,
                      put = __cordl_internal_set_m_CurrentMovementType))::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType m_CurrentMovementType;

  /// @brief Field m_DetachAngularVelocity, offset 0x280, size 0xc
  __declspec(property(get = __cordl_internal_get_m_DetachAngularVelocity, put = __cordl_internal_set_m_DetachAngularVelocity))::UnityEngine::Vector3 m_DetachAngularVelocity;

  /// @brief Field m_DetachInLateUpdate, offset 0x270, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DetachInLateUpdate, put = __cordl_internal_set_m_DetachInLateUpdate)) bool m_DetachInLateUpdate;

  /// @brief Field m_DetachVelocity, offset 0x274, size 0xc
  __declspec(property(get = __cordl_internal_get_m_DetachVelocity, put = __cordl_internal_set_m_DetachVelocity))::UnityEngine::Vector3 m_DetachVelocity;

  /// @brief Field m_DynamicAttachTransforms, offset 0x2f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DynamicAttachTransforms,
                      put = __cordl_internal_set_m_DynamicAttachTransforms))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*,
                                                                                                                         ::UnityW<::UnityEngine::Transform>>* m_DynamicAttachTransforms;

  /// @brief Field m_ForceGravityOnDetach, offset 0x1f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ForceGravityOnDetach, put = __cordl_internal_set_m_ForceGravityOnDetach)) bool m_ForceGravityOnDetach;

  /// @brief Field m_GrabCountBeforeAndAfterChange, offset 0x234, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GrabCountBeforeAndAfterChange,
                      put = __cordl_internal_set_m_GrabCountBeforeAndAfterChange))::System::ValueTuple_2<int32_t, int32_t> m_GrabCountBeforeAndAfterChange;

  /// @brief Field m_GrabCountChanged, offset 0x230, size 0x1
  __declspec(property(get = __cordl_internal_get_m_GrabCountChanged, put = __cordl_internal_set_m_GrabCountChanged)) bool m_GrabCountChanged;

  /// @brief Field m_GrabTransformersAddedWhenGrabbed, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GrabTransformersAddedWhenGrabbed, put = __cordl_internal_set_m_GrabTransformersAddedWhenGrabbed))::System::Collections::Generic::List_1<
      ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* m_GrabTransformersAddedWhenGrabbed;

  /// @brief Field m_IsProcessingGrabTransformers, offset 0x23c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsProcessingGrabTransformers, put = __cordl_internal_set_m_IsProcessingGrabTransformers)) bool m_IsProcessingGrabTransformers;

  /// @brief Field m_LastThrowReferencePose, offset 0x2ac, size 0x1c
  __declspec(property(get = __cordl_internal_get_m_LastThrowReferencePose, put = __cordl_internal_set_m_LastThrowReferencePose))::UnityEngine::Pose m_LastThrowReferencePose;

  /// @brief Field m_MatchAttachPosition, offset 0x1a9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MatchAttachPosition, put = __cordl_internal_set_m_MatchAttachPosition)) bool m_MatchAttachPosition;

  /// @brief Field m_MatchAttachRotation, offset 0x1aa, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MatchAttachRotation, put = __cordl_internal_set_m_MatchAttachRotation)) bool m_MatchAttachRotation;

  /// @brief Field m_MovementType, offset 0x1b4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MovementType, put = __cordl_internal_set_m_MovementType))::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType m_MovementType;

  /// @brief Field m_MultipleGrabTransformers, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MultipleGrabTransformers, put = __cordl_internal_set_m_MultipleGrabTransformers))::UnityEngine::XR::Interaction::Toolkit::Utilities::
      SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* m_MultipleGrabTransformers;

  /// @brief Field m_OldAngularDrag, offset 0x2d8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OldAngularDrag, put = __cordl_internal_set_m_OldAngularDrag)) float_t m_OldAngularDrag;

  /// @brief Field m_OldDrag, offset 0x2d4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OldDrag, put = __cordl_internal_set_m_OldDrag)) float_t m_OldDrag;

  /// @brief Field m_OriginalSceneParent, offset 0x2e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginalSceneParent, put = __cordl_internal_set_m_OriginalSceneParent))::UnityW<::UnityEngine::Transform> m_OriginalSceneParent;

  /// @brief Field m_ReinitializeDynamicAttachEverySingleGrab, offset 0x1ac, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReinitializeDynamicAttachEverySingleGrab,
                      put = __cordl_internal_set_m_ReinitializeDynamicAttachEverySingleGrab)) bool m_ReinitializeDynamicAttachEverySingleGrab;

  /// @brief Field m_RetainTransformParent, offset 0x1f9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RetainTransformParent, put = __cordl_internal_set_m_RetainTransformParent)) bool m_RetainTransformParent;

  /// @brief Field m_Rigidbody, offset 0x2c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rigidbody, put = __cordl_internal_set_m_Rigidbody))::UnityW<::UnityEngine::Rigidbody> m_Rigidbody;

  /// @brief Field m_SecondaryAttachTransform, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SecondaryAttachTransform, put = __cordl_internal_set_m_SecondaryAttachTransform))::UnityW<::UnityEngine::Transform> m_SecondaryAttachTransform;

  /// @brief Field m_SingleGrabTransformers, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SingleGrabTransformers, put = __cordl_internal_set_m_SingleGrabTransformers))::UnityEngine::XR::Interaction::Toolkit::Utilities::
      SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* m_SingleGrabTransformers;

  /// @brief Field m_SmoothPosition, offset 0x1c9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SmoothPosition, put = __cordl_internal_set_m_SmoothPosition)) bool m_SmoothPosition;

  /// @brief Field m_SmoothPositionAmount, offset 0x1cc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SmoothPositionAmount, put = __cordl_internal_set_m_SmoothPositionAmount)) float_t m_SmoothPositionAmount;

  /// @brief Field m_SmoothRotation, offset 0x1d5, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SmoothRotation, put = __cordl_internal_set_m_SmoothRotation)) bool m_SmoothRotation;

  /// @brief Field m_SmoothRotationAmount, offset 0x1d8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SmoothRotationAmount, put = __cordl_internal_set_m_SmoothRotationAmount)) float_t m_SmoothRotationAmount;

  /// @brief Field m_SnapToColliderVolume, offset 0x1ab, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SnapToColliderVolume, put = __cordl_internal_set_m_SnapToColliderVolume)) bool m_SnapToColliderVolume;

  /// @brief Field m_StartingMultipleGrabTransformers, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingMultipleGrabTransformers, put = __cordl_internal_set_m_StartingMultipleGrabTransformers))::System::Collections::Generic::List_1<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* m_StartingMultipleGrabTransformers;

  /// @brief Field m_StartingSingleGrabTransformers, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingSingleGrabTransformers, put = __cordl_internal_set_m_StartingSingleGrabTransformers))::System::Collections::Generic::List_1<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* m_StartingSingleGrabTransformers;

  /// @brief Field m_TargetLocalScale, offset 0x25c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_TargetLocalScale, put = __cordl_internal_set_m_TargetLocalScale))::UnityEngine::Vector3 m_TargetLocalScale;

  /// @brief Field m_TargetPose, offset 0x240, size 0x1c
  __declspec(property(get = __cordl_internal_get_m_TargetPose, put = __cordl_internal_set_m_TargetPose))::UnityEngine::Pose m_TargetPose;

  /// @brief Field m_TeleportationMonitor, offset 0x2e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TeleportationMonitor,
                      put = __cordl_internal_set_m_TeleportationMonitor))::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor* m_TeleportationMonitor;

  /// @brief Field m_ThrowAngularVelocityScale, offset 0x1f4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ThrowAngularVelocityScale, put = __cordl_internal_set_m_ThrowAngularVelocityScale)) float_t m_ThrowAngularVelocityScale;

  /// @brief Field m_ThrowOnDetach, offset 0x1e0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ThrowOnDetach, put = __cordl_internal_set_m_ThrowOnDetach)) bool m_ThrowOnDetach;

  /// @brief Field m_ThrowSmoothingAngularVelocityFrames, offset 0x2a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ThrowSmoothingAngularVelocityFrames,
                      put = __cordl_internal_set_m_ThrowSmoothingAngularVelocityFrames))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_ThrowSmoothingAngularVelocityFrames;

  /// @brief Field m_ThrowSmoothingCurrentFrame, offset 0x28c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ThrowSmoothingCurrentFrame, put = __cordl_internal_set_m_ThrowSmoothingCurrentFrame)) int32_t m_ThrowSmoothingCurrentFrame;

  /// @brief Field m_ThrowSmoothingCurve, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ThrowSmoothingCurve, put = __cordl_internal_set_m_ThrowSmoothingCurve))::UnityEngine::AnimationCurve* m_ThrowSmoothingCurve;

  /// @brief Field m_ThrowSmoothingDuration, offset 0x1e4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ThrowSmoothingDuration, put = __cordl_internal_set_m_ThrowSmoothingDuration)) float_t m_ThrowSmoothingDuration;

  /// @brief Field m_ThrowSmoothingFirstUpdate, offset 0x2a8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ThrowSmoothingFirstUpdate, put = __cordl_internal_set_m_ThrowSmoothingFirstUpdate)) bool m_ThrowSmoothingFirstUpdate;

  /// @brief Field m_ThrowSmoothingFrameTimes, offset 0x290, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ThrowSmoothingFrameTimes, put = __cordl_internal_set_m_ThrowSmoothingFrameTimes))::ArrayW<float_t, ::Array<float_t>*> m_ThrowSmoothingFrameTimes;

  /// @brief Field m_ThrowSmoothingVelocityFrames, offset 0x298, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ThrowSmoothingVelocityFrames,
                      put = __cordl_internal_set_m_ThrowSmoothingVelocityFrames))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_ThrowSmoothingVelocityFrames;

  /// @brief Field m_ThrowVelocityScale, offset 0x1f0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ThrowVelocityScale, put = __cordl_internal_set_m_ThrowVelocityScale)) float_t m_ThrowVelocityScale;

  /// @brief Field m_TightenPosition, offset 0x1d0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TightenPosition, put = __cordl_internal_set_m_TightenPosition)) float_t m_TightenPosition;

  /// @brief Field m_TightenRotation, offset 0x1dc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TightenRotation, put = __cordl_internal_set_m_TightenRotation)) float_t m_TightenRotation;

  /// @brief Field m_TrackPosition, offset 0x1c8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TrackPosition, put = __cordl_internal_set_m_TrackPosition)) bool m_TrackPosition;

  /// @brief Field m_TrackRotation, offset 0x1d4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TrackRotation, put = __cordl_internal_set_m_TrackRotation)) bool m_TrackRotation;

  /// @brief Field m_UseDynamicAttach, offset 0x1a8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseDynamicAttach, put = __cordl_internal_set_m_UseDynamicAttach)) bool m_UseDynamicAttach;

  /// @brief Field m_UsedGravity, offset 0x2d1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UsedGravity, put = __cordl_internal_set_m_UsedGravity)) bool m_UsedGravity;

  /// @brief Field m_VelocityDamping, offset 0x1b8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VelocityDamping, put = __cordl_internal_set_m_VelocityDamping)) float_t m_VelocityDamping;

  /// @brief Field m_VelocityScale, offset 0x1bc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VelocityScale, put = __cordl_internal_set_m_VelocityScale)) float_t m_VelocityScale;

  /// @brief Field m_WasKinematic, offset 0x2d0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WasKinematic, put = __cordl_internal_set_m_WasKinematic)) bool m_WasKinematic;

  __declspec(property(get = get_matchAttachPosition, put = set_matchAttachPosition)) bool matchAttachPosition;

  __declspec(property(get = get_matchAttachRotation, put = set_matchAttachRotation)) bool matchAttachRotation;

  __declspec(property(get = get_movementType, put = set_movementType))::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType movementType;

  __declspec(property(get = get_multipleGrabTransformersCount)) int32_t multipleGrabTransformersCount;

  __declspec(property(get = get_reinitializeDynamicAttachEverySingleGrab, put = set_reinitializeDynamicAttachEverySingleGrab)) bool reinitializeDynamicAttachEverySingleGrab;

  __declspec(property(get = get_retainTransformParent, put = set_retainTransformParent)) bool retainTransformParent;

  /// @brief Field s_DynamicAttachTransformPool, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_DynamicAttachTransformPool,
      put = setStaticF_s_DynamicAttachTransformPool))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>* s_DynamicAttachTransformPool;

  /// @brief Field s_ProcessGrabTransformersMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProcessGrabTransformersMarker, put = setStaticF_s_ProcessGrabTransformersMarker))::Unity::Profiling::ProfilerMarker s_ProcessGrabTransformersMarker;

  __declspec(property(get = get_secondaryAttachTransform, put = set_secondaryAttachTransform))::UnityW<::UnityEngine::Transform> secondaryAttachTransform;

  __declspec(property(get = get_singleGrabTransformersCount)) int32_t singleGrabTransformersCount;

  __declspec(property(get = get_smoothPosition, put = set_smoothPosition)) bool smoothPosition;

  __declspec(property(get = get_smoothPositionAmount, put = set_smoothPositionAmount)) float_t smoothPositionAmount;

  __declspec(property(get = get_smoothRotation, put = set_smoothRotation)) bool smoothRotation;

  __declspec(property(get = get_smoothRotationAmount, put = set_smoothRotationAmount)) float_t smoothRotationAmount;

  __declspec(property(get = get_snapToColliderVolume, put = set_snapToColliderVolume)) bool snapToColliderVolume;

  __declspec(property(get = get_startingMultipleGrabTransformers, put = set_startingMultipleGrabTransformers))::System::Collections::Generic::List_1<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* startingMultipleGrabTransformers;

  __declspec(property(get = get_startingSingleGrabTransformers, put = set_startingSingleGrabTransformers))::System::Collections::Generic::List_1<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* startingSingleGrabTransformers;

  __declspec(property(get = get_throwAngularVelocityScale, put = set_throwAngularVelocityScale)) float_t throwAngularVelocityScale;

  __declspec(property(get = get_throwOnDetach, put = set_throwOnDetach)) bool throwOnDetach;

  __declspec(property(get = get_throwSmoothingCurve, put = set_throwSmoothingCurve))::UnityEngine::AnimationCurve* throwSmoothingCurve;

  __declspec(property(get = get_throwSmoothingDuration, put = set_throwSmoothingDuration)) float_t throwSmoothingDuration;

  __declspec(property(get = get_throwVelocityScale, put = set_throwVelocityScale)) float_t throwVelocityScale;

  __declspec(property(get = get_tightenPosition, put = set_tightenPosition)) float_t tightenPosition;

  __declspec(property(get = get_tightenRotation, put = set_tightenRotation)) float_t tightenRotation;

  __declspec(property(get = get_trackPosition, put = set_trackPosition)) bool trackPosition;

  __declspec(property(get = get_trackRotation, put = set_trackRotation)) bool trackRotation;

  __declspec(property(get = get_useDynamicAttach, put = set_useDynamicAttach)) bool useDynamicAttach;

  __declspec(property(get = get_velocityDamping, put = set_velocityDamping)) float_t velocityDamping;

  __declspec(property(get = get_velocityScale, put = set_velocityScale)) float_t velocityScale;

  /// @brief Method AddDefaultGrabTransformers, addr 0x25a1364, size 0xd4, virtual false, abstract: false, final false
  inline void AddDefaultGrabTransformers();

  /// @brief Method AddDefaultMultipleGrabTransformer, addr 0x25a38a0, size 0x78, virtual true, abstract: false, final false
  inline void AddDefaultMultipleGrabTransformer();

  /// @brief Method AddDefaultSingleGrabTransformer, addr 0x25a37e0, size 0x78, virtual true, abstract: false, final false
  inline void AddDefaultSingleGrabTransformer();

  /// @brief Method AddGrabTransformer, addr 0x25a1d8c, size 0x140, virtual false, abstract: false, final false
  inline void
  AddGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer,
                     ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* grabTransformers);

  /// @brief Method AddMultipleGrabTransformer, addr 0x25a11f4, size 0x8, virtual false, abstract: false, final false
  inline void AddMultipleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer);

  /// @brief Method AddSingleGrabTransformer, addr 0x25a11e4, size 0x8, virtual false, abstract: false, final false
  inline void AddSingleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer);

  /// @brief Method Awake, addr 0x25a0bf0, size 0x5ec, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CanProcessAnySingleGrabTransformer, addr 0x25a35a4, size 0x23c, virtual false, abstract: false, final false
  inline bool CanProcessAnySingleGrabTransformer();

  /// @brief Method ClearGrabTransformers, addr 0x25a1f30, size 0x94, virtual false, abstract: false, final false
  inline void
  ClearGrabTransformers(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* grabTransformers);

  /// @brief Method ClearMultipleGrabTransformers, addr 0x25a125c, size 0x8, virtual false, abstract: false, final false
  inline void ClearMultipleGrabTransformers();

  /// @brief Method ClearSingleGrabTransformers, addr 0x25a1254, size 0x8, virtual false, abstract: false, final false
  inline void ClearSingleGrabTransformers();

  /// @brief Method CreateDynamicAttachTransform, addr 0x25a3f74, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> CreateDynamicAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method Detach, addr 0x25a4c88, size 0xdc, virtual true, abstract: false, final false
  inline void Detach();

  /// @brief Method Drop, addr 0x25a4abc, size 0x14c, virtual true, abstract: false, final false
  inline void Drop();

  /// @brief Method EndThrowSmoothing, addr 0x25a4c08, size 0x80, virtual false, abstract: false, final false
  inline void EndThrowSmoothing();

  /// @brief Method FlushRegistration, addr 0x25a11fc, size 0x38, virtual false, abstract: false, final false
  inline void FlushRegistration();

  /// @brief Method GetAttachTransform, addr 0x25a1b0c, size 0x280, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method GetGrabTransformers, addr 0x25a202c, size 0x6c, virtual false, abstract: false, final false
  static inline void
  GetGrabTransformers(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* grabTransformers,
                      ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* results);

  /// @brief Method GetMultipleGrabTransformerAt, addr 0x25a2120, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* GetMultipleGrabTransformerAt(int32_t index);

  /// @brief Method GetMultipleGrabTransformers, addr 0x25a2098, size 0x68, virtual false, abstract: false, final false
  inline void GetMultipleGrabTransformers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* results);

  /// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetOrAddComponent();

  /// @brief Method GetOrAddDefaultGrabTransformer, addr 0x25a3858, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* GetOrAddDefaultGrabTransformer();

  /// @brief Method GetSingleGrabTransformerAt, addr 0x25a2100, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* GetSingleGrabTransformerAt(int32_t index);

  /// @brief Method GetSingleGrabTransformers, addr 0x25a1fc4, size 0x68, virtual false, abstract: false, final false
  inline void GetSingleGrabTransformers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* results);

  /// @brief Method GetSmoothedVelocityValue, addr 0x25a4ebc, size 0x230, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetSmoothedVelocityValue(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> velocityFrames);

  /// @brief Method Grab, addr 0x25a4994, size 0x128, virtual true, abstract: false, final false
  inline void Grab();

  /// @brief Method InitializeDynamicAttachPose, addr 0x25a4778, size 0x21c, virtual true, abstract: false, final false
  inline void InitializeDynamicAttachPose(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::Transform* dynamicAttachTransform);

  /// @brief Method InitializeDynamicAttachPoseInternal, addr 0x25a3918, size 0x3c, virtual false, abstract: false, final false
  inline void InitializeDynamicAttachPoseInternal(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::Transform* dynamicAttachTransform);

  /// @brief Method InitializeDynamicAttachPoseWithStatic, addr 0x25a4398, size 0x284, virtual false, abstract: false, final false
  inline void InitializeDynamicAttachPoseWithStatic(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::Transform* dynamicAttachTransform);

  /// @brief Method InvokeGrabTransformersOnGrab, addr 0x25a2578, size 0x374, virtual false, abstract: false, final false
  inline void InvokeGrabTransformersOnGrab();

  /// @brief Method InvokeGrabTransformersProcess, addr 0x25a28ec, size 0xcb8, virtual false, abstract: false, final false
  inline void InvokeGrabTransformersProcess(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase, ByRef<::UnityEngine::Pose> targetPose,
                                            ByRef<::UnityEngine::Vector3> localScale);

  /// @brief Method MoveGrabTransformerTo, addr 0x25a2140, size 0x174, virtual false, abstract: false, final false
  inline void
  MoveGrabTransformerTo(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer, int32_t newIndex,
                        ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* grabTransformers);

  /// @brief Method MoveMultipleGrabTransformerTo, addr 0x25a11ec, size 0x8, virtual false, abstract: false, final false
  inline void MoveMultipleGrabTransformerTo(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer, int32_t newIndex);

  /// @brief Method MoveSingleGrabTransformerTo, addr 0x25a11dc, size 0x8, virtual false, abstract: false, final false
  inline void MoveSingleGrabTransformerTo(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer, int32_t newIndex);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* New_ctor();

  /// @brief Method OnAddedGrabTransformer, addr 0x25a22b4, size 0x1e8, virtual false, abstract: false, final false
  inline void OnAddedGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer);

  /// @brief Method OnCreatePooledItem, addr 0x25a5278, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> OnCreatePooledItem();

  /// @brief Method OnDestroy, addr 0x25a1234, size 0x20, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDestroyPooledItem, addr 0x25a54cc, size 0xa4, virtual false, abstract: false, final false
  static inline void OnDestroyPooledItem(::UnityEngine::Transform* item);

  /// @brief Method OnGetPooledItem, addr 0x25a53ac, size 0x90, virtual false, abstract: false, final false
  static inline void OnGetPooledItem(::UnityEngine::Transform* item);

  /// @brief Method OnReleasePooledItem, addr 0x25a543c, size 0x90, virtual false, abstract: false, final false
  static inline void OnReleasePooledItem(::UnityEngine::Transform* item);

  /// @brief Method OnRemovedGrabTransformer, addr 0x25a249c, size 0xdc, virtual false, abstract: false, final false
  inline void OnRemovedGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer);

  /// @brief Method OnSelectEntering, addr 0x25a3e08, size 0x16c, virtual true, abstract: false, final false
  inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectExited, addr 0x25a4208, size 0x3c, virtual true, abstract: false, final false
  inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method OnSelectExiting, addr 0x25a40e8, size 0x104, virtual true, abstract: false, final false
  inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method OnTeleported, addr 0x25a50ec, size 0x18c, virtual false, abstract: false, final false
  inline void OnTeleported(::UnityEngine::Pose offset);

  /// @brief Method PerformInstantaneousUpdate, addr 0x25a1a34, size 0xd8, virtual false, abstract: false, final false
  inline void PerformInstantaneousUpdate(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method PerformKinematicUpdate, addr 0x25a1438, size 0xf0, virtual false, abstract: false, final false
  inline void PerformKinematicUpdate(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method PerformVelocityTrackingUpdate, addr 0x25a1528, size 0x320, virtual false, abstract: false, final false
  inline void PerformVelocityTrackingUpdate(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase, float_t deltaTime);

  /// @brief Method ProcessInteractable, addr 0x25a1264, size 0x100, virtual true, abstract: false, final false
  inline void ProcessInteractable(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ReleaseDynamicAttachTransform, addr 0x25a4244, size 0x154, virtual false, abstract: false, final false
  inline void ReleaseDynamicAttachTransform(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method RemoveGrabTransformer, addr 0x25a1ed4, size 0x54, virtual false, abstract: false, final false
  inline bool
  RemoveGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer,
                        ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* grabTransformers);

  /// @brief Method RemoveMultipleGrabTransformer, addr 0x25a1f28, size 0x8, virtual false, abstract: false, final false
  inline bool RemoveMultipleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer);

  /// @brief Method RemoveSingleGrabTransformer, addr 0x25a1ecc, size 0x8, virtual false, abstract: false, final false
  inline bool RemoveSingleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* transformer);

  /// @brief Method ResetThrowSmoothing, addr 0x25a4064, size 0x68, virtual false, abstract: false, final false
  inline void ResetThrowSmoothing();

  /// @brief Method SetupRigidbodyDrop, addr 0x25a4e18, size 0xa4, virtual true, abstract: false, final false
  inline void SetupRigidbodyDrop(::UnityEngine::Rigidbody* rigidbody);

  /// @brief Method SetupRigidbodyGrab, addr 0x25a4d64, size 0xb4, virtual true, abstract: false, final false
  inline void SetupRigidbodyGrab(::UnityEngine::Rigidbody* rigidbody);

  /// @brief Method ShouldMatchAttachPosition, addr 0x25a461c, size 0xc8, virtual true, abstract: false, final false
  inline bool ShouldMatchAttachPosition(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method ShouldMatchAttachRotation, addr 0x25a46e4, size 0x8c, virtual true, abstract: false, final false
  inline bool ShouldMatchAttachRotation(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method ShouldSnapToColliderVolume, addr 0x25a4770, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldSnapToColliderVolume(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method StepSmoothing, addr 0x25a3c04, size 0x204, virtual false, abstract: false, final false
  inline void StepSmoothing(::UnityEngine::Pose rawTargetPose, float_t deltaTime);

  /// @brief Method StepThrowSmoothing, addr 0x25a3954, size 0x2b0, virtual false, abstract: false, final false
  inline void StepThrowSmoothing(::UnityEngine::Pose targetPose, float_t deltaTime);

  /// @brief Method SubscribeTeleportationProvider, addr 0x25a40cc, size 0x1c, virtual false, abstract: false, final false
  inline void SubscribeTeleportationProvider(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method UnsubscribeTeleportationProvider, addr 0x25a41ec, size 0x1c, virtual false, abstract: false, final false
  inline void UnsubscribeTeleportationProvider(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method UpdateCurrentMovementType, addr 0x25a06d0, size 0x2f0, virtual false, abstract: false, final false
  inline void UpdateCurrentMovementType();

  /// @brief Method UpdateTarget, addr 0x25a1848, size 0x1ec, virtual false, abstract: false, final false
  inline void UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase, float_t deltaTime);

  constexpr bool const& __cordl_internal_get_m_AddDefaultGrabTransformers() const;

  constexpr bool& __cordl_internal_get_m_AddDefaultGrabTransformers();

  constexpr float_t const& __cordl_internal_get_m_AngularVelocityDamping() const;

  constexpr float_t& __cordl_internal_get_m_AngularVelocityDamping();

  constexpr float_t const& __cordl_internal_get_m_AngularVelocityScale() const;

  constexpr float_t& __cordl_internal_get_m_AngularVelocityScale();

  constexpr float_t const& __cordl_internal_get_m_AttachEaseInTime() const;

  constexpr float_t& __cordl_internal_get_m_AttachEaseInTime();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode const& __cordl_internal_get_m_AttachPointCompatibilityMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode& __cordl_internal_get_m_AttachPointCompatibilityMode();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_AttachTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_AttachTransform();

  constexpr float_t const& __cordl_internal_get_m_CurrentAttachEaseTime() const;

  constexpr float_t& __cordl_internal_get_m_CurrentAttachEaseTime();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType const& __cordl_internal_get_m_CurrentMovementType() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType& __cordl_internal_get_m_CurrentMovementType();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_DetachAngularVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_DetachAngularVelocity();

  constexpr bool const& __cordl_internal_get_m_DetachInLateUpdate() const;

  constexpr bool& __cordl_internal_get_m_DetachInLateUpdate();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_DetachVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_DetachVelocity();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityW<::UnityEngine::Transform>>*&
  __cordl_internal_get_m_DynamicAttachTransforms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityW<::UnityEngine::Transform>>*> const&
  __cordl_internal_get_m_DynamicAttachTransforms() const;

  constexpr bool const& __cordl_internal_get_m_ForceGravityOnDetach() const;

  constexpr bool& __cordl_internal_get_m_ForceGravityOnDetach();

  constexpr ::System::ValueTuple_2<int32_t, int32_t> const& __cordl_internal_get_m_GrabCountBeforeAndAfterChange() const;

  constexpr ::System::ValueTuple_2<int32_t, int32_t>& __cordl_internal_get_m_GrabCountBeforeAndAfterChange();

  constexpr bool const& __cordl_internal_get_m_GrabCountChanged() const;

  constexpr bool& __cordl_internal_get_m_GrabCountChanged();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*& __cordl_internal_get_m_GrabTransformersAddedWhenGrabbed();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*> const&
  __cordl_internal_get_m_GrabTransformersAddedWhenGrabbed() const;

  constexpr bool const& __cordl_internal_get_m_IsProcessingGrabTransformers() const;

  constexpr bool& __cordl_internal_get_m_IsProcessingGrabTransformers();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_LastThrowReferencePose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get_m_LastThrowReferencePose();

  constexpr bool const& __cordl_internal_get_m_MatchAttachPosition() const;

  constexpr bool& __cordl_internal_get_m_MatchAttachPosition();

  constexpr bool const& __cordl_internal_get_m_MatchAttachRotation() const;

  constexpr bool& __cordl_internal_get_m_MatchAttachRotation();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType const& __cordl_internal_get_m_MovementType() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType& __cordl_internal_get_m_MovementType();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*&
  __cordl_internal_get_m_MultipleGrabTransformers();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*> const&
  __cordl_internal_get_m_MultipleGrabTransformers() const;

  constexpr float_t const& __cordl_internal_get_m_OldAngularDrag() const;

  constexpr float_t& __cordl_internal_get_m_OldAngularDrag();

  constexpr float_t const& __cordl_internal_get_m_OldDrag() const;

  constexpr float_t& __cordl_internal_get_m_OldDrag();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_OriginalSceneParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_OriginalSceneParent();

  constexpr bool const& __cordl_internal_get_m_ReinitializeDynamicAttachEverySingleGrab() const;

  constexpr bool& __cordl_internal_get_m_ReinitializeDynamicAttachEverySingleGrab();

  constexpr bool const& __cordl_internal_get_m_RetainTransformParent() const;

  constexpr bool& __cordl_internal_get_m_RetainTransformParent();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_Rigidbody() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_Rigidbody();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_SecondaryAttachTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_SecondaryAttachTransform();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*&
  __cordl_internal_get_m_SingleGrabTransformers();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*> const&
  __cordl_internal_get_m_SingleGrabTransformers() const;

  constexpr bool const& __cordl_internal_get_m_SmoothPosition() const;

  constexpr bool& __cordl_internal_get_m_SmoothPosition();

  constexpr float_t const& __cordl_internal_get_m_SmoothPositionAmount() const;

  constexpr float_t& __cordl_internal_get_m_SmoothPositionAmount();

  constexpr bool const& __cordl_internal_get_m_SmoothRotation() const;

  constexpr bool& __cordl_internal_get_m_SmoothRotation();

  constexpr float_t const& __cordl_internal_get_m_SmoothRotationAmount() const;

  constexpr float_t& __cordl_internal_get_m_SmoothRotationAmount();

  constexpr bool const& __cordl_internal_get_m_SnapToColliderVolume() const;

  constexpr bool& __cordl_internal_get_m_SnapToColliderVolume();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*& __cordl_internal_get_m_StartingMultipleGrabTransformers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*> const&
  __cordl_internal_get_m_StartingMultipleGrabTransformers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*& __cordl_internal_get_m_StartingSingleGrabTransformers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*> const&
  __cordl_internal_get_m_StartingSingleGrabTransformers() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TargetLocalScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TargetLocalScale();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_TargetPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get_m_TargetPose();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*& __cordl_internal_get_m_TeleportationMonitor();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*> const& __cordl_internal_get_m_TeleportationMonitor() const;

  constexpr float_t const& __cordl_internal_get_m_ThrowAngularVelocityScale() const;

  constexpr float_t& __cordl_internal_get_m_ThrowAngularVelocityScale();

  constexpr bool const& __cordl_internal_get_m_ThrowOnDetach() const;

  constexpr bool& __cordl_internal_get_m_ThrowOnDetach();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_ThrowSmoothingAngularVelocityFrames() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_ThrowSmoothingAngularVelocityFrames();

  constexpr int32_t const& __cordl_internal_get_m_ThrowSmoothingCurrentFrame() const;

  constexpr int32_t& __cordl_internal_get_m_ThrowSmoothingCurrentFrame();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_ThrowSmoothingCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_m_ThrowSmoothingCurve() const;

  constexpr float_t const& __cordl_internal_get_m_ThrowSmoothingDuration() const;

  constexpr float_t& __cordl_internal_get_m_ThrowSmoothingDuration();

  constexpr bool const& __cordl_internal_get_m_ThrowSmoothingFirstUpdate() const;

  constexpr bool& __cordl_internal_get_m_ThrowSmoothingFirstUpdate();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_ThrowSmoothingFrameTimes() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_ThrowSmoothingFrameTimes();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_ThrowSmoothingVelocityFrames() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_ThrowSmoothingVelocityFrames();

  constexpr float_t const& __cordl_internal_get_m_ThrowVelocityScale() const;

  constexpr float_t& __cordl_internal_get_m_ThrowVelocityScale();

  constexpr float_t const& __cordl_internal_get_m_TightenPosition() const;

  constexpr float_t& __cordl_internal_get_m_TightenPosition();

  constexpr float_t const& __cordl_internal_get_m_TightenRotation() const;

  constexpr float_t& __cordl_internal_get_m_TightenRotation();

  constexpr bool const& __cordl_internal_get_m_TrackPosition() const;

  constexpr bool& __cordl_internal_get_m_TrackPosition();

  constexpr bool const& __cordl_internal_get_m_TrackRotation() const;

  constexpr bool& __cordl_internal_get_m_TrackRotation();

  constexpr bool const& __cordl_internal_get_m_UseDynamicAttach() const;

  constexpr bool& __cordl_internal_get_m_UseDynamicAttach();

  constexpr bool const& __cordl_internal_get_m_UsedGravity() const;

  constexpr bool& __cordl_internal_get_m_UsedGravity();

  constexpr float_t const& __cordl_internal_get_m_VelocityDamping() const;

  constexpr float_t& __cordl_internal_get_m_VelocityDamping();

  constexpr float_t const& __cordl_internal_get_m_VelocityScale() const;

  constexpr float_t& __cordl_internal_get_m_VelocityScale();

  constexpr bool const& __cordl_internal_get_m_WasKinematic() const;

  constexpr bool& __cordl_internal_get_m_WasKinematic();

  constexpr void __cordl_internal_set_m_AddDefaultGrabTransformers(bool value);

  constexpr void __cordl_internal_set_m_AngularVelocityDamping(float_t value);

  constexpr void __cordl_internal_set_m_AngularVelocityScale(float_t value);

  constexpr void __cordl_internal_set_m_AttachEaseInTime(float_t value);

  constexpr void __cordl_internal_set_m_AttachPointCompatibilityMode(::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode value);

  constexpr void __cordl_internal_set_m_AttachTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_CurrentAttachEaseTime(float_t value);

  constexpr void __cordl_internal_set_m_CurrentMovementType(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType value);

  constexpr void __cordl_internal_set_m_DetachAngularVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_DetachInLateUpdate(bool value);

  constexpr void __cordl_internal_set_m_DetachVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_DynamicAttachTransforms(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityW<::UnityEngine::Transform>>* value);

  constexpr void __cordl_internal_set_m_ForceGravityOnDetach(bool value);

  constexpr void __cordl_internal_set_m_GrabCountBeforeAndAfterChange(::System::ValueTuple_2<int32_t, int32_t> value);

  constexpr void __cordl_internal_set_m_GrabCountChanged(bool value);

  constexpr void __cordl_internal_set_m_GrabTransformersAddedWhenGrabbed(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* value);

  constexpr void __cordl_internal_set_m_IsProcessingGrabTransformers(bool value);

  constexpr void __cordl_internal_set_m_LastThrowReferencePose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set_m_MatchAttachPosition(bool value);

  constexpr void __cordl_internal_set_m_MatchAttachRotation(bool value);

  constexpr void __cordl_internal_set_m_MovementType(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType value);

  constexpr void __cordl_internal_set_m_MultipleGrabTransformers(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* value);

  constexpr void __cordl_internal_set_m_OldAngularDrag(float_t value);

  constexpr void __cordl_internal_set_m_OldDrag(float_t value);

  constexpr void __cordl_internal_set_m_OriginalSceneParent(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_ReinitializeDynamicAttachEverySingleGrab(bool value);

  constexpr void __cordl_internal_set_m_RetainTransformParent(bool value);

  constexpr void __cordl_internal_set_m_Rigidbody(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set_m_SecondaryAttachTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_SingleGrabTransformers(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* value);

  constexpr void __cordl_internal_set_m_SmoothPosition(bool value);

  constexpr void __cordl_internal_set_m_SmoothPositionAmount(float_t value);

  constexpr void __cordl_internal_set_m_SmoothRotation(bool value);

  constexpr void __cordl_internal_set_m_SmoothRotationAmount(float_t value);

  constexpr void __cordl_internal_set_m_SnapToColliderVolume(bool value);

  constexpr void
  __cordl_internal_set_m_StartingMultipleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* value);

  constexpr void
  __cordl_internal_set_m_StartingSingleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* value);

  constexpr void __cordl_internal_set_m_TargetLocalScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_TargetPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set_m_TeleportationMonitor(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor* value);

  constexpr void __cordl_internal_set_m_ThrowAngularVelocityScale(float_t value);

  constexpr void __cordl_internal_set_m_ThrowOnDetach(bool value);

  constexpr void __cordl_internal_set_m_ThrowSmoothingAngularVelocityFrames(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_ThrowSmoothingCurrentFrame(int32_t value);

  constexpr void __cordl_internal_set_m_ThrowSmoothingCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_m_ThrowSmoothingDuration(float_t value);

  constexpr void __cordl_internal_set_m_ThrowSmoothingFirstUpdate(bool value);

  constexpr void __cordl_internal_set_m_ThrowSmoothingFrameTimes(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_ThrowSmoothingVelocityFrames(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_ThrowVelocityScale(float_t value);

  constexpr void __cordl_internal_set_m_TightenPosition(float_t value);

  constexpr void __cordl_internal_set_m_TightenRotation(float_t value);

  constexpr void __cordl_internal_set_m_TrackPosition(bool value);

  constexpr void __cordl_internal_set_m_TrackRotation(bool value);

  constexpr void __cordl_internal_set_m_UseDynamicAttach(bool value);

  constexpr void __cordl_internal_set_m_UsedGravity(bool value);

  constexpr void __cordl_internal_set_m_VelocityDamping(float_t value);

  constexpr void __cordl_internal_set_m_VelocityScale(float_t value);

  constexpr void __cordl_internal_set_m_WasKinematic(bool value);

  /// @brief Method .ctor, addr 0x25a5584, size 0x23c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>* getStaticF_s_DynamicAttachTransformPool();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessGrabTransformersMarker();

  /// @brief Method get_addDefaultGrabTransformers, addr 0x25a0b3c, size 0x8, virtual false, abstract: false, final false
  inline bool get_addDefaultGrabTransformers();

  /// @brief Method get_angularVelocityDamping, addr 0x25a09e0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_angularVelocityDamping();

  /// @brief Method get_angularVelocityScale, addr 0x25a09f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_angularVelocityScale();

  /// @brief Method get_attachEaseInTime, addr 0x25a0660, size 0x8, virtual false, abstract: false, final false
  inline float_t get_attachEaseInTime();

  /// @brief Method get_attachPointCompatibilityMode, addr 0x25a0b0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode get_attachPointCompatibilityMode();

  /// @brief Method get_attachTransform, addr 0x25a05dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_attachTransform();

  /// @brief Method get_forceGravityOnDetach, addr 0x25a0ae4, size 0x8, virtual false, abstract: false, final false
  inline bool get_forceGravityOnDetach();

  /// @brief Method get_gravityOnDetach, addr 0x25a5570, size 0x8, virtual false, abstract: false, final false
  inline bool get_gravityOnDetach();

  /// @brief Method get_matchAttachPosition, addr 0x25a0610, size 0x8, virtual false, abstract: false, final false
  inline bool get_matchAttachPosition();

  /// @brief Method get_matchAttachRotation, addr 0x25a0624, size 0x8, virtual false, abstract: false, final false
  inline bool get_matchAttachRotation();

  /// @brief Method get_movementType, addr 0x25a0670, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType get_movementType();

  /// @brief Method get_multipleGrabTransformersCount, addr 0x25a0ba0, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_multipleGrabTransformersCount();

  /// @brief Method get_reinitializeDynamicAttachEverySingleGrab, addr 0x25a064c, size 0x8, virtual false, abstract: false, final false
  inline bool get_reinitializeDynamicAttachEverySingleGrab();

  /// @brief Method get_retainTransformParent, addr 0x25a0af8, size 0x8, virtual false, abstract: false, final false
  inline bool get_retainTransformParent();

  /// @brief Method get_secondaryAttachTransform, addr 0x25a05ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_secondaryAttachTransform();

  /// @brief Method get_singleGrabTransformersCount, addr 0x25a0b50, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_singleGrabTransformersCount();

  /// @brief Method get_smoothPosition, addr 0x25a0a14, size 0x8, virtual false, abstract: false, final false
  inline bool get_smoothPosition();

  /// @brief Method get_smoothPositionAmount, addr 0x25a0a28, size 0x8, virtual false, abstract: false, final false
  inline float_t get_smoothPositionAmount();

  /// @brief Method get_smoothRotation, addr 0x25a0a5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_smoothRotation();

  /// @brief Method get_smoothRotationAmount, addr 0x25a0a70, size 0x8, virtual false, abstract: false, final false
  inline float_t get_smoothRotationAmount();

  /// @brief Method get_snapToColliderVolume, addr 0x25a0638, size 0x8, virtual false, abstract: false, final false
  inline bool get_snapToColliderVolume();

  /// @brief Method get_startingMultipleGrabTransformers, addr 0x25a0b2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* get_startingMultipleGrabTransformers();

  /// @brief Method get_startingSingleGrabTransformers, addr 0x25a0b1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* get_startingSingleGrabTransformers();

  /// @brief Method get_throwAngularVelocityScale, addr 0x25a0ad4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_throwAngularVelocityScale();

  /// @brief Method get_throwOnDetach, addr 0x25a0a90, size 0x8, virtual false, abstract: false, final false
  inline bool get_throwOnDetach();

  /// @brief Method get_throwSmoothingCurve, addr 0x25a0ab4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_throwSmoothingCurve();

  /// @brief Method get_throwSmoothingDuration, addr 0x25a0aa4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_throwSmoothingDuration();

  /// @brief Method get_throwVelocityScale, addr 0x25a0ac4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_throwVelocityScale();

  /// @brief Method get_tightenPosition, addr 0x25a0a38, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tightenPosition();

  /// @brief Method get_tightenRotation, addr 0x25a0a80, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tightenRotation();

  /// @brief Method get_trackPosition, addr 0x25a0a00, size 0x8, virtual false, abstract: false, final false
  inline bool get_trackPosition();

  /// @brief Method get_trackRotation, addr 0x25a0a48, size 0x8, virtual false, abstract: false, final false
  inline bool get_trackRotation();

  /// @brief Method get_useDynamicAttach, addr 0x25a05fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_useDynamicAttach();

  /// @brief Method get_velocityDamping, addr 0x25a09c0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_velocityDamping();

  /// @brief Method get_velocityScale, addr 0x25a09d0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_velocityScale();

  static inline void setStaticF_s_DynamicAttachTransformPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>* value);

  static inline void setStaticF_s_ProcessGrabTransformersMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_addDefaultGrabTransformers, addr 0x25a0b44, size 0xc, virtual false, abstract: false, final false
  inline void set_addDefaultGrabTransformers(bool value);

  /// @brief Method set_angularVelocityDamping, addr 0x25a09e8, size 0x8, virtual false, abstract: false, final false
  inline void set_angularVelocityDamping(float_t value);

  /// @brief Method set_angularVelocityScale, addr 0x25a09f8, size 0x8, virtual false, abstract: false, final false
  inline void set_angularVelocityScale(float_t value);

  /// @brief Method set_attachEaseInTime, addr 0x25a0668, size 0x8, virtual false, abstract: false, final false
  inline void set_attachEaseInTime(float_t value);

  /// @brief Method set_attachPointCompatibilityMode, addr 0x25a0b14, size 0x8, virtual false, abstract: false, final false
  inline void set_attachPointCompatibilityMode(::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode value);

  /// @brief Method set_attachTransform, addr 0x25a05e4, size 0x8, virtual false, abstract: false, final false
  inline void set_attachTransform(::UnityEngine::Transform* value);

  /// @brief Method set_forceGravityOnDetach, addr 0x25a0aec, size 0xc, virtual false, abstract: false, final false
  inline void set_forceGravityOnDetach(bool value);

  /// @brief Method set_gravityOnDetach, addr 0x25a5578, size 0xc, virtual false, abstract: false, final false
  inline void set_gravityOnDetach(bool value);

  /// @brief Method set_matchAttachPosition, addr 0x25a0618, size 0xc, virtual false, abstract: false, final false
  inline void set_matchAttachPosition(bool value);

  /// @brief Method set_matchAttachRotation, addr 0x25a062c, size 0xc, virtual false, abstract: false, final false
  inline void set_matchAttachRotation(bool value);

  /// @brief Method set_movementType, addr 0x25a0678, size 0x58, virtual false, abstract: false, final false
  inline void set_movementType(::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType value);

  /// @brief Method set_reinitializeDynamicAttachEverySingleGrab, addr 0x25a0654, size 0xc, virtual false, abstract: false, final false
  inline void set_reinitializeDynamicAttachEverySingleGrab(bool value);

  /// @brief Method set_retainTransformParent, addr 0x25a0b00, size 0xc, virtual false, abstract: false, final false
  inline void set_retainTransformParent(bool value);

  /// @brief Method set_secondaryAttachTransform, addr 0x25a05f4, size 0x8, virtual false, abstract: false, final false
  inline void set_secondaryAttachTransform(::UnityEngine::Transform* value);

  /// @brief Method set_smoothPosition, addr 0x25a0a1c, size 0xc, virtual false, abstract: false, final false
  inline void set_smoothPosition(bool value);

  /// @brief Method set_smoothPositionAmount, addr 0x25a0a30, size 0x8, virtual false, abstract: false, final false
  inline void set_smoothPositionAmount(float_t value);

  /// @brief Method set_smoothRotation, addr 0x25a0a64, size 0xc, virtual false, abstract: false, final false
  inline void set_smoothRotation(bool value);

  /// @brief Method set_smoothRotationAmount, addr 0x25a0a78, size 0x8, virtual false, abstract: false, final false
  inline void set_smoothRotationAmount(float_t value);

  /// @brief Method set_snapToColliderVolume, addr 0x25a0640, size 0xc, virtual false, abstract: false, final false
  inline void set_snapToColliderVolume(bool value);

  /// @brief Method set_startingMultipleGrabTransformers, addr 0x25a0b34, size 0x8, virtual false, abstract: false, final false
  inline void set_startingMultipleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* value);

  /// @brief Method set_startingSingleGrabTransformers, addr 0x25a0b24, size 0x8, virtual false, abstract: false, final false
  inline void set_startingSingleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* value);

  /// @brief Method set_throwAngularVelocityScale, addr 0x25a0adc, size 0x8, virtual false, abstract: false, final false
  inline void set_throwAngularVelocityScale(float_t value);

  /// @brief Method set_throwOnDetach, addr 0x25a0a98, size 0xc, virtual false, abstract: false, final false
  inline void set_throwOnDetach(bool value);

  /// @brief Method set_throwSmoothingCurve, addr 0x25a0abc, size 0x8, virtual false, abstract: false, final false
  inline void set_throwSmoothingCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_throwSmoothingDuration, addr 0x25a0aac, size 0x8, virtual false, abstract: false, final false
  inline void set_throwSmoothingDuration(float_t value);

  /// @brief Method set_throwVelocityScale, addr 0x25a0acc, size 0x8, virtual false, abstract: false, final false
  inline void set_throwVelocityScale(float_t value);

  /// @brief Method set_tightenPosition, addr 0x25a0a40, size 0x8, virtual false, abstract: false, final false
  inline void set_tightenPosition(float_t value);

  /// @brief Method set_tightenRotation, addr 0x25a0a88, size 0x8, virtual false, abstract: false, final false
  inline void set_tightenRotation(float_t value);

  /// @brief Method set_trackPosition, addr 0x25a0a08, size 0xc, virtual false, abstract: false, final false
  inline void set_trackPosition(bool value);

  /// @brief Method set_trackRotation, addr 0x25a0a50, size 0xc, virtual false, abstract: false, final false
  inline void set_trackRotation(bool value);

  /// @brief Method set_useDynamicAttach, addr 0x25a0604, size 0xc, virtual false, abstract: false, final false
  inline void set_useDynamicAttach(bool value);

  /// @brief Method set_velocityDamping, addr 0x25a09c8, size 0x8, virtual false, abstract: false, final false
  inline void set_velocityDamping(float_t value);

  /// @brief Method set_velocityScale, addr 0x25a09d8, size 0x8, virtual false, abstract: false, final false
  inline void set_velocityScale(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRGrabInteractable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRGrabInteractable(XRGrabInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRGrabInteractable(XRGrabInteractable const&) = delete;

  /// @brief Field m_AttachTransform, offset: 0x198, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_AttachTransform;

  /// @brief Field m_SecondaryAttachTransform, offset: 0x1a0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_SecondaryAttachTransform;

  /// @brief Field m_UseDynamicAttach, offset: 0x1a8, size: 0x1, def value: None
  bool ___m_UseDynamicAttach;

  /// @brief Field m_MatchAttachPosition, offset: 0x1a9, size: 0x1, def value: None
  bool ___m_MatchAttachPosition;

  /// @brief Field m_MatchAttachRotation, offset: 0x1aa, size: 0x1, def value: None
  bool ___m_MatchAttachRotation;

  /// @brief Field m_SnapToColliderVolume, offset: 0x1ab, size: 0x1, def value: None
  bool ___m_SnapToColliderVolume;

  /// @brief Field m_ReinitializeDynamicAttachEverySingleGrab, offset: 0x1ac, size: 0x1, def value: None
  bool ___m_ReinitializeDynamicAttachEverySingleGrab;

  /// @brief Field m_AttachEaseInTime, offset: 0x1b0, size: 0x4, def value: None
  float_t ___m_AttachEaseInTime;

  /// @brief Field m_MovementType, offset: 0x1b4, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType ___m_MovementType;

  /// @brief Field m_VelocityDamping, offset: 0x1b8, size: 0x4, def value: None
  float_t ___m_VelocityDamping;

  /// @brief Field m_VelocityScale, offset: 0x1bc, size: 0x4, def value: None
  float_t ___m_VelocityScale;

  /// @brief Field m_AngularVelocityDamping, offset: 0x1c0, size: 0x4, def value: None
  float_t ___m_AngularVelocityDamping;

  /// @brief Field m_AngularVelocityScale, offset: 0x1c4, size: 0x4, def value: None
  float_t ___m_AngularVelocityScale;

  /// @brief Field m_TrackPosition, offset: 0x1c8, size: 0x1, def value: None
  bool ___m_TrackPosition;

  /// @brief Field m_SmoothPosition, offset: 0x1c9, size: 0x1, def value: None
  bool ___m_SmoothPosition;

  /// @brief Field m_SmoothPositionAmount, offset: 0x1cc, size: 0x4, def value: None
  float_t ___m_SmoothPositionAmount;

  /// @brief Field m_TightenPosition, offset: 0x1d0, size: 0x4, def value: None
  float_t ___m_TightenPosition;

  /// @brief Field m_TrackRotation, offset: 0x1d4, size: 0x1, def value: None
  bool ___m_TrackRotation;

  /// @brief Field m_SmoothRotation, offset: 0x1d5, size: 0x1, def value: None
  bool ___m_SmoothRotation;

  /// @brief Field m_SmoothRotationAmount, offset: 0x1d8, size: 0x4, def value: None
  float_t ___m_SmoothRotationAmount;

  /// @brief Field m_TightenRotation, offset: 0x1dc, size: 0x4, def value: None
  float_t ___m_TightenRotation;

  /// @brief Field m_ThrowOnDetach, offset: 0x1e0, size: 0x1, def value: None
  bool ___m_ThrowOnDetach;

  /// @brief Field m_ThrowSmoothingDuration, offset: 0x1e4, size: 0x4, def value: None
  float_t ___m_ThrowSmoothingDuration;

  /// @brief Field m_ThrowSmoothingCurve, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_ThrowSmoothingCurve;

  /// @brief Field m_ThrowVelocityScale, offset: 0x1f0, size: 0x4, def value: None
  float_t ___m_ThrowVelocityScale;

  /// @brief Field m_ThrowAngularVelocityScale, offset: 0x1f4, size: 0x4, def value: None
  float_t ___m_ThrowAngularVelocityScale;

  /// @brief Field m_ForceGravityOnDetach, offset: 0x1f8, size: 0x1, def value: None
  bool ___m_ForceGravityOnDetach;

  /// @brief Field m_RetainTransformParent, offset: 0x1f9, size: 0x1, def value: None
  bool ___m_RetainTransformParent;

  /// @brief Field m_AttachPointCompatibilityMode, offset: 0x1fc, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode ___m_AttachPointCompatibilityMode;

  /// @brief Field m_StartingSingleGrabTransformers, offset: 0x200, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* ___m_StartingSingleGrabTransformers;

  /// @brief Field m_StartingMultipleGrabTransformers, offset: 0x208, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* ___m_StartingMultipleGrabTransformers;

  /// @brief Field m_AddDefaultGrabTransformers, offset: 0x210, size: 0x1, def value: None
  bool ___m_AddDefaultGrabTransformers;

  /// @brief Field m_SingleGrabTransformers, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* ___m_SingleGrabTransformers;

  /// @brief Field m_MultipleGrabTransformers, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* ___m_MultipleGrabTransformers;

  /// @brief Field m_GrabTransformersAddedWhenGrabbed, offset: 0x228, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* ___m_GrabTransformersAddedWhenGrabbed;

  /// @brief Field m_GrabCountChanged, offset: 0x230, size: 0x1, def value: None
  bool ___m_GrabCountChanged;

  /// @brief Field m_GrabCountBeforeAndAfterChange, offset: 0x234, size: 0x8, def value: None
  ::System::ValueTuple_2<int32_t, int32_t> ___m_GrabCountBeforeAndAfterChange;

  /// @brief Field m_IsProcessingGrabTransformers, offset: 0x23c, size: 0x1, def value: None
  bool ___m_IsProcessingGrabTransformers;

  /// @brief Field m_TargetPose, offset: 0x240, size: 0x1c, def value: None
  ::UnityEngine::Pose ___m_TargetPose;

  /// @brief Field m_TargetLocalScale, offset: 0x25c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_TargetLocalScale;

  /// @brief Field m_CurrentAttachEaseTime, offset: 0x268, size: 0x4, def value: None
  float_t ___m_CurrentAttachEaseTime;

  /// @brief Field m_CurrentMovementType, offset: 0x26c, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType ___m_CurrentMovementType;

  /// @brief Field m_DetachInLateUpdate, offset: 0x270, size: 0x1, def value: None
  bool ___m_DetachInLateUpdate;

  /// @brief Field m_DetachVelocity, offset: 0x274, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_DetachVelocity;

  /// @brief Field m_DetachAngularVelocity, offset: 0x280, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_DetachAngularVelocity;

  /// @brief Field m_ThrowSmoothingCurrentFrame, offset: 0x28c, size: 0x4, def value: None
  int32_t ___m_ThrowSmoothingCurrentFrame;

  /// @brief Field m_ThrowSmoothingFrameTimes, offset: 0x290, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_ThrowSmoothingFrameTimes;

  /// @brief Field m_ThrowSmoothingVelocityFrames, offset: 0x298, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_ThrowSmoothingVelocityFrames;

  /// @brief Field m_ThrowSmoothingAngularVelocityFrames, offset: 0x2a0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_ThrowSmoothingAngularVelocityFrames;

  /// @brief Field m_ThrowSmoothingFirstUpdate, offset: 0x2a8, size: 0x1, def value: None
  bool ___m_ThrowSmoothingFirstUpdate;

  /// @brief Field m_LastThrowReferencePose, offset: 0x2ac, size: 0x1c, def value: None
  ::UnityEngine::Pose ___m_LastThrowReferencePose;

  /// @brief Field m_Rigidbody, offset: 0x2c8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___m_Rigidbody;

  /// @brief Field m_WasKinematic, offset: 0x2d0, size: 0x1, def value: None
  bool ___m_WasKinematic;

  /// @brief Field m_UsedGravity, offset: 0x2d1, size: 0x1, def value: None
  bool ___m_UsedGravity;

  /// @brief Field m_OldDrag, offset: 0x2d4, size: 0x4, def value: None
  float_t ___m_OldDrag;

  /// @brief Field m_OldAngularDrag, offset: 0x2d8, size: 0x4, def value: None
  float_t ___m_OldAngularDrag;

  /// @brief Field m_OriginalSceneParent, offset: 0x2e0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_OriginalSceneParent;

  /// @brief Field m_TeleportationMonitor, offset: 0x2e8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor* ___m_TeleportationMonitor;

  /// @brief Field m_DynamicAttachTransforms, offset: 0x2f0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, ::UnityW<::UnityEngine::Transform>>* ___m_DynamicAttachTransforms;

  /// @brief Field k_AngularVelocityDamping offset 0xffffffff size 0x4
  static constexpr float_t k_AngularVelocityDamping{ 1.0 };

  /// @brief Field k_AngularVelocityScale offset 0xffffffff size 0x4
  static constexpr float_t k_AngularVelocityScale{ 1.0 };

  /// @brief Field k_DefaultAttachEaseInTime offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultAttachEaseInTime{ 0.15 };

  /// @brief Field k_DefaultSmoothingAmount offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultSmoothingAmount{ 5.0 };

  /// @brief Field k_DefaultThrowAngularVelocityScale offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultThrowAngularVelocityScale{ 1.0 };

  /// @brief Field k_DefaultThrowSmoothingDuration offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultThrowSmoothingDuration{ 0.25 };

  /// @brief Field k_DefaultThrowVelocityScale offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultThrowVelocityScale{ 1.5 };

  /// @brief Field k_DefaultTighteningAmount offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultTighteningAmount{ 0.5 };

  /// @brief Field k_DeltaTimeThreshold offset 0xffffffff size 0x4
  static constexpr float_t k_DeltaTimeThreshold{ 0.001 };

  /// @brief Field k_ThrowSmoothingFrameCount offset 0xffffffff size 0x4
  static constexpr int32_t k_ThrowSmoothingFrameCount{ static_cast<int32_t>(0x14) };

  /// @brief Field k_VelocityDamping offset 0xffffffff size 0x4
  static constexpr float_t k_VelocityDamping{ 1.0 };

  /// @brief Field k_VelocityScale offset 0xffffffff size 0x4
  static constexpr float_t k_VelocityScale{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, 0x2f8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_AttachTransform) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_SecondaryAttachTransform) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_UseDynamicAttach) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_MatchAttachPosition) == 0x1a9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_MatchAttachRotation) == 0x1aa, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_SnapToColliderVolume) == 0x1ab, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ReinitializeDynamicAttachEverySingleGrab) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_AttachEaseInTime) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_MovementType) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_VelocityDamping) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_VelocityScale) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_AngularVelocityDamping) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_AngularVelocityScale) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_TrackPosition) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_SmoothPosition) == 0x1c9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_SmoothPositionAmount) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_TightenPosition) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_TrackRotation) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_SmoothRotation) == 0x1d5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_SmoothRotationAmount) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_TightenRotation) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ThrowOnDetach) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ThrowSmoothingDuration) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ThrowSmoothingCurve) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ThrowVelocityScale) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ThrowAngularVelocityScale) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ForceGravityOnDetach) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_RetainTransformParent) == 0x1f9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_AttachPointCompatibilityMode) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_StartingSingleGrabTransformers) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_StartingMultipleGrabTransformers) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_AddDefaultGrabTransformers) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_SingleGrabTransformers) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_MultipleGrabTransformers) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_GrabTransformersAddedWhenGrabbed) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_GrabCountChanged) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_GrabCountBeforeAndAfterChange) == 0x234, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_IsProcessingGrabTransformers) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_TargetPose) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_TargetLocalScale) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_CurrentAttachEaseTime) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_CurrentMovementType) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_DetachInLateUpdate) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_DetachVelocity) == 0x274, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_DetachAngularVelocity) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ThrowSmoothingCurrentFrame) == 0x28c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ThrowSmoothingFrameTimes) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ThrowSmoothingVelocityFrames) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ThrowSmoothingAngularVelocityFrames) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_ThrowSmoothingFirstUpdate) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_LastThrowReferencePose) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_Rigidbody) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_WasKinematic) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_UsedGravity) == 0x2d1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_OldDrag) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_OldAngularDrag) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_OriginalSceneParent) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_TeleportationMonitor) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable, ___m_DynamicAttachTransforms) == 0x2f0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRGrabInteractable__AttachPointCompatibilityMode, "UnityEngine.XR.Interaction.Toolkit",
                       "XRGrabInteractable/AttachPointCompatibilityMode");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, "UnityEngine.XR.Interaction.Toolkit", "XRGrabInteractable");
