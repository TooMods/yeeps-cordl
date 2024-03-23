#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LazyFollow)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::XR::CoreUtils::Bindings {
class BindingsGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
class QuaternionTweenableVariable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
class Vector3TweenableVariable;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class LazyFollow;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow);
// Type: UnityEngine.XR.Interaction.Toolkit.UI::LazyFollow
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::LazyFollow*
class CORDL_TYPE LazyFollow : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_BindingsGroup, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindingsGroup, put = __cordl_internal_set_m_BindingsGroup))::Unity::XR::CoreUtils::Bindings::BindingsGroup* m_BindingsGroup;

  /// @brief Field m_LastTargetPosition, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_m_LastTargetPosition, put = __cordl_internal_set_m_LastTargetPosition))::UnityEngine::Vector3 m_LastTargetPosition;

  /// @brief Field m_LastUpdateTime, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastUpdateTime, put = __cordl_internal_set_m_LastUpdateTime)) float_t m_LastUpdateTime;

  /// @brief Field m_MaxAngleAllowed, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxAngleAllowed, put = __cordl_internal_set_m_MaxAngleAllowed)) float_t m_MaxAngleAllowed;

  /// @brief Field m_MaxDistanceAllowed, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxDistanceAllowed, put = __cordl_internal_set_m_MaxDistanceAllowed)) float_t m_MaxDistanceAllowed;

  /// @brief Field m_MinAngleAllowed, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinAngleAllowed, put = __cordl_internal_set_m_MinAngleAllowed)) float_t m_MinAngleAllowed;

  /// @brief Field m_MinDistanceAllowed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinDistanceAllowed, put = __cordl_internal_set_m_MinDistanceAllowed)) float_t m_MinDistanceAllowed;

  /// @brief Field m_MovementSpeed, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MovementSpeed, put = __cordl_internal_set_m_MovementSpeed)) float_t m_MovementSpeed;

  /// @brief Field m_QuaternionTweenableVariable, offset 0x70, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_QuaternionTweenableVariable,
      put = __cordl_internal_set_m_QuaternionTweenableVariable))::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable* m_QuaternionTweenableVariable;

  /// @brief Field m_SnapOnEnable, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SnapOnEnable, put = __cordl_internal_set_m_SnapOnEnable)) bool m_SnapOnEnable;

  /// @brief Field m_Target, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Target, put = __cordl_internal_set_m_Target))::UnityW<::UnityEngine::Transform> m_Target;

  /// @brief Field m_TargetOffset, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_m_TargetOffset, put = __cordl_internal_set_m_TargetOffset))::UnityEngine::Vector3 m_TargetOffset;

  __declspec(property(get = get_m_TargetPosition))::UnityEngine::Vector3 m_TargetPosition;

  /// @brief Field m_TimeUntilThresholdReachesMaxAngle, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimeUntilThresholdReachesMaxAngle, put = __cordl_internal_set_m_TimeUntilThresholdReachesMaxAngle)) float_t m_TimeUntilThresholdReachesMaxAngle;

  /// @brief Field m_TimeUntilThresholdReachesMaxDistance, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimeUntilThresholdReachesMaxDistance,
                      put = __cordl_internal_set_m_TimeUntilThresholdReachesMaxDistance)) float_t m_TimeUntilThresholdReachesMaxDistance;

  /// @brief Field m_Vector3TweenableVariable, offset 0x68, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_Vector3TweenableVariable,
               put = __cordl_internal_set_m_Vector3TweenableVariable))::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable* m_Vector3TweenableVariable;

  __declspec(property(get = get_maxAngleAllowed, put = set_maxAngleAllowed)) float_t maxAngleAllowed;

  __declspec(property(get = get_maxDistanceAllowed, put = set_maxDistanceAllowed)) float_t maxDistanceAllowed;

  __declspec(property(get = get_minAngleAllowed, put = set_minAngleAllowed)) float_t minAngleAllowed;

  __declspec(property(get = get_minDistanceAllowed, put = set_minDistanceAllowed)) float_t minDistanceAllowed;

  __declspec(property(get = get_movementSpeed, put = set_movementSpeed)) float_t movementSpeed;

  __declspec(property(get = get_snapOnEnable, put = set_snapOnEnable)) bool snapOnEnable;

  __declspec(property(get = get_target, put = set_target))::UnityW<::UnityEngine::Transform> target;

  __declspec(property(get = get_targetOffset, put = set_targetOffset))::UnityEngine::Vector3 targetOffset;

  __declspec(property(get = get_timeUntilThresholdReachesMaxAngle, put = set_timeUntilThresholdReachesMaxAngle)) float_t timeUntilThresholdReachesMaxAngle;

  __declspec(property(get = get_timeUntilThresholdReachesMaxDistance, put = set_timeUntilThresholdReachesMaxDistance)) float_t timeUntilThresholdReachesMaxDistance;

  /// @brief Method Awake, addr 0x3024038, size 0x88, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x3024474, size 0x1bc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow* New_ctor();

  /// @brief Method OnDestroy, addr 0x302441c, size 0x58, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3024400, size 0x1c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x30240c0, size 0x340, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method TryGetThresholdTargetPosition, addr 0x3023d1c, size 0x13c, virtual true, abstract: false, final false
  inline bool TryGetThresholdTargetPosition(ByRef<::UnityEngine::Vector3> newTarget);

  /// @brief Method TryGetThresholdTargetRotation, addr 0x3023e58, size 0x1e0, virtual true, abstract: false, final false
  inline bool TryGetThresholdTargetRotation(ByRef<::UnityEngine::Quaternion> newTarget);

  /// @brief Method UpdatePosition, addr 0x3024630, size 0x58, virtual false, abstract: false, final false
  inline void UpdatePosition(::Unity::Mathematics::float3 position);

  /// @brief Method UpdateRotation, addr 0x3024688, size 0x50, virtual false, abstract: false, final false
  inline void UpdateRotation(::UnityEngine::Quaternion rotation);

  constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& __cordl_internal_get_m_BindingsGroup();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::BindingsGroup*> const& __cordl_internal_get_m_BindingsGroup() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastTargetPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastTargetPosition();

  constexpr float_t const& __cordl_internal_get_m_LastUpdateTime() const;

  constexpr float_t& __cordl_internal_get_m_LastUpdateTime();

  constexpr float_t const& __cordl_internal_get_m_MaxAngleAllowed() const;

  constexpr float_t& __cordl_internal_get_m_MaxAngleAllowed();

  constexpr float_t const& __cordl_internal_get_m_MaxDistanceAllowed() const;

  constexpr float_t& __cordl_internal_get_m_MaxDistanceAllowed();

  constexpr float_t const& __cordl_internal_get_m_MinAngleAllowed() const;

  constexpr float_t& __cordl_internal_get_m_MinAngleAllowed();

  constexpr float_t const& __cordl_internal_get_m_MinDistanceAllowed() const;

  constexpr float_t& __cordl_internal_get_m_MinDistanceAllowed();

  constexpr float_t const& __cordl_internal_get_m_MovementSpeed() const;

  constexpr float_t& __cordl_internal_get_m_MovementSpeed();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable*& __cordl_internal_get_m_QuaternionTweenableVariable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable*> const&
  __cordl_internal_get_m_QuaternionTweenableVariable() const;

  constexpr bool const& __cordl_internal_get_m_SnapOnEnable() const;

  constexpr bool& __cordl_internal_get_m_SnapOnEnable();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Target();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TargetOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TargetOffset();

  constexpr float_t const& __cordl_internal_get_m_TimeUntilThresholdReachesMaxAngle() const;

  constexpr float_t& __cordl_internal_get_m_TimeUntilThresholdReachesMaxAngle();

  constexpr float_t const& __cordl_internal_get_m_TimeUntilThresholdReachesMaxDistance() const;

  constexpr float_t& __cordl_internal_get_m_TimeUntilThresholdReachesMaxDistance();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable*& __cordl_internal_get_m_Vector3TweenableVariable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable*> const&
  __cordl_internal_get_m_Vector3TweenableVariable() const;

  constexpr void __cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup* value);

  constexpr void __cordl_internal_set_m_LastTargetPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_LastUpdateTime(float_t value);

  constexpr void __cordl_internal_set_m_MaxAngleAllowed(float_t value);

  constexpr void __cordl_internal_set_m_MaxDistanceAllowed(float_t value);

  constexpr void __cordl_internal_set_m_MinAngleAllowed(float_t value);

  constexpr void __cordl_internal_set_m_MinDistanceAllowed(float_t value);

  constexpr void __cordl_internal_set_m_MovementSpeed(float_t value);

  constexpr void __cordl_internal_set_m_QuaternionTweenableVariable(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable* value);

  constexpr void __cordl_internal_set_m_SnapOnEnable(bool value);

  constexpr void __cordl_internal_set_m_Target(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_TargetOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_TimeUntilThresholdReachesMaxAngle(float_t value);

  constexpr void __cordl_internal_set_m_TimeUntilThresholdReachesMaxDistance(float_t value);

  constexpr void __cordl_internal_set_m_Vector3TweenableVariable(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable* value);

  /// @brief Method .ctor, addr 0x30246d8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_m_TargetPosition, addr 0x3023cb8, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_m_TargetPosition();

  /// @brief Method get_maxAngleAllowed, addr 0x3023c88, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxAngleAllowed();

  /// @brief Method get_maxDistanceAllowed, addr 0x3023c68, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxDistanceAllowed();

  /// @brief Method get_minAngleAllowed, addr 0x3023c78, size 0x8, virtual false, abstract: false, final false
  inline float_t get_minAngleAllowed();

  /// @brief Method get_minDistanceAllowed, addr 0x3023c58, size 0x8, virtual false, abstract: false, final false
  inline float_t get_minDistanceAllowed();

  /// @brief Method get_movementSpeed, addr 0x3023c34, size 0x8, virtual false, abstract: false, final false
  inline float_t get_movementSpeed();

  /// @brief Method get_snapOnEnable, addr 0x3023c44, size 0x8, virtual false, abstract: false, final false
  inline bool get_snapOnEnable();

  /// @brief Method get_target, addr 0x3023c0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_target();

  /// @brief Method get_targetOffset, addr 0x3023c1c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetOffset();

  /// @brief Method get_timeUntilThresholdReachesMaxAngle, addr 0x3023ca8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timeUntilThresholdReachesMaxAngle();

  /// @brief Method get_timeUntilThresholdReachesMaxDistance, addr 0x3023c98, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timeUntilThresholdReachesMaxDistance();

  /// @brief Method set_maxAngleAllowed, addr 0x3023c90, size 0x8, virtual false, abstract: false, final false
  inline void set_maxAngleAllowed(float_t value);

  /// @brief Method set_maxDistanceAllowed, addr 0x3023c70, size 0x8, virtual false, abstract: false, final false
  inline void set_maxDistanceAllowed(float_t value);

  /// @brief Method set_minAngleAllowed, addr 0x3023c80, size 0x8, virtual false, abstract: false, final false
  inline void set_minAngleAllowed(float_t value);

  /// @brief Method set_minDistanceAllowed, addr 0x3023c60, size 0x8, virtual false, abstract: false, final false
  inline void set_minDistanceAllowed(float_t value);

  /// @brief Method set_movementSpeed, addr 0x3023c3c, size 0x8, virtual false, abstract: false, final false
  inline void set_movementSpeed(float_t value);

  /// @brief Method set_snapOnEnable, addr 0x3023c4c, size 0xc, virtual false, abstract: false, final false
  inline void set_snapOnEnable(bool value);

  /// @brief Method set_target, addr 0x3023c14, size 0x8, virtual false, abstract: false, final false
  inline void set_target(::UnityEngine::Transform* value);

  /// @brief Method set_targetOffset, addr 0x3023c28, size 0xc, virtual false, abstract: false, final false
  inline void set_targetOffset(::UnityEngine::Vector3 value);

  /// @brief Method set_timeUntilThresholdReachesMaxAngle, addr 0x3023cb0, size 0x8, virtual false, abstract: false, final false
  inline void set_timeUntilThresholdReachesMaxAngle(float_t value);

  /// @brief Method set_timeUntilThresholdReachesMaxDistance, addr 0x3023ca0, size 0x8, virtual false, abstract: false, final false
  inline void set_timeUntilThresholdReachesMaxDistance(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyFollow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LazyFollow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyFollow(LazyFollow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyFollow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyFollow(LazyFollow const&) = delete;

  /// @brief Field m_Target, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_Target;

  /// @brief Field m_TargetOffset, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_TargetOffset;

  /// @brief Field m_MovementSpeed, offset: 0x2c, size: 0x4, def value: None
  float_t ___m_MovementSpeed;

  /// @brief Field m_SnapOnEnable, offset: 0x30, size: 0x1, def value: None
  bool ___m_SnapOnEnable;

  /// @brief Field m_MinDistanceAllowed, offset: 0x34, size: 0x4, def value: None
  float_t ___m_MinDistanceAllowed;

  /// @brief Field m_MaxDistanceAllowed, offset: 0x38, size: 0x4, def value: None
  float_t ___m_MaxDistanceAllowed;

  /// @brief Field m_MinAngleAllowed, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_MinAngleAllowed;

  /// @brief Field m_MaxAngleAllowed, offset: 0x40, size: 0x4, def value: None
  float_t ___m_MaxAngleAllowed;

  /// @brief Field m_TimeUntilThresholdReachesMaxDistance, offset: 0x44, size: 0x4, def value: None
  float_t ___m_TimeUntilThresholdReachesMaxDistance;

  /// @brief Field m_TimeUntilThresholdReachesMaxAngle, offset: 0x48, size: 0x4, def value: None
  float_t ___m_TimeUntilThresholdReachesMaxAngle;

  /// @brief Field m_BindingsGroup, offset: 0x50, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::BindingsGroup* ___m_BindingsGroup;

  /// @brief Field m_LastTargetPosition, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_LastTargetPosition;

  /// @brief Field m_Vector3TweenableVariable, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable* ___m_Vector3TweenableVariable;

  /// @brief Field m_QuaternionTweenableVariable, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable* ___m_QuaternionTweenableVariable;

  /// @brief Field m_LastUpdateTime, offset: 0x78, size: 0x4, def value: None
  float_t ___m_LastUpdateTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_Target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_TargetOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_MovementSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_SnapOnEnable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_MinDistanceAllowed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_MaxDistanceAllowed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_MinAngleAllowed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_MaxAngleAllowed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_TimeUntilThresholdReachesMaxDistance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_TimeUntilThresholdReachesMaxAngle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_BindingsGroup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_LastTargetPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_Vector3TweenableVariable) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_QuaternionTweenableVariable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_LastUpdateTime) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*, "UnityEngine.XR.Interaction.Toolkit.UI", "LazyFollow");
