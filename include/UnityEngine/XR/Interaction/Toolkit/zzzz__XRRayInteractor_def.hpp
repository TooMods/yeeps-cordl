#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRRayInteractor_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRRayInteractor)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class RegisteredUIInteractorCache;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ILineRenderable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractableSnapVolume;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRRayInteractor__AnchorRotationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRRayInteractor__HitDetectionType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRRayInteractor__LineType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRRayInteractor__QuerySnapVolumeInteraction;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRRayInteractor__RaycastHitComparer;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRRayInteractor__SamplePoint;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRRayInteractor____c;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRRayInteractor__AnchorRotationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRRayInteractor__HitDetectionType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRRayInteractor__LineType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRRayInteractor__QuerySnapVolumeInteraction;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRRayInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRRayInteractor__RaycastHitComparer;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRRayInteractor____c;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRRayInteractor__SamplePoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint);
// Type: ::RaycastHitComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::XRRayInteractor::RaycastHitComparer*
class CORDL_TYPE __XRRayInteractor__RaycastHitComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept;

  /// @brief Method Compare, addr 0x2cfb5ec, size 0x100, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::RaycastHit a, ::UnityEngine::RaycastHit b);

  static inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer* New_ctor();

  /// @brief Method .ctor, addr 0x2cfb52c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>* i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRRayInteractor__RaycastHitComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRRayInteractor__RaycastHitComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRRayInteractor__RaycastHitComparer(__XRRayInteractor__RaycastHitComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRRayInteractor__RaycastHitComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRRayInteractor__RaycastHitComparer(__XRRayInteractor__RaycastHitComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::LineType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRRayInteractor::LineType
struct CORDL_TYPE __XRRayInteractor__LineType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRRayInteractor__LineType_Unwrapped
  enum struct ____XRRayInteractor__LineType_Unwrapped : int32_t {
    __E_StraightLine = static_cast<int32_t>(0x0),
    __E_ProjectileCurve = static_cast<int32_t>(0x1),
    __E_BezierCurve = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRRayInteractor__LineType_Unwrapped() const noexcept {
    return static_cast<____XRRayInteractor__LineType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRRayInteractor__LineType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRRayInteractor__LineType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BezierCurve value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType const BezierCurve;

  /// @brief Field ProjectileCurve value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType const ProjectileCurve;

  /// @brief Field StraightLine value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType const StraightLine;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::QuerySnapVolumeInteraction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRRayInteractor::QuerySnapVolumeInteraction
struct CORDL_TYPE __XRRayInteractor__QuerySnapVolumeInteraction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRRayInteractor__QuerySnapVolumeInteraction_Unwrapped
  enum struct ____XRRayInteractor__QuerySnapVolumeInteraction_Unwrapped : int32_t {
    __E_Ignore = static_cast<int32_t>(0x0),
    __E_Collide = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRRayInteractor__QuerySnapVolumeInteraction_Unwrapped() const noexcept {
    return static_cast<____XRRayInteractor__QuerySnapVolumeInteraction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRRayInteractor__QuerySnapVolumeInteraction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRRayInteractor__QuerySnapVolumeInteraction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Collide value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction const Collide;

  /// @brief Field Ignore value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction const Ignore;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::HitDetectionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRRayInteractor::HitDetectionType
struct CORDL_TYPE __XRRayInteractor__HitDetectionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRRayInteractor__HitDetectionType_Unwrapped
  enum struct ____XRRayInteractor__HitDetectionType_Unwrapped : int32_t {
    __E_Raycast = static_cast<int32_t>(0x0),
    __E_SphereCast = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRRayInteractor__HitDetectionType_Unwrapped() const noexcept {
    return static_cast<____XRRayInteractor__HitDetectionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRRayInteractor__HitDetectionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRRayInteractor__HitDetectionType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Raycast value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType const Raycast;

  /// @brief Field SphereCast value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType const SphereCast;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::AnchorRotationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRRayInteractor::AnchorRotationMode
struct CORDL_TYPE __XRRayInteractor__AnchorRotationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRRayInteractor__AnchorRotationMode_Unwrapped
  enum struct ____XRRayInteractor__AnchorRotationMode_Unwrapped : int32_t {
    __E_RotateOverTime = static_cast<int32_t>(0x0),
    __E_MatchDirection = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRRayInteractor__AnchorRotationMode_Unwrapped() const noexcept {
    return static_cast<____XRRayInteractor__AnchorRotationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRRayInteractor__AnchorRotationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRRayInteractor__AnchorRotationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MatchDirection value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode const MatchDirection;

  /// @brief Field RotateOverTime value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode const RotateOverTime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::SamplePoint
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRRayInteractor::SamplePoint
struct CORDL_TYPE __XRRayInteractor__SamplePoint {
public:
  // Declarations
  __declspec(property(get = get_parameter, put = set_parameter)) float_t parameter;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  /// @brief Method get_parameter, addr 0x2cfb704, size 0x8, virtual false, abstract: false, final false
  inline float_t get_parameter();

  /// @brief Method get_position, addr 0x2cfb6ec, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method set_parameter, addr 0x2cfb70c, size 0x8, virtual false, abstract: false, final false
  inline void set_parameter(float_t value);

  /// @brief Method set_position, addr 0x2cfb6f8, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRRayInteractor__SamplePoint();

  // Ctor Parameters [CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_parameter_k__BackingField", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr __XRRayInteractor__SamplePoint(::UnityEngine::Vector3 _position_k__BackingField, float_t _parameter_k__BackingField) noexcept;

  /// @brief Field <position>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _position_k__BackingField;

  /// @brief Field <parameter>k__BackingField, offset: 0xc, size: 0x4, def value: None
  float_t _parameter_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint, _position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint, _parameter_k__BackingField) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::XRRayInteractor::<>c*
class CORDL_TYPE __XRRayInteractor____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c* __9;

  /// @brief Field <>9__197_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__197_0, put = setStaticF___9__197_0))::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* __9__197_0;

  /// @brief Field <>9__197_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__197_1, put = setStaticF___9__197_1))::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* __9__197_1;

  static inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c* New_ctor();

  /// @brief Method <CheckCollidersBetweenPoints>b__197_0, addr 0x2cfb780, size 0x5c, virtual false, abstract: false, final false
  inline bool _CheckCollidersBetweenPoints_b__197_0(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume* snapVolume);

  /// @brief Method <CheckCollidersBetweenPoints>b__197_1, addr 0x2cfb7dc, size 0x5c, virtual false, abstract: false, final false
  inline bool _CheckCollidersBetweenPoints_b__197_1(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume* snapVolume);

  /// @brief Method .ctor, addr 0x2cfb778, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* getStaticF___9__197_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* getStaticF___9__197_1();

  static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c* value);

  static inline void setStaticF___9__197_0(::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* value);

  static inline void setStaticF___9__197_1(::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRRayInteractor____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRRayInteractor____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRRayInteractor____c(__XRRayInteractor____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRRayInteractor____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRRayInteractor____c(__XRRayInteractor____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRRayInteractor
// SizeInfo { instance_size: 880, native_size: -1, calculated_instance_size: 880, calculated_native_size: 880, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRRayInteractor*
class CORDL_TYPE XRRayInteractor : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor {
public:
  // Declarations
  using AnchorRotationMode = ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode;

  using HitDetectionType = ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType;

  using LineType = ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType;

  using QuerySnapVolumeInteraction = ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction;

  using RaycastHitComparer = ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer;

  using SamplePoint = ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint;

  using __c = ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c;

  __declspec(property(get = get_Acceleration, put = set_Acceleration)) float_t Acceleration;

  __declspec(property(get = get_AdditionalFlightTime, put = set_AdditionalFlightTime)) float_t AdditionalFlightTime;

  __declspec(property(get = get_Angle)) float_t Angle;

  __declspec(property(get = get_Velocity, put = set_Velocity)) float_t Velocity;

  /// @brief Field <currentNearestValidTarget>k__BackingField, offset 0x300, size 0x8
  __declspec(property(get = __cordl_internal_get__currentNearestValidTarget_k__BackingField,
                      put = __cordl_internal_set__currentNearestValidTarget_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* _currentNearestValidTarget_k__BackingField;

  __declspec(property(get = get_acceleration, put = set_acceleration)) float_t acceleration;

  __declspec(property(get = get_additionalFlightTime, put = set_additionalFlightTime)) float_t additionalFlightTime;

  __declspec(property(get = get_additionalGroundHeight, put = set_additionalGroundHeight)) float_t additionalGroundHeight;

  __declspec(property(get = get_allowAnchorControl, put = set_allowAnchorControl)) bool allowAnchorControl;

  __declspec(property(get = get_anchorRotateReferenceFrame, put = set_anchorRotateReferenceFrame))::UnityW<::UnityEngine::Transform> anchorRotateReferenceFrame;

  __declspec(property(get = get_anchorRotationMode, put = set_anchorRotationMode))::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode anchorRotationMode;

  __declspec(property(get = get_angle)) float_t angle;

  __declspec(property(get = get_autoDeselect, put = set_autoDeselect)) bool autoDeselect;

  __declspec(property(get = get_blendVisualLinePoints, put = set_blendVisualLinePoints)) bool blendVisualLinePoints;

  __declspec(property(get = get_closestAnyHitIndex)) int32_t closestAnyHitIndex;

  __declspec(property(get = get_controlPointDistance, put = set_controlPointDistance)) float_t controlPointDistance;

  __declspec(property(get = get_controlPointHeight, put = set_controlPointHeight)) float_t controlPointHeight;

  __declspec(property(get = get_currentNearestValidTarget, put = set_currentNearestValidTarget))::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* currentNearestValidTarget;

  __declspec(property(get = get_effectiveRayOrigin))::UnityW<::UnityEngine::Transform> effectiveRayOrigin;

  __declspec(property(get = get_enableUIInteraction, put = set_enableUIInteraction)) bool enableUIInteraction;

  __declspec(property(get = get_endPointDistance, put = set_endPointDistance)) float_t endPointDistance;

  __declspec(property(get = get_endPointHeight, put = set_endPointHeight)) float_t endPointHeight;

  __declspec(property(get = get_hitClosestOnly, put = set_hitClosestOnly)) bool hitClosestOnly;

  __declspec(property(get = get_hitDetectionType, put = set_hitDetectionType))::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType hitDetectionType;

  __declspec(property(get = get_hoverTimeToSelect, put = set_hoverTimeToSelect)) float_t hoverTimeToSelect;

  __declspec(property(get = get_hoverToSelect, put = set_hoverToSelect)) bool hoverToSelect;

  __declspec(property(get = get_isSelectActive)) bool isSelectActive;

  __declspec(property(get = get_lineType, put = set_lineType))::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType lineType;

  /// @brief Field m_Acceleration, offset 0x29c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Acceleration, put = __cordl_internal_set_m_Acceleration)) float_t m_Acceleration;

  /// @brief Field m_AdditionalFlightTime, offset 0x2a4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalFlightTime, put = __cordl_internal_set_m_AdditionalFlightTime)) float_t m_AdditionalFlightTime;

  /// @brief Field m_AdditionalGroundHeight, offset 0x2a0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalGroundHeight, put = __cordl_internal_set_m_AdditionalGroundHeight)) float_t m_AdditionalGroundHeight;

  /// @brief Field m_AllowAnchorControl, offset 0x2e1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowAnchorControl, put = __cordl_internal_set_m_AllowAnchorControl)) bool m_AllowAnchorControl;

  /// @brief Field m_AnchorRotateReferenceFrame, offset 0x2f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AnchorRotateReferenceFrame, put = __cordl_internal_set_m_AnchorRotateReferenceFrame))::UnityW<::UnityEngine::Transform> m_AnchorRotateReferenceFrame;

  /// @brief Field m_AnchorRotationMode, offset 0x2f8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AnchorRotationMode,
                      put = __cordl_internal_set_m_AnchorRotationMode))::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode m_AnchorRotationMode;

  /// @brief Field m_AutoDeselect, offset 0x2d8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AutoDeselect, put = __cordl_internal_set_m_AutoDeselect)) bool m_AutoDeselect;

  /// @brief Field m_BlendVisualLinePoints, offset 0x27c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BlendVisualLinePoints, put = __cordl_internal_set_m_BlendVisualLinePoints)) bool m_BlendVisualLinePoints;

  /// @brief Field m_ControlPointDistance, offset 0x2b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ControlPointDistance, put = __cordl_internal_set_m_ControlPointDistance)) float_t m_ControlPointDistance;

  /// @brief Field m_ControlPointHeight, offset 0x2b4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ControlPointHeight, put = __cordl_internal_set_m_ControlPointHeight)) float_t m_ControlPointHeight;

  /// @brief Field m_ControlPoints, offset 0x350, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlPoints, put = __cordl_internal_set_m_ControlPoints))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_ControlPoints;

  /// @brief Field m_EnableUIInteraction, offset 0x2e0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableUIInteraction, put = __cordl_internal_set_m_EnableUIInteraction)) bool m_EnableUIInteraction;

  /// @brief Field m_EndPointDistance, offset 0x2a8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EndPointDistance, put = __cordl_internal_set_m_EndPointDistance)) float_t m_EndPointDistance;

  /// @brief Field m_EndPointHeight, offset 0x2ac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EndPointHeight, put = __cordl_internal_set_m_EndPointHeight)) float_t m_EndPointHeight;

  /// @brief Field m_HitChordControlPoints, offset 0x358, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HitChordControlPoints,
                      put = __cordl_internal_set_m_HitChordControlPoints))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_HitChordControlPoints;

  /// @brief Field m_HitClosestOnly, offset 0x2d0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HitClosestOnly, put = __cordl_internal_set_m_HitClosestOnly)) bool m_HitClosestOnly;

  /// @brief Field m_HitDetectionType, offset 0x2bc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HitDetectionType,
                      put = __cordl_internal_set_m_HitDetectionType))::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType m_HitDetectionType;

  /// @brief Field m_HoverTimeToSelect, offset 0x2d4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HoverTimeToSelect, put = __cordl_internal_set_m_HoverTimeToSelect)) float_t m_HoverTimeToSelect;

  /// @brief Field m_HoverToSelect, offset 0x2d1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HoverToSelect, put = __cordl_internal_set_m_HoverToSelect)) bool m_HoverToSelect;

  /// @brief Field m_LastTimeAutoSelected, offset 0x318, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastTimeAutoSelected, put = __cordl_internal_set_m_LastTimeAutoSelected)) float_t m_LastTimeAutoSelected;

  /// @brief Field m_LastTimeHoveredObjectChanged, offset 0x310, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastTimeHoveredObjectChanged, put = __cordl_internal_set_m_LastTimeHoveredObjectChanged)) float_t m_LastTimeHoveredObjectChanged;

  /// @brief Field m_LineType, offset 0x278, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineType, put = __cordl_internal_set_m_LineType))::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType m_LineType;

  /// @brief Field m_LocalPhysicsScene, offset 0x360, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalPhysicsScene, put = __cordl_internal_set_m_LocalPhysicsScene))::UnityEngine::PhysicsScene m_LocalPhysicsScene;

  /// @brief Field m_MaxRaycastDistance, offset 0x280, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxRaycastDistance, put = __cordl_internal_set_m_MaxRaycastDistance)) float_t m_MaxRaycastDistance;

  /// @brief Field m_PassedHoverTimeToSelect, offset 0x314, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PassedHoverTimeToSelect, put = __cordl_internal_set_m_PassedHoverTimeToSelect)) bool m_PassedHoverTimeToSelect;

  /// @brief Field m_PassedTimeToAutoDeselect, offset 0x31c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PassedTimeToAutoDeselect, put = __cordl_internal_set_m_PassedTimeToAutoDeselect)) bool m_PassedTimeToAutoDeselect;

  /// @brief Field m_RayOriginTransform, offset 0x288, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RayOriginTransform, put = __cordl_internal_set_m_RayOriginTransform))::UnityW<::UnityEngine::Transform> m_RayOriginTransform;

  /// @brief Field m_RaycastHitComparer, offset 0x330, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastHitComparer,
                      put = __cordl_internal_set_m_RaycastHitComparer))::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer* m_RaycastHitComparer;

  /// @brief Field m_RaycastHitEndpointIndex, offset 0x344, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RaycastHitEndpointIndex, put = __cordl_internal_set_m_RaycastHitEndpointIndex)) int32_t m_RaycastHitEndpointIndex;

  /// @brief Field m_RaycastHits, offset 0x320, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastHits, put = __cordl_internal_set_m_RaycastHits))::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> m_RaycastHits;

  /// @brief Field m_RaycastHitsCount, offset 0x328, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RaycastHitsCount, put = __cordl_internal_set_m_RaycastHitsCount)) int32_t m_RaycastHitsCount;

  /// @brief Field m_RaycastMask, offset 0x2c4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RaycastMask, put = __cordl_internal_set_m_RaycastMask))::UnityEngine::LayerMask m_RaycastMask;

  /// @brief Field m_RaycastSnapVolumeInteraction, offset 0x2cc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RaycastSnapVolumeInteraction,
                      put = __cordl_internal_set_m_RaycastSnapVolumeInteraction))::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction m_RaycastSnapVolumeInteraction;

  /// @brief Field m_RaycastTriggerInteraction, offset 0x2c8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RaycastTriggerInteraction,
                      put = __cordl_internal_set_m_RaycastTriggerInteraction))::UnityEngine::QueryTriggerInteraction m_RaycastTriggerInteraction;

  /// @brief Field m_ReferenceFrame, offset 0x290, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReferenceFrame, put = __cordl_internal_set_m_ReferenceFrame))::UnityW<::UnityEngine::Transform> m_ReferenceFrame;

  /// @brief Field m_RegisteredUIInteractorCache, offset 0x368, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegisteredUIInteractorCache,
                      put = __cordl_internal_set_m_RegisteredUIInteractorCache))::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* m_RegisteredUIInteractorCache;

  /// @brief Field m_RotateSpeed, offset 0x2e4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RotateSpeed, put = __cordl_internal_set_m_RotateSpeed)) float_t m_RotateSpeed;

  /// @brief Field m_SampleFrequency, offset 0x2b8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SampleFrequency, put = __cordl_internal_set_m_SampleFrequency)) int32_t m_SampleFrequency;

  /// @brief Field m_SamplePoints, offset 0x338, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplePoints,
                      put = __cordl_internal_set_m_SamplePoints))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* m_SamplePoints;

  /// @brief Field m_SamplePointsFrameUpdated, offset 0x340, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SamplePointsFrameUpdated, put = __cordl_internal_set_m_SamplePointsFrameUpdated)) int32_t m_SamplePointsFrameUpdated;

  /// @brief Field m_SphereCastRadius, offset 0x2c0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SphereCastRadius, put = __cordl_internal_set_m_SphereCastRadius)) float_t m_SphereCastRadius;

  /// @brief Field m_TimeToAutoDeselect, offset 0x2dc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimeToAutoDeselect, put = __cordl_internal_set_m_TimeToAutoDeselect)) float_t m_TimeToAutoDeselect;

  /// @brief Field m_TranslateSpeed, offset 0x2e8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TranslateSpeed, put = __cordl_internal_set_m_TranslateSpeed)) float_t m_TranslateSpeed;

  /// @brief Field m_UIRaycastHitEndpointIndex, offset 0x348, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UIRaycastHitEndpointIndex, put = __cordl_internal_set_m_UIRaycastHitEndpointIndex)) int32_t m_UIRaycastHitEndpointIndex;

  /// @brief Field m_UseForceGrab, offset 0x2e2, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseForceGrab, put = __cordl_internal_set_m_UseForceGrab)) bool m_UseForceGrab;

  /// @brief Field m_ValidTargets, offset 0x308, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValidTargets,
                      put = __cordl_internal_set_m_ValidTargets))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* m_ValidTargets;

  /// @brief Field m_Velocity, offset 0x298, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Velocity, put = __cordl_internal_set_m_Velocity)) float_t m_Velocity;

  __declspec(property(get = get_maxRaycastDistance, put = set_maxRaycastDistance)) float_t maxRaycastDistance;

  __declspec(property(get = get_originalAttachTransform, put = set_originalAttachTransform))::UnityW<::UnityEngine::Transform> originalAttachTransform;

  __declspec(property(get = get_rayOriginTransform, put = set_rayOriginTransform))::UnityW<::UnityEngine::Transform> rayOriginTransform;

  __declspec(property(get = get_raycastMask, put = set_raycastMask))::UnityEngine::LayerMask raycastMask;

  __declspec(property(get = get_raycastSnapVolumeInteraction,
                      put = set_raycastSnapVolumeInteraction))::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction raycastSnapVolumeInteraction;

  __declspec(property(get = get_raycastTriggerInteraction, put = set_raycastTriggerInteraction))::UnityEngine::QueryTriggerInteraction raycastTriggerInteraction;

  __declspec(property(get = get_referenceFrame, put = set_referenceFrame))::UnityW<::UnityEngine::Transform> referenceFrame;

  __declspec(property(get = get_rotateSpeed, put = set_rotateSpeed)) float_t rotateSpeed;

  /// @brief Field s_Results, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Results, put = setStaticF_s_Results))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* s_Results;

  /// @brief Field s_ScratchControlPoints, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ScratchControlPoints,
                             put = setStaticF_s_ScratchControlPoints))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_ScratchControlPoints;

  /// @brief Field s_ScratchSamplePoints, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_ScratchSamplePoints,
               put = setStaticF_s_ScratchSamplePoints))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* s_ScratchSamplePoints;

  __declspec(property(get = get_sampleFrequency, put = set_sampleFrequency)) int32_t sampleFrequency;

  __declspec(property(get = get_sphereCastRadius, put = set_sphereCastRadius)) float_t sphereCastRadius;

  __declspec(property(get = get_timeToAutoDeselect, put = set_timeToAutoDeselect)) float_t timeToAutoDeselect;

  __declspec(property(get = get_translateSpeed, put = set_translateSpeed)) float_t translateSpeed;

  __declspec(property(get = get_useForceGrab, put = set_useForceGrab)) bool useForceGrab;

  __declspec(property(get = get_velocity, put = set_velocity)) float_t velocity;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::ILineRenderable"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::ILineRenderable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*() noexcept;

  /// @brief Method Awake, addr 0x2cef53c, size 0xac, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateProjectileParameters, addr 0x2cf9674, size 0x3f4, virtual false, abstract: false, final false
  inline void CalculateProjectileParameters(ByRef<::UnityEngine::Vector3> initialPosition, ByRef<::UnityEngine::Vector3> initialVelocity, ByRef<::UnityEngine::Vector3> constantAcceleration,
                                            ByRef<float_t> flightTime);

  /// @brief Method CanHover, addr 0x2cfb22c, size 0x3c, virtual true, abstract: false, final false
  inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method CanHover, addr 0x2cfb50c, size 0x10, virtual true, abstract: false, final false
  inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method CanSelect, addr 0x2cfb268, size 0x98, virtual true, abstract: false, final false
  inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method CanSelect, addr 0x2cfb51c, size 0x10, virtual true, abstract: false, final false
  inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method CheckCollidersBetweenPoints, addr 0x2cfaa9c, size 0x480, virtual false, abstract: false, final false
  inline void CheckCollidersBetweenPoints(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to);

  /// @brief Method CreateBezierCurve, addr 0x2cf8a08, size 0x2f4, virtual false, abstract: false, final false
  inline void CreateBezierCurve(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* samplePoints, int32_t endSamplePointIndex,
                                ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadraticControlPoints);

  /// @brief Method CreateRayOrigin, addr 0x2cf7550, size 0x258, virtual false, abstract: false, final false
  inline void CreateRayOrigin();

  /// @brief Method CreateSamplePointsListsIfNecessary, addr 0x2cf72a8, size 0x138, virtual false, abstract: false, final false
  inline void CreateSamplePointsListsIfNecessary();

  /// @brief Method DrawQuadraticBezierGizmo, addr 0x2cf7db0, size 0x20c, virtual false, abstract: false, final false
  static inline void DrawQuadraticBezierGizmo(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);

  /// @brief Method ElevateQuadraticToCubicBezier, addr 0x2cf8cfc, size 0x80, virtual false, abstract: false, final false
  static inline void ElevateQuadraticToCubicBezier(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ByRef<::UnityEngine::Vector3> c0, ByRef<::UnityEngine::Vector3> c1,
                                                   ByRef<::UnityEngine::Vector3> c2, ByRef<::UnityEngine::Vector3> c3);

  /// @brief Method EnsureCapacity, addr 0x2cf8574, size 0x68, virtual false, abstract: false, final false
  static inline void EnsureCapacity(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> linePoints, int32_t numPoints);

  /// @brief Method FilterTriggerColliders, addr 0x2cfaf1c, size 0x140, virtual false, abstract: false, final false
  static inline int32_t FilterTriggerColliders(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* interactionManager,
                                               ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits, int32_t count,
                                               ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>, bool>* removeRule);

  /// @brief Method FindReferenceFrame, addr 0x2cf73e0, size 0x170, virtual false, abstract: false, final false
  inline void FindReferenceFrame();

  /// @brief Method GetCurrentRaycastHit, addr 0x2cfb4f0, size 0x1c, virtual false, abstract: false, final false
  inline bool GetCurrentRaycastHit(ByRef<::UnityEngine::RaycastHit> raycastHit);

  /// @brief Method GetHoverTimeToSelect, addr 0x2cfb300, size 0x8, virtual true, abstract: false, final false
  inline float_t GetHoverTimeToSelect(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method GetLinePoints, addr 0x2cf7fdc, size 0x598, virtual true, abstract: false, final true
  inline bool GetLinePoints(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> linePoints, ByRef<int32_t> numPoints);

  /// @brief Method GetLinePoints, addr 0x2cfb4e8, size 0x4, virtual false, abstract: false, final false
  inline bool GetLinePoints(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> linePoints, ByRef<int32_t> numPoints, int32_t _);

  /// @brief Method GetTimeToAutoDeselect, addr 0x2cfb308, size 0x8, virtual true, abstract: false, final false
  inline float_t GetTimeToAutoDeselect(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method GetValidTargets, addr 0x2cfa6f8, size 0x3a4, virtual true, abstract: false, final false
  inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets);

  /// @brief Method IsOverUIGameObject, addr 0x2cf7fbc, size 0x20, virtual false, abstract: false, final false
  inline bool IsOverUIGameObject();

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor* New_ctor();

  /// @brief Method OnDisable, addr 0x2cf77e4, size 0x78, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrawGizmosSelected, addr 0x2cf785c, size 0x51c, virtual true, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnEnable, addr 0x2cf77a8, size 0x3c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSelectEntering, addr 0x2cfb310, size 0xdc, virtual true, abstract: false, final false
  inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectExiting, addr 0x2cfb3ec, size 0x44, virtual true, abstract: false, final false
  inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method OnValidate, addr 0x2cf7228, size 0x80, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method PreprocessInteractor, addr 0x2cef858, size 0x24c, virtual true, abstract: false, final false
  inline void PreprocessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessInteractor, addr 0x2cfa0c4, size 0x634, virtual true, abstract: false, final false
  inline void ProcessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RemoveAt(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t count);

  /// @brief Method RestoreAttachTransform, addr 0x2cfb430, size 0x74, virtual false, abstract: false, final false
  inline void RestoreAttachTransform();

  /// @brief Method RotateAnchor, addr 0x2cf9c54, size 0x1bc, virtual true, abstract: false, final false
  inline void RotateAnchor(::UnityEngine::Transform* anchor, ::UnityEngine::Vector2 direction, ::UnityEngine::Quaternion referenceRotation);

  /// @brief Method RotateAnchor, addr 0x2cf9ad0, size 0x184, virtual true, abstract: false, final false
  inline void RotateAnchor(::UnityEngine::Transform* anchor, float_t directionAmount);

  /// @brief Method SampleCubicBezierPoint, addr 0x2cf8d7c, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SampleCubicBezierPoint(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3, float_t t);

  /// @brief Method SampleProjectilePoint, addr 0x2cf9628, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SampleProjectilePoint(::UnityEngine::Vector3 initialPosition, ::UnityEngine::Vector3 initialVelocity, ::UnityEngine::Vector3 constantAcceleration, float_t time);

  /// @brief Method SampleQuadraticBezierPoint, addr 0x2cf95c4, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SampleQuadraticBezierPoint(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, float_t t);

  /// @brief Method SanitizeSampleFrequency, addr 0x2cf6ba4, size 0x10, virtual false, abstract: false, final false
  static inline int32_t SanitizeSampleFrequency(int32_t value);

  /// @brief Method TranslateAnchor, addr 0x2cf9e10, size 0x19c, virtual true, abstract: false, final false
  inline void TranslateAnchor(::UnityEngine::Transform* rayOrigin, ::UnityEngine::Transform* anchor, float_t directionAmount);

  /// @brief Method TryGetCurrent3DRaycastHit, addr 0x2cf7d78, size 0x1c, virtual false, abstract: false, final false
  inline bool TryGetCurrent3DRaycastHit(ByRef<::UnityEngine::RaycastHit> raycastHit);

  /// @brief Method TryGetCurrent3DRaycastHit, addr 0x2cf92a0, size 0x6c, virtual false, abstract: false, final false
  inline bool TryGetCurrent3DRaycastHit(ByRef<::UnityEngine::RaycastHit> raycastHit, ByRef<int32_t> raycastEndpointIndex);

  /// @brief Method TryGetCurrentRaycast, addr 0x2cf8e14, size 0x1e0, virtual false, abstract: false, final false
  inline bool TryGetCurrentRaycast(ByRef<::System::Nullable_1<::UnityEngine::RaycastHit>> raycastHit, ByRef<int32_t> raycastHitIndex,
                                   ByRef<::System::Nullable_1<::UnityEngine::EventSystems::RaycastResult>> uiRaycastHit, ByRef<int32_t> uiRaycastHitIndex, ByRef<bool> isUIHitClosest);

  /// @brief Method TryGetCurrentUIRaycastResult, addr 0x2cf7d94, size 0x1c, virtual false, abstract: false, final false
  inline bool TryGetCurrentUIRaycastResult(ByRef<::UnityEngine::EventSystems::RaycastResult> raycastResult);

  /// @brief Method TryGetCurrentUIRaycastResult, addr 0x2cf930c, size 0xcc, virtual false, abstract: false, final false
  inline bool TryGetCurrentUIRaycastResult(ByRef<::UnityEngine::EventSystems::RaycastResult> raycastResult, ByRef<int32_t> raycastEndpointIndex);

  /// @brief Method TryGetHitInfo, addr 0x2ceffe8, size 0x2bc, virtual true, abstract: false, final true
  inline bool TryGetHitInfo(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> normal, ByRef<int32_t> positionInLine, ByRef<bool> isValidTarget);

  /// @brief Method TryGetHitInfo, addr 0x2cfb4ec, size 0x4, virtual false, abstract: false, final false
  inline bool TryGetHitInfo(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> normal, ByRef<int32_t> positionInLine, ByRef<bool> isValidTarget, int32_t _);

  /// @brief Method TryGetUIModel, addr 0x2cf9284, size 0x1c, virtual true, abstract: false, final true
  inline bool TryGetUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);

  /// @brief Method TryRead2DAxis, addr 0x2cf9a68, size 0x68, virtual false, abstract: false, final false
  static inline bool TryRead2DAxis(::UnityEngine::InputSystem::InputAction* action, ByRef<::UnityEngine::Vector2> output);

  /// @brief Method UpdateBezierControlPoints, addr 0x2cf93d8, size 0x1ec, virtual false, abstract: false, final false
  inline void UpdateBezierControlPoints();

  /// @brief Method UpdateRaycastHits, addr 0x2cf9fac, size 0xe8, virtual false, abstract: false, final false
  inline void UpdateRaycastHits();

  /// @brief Method UpdateSamplePoints, addr 0x2cf85dc, size 0x42c, virtual false, abstract: false, final false
  inline void UpdateSamplePoints(int32_t count, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* samplePoints);

  /// @brief Method UpdateSamplePointsIfNecessary, addr 0x2cf9238, size 0x4c, virtual false, abstract: false, final false
  inline void UpdateSamplePointsIfNecessary();

  /// @brief Method UpdateUIHitIndex, addr 0x2cfa094, size 0x30, virtual false, abstract: false, final false
  inline void UpdateUIHitIndex();

  /// @brief Method UpdateUIModel, addr 0x2cf8ff4, size 0x244, virtual true, abstract: false, final false
  inline void UpdateUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*& __cordl_internal_get__currentNearestValidTarget_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*> const& __cordl_internal_get__currentNearestValidTarget_k__BackingField() const;

  constexpr float_t const& __cordl_internal_get_m_Acceleration() const;

  constexpr float_t& __cordl_internal_get_m_Acceleration();

  constexpr float_t const& __cordl_internal_get_m_AdditionalFlightTime() const;

  constexpr float_t& __cordl_internal_get_m_AdditionalFlightTime();

  constexpr float_t const& __cordl_internal_get_m_AdditionalGroundHeight() const;

  constexpr float_t& __cordl_internal_get_m_AdditionalGroundHeight();

  constexpr bool const& __cordl_internal_get_m_AllowAnchorControl() const;

  constexpr bool& __cordl_internal_get_m_AllowAnchorControl();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_AnchorRotateReferenceFrame() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_AnchorRotateReferenceFrame();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode const& __cordl_internal_get_m_AnchorRotationMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode& __cordl_internal_get_m_AnchorRotationMode();

  constexpr bool const& __cordl_internal_get_m_AutoDeselect() const;

  constexpr bool& __cordl_internal_get_m_AutoDeselect();

  constexpr bool const& __cordl_internal_get_m_BlendVisualLinePoints() const;

  constexpr bool& __cordl_internal_get_m_BlendVisualLinePoints();

  constexpr float_t const& __cordl_internal_get_m_ControlPointDistance() const;

  constexpr float_t& __cordl_internal_get_m_ControlPointDistance();

  constexpr float_t const& __cordl_internal_get_m_ControlPointHeight() const;

  constexpr float_t& __cordl_internal_get_m_ControlPointHeight();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_ControlPoints() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_ControlPoints();

  constexpr bool const& __cordl_internal_get_m_EnableUIInteraction() const;

  constexpr bool& __cordl_internal_get_m_EnableUIInteraction();

  constexpr float_t const& __cordl_internal_get_m_EndPointDistance() const;

  constexpr float_t& __cordl_internal_get_m_EndPointDistance();

  constexpr float_t const& __cordl_internal_get_m_EndPointHeight() const;

  constexpr float_t& __cordl_internal_get_m_EndPointHeight();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_HitChordControlPoints() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_HitChordControlPoints();

  constexpr bool const& __cordl_internal_get_m_HitClosestOnly() const;

  constexpr bool& __cordl_internal_get_m_HitClosestOnly();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType const& __cordl_internal_get_m_HitDetectionType() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType& __cordl_internal_get_m_HitDetectionType();

  constexpr float_t const& __cordl_internal_get_m_HoverTimeToSelect() const;

  constexpr float_t& __cordl_internal_get_m_HoverTimeToSelect();

  constexpr bool const& __cordl_internal_get_m_HoverToSelect() const;

  constexpr bool& __cordl_internal_get_m_HoverToSelect();

  constexpr float_t const& __cordl_internal_get_m_LastTimeAutoSelected() const;

  constexpr float_t& __cordl_internal_get_m_LastTimeAutoSelected();

  constexpr float_t const& __cordl_internal_get_m_LastTimeHoveredObjectChanged() const;

  constexpr float_t& __cordl_internal_get_m_LastTimeHoveredObjectChanged();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType const& __cordl_internal_get_m_LineType() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType& __cordl_internal_get_m_LineType();

  constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

  constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene();

  constexpr float_t const& __cordl_internal_get_m_MaxRaycastDistance() const;

  constexpr float_t& __cordl_internal_get_m_MaxRaycastDistance();

  constexpr bool const& __cordl_internal_get_m_PassedHoverTimeToSelect() const;

  constexpr bool& __cordl_internal_get_m_PassedHoverTimeToSelect();

  constexpr bool const& __cordl_internal_get_m_PassedTimeToAutoDeselect() const;

  constexpr bool& __cordl_internal_get_m_PassedTimeToAutoDeselect();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_RayOriginTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_RayOriginTransform();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer*& __cordl_internal_get_m_RaycastHitComparer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer*> const& __cordl_internal_get_m_RaycastHitComparer() const;

  constexpr int32_t const& __cordl_internal_get_m_RaycastHitEndpointIndex() const;

  constexpr int32_t& __cordl_internal_get_m_RaycastHitEndpointIndex();

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> const& __cordl_internal_get_m_RaycastHits() const;

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>& __cordl_internal_get_m_RaycastHits();

  constexpr int32_t const& __cordl_internal_get_m_RaycastHitsCount() const;

  constexpr int32_t& __cordl_internal_get_m_RaycastHitsCount();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_RaycastMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_RaycastMask();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction const& __cordl_internal_get_m_RaycastSnapVolumeInteraction() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction& __cordl_internal_get_m_RaycastSnapVolumeInteraction();

  constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_m_RaycastTriggerInteraction() const;

  constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_m_RaycastTriggerInteraction();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ReferenceFrame() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ReferenceFrame();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*& __cordl_internal_get_m_RegisteredUIInteractorCache();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*> const& __cordl_internal_get_m_RegisteredUIInteractorCache() const;

  constexpr float_t const& __cordl_internal_get_m_RotateSpeed() const;

  constexpr float_t& __cordl_internal_get_m_RotateSpeed();

  constexpr int32_t const& __cordl_internal_get_m_SampleFrequency() const;

  constexpr int32_t& __cordl_internal_get_m_SampleFrequency();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*& __cordl_internal_get_m_SamplePoints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>*> const&
  __cordl_internal_get_m_SamplePoints() const;

  constexpr int32_t const& __cordl_internal_get_m_SamplePointsFrameUpdated() const;

  constexpr int32_t& __cordl_internal_get_m_SamplePointsFrameUpdated();

  constexpr float_t const& __cordl_internal_get_m_SphereCastRadius() const;

  constexpr float_t& __cordl_internal_get_m_SphereCastRadius();

  constexpr float_t const& __cordl_internal_get_m_TimeToAutoDeselect() const;

  constexpr float_t& __cordl_internal_get_m_TimeToAutoDeselect();

  constexpr float_t const& __cordl_internal_get_m_TranslateSpeed() const;

  constexpr float_t& __cordl_internal_get_m_TranslateSpeed();

  constexpr int32_t const& __cordl_internal_get_m_UIRaycastHitEndpointIndex() const;

  constexpr int32_t& __cordl_internal_get_m_UIRaycastHitEndpointIndex();

  constexpr bool const& __cordl_internal_get_m_UseForceGrab() const;

  constexpr bool& __cordl_internal_get_m_UseForceGrab();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get_m_ValidTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const& __cordl_internal_get_m_ValidTargets() const;

  constexpr float_t const& __cordl_internal_get_m_Velocity() const;

  constexpr float_t& __cordl_internal_get_m_Velocity();

  constexpr void __cordl_internal_set__currentNearestValidTarget_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value);

  constexpr void __cordl_internal_set_m_Acceleration(float_t value);

  constexpr void __cordl_internal_set_m_AdditionalFlightTime(float_t value);

  constexpr void __cordl_internal_set_m_AdditionalGroundHeight(float_t value);

  constexpr void __cordl_internal_set_m_AllowAnchorControl(bool value);

  constexpr void __cordl_internal_set_m_AnchorRotateReferenceFrame(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_AnchorRotationMode(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode value);

  constexpr void __cordl_internal_set_m_AutoDeselect(bool value);

  constexpr void __cordl_internal_set_m_BlendVisualLinePoints(bool value);

  constexpr void __cordl_internal_set_m_ControlPointDistance(float_t value);

  constexpr void __cordl_internal_set_m_ControlPointHeight(float_t value);

  constexpr void __cordl_internal_set_m_ControlPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_EnableUIInteraction(bool value);

  constexpr void __cordl_internal_set_m_EndPointDistance(float_t value);

  constexpr void __cordl_internal_set_m_EndPointHeight(float_t value);

  constexpr void __cordl_internal_set_m_HitChordControlPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_HitClosestOnly(bool value);

  constexpr void __cordl_internal_set_m_HitDetectionType(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType value);

  constexpr void __cordl_internal_set_m_HoverTimeToSelect(float_t value);

  constexpr void __cordl_internal_set_m_HoverToSelect(bool value);

  constexpr void __cordl_internal_set_m_LastTimeAutoSelected(float_t value);

  constexpr void __cordl_internal_set_m_LastTimeHoveredObjectChanged(float_t value);

  constexpr void __cordl_internal_set_m_LineType(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType value);

  constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene value);

  constexpr void __cordl_internal_set_m_MaxRaycastDistance(float_t value);

  constexpr void __cordl_internal_set_m_PassedHoverTimeToSelect(bool value);

  constexpr void __cordl_internal_set_m_PassedTimeToAutoDeselect(bool value);

  constexpr void __cordl_internal_set_m_RayOriginTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_RaycastHitComparer(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer* value);

  constexpr void __cordl_internal_set_m_RaycastHitEndpointIndex(int32_t value);

  constexpr void __cordl_internal_set_m_RaycastHits(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> value);

  constexpr void __cordl_internal_set_m_RaycastHitsCount(int32_t value);

  constexpr void __cordl_internal_set_m_RaycastMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_RaycastSnapVolumeInteraction(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction value);

  constexpr void __cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction value);

  constexpr void __cordl_internal_set_m_ReferenceFrame(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_RegisteredUIInteractorCache(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* value);

  constexpr void __cordl_internal_set_m_RotateSpeed(float_t value);

  constexpr void __cordl_internal_set_m_SampleFrequency(int32_t value);

  constexpr void __cordl_internal_set_m_SamplePoints(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* value);

  constexpr void __cordl_internal_set_m_SamplePointsFrameUpdated(int32_t value);

  constexpr void __cordl_internal_set_m_SphereCastRadius(float_t value);

  constexpr void __cordl_internal_set_m_TimeToAutoDeselect(float_t value);

  constexpr void __cordl_internal_set_m_TranslateSpeed(float_t value);

  constexpr void __cordl_internal_set_m_UIRaycastHitEndpointIndex(int32_t value);

  constexpr void __cordl_internal_set_m_UseForceGrab(bool value);

  constexpr void __cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  constexpr void __cordl_internal_set_m_Velocity(float_t value);

  /// @brief Method .ctor, addr 0x2cf0640, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* getStaticF_s_Results();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_ScratchControlPoints();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* getStaticF_s_ScratchSamplePoints();

  /// @brief Method get_Acceleration, addr 0x2cfb4b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Acceleration();

  /// @brief Method get_AdditionalFlightTime, addr 0x2cfb4c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_AdditionalFlightTime();

  /// @brief Method get_Angle, addr 0x2cfb4d4, size 0x4, virtual false, abstract: false, final false
  inline float_t get_Angle();

  /// @brief Method get_Velocity, addr 0x2cfb4a4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Velocity();

  /// @brief Method get_acceleration, addr 0x2cf6ac0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_acceleration();

  /// @brief Method get_additionalFlightTime, addr 0x2cf6ae0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_additionalFlightTime();

  /// @brief Method get_additionalGroundHeight, addr 0x2cf6ad0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_additionalGroundHeight();

  /// @brief Method get_allowAnchorControl, addr 0x2cf6c98, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowAnchorControl();

  /// @brief Method get_anchorRotateReferenceFrame, addr 0x2cf6ce0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_anchorRotateReferenceFrame();

  /// @brief Method get_anchorRotationMode, addr 0x2cf6cf0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode get_anchorRotationMode();

  /// @brief Method get_angle, addr 0x2cf6d00, size 0x46c, virtual false, abstract: false, final false
  inline float_t get_angle();

  /// @brief Method get_autoDeselect, addr 0x2cf6c3c, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoDeselect();

  /// @brief Method get_blendVisualLinePoints, addr 0x2cf6a6c, size 0x8, virtual false, abstract: false, final false
  inline bool get_blendVisualLinePoints();

  /// @brief Method get_closestAnyHitIndex, addr 0x2cf71fc, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_closestAnyHitIndex();

  /// @brief Method get_controlPointDistance, addr 0x2cf6b10, size 0x8, virtual false, abstract: false, final false
  inline float_t get_controlPointDistance();

  /// @brief Method get_controlPointHeight, addr 0x2cf6b20, size 0x8, virtual false, abstract: false, final false
  inline float_t get_controlPointHeight();

  /// @brief Method get_currentNearestValidTarget, addr 0x2cf71ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* get_currentNearestValidTarget();

  /// @brief Method get_effectiveRayOrigin, addr 0x2cf716c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_effectiveRayOrigin();

  /// @brief Method get_enableUIInteraction, addr 0x2cf6c60, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableUIInteraction();

  /// @brief Method get_endPointDistance, addr 0x2cf6af0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_endPointDistance();

  /// @brief Method get_endPointHeight, addr 0x2cf6b00, size 0x8, virtual false, abstract: false, final false
  inline float_t get_endPointHeight();

  /// @brief Method get_hitClosestOnly, addr 0x2cf6c04, size 0x8, virtual false, abstract: false, final false
  inline bool get_hitClosestOnly();

  /// @brief Method get_hitDetectionType, addr 0x2cf6bb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType get_hitDetectionType();

  /// @brief Method get_hoverTimeToSelect, addr 0x2cf6c2c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hoverTimeToSelect();

  /// @brief Method get_hoverToSelect, addr 0x2cf6c18, size 0x8, virtual false, abstract: false, final false
  inline bool get_hoverToSelect();

  /// @brief Method get_isSelectActive, addr 0x2cfb20c, size 0x20, virtual true, abstract: false, final false
  inline bool get_isSelectActive();

  /// @brief Method get_lineType, addr 0x2cf6a5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType get_lineType();

  /// @brief Method get_maxRaycastDistance, addr 0x2cf6a80, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxRaycastDistance();

  /// @brief Method get_originalAttachTransform, addr 0x2cfb4d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_originalAttachTransform();

  /// @brief Method get_rayOriginTransform, addr 0x2cf6a90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_rayOriginTransform();

  /// @brief Method get_raycastMask, addr 0x2cf6bd4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_raycastMask();

  /// @brief Method get_raycastSnapVolumeInteraction, addr 0x2cf6bf4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction get_raycastSnapVolumeInteraction();

  /// @brief Method get_raycastTriggerInteraction, addr 0x2cf6be4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::QueryTriggerInteraction get_raycastTriggerInteraction();

  /// @brief Method get_referenceFrame, addr 0x2cf6aa0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_referenceFrame();

  /// @brief Method get_rotateSpeed, addr 0x2cf6cc0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotateSpeed();

  /// @brief Method get_sampleFrequency, addr 0x2cf6b30, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sampleFrequency();

  /// @brief Method get_sphereCastRadius, addr 0x2cf6bc4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sphereCastRadius();

  /// @brief Method get_timeToAutoDeselect, addr 0x2cf6c50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timeToAutoDeselect();

  /// @brief Method get_translateSpeed, addr 0x2cf6cd0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_translateSpeed();

  /// @brief Method get_useForceGrab, addr 0x2cf6cac, size 0x8, virtual false, abstract: false, final false
  inline bool get_useForceGrab();

  /// @brief Method get_velocity, addr 0x2cf6ab0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_velocity();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::ILineRenderable"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::ILineRenderable* i___UnityEngine__XR__Interaction__Toolkit__ILineRenderable() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* i___UnityEngine__XR__Interaction__Toolkit__UI__IUIInteractor() noexcept;

  static inline void setStaticF_s_Results(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  static inline void setStaticF_s_ScratchControlPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_s_ScratchSamplePoints(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* value);

  /// @brief Method set_Acceleration, addr 0x2cfb4bc, size 0x8, virtual false, abstract: false, final false
  inline void set_Acceleration(float_t value);

  /// @brief Method set_AdditionalFlightTime, addr 0x2cfb4cc, size 0x8, virtual false, abstract: false, final false
  inline void set_AdditionalFlightTime(float_t value);

  /// @brief Method set_Velocity, addr 0x2cfb4ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Velocity(float_t value);

  /// @brief Method set_acceleration, addr 0x2cf6ac8, size 0x8, virtual false, abstract: false, final false
  inline void set_acceleration(float_t value);

  /// @brief Method set_additionalFlightTime, addr 0x2cf6ae8, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalFlightTime(float_t value);

  /// @brief Method set_additionalGroundHeight, addr 0x2cf6ad8, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalGroundHeight(float_t value);

  /// @brief Method set_allowAnchorControl, addr 0x2cf6ca0, size 0xc, virtual false, abstract: false, final false
  inline void set_allowAnchorControl(bool value);

  /// @brief Method set_anchorRotateReferenceFrame, addr 0x2cf6ce8, size 0x8, virtual false, abstract: false, final false
  inline void set_anchorRotateReferenceFrame(::UnityEngine::Transform* value);

  /// @brief Method set_anchorRotationMode, addr 0x2cf6cf8, size 0x8, virtual false, abstract: false, final false
  inline void set_anchorRotationMode(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode value);

  /// @brief Method set_autoDeselect, addr 0x2cf6c44, size 0xc, virtual false, abstract: false, final false
  inline void set_autoDeselect(bool value);

  /// @brief Method set_blendVisualLinePoints, addr 0x2cf6a74, size 0xc, virtual false, abstract: false, final false
  inline void set_blendVisualLinePoints(bool value);

  /// @brief Method set_controlPointDistance, addr 0x2cf6b18, size 0x8, virtual false, abstract: false, final false
  inline void set_controlPointDistance(float_t value);

  /// @brief Method set_controlPointHeight, addr 0x2cf6b28, size 0x8, virtual false, abstract: false, final false
  inline void set_controlPointHeight(float_t value);

  /// @brief Method set_currentNearestValidTarget, addr 0x2cf71f4, size 0x8, virtual false, abstract: false, final false
  inline void set_currentNearestValidTarget(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value);

  /// @brief Method set_enableUIInteraction, addr 0x2cf6c68, size 0x30, virtual false, abstract: false, final false
  inline void set_enableUIInteraction(bool value);

  /// @brief Method set_endPointDistance, addr 0x2cf6af8, size 0x8, virtual false, abstract: false, final false
  inline void set_endPointDistance(float_t value);

  /// @brief Method set_endPointHeight, addr 0x2cf6b08, size 0x8, virtual false, abstract: false, final false
  inline void set_endPointHeight(float_t value);

  /// @brief Method set_hitClosestOnly, addr 0x2cf6c0c, size 0xc, virtual false, abstract: false, final false
  inline void set_hitClosestOnly(bool value);

  /// @brief Method set_hitDetectionType, addr 0x2cf6bbc, size 0x8, virtual false, abstract: false, final false
  inline void set_hitDetectionType(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType value);

  /// @brief Method set_hoverTimeToSelect, addr 0x2cf6c34, size 0x8, virtual false, abstract: false, final false
  inline void set_hoverTimeToSelect(float_t value);

  /// @brief Method set_hoverToSelect, addr 0x2cf6c20, size 0xc, virtual false, abstract: false, final false
  inline void set_hoverToSelect(bool value);

  /// @brief Method set_lineType, addr 0x2cf6a64, size 0x8, virtual false, abstract: false, final false
  inline void set_lineType(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType value);

  /// @brief Method set_maxRaycastDistance, addr 0x2cf6a88, size 0x8, virtual false, abstract: false, final false
  inline void set_maxRaycastDistance(float_t value);

  /// @brief Method set_originalAttachTransform, addr 0x2cfb4e0, size 0x8, virtual false, abstract: false, final false
  inline void set_originalAttachTransform(::UnityEngine::Transform* value);

  /// @brief Method set_rayOriginTransform, addr 0x2cf6a98, size 0x8, virtual false, abstract: false, final false
  inline void set_rayOriginTransform(::UnityEngine::Transform* value);

  /// @brief Method set_raycastMask, addr 0x2cf6bdc, size 0x8, virtual false, abstract: false, final false
  inline void set_raycastMask(::UnityEngine::LayerMask value);

  /// @brief Method set_raycastSnapVolumeInteraction, addr 0x2cf6bfc, size 0x8, virtual false, abstract: false, final false
  inline void set_raycastSnapVolumeInteraction(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction value);

  /// @brief Method set_raycastTriggerInteraction, addr 0x2cf6bec, size 0x8, virtual false, abstract: false, final false
  inline void set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction value);

  /// @brief Method set_referenceFrame, addr 0x2cf6aa8, size 0x8, virtual false, abstract: false, final false
  inline void set_referenceFrame(::UnityEngine::Transform* value);

  /// @brief Method set_rotateSpeed, addr 0x2cf6cc8, size 0x8, virtual false, abstract: false, final false
  inline void set_rotateSpeed(float_t value);

  /// @brief Method set_sampleFrequency, addr 0x2cf6b38, size 0x6c, virtual false, abstract: false, final false
  inline void set_sampleFrequency(int32_t value);

  /// @brief Method set_sphereCastRadius, addr 0x2cf6bcc, size 0x8, virtual false, abstract: false, final false
  inline void set_sphereCastRadius(float_t value);

  /// @brief Method set_timeToAutoDeselect, addr 0x2cf6c58, size 0x8, virtual false, abstract: false, final false
  inline void set_timeToAutoDeselect(float_t value);

  /// @brief Method set_translateSpeed, addr 0x2cf6cd8, size 0x8, virtual false, abstract: false, final false
  inline void set_translateSpeed(float_t value);

  /// @brief Method set_useForceGrab, addr 0x2cf6cb4, size 0xc, virtual false, abstract: false, final false
  inline void set_useForceGrab(bool value);

  /// @brief Method set_velocity, addr 0x2cf6ab8, size 0x8, virtual false, abstract: false, final false
  inline void set_velocity(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRRayInteractor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRRayInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRRayInteractor(XRRayInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRRayInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRRayInteractor(XRRayInteractor const&) = delete;

  /// @brief Field m_LineType, offset: 0x278, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType ___m_LineType;

  /// @brief Field m_BlendVisualLinePoints, offset: 0x27c, size: 0x1, def value: None
  bool ___m_BlendVisualLinePoints;

  /// @brief Field m_MaxRaycastDistance, offset: 0x280, size: 0x4, def value: None
  float_t ___m_MaxRaycastDistance;

  /// @brief Field m_RayOriginTransform, offset: 0x288, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_RayOriginTransform;

  /// @brief Field m_ReferenceFrame, offset: 0x290, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_ReferenceFrame;

  /// @brief Field m_Velocity, offset: 0x298, size: 0x4, def value: None
  float_t ___m_Velocity;

  /// @brief Field m_Acceleration, offset: 0x29c, size: 0x4, def value: None
  float_t ___m_Acceleration;

  /// @brief Field m_AdditionalGroundHeight, offset: 0x2a0, size: 0x4, def value: None
  float_t ___m_AdditionalGroundHeight;

  /// @brief Field m_AdditionalFlightTime, offset: 0x2a4, size: 0x4, def value: None
  float_t ___m_AdditionalFlightTime;

  /// @brief Field m_EndPointDistance, offset: 0x2a8, size: 0x4, def value: None
  float_t ___m_EndPointDistance;

  /// @brief Field m_EndPointHeight, offset: 0x2ac, size: 0x4, def value: None
  float_t ___m_EndPointHeight;

  /// @brief Field m_ControlPointDistance, offset: 0x2b0, size: 0x4, def value: None
  float_t ___m_ControlPointDistance;

  /// @brief Field m_ControlPointHeight, offset: 0x2b4, size: 0x4, def value: None
  float_t ___m_ControlPointHeight;

  /// @brief Field m_SampleFrequency, offset: 0x2b8, size: 0x4, def value: None
  int32_t ___m_SampleFrequency;

  /// @brief Field m_HitDetectionType, offset: 0x2bc, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType ___m_HitDetectionType;

  /// @brief Field m_SphereCastRadius, offset: 0x2c0, size: 0x4, def value: None
  float_t ___m_SphereCastRadius;

  /// @brief Field m_RaycastMask, offset: 0x2c4, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_RaycastMask;

  /// @brief Field m_RaycastTriggerInteraction, offset: 0x2c8, size: 0x4, def value: None
  ::UnityEngine::QueryTriggerInteraction ___m_RaycastTriggerInteraction;

  /// @brief Field m_RaycastSnapVolumeInteraction, offset: 0x2cc, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction ___m_RaycastSnapVolumeInteraction;

  /// @brief Field m_HitClosestOnly, offset: 0x2d0, size: 0x1, def value: None
  bool ___m_HitClosestOnly;

  /// @brief Field m_HoverToSelect, offset: 0x2d1, size: 0x1, def value: None
  bool ___m_HoverToSelect;

  /// @brief Field m_HoverTimeToSelect, offset: 0x2d4, size: 0x4, def value: None
  float_t ___m_HoverTimeToSelect;

  /// @brief Field m_AutoDeselect, offset: 0x2d8, size: 0x1, def value: None
  bool ___m_AutoDeselect;

  /// @brief Field m_TimeToAutoDeselect, offset: 0x2dc, size: 0x4, def value: None
  float_t ___m_TimeToAutoDeselect;

  /// @brief Field m_EnableUIInteraction, offset: 0x2e0, size: 0x1, def value: None
  bool ___m_EnableUIInteraction;

  /// @brief Field m_AllowAnchorControl, offset: 0x2e1, size: 0x1, def value: None
  bool ___m_AllowAnchorControl;

  /// @brief Field m_UseForceGrab, offset: 0x2e2, size: 0x1, def value: None
  bool ___m_UseForceGrab;

  /// @brief Field m_RotateSpeed, offset: 0x2e4, size: 0x4, def value: None
  float_t ___m_RotateSpeed;

  /// @brief Field m_TranslateSpeed, offset: 0x2e8, size: 0x4, def value: None
  float_t ___m_TranslateSpeed;

  /// @brief Field m_AnchorRotateReferenceFrame, offset: 0x2f0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_AnchorRotateReferenceFrame;

  /// @brief Field m_AnchorRotationMode, offset: 0x2f8, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode ___m_AnchorRotationMode;

  /// @brief Field <currentNearestValidTarget>k__BackingField, offset: 0x300, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* ____currentNearestValidTarget_k__BackingField;

  /// @brief Field m_ValidTargets, offset: 0x308, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ___m_ValidTargets;

  /// @brief Field m_LastTimeHoveredObjectChanged, offset: 0x310, size: 0x4, def value: None
  float_t ___m_LastTimeHoveredObjectChanged;

  /// @brief Field m_PassedHoverTimeToSelect, offset: 0x314, size: 0x1, def value: None
  bool ___m_PassedHoverTimeToSelect;

  /// @brief Field m_LastTimeAutoSelected, offset: 0x318, size: 0x4, def value: None
  float_t ___m_LastTimeAutoSelected;

  /// @brief Field m_PassedTimeToAutoDeselect, offset: 0x31c, size: 0x1, def value: None
  bool ___m_PassedTimeToAutoDeselect;

  /// @brief Field m_RaycastHits, offset: 0x320, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> ___m_RaycastHits;

  /// @brief Field m_RaycastHitsCount, offset: 0x328, size: 0x4, def value: None
  int32_t ___m_RaycastHitsCount;

  /// @brief Field m_RaycastHitComparer, offset: 0x330, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer* ___m_RaycastHitComparer;

  /// @brief Field m_SamplePoints, offset: 0x338, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint>* ___m_SamplePoints;

  /// @brief Field m_SamplePointsFrameUpdated, offset: 0x340, size: 0x4, def value: None
  int32_t ___m_SamplePointsFrameUpdated;

  /// @brief Field m_RaycastHitEndpointIndex, offset: 0x344, size: 0x4, def value: None
  int32_t ___m_RaycastHitEndpointIndex;

  /// @brief Field m_UIRaycastHitEndpointIndex, offset: 0x348, size: 0x4, def value: None
  int32_t ___m_UIRaycastHitEndpointIndex;

  /// @brief Field m_ControlPoints, offset: 0x350, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_ControlPoints;

  /// @brief Field m_HitChordControlPoints, offset: 0x358, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_HitChordControlPoints;

  /// @brief Field m_LocalPhysicsScene, offset: 0x360, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene ___m_LocalPhysicsScene;

  /// @brief Field m_RegisteredUIInteractorCache, offset: 0x368, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* ___m_RegisteredUIInteractorCache;

  /// @brief Field k_MaxRaycastHits offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxRaycastHits{ static_cast<int32_t>(0xa) };

  /// @brief Field k_MaxSampleFrequency offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxSampleFrequency{ static_cast<int32_t>(0x64) };

  /// @brief Field k_MinSampleFrequency offset 0xffffffff size 0x4
  static constexpr int32_t k_MinSampleFrequency{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, 0x370>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_LineType) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_BlendVisualLinePoints) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_MaxRaycastDistance) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_RayOriginTransform) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_ReferenceFrame) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_Velocity) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_Acceleration) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_AdditionalGroundHeight) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_AdditionalFlightTime) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_EndPointDistance) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_EndPointHeight) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_ControlPointDistance) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_ControlPointHeight) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_SampleFrequency) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_HitDetectionType) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_SphereCastRadius) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_RaycastMask) == 0x2c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_RaycastTriggerInteraction) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_RaycastSnapVolumeInteraction) == 0x2cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_HitClosestOnly) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_HoverToSelect) == 0x2d1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_HoverTimeToSelect) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_AutoDeselect) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_TimeToAutoDeselect) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_EnableUIInteraction) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_AllowAnchorControl) == 0x2e1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_UseForceGrab) == 0x2e2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_RotateSpeed) == 0x2e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_TranslateSpeed) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_AnchorRotateReferenceFrame) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_AnchorRotationMode) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ____currentNearestValidTarget_k__BackingField) == 0x300, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_ValidTargets) == 0x308, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_LastTimeHoveredObjectChanged) == 0x310, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_PassedHoverTimeToSelect) == 0x314, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_LastTimeAutoSelected) == 0x318, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_PassedTimeToAutoDeselect) == 0x31c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_RaycastHits) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_RaycastHitsCount) == 0x328, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_RaycastHitComparer) == 0x330, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_SamplePoints) == 0x338, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_SamplePointsFrameUpdated) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_RaycastHitEndpointIndex) == 0x344, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_UIRaycastHitEndpointIndex) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_ControlPoints) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_HitChordControlPoints) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_LocalPhysicsScene) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor, ___m_RegisteredUIInteractorCache) == 0x368, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__AnchorRotationMode, "UnityEngine.XR.Interaction.Toolkit", "XRRayInteractor/AnchorRotationMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__HitDetectionType, "UnityEngine.XR.Interaction.Toolkit", "XRRayInteractor/HitDetectionType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__LineType, "UnityEngine.XR.Interaction.Toolkit", "XRRayInteractor/LineType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__QuerySnapVolumeInteraction, "UnityEngine.XR.Interaction.Toolkit", "XRRayInteractor/QuerySnapVolumeInteraction");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor*, "UnityEngine.XR.Interaction.Toolkit", "XRRayInteractor");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__RaycastHitComparer*, "UnityEngine.XR.Interaction.Toolkit", "XRRayInteractor/RaycastHitComparer");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor____c*, "UnityEngine.XR.Interaction.Toolkit", "XRRayInteractor/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRRayInteractor__SamplePoint, "UnityEngine.XR.Interaction.Toolkit", "XRRayInteractor/SamplePoint");
