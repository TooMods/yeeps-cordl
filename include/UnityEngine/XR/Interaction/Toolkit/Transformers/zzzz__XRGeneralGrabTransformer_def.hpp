#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRGeneralGrabTransformer)
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRBaseGrabTransformer__RegistrationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRGeneralGrabTransformer__ManipulationAxes;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRGeneralGrabTransformer__TwoHandedRotationMode;
}
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
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRGeneralGrabTransformer__ManipulationAxes;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRGeneralGrabTransformer__TwoHandedRotationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer);
// Type: ::ManipulationAxes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: true
// CS Name: ::XRGeneralGrabTransformer::ManipulationAxes
struct CORDL_TYPE __XRGeneralGrabTransformer__ManipulationAxes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRGeneralGrabTransformer__ManipulationAxes_Unwrapped
  enum struct ____XRGeneralGrabTransformer__ManipulationAxes_Unwrapped : int32_t {
    __E_X = static_cast<int32_t>(0x1),
    __E_Y = static_cast<int32_t>(0x2),
    __E_Z = static_cast<int32_t>(0x4),
    __E_All = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRGeneralGrabTransformer__ManipulationAxes_Unwrapped() const noexcept {
    return static_cast<____XRGeneralGrabTransformer__ManipulationAxes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRGeneralGrabTransformer__ManipulationAxes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRGeneralGrabTransformer__ManipulationAxes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x7)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes const All;

  /// @brief Field X value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes const X;

  /// @brief Field Y value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes const Z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Transformers
// Type: ::ConstrainedAxisDisplacementMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: true
// CS Name: ::XRGeneralGrabTransformer::ConstrainedAxisDisplacementMode
struct CORDL_TYPE __XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode_Unwrapped
  enum struct ____XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode_Unwrapped : int32_t {
    __E_ObjectRelative = static_cast<int32_t>(0x0),
    __E_ObjectRelativeWithLockedWorldUp = static_cast<int32_t>(0x1),
    __E_WorldAxisRelative = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode_Unwrapped() const noexcept {
    return static_cast<____XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ObjectRelative value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode const ObjectRelative;

  /// @brief Field ObjectRelativeWithLockedWorldUp value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode const ObjectRelativeWithLockedWorldUp;

  /// @brief Field WorldAxisRelative value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode const WorldAxisRelative;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Transformers
// Type: ::TwoHandedRotationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: true
// CS Name: ::XRGeneralGrabTransformer::TwoHandedRotationMode
struct CORDL_TYPE __XRGeneralGrabTransformer__TwoHandedRotationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRGeneralGrabTransformer__TwoHandedRotationMode_Unwrapped
  enum struct ____XRGeneralGrabTransformer__TwoHandedRotationMode_Unwrapped : int32_t {
    __E_FirstHandOnly = static_cast<int32_t>(0x0),
    __E_FirstHandDirectedTowardsSecondHand = static_cast<int32_t>(0x1),
    __E_TwoHandedAverage = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRGeneralGrabTransformer__TwoHandedRotationMode_Unwrapped() const noexcept {
    return static_cast<____XRGeneralGrabTransformer__TwoHandedRotationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRGeneralGrabTransformer__TwoHandedRotationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRGeneralGrabTransformer__TwoHandedRotationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FirstHandDirectedTowardsSecondHand value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode const FirstHandDirectedTowardsSecondHand;

  /// @brief Field FirstHandOnly value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode const FirstHandOnly;

  /// @brief Field TwoHandedAverage value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode const TwoHandedAverage;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Transformers
// Type: UnityEngine.XR.Interaction.Toolkit.Transformers::XRGeneralGrabTransformer
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Transformers::XRGeneralGrabTransformer*
class CORDL_TYPE XRGeneralGrabTransformer : public ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer {
public:
  // Declarations
  using ConstrainedAxisDisplacementMode = ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode;

  using ManipulationAxes = ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes;

  using TwoHandedRotationMode = ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode;

  __declspec(property(get = get_allowTwoHandedRotation,
                      put = set_allowTwoHandedRotation))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode allowTwoHandedRotation;

  __declspec(property(get = get_allowTwoHandedScaling, put = set_allowTwoHandedScaling)) bool allowTwoHandedScaling;

  __declspec(property(get = get_clampScaling, put = set_clampScaling)) bool clampScaling;

  __declspec(property(get = get_constrainedAxisDisplacementMode,
                      put = set_constrainedAxisDisplacementMode))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode
      constrainedAxisDisplacementMode;

  /// @brief Field m_AllowTwoHandedScaling, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowTwoHandedScaling, put = __cordl_internal_set_m_AllowTwoHandedScaling)) bool m_AllowTwoHandedScaling;

  /// @brief Field m_ClampScaling, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClampScaling, put = __cordl_internal_set_m_ClampScaling)) bool m_ClampScaling;

  /// @brief Field m_ConstrainedAxisDisplacementMode, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ConstrainedAxisDisplacementMode,
                      put = __cordl_internal_set_m_ConstrainedAxisDisplacementMode))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode
      m_ConstrainedAxisDisplacementMode;

  /// @brief Field m_ConstrainedAxisDisplacementModeOnGrab, offset 0x100, size 0x4
  __declspec(
      property(get = __cordl_internal_get_m_ConstrainedAxisDisplacementModeOnGrab,
               put = __cordl_internal_set_m_ConstrainedAxisDisplacementModeOnGrab))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode
      m_ConstrainedAxisDisplacementModeOnGrab;

  /// @brief Field m_FirstFrameSinceTwoHandedGrab, offset 0xcc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FirstFrameSinceTwoHandedGrab, put = __cordl_internal_set_m_FirstFrameSinceTwoHandedGrab)) bool m_FirstFrameSinceTwoHandedGrab;

  /// @brief Field m_InitialScale, offset 0xdc, size 0xc
  __declspec(property(get = __cordl_internal_get_m_InitialScale, put = __cordl_internal_set_m_InitialScale))::UnityEngine::Vector3 m_InitialScale;

  /// @brief Field m_InteractorLocalGrabPoint, offset 0x90, size 0xc
  __declspec(property(get = __cordl_internal_get_m_InteractorLocalGrabPoint, put = __cordl_internal_set_m_InteractorLocalGrabPoint))::UnityEngine::Vector3 m_InteractorLocalGrabPoint;

  /// @brief Field m_LastGrabCount, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastGrabCount, put = __cordl_internal_set_m_LastGrabCount)) int32_t m_LastGrabCount;

  /// @brief Field m_LastTwoHandedUp, offset 0xd0, size 0xc
  __declspec(property(get = __cordl_internal_get_m_LastTwoHandedUp, put = __cordl_internal_set_m_LastTwoHandedUp))::UnityEngine::Vector3 m_LastTwoHandedUp;

  /// @brief Field m_MaximumScale, offset 0xf4, size 0xc
  __declspec(property(get = __cordl_internal_get_m_MaximumScale, put = __cordl_internal_set_m_MaximumScale))::UnityEngine::Vector3 m_MaximumScale;

  /// @brief Field m_MaximumScaleRatio, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaximumScaleRatio, put = __cordl_internal_set_m_MaximumScaleRatio)) float_t m_MaximumScaleRatio;

  /// @brief Field m_MinimumScale, offset 0xe8, size 0xc
  __declspec(property(get = __cordl_internal_get_m_MinimumScale, put = __cordl_internal_set_m_MinimumScale))::UnityEngine::Vector3 m_MinimumScale;

  /// @brief Field m_MinimumScaleRatio, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinimumScaleRatio, put = __cordl_internal_set_m_MinimumScaleRatio)) float_t m_MinimumScaleRatio;

  /// @brief Field m_ObjectLocalGrabPoint, offset 0x9c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_ObjectLocalGrabPoint, put = __cordl_internal_set_m_ObjectLocalGrabPoint))::UnityEngine::Vector3 m_ObjectLocalGrabPoint;

  /// @brief Field m_OffsetPose, offset 0x58, size 0x1c
  __declspec(property(get = __cordl_internal_get_m_OffsetPose, put = __cordl_internal_set_m_OffsetPose))::UnityEngine::Pose m_OffsetPose;

  /// @brief Field m_OriginalInteractor, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginalInteractor, put = __cordl_internal_set_m_OriginalInteractor))::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* m_OriginalInteractor;

  /// @brief Field m_OriginalInteractorPose, offset 0x74, size 0x1c
  __declspec(property(get = __cordl_internal_get_m_OriginalInteractorPose, put = __cordl_internal_set_m_OriginalInteractorPose))::UnityEngine::Pose m_OriginalInteractorPose;

  /// @brief Field m_OriginalObjectPose, offset 0x3c, size 0x1c
  __declspec(property(get = __cordl_internal_get_m_OriginalObjectPose, put = __cordl_internal_set_m_OriginalObjectPose))::UnityEngine::Pose m_OriginalObjectPose;

  /// @brief Field m_PermittedDisplacementAxes, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PermittedDisplacementAxes,
                      put = __cordl_internal_set_m_PermittedDisplacementAxes))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes
      m_PermittedDisplacementAxes;

  /// @brief Field m_PermittedDisplacementAxesOnGrab, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PermittedDisplacementAxesOnGrab,
                      put = __cordl_internal_set_m_PermittedDisplacementAxesOnGrab))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes
      m_PermittedDisplacementAxesOnGrab;

  /// @brief Field m_ScaleAtGrabStart, offset 0xc0, size 0xc
  __declspec(property(get = __cordl_internal_get_m_ScaleAtGrabStart, put = __cordl_internal_set_m_ScaleAtGrabStart))::UnityEngine::Vector3 m_ScaleAtGrabStart;

  /// @brief Field m_ScaleMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScaleMultiplier, put = __cordl_internal_set_m_ScaleMultiplier)) float_t m_ScaleMultiplier;

  /// @brief Field m_StartHandleBar, offset 0xb4, size 0xc
  __declspec(property(get = __cordl_internal_get_m_StartHandleBar, put = __cordl_internal_set_m_StartHandleBar))::UnityEngine::Vector3 m_StartHandleBar;

  /// @brief Field m_ThresholdMoveRatioForScale, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ThresholdMoveRatioForScale, put = __cordl_internal_set_m_ThresholdMoveRatioForScale)) float_t m_ThresholdMoveRatioForScale;

  /// @brief Field m_TwoHandedRotationMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TwoHandedRotationMode,
                      put = __cordl_internal_set_m_TwoHandedRotationMode))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode
      m_TwoHandedRotationMode;

  __declspec(property(get = get_maximumScaleRatio, put = set_maximumScaleRatio)) float_t maximumScaleRatio;

  __declspec(property(get = get_minimumScaleRatio, put = set_minimumScaleRatio)) float_t minimumScaleRatio;

  __declspec(property(get = get_permittedDisplacementAxes,
                      put = set_permittedDisplacementAxes))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes permittedDisplacementAxes;

  __declspec(property(get = get_registrationMode))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode registrationMode;

  __declspec(property(get = get_scaleMultiplier, put = set_scaleMultiplier)) float_t scaleMultiplier;

  __declspec(property(get = get_thresholdMoveRatioForScale, put = set_thresholdMoveRatioForScale)) float_t thresholdMoveRatioForScale;

  /// @brief Method AdjustPositionForPermittedAxes, addr 0x2fec500, size 0xce4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3
  AdjustPositionForPermittedAxes(::UnityEngine::Vector3 targetPosition, ::UnityEngine::Pose originalObjectPose,
                                 ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes permittedAxes,
                                 ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode axisDisplacementMode);

  /// @brief Method Awake, addr 0x2febdac, size 0x30, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ComputeAdjustedInteractorPose, addr 0x2fed4e0, size 0x860, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose ComputeAdjustedInteractorPose(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ByRef<::UnityEngine::Vector3> newHandleBar);

  /// @brief Method ComputeNewObjectPosition, addr 0x2fedd40, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ComputeNewObjectPosition(::UnityEngine::Pose newInteractionPose, ::UnityEngine::Quaternion objectRotation, ::UnityEngine::Vector3 objectScale, bool trackRotation);

  /// @brief Method ComputeNewObjectRotation, addr 0x2fede5c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ComputeNewObjectRotation(::UnityEngine::Pose newInteractionPose, bool trackRotation);

  /// @brief Method ComputeNewScale, addr 0x2fedef0, size 0x1c0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ComputeNewScale(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::Vector3 startScale, ::UnityEngine::Vector3 currentScale,
                                                ::UnityEngine::Vector3 startHandleBar, ::UnityEngine::Vector3 newHandleBar);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer* New_ctor();

  /// @brief Method OnGrab, addr 0x2febf38, size 0x5c8, virtual true, abstract: false, final false
  inline void OnGrab(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable);

  /// @brief Method OnGrabCountChanged, addr 0x2fed2b8, size 0x228, virtual true, abstract: false, final false
  inline void OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::Pose targetPose, ::UnityEngine::Vector3 localScale);

  /// @brief Method Process, addr 0x2febddc, size 0x1c, virtual true, abstract: false, final false
  inline void Process(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                      ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale);

  /// @brief Method TranslateSetup, addr 0x2fed1e4, size 0xd4, virtual false, abstract: false, final false
  inline void TranslateSetup(::UnityEngine::Pose interactorCentroidPose, ::UnityEngine::Vector3 grabCentroid, ::UnityEngine::Pose objectPose, ::UnityEngine::Vector3 objectScale);

  /// @brief Method UpdateTarget, addr 0x2febdf8, size 0x140, virtual false, abstract: false, final false
  inline void UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale);

  constexpr bool const& __cordl_internal_get_m_AllowTwoHandedScaling() const;

  constexpr bool& __cordl_internal_get_m_AllowTwoHandedScaling();

  constexpr bool const& __cordl_internal_get_m_ClampScaling() const;

  constexpr bool& __cordl_internal_get_m_ClampScaling();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode const& __cordl_internal_get_m_ConstrainedAxisDisplacementMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode& __cordl_internal_get_m_ConstrainedAxisDisplacementMode();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode const&
  __cordl_internal_get_m_ConstrainedAxisDisplacementModeOnGrab() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode& __cordl_internal_get_m_ConstrainedAxisDisplacementModeOnGrab();

  constexpr bool const& __cordl_internal_get_m_FirstFrameSinceTwoHandedGrab() const;

  constexpr bool& __cordl_internal_get_m_FirstFrameSinceTwoHandedGrab();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InitialScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InitialScale();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InteractorLocalGrabPoint() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InteractorLocalGrabPoint();

  constexpr int32_t const& __cordl_internal_get_m_LastGrabCount() const;

  constexpr int32_t& __cordl_internal_get_m_LastGrabCount();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastTwoHandedUp() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastTwoHandedUp();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_MaximumScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_MaximumScale();

  constexpr float_t const& __cordl_internal_get_m_MaximumScaleRatio() const;

  constexpr float_t& __cordl_internal_get_m_MaximumScaleRatio();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_MinimumScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_MinimumScale();

  constexpr float_t const& __cordl_internal_get_m_MinimumScaleRatio() const;

  constexpr float_t& __cordl_internal_get_m_MinimumScaleRatio();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ObjectLocalGrabPoint() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ObjectLocalGrabPoint();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_OffsetPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get_m_OffsetPose();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*& __cordl_internal_get_m_OriginalInteractor();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*> const& __cordl_internal_get_m_OriginalInteractor() const;

  constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_OriginalInteractorPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get_m_OriginalInteractorPose();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_OriginalObjectPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get_m_OriginalObjectPose();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes const& __cordl_internal_get_m_PermittedDisplacementAxes() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes& __cordl_internal_get_m_PermittedDisplacementAxes();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes const& __cordl_internal_get_m_PermittedDisplacementAxesOnGrab() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes& __cordl_internal_get_m_PermittedDisplacementAxesOnGrab();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ScaleAtGrabStart() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ScaleAtGrabStart();

  constexpr float_t const& __cordl_internal_get_m_ScaleMultiplier() const;

  constexpr float_t& __cordl_internal_get_m_ScaleMultiplier();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StartHandleBar() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StartHandleBar();

  constexpr float_t const& __cordl_internal_get_m_ThresholdMoveRatioForScale() const;

  constexpr float_t& __cordl_internal_get_m_ThresholdMoveRatioForScale();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode const& __cordl_internal_get_m_TwoHandedRotationMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode& __cordl_internal_get_m_TwoHandedRotationMode();

  constexpr void __cordl_internal_set_m_AllowTwoHandedScaling(bool value);

  constexpr void __cordl_internal_set_m_ClampScaling(bool value);

  constexpr void __cordl_internal_set_m_ConstrainedAxisDisplacementMode(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode value);

  constexpr void __cordl_internal_set_m_ConstrainedAxisDisplacementModeOnGrab(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode value);

  constexpr void __cordl_internal_set_m_FirstFrameSinceTwoHandedGrab(bool value);

  constexpr void __cordl_internal_set_m_InitialScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_InteractorLocalGrabPoint(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_LastGrabCount(int32_t value);

  constexpr void __cordl_internal_set_m_LastTwoHandedUp(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_MaximumScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_MaximumScaleRatio(float_t value);

  constexpr void __cordl_internal_set_m_MinimumScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_MinimumScaleRatio(float_t value);

  constexpr void __cordl_internal_set_m_ObjectLocalGrabPoint(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_OffsetPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set_m_OriginalInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* value);

  constexpr void __cordl_internal_set_m_OriginalInteractorPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set_m_OriginalObjectPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set_m_PermittedDisplacementAxes(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes value);

  constexpr void __cordl_internal_set_m_PermittedDisplacementAxesOnGrab(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes value);

  constexpr void __cordl_internal_set_m_ScaleAtGrabStart(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_ScaleMultiplier(float_t value);

  constexpr void __cordl_internal_set_m_StartHandleBar(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_ThresholdMoveRatioForScale(float_t value);

  constexpr void __cordl_internal_set_m_TwoHandedRotationMode(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode value);

  /// @brief Method .ctor, addr 0x2fee0b0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowTwoHandedRotation, addr 0x2febcec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode get_allowTwoHandedRotation();

  /// @brief Method get_allowTwoHandedScaling, addr 0x2febcfc, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowTwoHandedScaling();

  /// @brief Method get_clampScaling, addr 0x2febd20, size 0x8, virtual false, abstract: false, final false
  inline bool get_clampScaling();

  /// @brief Method get_constrainedAxisDisplacementMode, addr 0x2febcdc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode get_constrainedAxisDisplacementMode();

  /// @brief Method get_maximumScaleRatio, addr 0x2febd64, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maximumScaleRatio();

  /// @brief Method get_minimumScaleRatio, addr 0x2febd34, size 0x8, virtual false, abstract: false, final false
  inline float_t get_minimumScaleRatio();

  /// @brief Method get_permittedDisplacementAxes, addr 0x2febccc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes get_permittedDisplacementAxes();

  /// @brief Method get_registrationMode, addr 0x2febda4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode get_registrationMode();

  /// @brief Method get_scaleMultiplier, addr 0x2febd94, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scaleMultiplier();

  /// @brief Method get_thresholdMoveRatioForScale, addr 0x2febd10, size 0x8, virtual false, abstract: false, final false
  inline float_t get_thresholdMoveRatioForScale();

  /// @brief Method set_allowTwoHandedRotation, addr 0x2febcf4, size 0x8, virtual false, abstract: false, final false
  inline void set_allowTwoHandedRotation(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode value);

  /// @brief Method set_allowTwoHandedScaling, addr 0x2febd04, size 0xc, virtual false, abstract: false, final false
  inline void set_allowTwoHandedScaling(bool value);

  /// @brief Method set_clampScaling, addr 0x2febd28, size 0xc, virtual false, abstract: false, final false
  inline void set_clampScaling(bool value);

  /// @brief Method set_constrainedAxisDisplacementMode, addr 0x2febce4, size 0x8, virtual false, abstract: false, final false
  inline void set_constrainedAxisDisplacementMode(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode value);

  /// @brief Method set_maximumScaleRatio, addr 0x2febd6c, size 0x28, virtual false, abstract: false, final false
  inline void set_maximumScaleRatio(float_t value);

  /// @brief Method set_minimumScaleRatio, addr 0x2febd3c, size 0x28, virtual false, abstract: false, final false
  inline void set_minimumScaleRatio(float_t value);

  /// @brief Method set_permittedDisplacementAxes, addr 0x2febcd4, size 0x8, virtual false, abstract: false, final false
  inline void set_permittedDisplacementAxes(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes value);

  /// @brief Method set_scaleMultiplier, addr 0x2febd9c, size 0x8, virtual false, abstract: false, final false
  inline void set_scaleMultiplier(float_t value);

  /// @brief Method set_thresholdMoveRatioForScale, addr 0x2febd18, size 0x8, virtual false, abstract: false, final false
  inline void set_thresholdMoveRatioForScale(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRGeneralGrabTransformer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRGeneralGrabTransformer(XRGeneralGrabTransformer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRGeneralGrabTransformer(XRGeneralGrabTransformer const&) = delete;

  /// @brief Field m_PermittedDisplacementAxes, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes ___m_PermittedDisplacementAxes;

  /// @brief Field m_ConstrainedAxisDisplacementMode, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode ___m_ConstrainedAxisDisplacementMode;

  /// @brief Field m_TwoHandedRotationMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode ___m_TwoHandedRotationMode;

  /// @brief Field m_AllowTwoHandedScaling, offset: 0x24, size: 0x1, def value: None
  bool ___m_AllowTwoHandedScaling;

  /// @brief Field m_ThresholdMoveRatioForScale, offset: 0x28, size: 0x4, def value: None
  float_t ___m_ThresholdMoveRatioForScale;

  /// @brief Field m_ClampScaling, offset: 0x2c, size: 0x1, def value: None
  bool ___m_ClampScaling;

  /// @brief Field m_MinimumScaleRatio, offset: 0x30, size: 0x4, def value: None
  float_t ___m_MinimumScaleRatio;

  /// @brief Field m_MaximumScaleRatio, offset: 0x34, size: 0x4, def value: None
  float_t ___m_MaximumScaleRatio;

  /// @brief Field m_ScaleMultiplier, offset: 0x38, size: 0x4, def value: None
  float_t ___m_ScaleMultiplier;

  /// @brief Field m_OriginalObjectPose, offset: 0x3c, size: 0x1c, def value: None
  ::UnityEngine::Pose ___m_OriginalObjectPose;

  /// @brief Field m_OffsetPose, offset: 0x58, size: 0x1c, def value: None
  ::UnityEngine::Pose ___m_OffsetPose;

  /// @brief Field m_OriginalInteractorPose, offset: 0x74, size: 0x1c, def value: None
  ::UnityEngine::Pose ___m_OriginalInteractorPose;

  /// @brief Field m_InteractorLocalGrabPoint, offset: 0x90, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_InteractorLocalGrabPoint;

  /// @brief Field m_ObjectLocalGrabPoint, offset: 0x9c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_ObjectLocalGrabPoint;

  /// @brief Field m_OriginalInteractor, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* ___m_OriginalInteractor;

  /// @brief Field m_LastGrabCount, offset: 0xb0, size: 0x4, def value: None
  int32_t ___m_LastGrabCount;

  /// @brief Field m_StartHandleBar, offset: 0xb4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_StartHandleBar;

  /// @brief Field m_ScaleAtGrabStart, offset: 0xc0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_ScaleAtGrabStart;

  /// @brief Field m_FirstFrameSinceTwoHandedGrab, offset: 0xcc, size: 0x1, def value: None
  bool ___m_FirstFrameSinceTwoHandedGrab;

  /// @brief Field m_LastTwoHandedUp, offset: 0xd0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_LastTwoHandedUp;

  /// @brief Field m_InitialScale, offset: 0xdc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_InitialScale;

  /// @brief Field m_MinimumScale, offset: 0xe8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_MinimumScale;

  /// @brief Field m_MaximumScale, offset: 0xf4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_MaximumScale;

  /// @brief Field m_ConstrainedAxisDisplacementModeOnGrab, offset: 0x100, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode ___m_ConstrainedAxisDisplacementModeOnGrab;

  /// @brief Field m_PermittedDisplacementAxesOnGrab, offset: 0x104, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes ___m_PermittedDisplacementAxesOnGrab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, 0x108>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_PermittedDisplacementAxes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ConstrainedAxisDisplacementMode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_TwoHandedRotationMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_AllowTwoHandedScaling) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ThresholdMoveRatioForScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ClampScaling) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_MinimumScaleRatio) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_MaximumScaleRatio) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ScaleMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_OriginalObjectPose) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_OffsetPose) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_OriginalInteractorPose) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_InteractorLocalGrabPoint) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ObjectLocalGrabPoint) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_OriginalInteractor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_LastGrabCount) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_StartHandleBar) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ScaleAtGrabStart) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_FirstFrameSinceTwoHandedGrab) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_LastTwoHandedUp) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_InitialScale) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_MinimumScale) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_MaximumScale) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ConstrainedAxisDisplacementModeOnGrab) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_PermittedDisplacementAxesOnGrab) == 0x104, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Transformers
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ConstrainedAxisDisplacementMode, "UnityEngine.XR.Interaction.Toolkit.Transformers",
                       "XRGeneralGrabTransformer/ConstrainedAxisDisplacementMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__ManipulationAxes, "UnityEngine.XR.Interaction.Toolkit.Transformers",
                       "XRGeneralGrabTransformer/ManipulationAxes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRGeneralGrabTransformer__TwoHandedRotationMode, "UnityEngine.XR.Interaction.Toolkit.Transformers",
                       "XRGeneralGrabTransformer/TwoHandedRotationMode");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRGeneralGrabTransformer");
