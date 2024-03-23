#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ConstrainedMoveProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TwoHandedGrabMoveProvider)
namespace UnityEngine::XR::Interaction::Toolkit {
class GrabMoveProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class TwoHandedGrabMoveProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider);
// Type: UnityEngine.XR.Interaction.Toolkit::TwoHandedGrabMoveProvider
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::TwoHandedGrabMoveProvider*
class CORDL_TYPE TwoHandedGrabMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider {
public:
  // Declarations
  __declspec(property(get = get_enableRotation, put = set_enableRotation)) bool enableRotation;

  __declspec(property(get = get_enableScaling, put = set_enableScaling)) bool enableScaling;

  __declspec(property(get = get_leftGrabMoveProvider, put = set_leftGrabMoveProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> leftGrabMoveProvider;

  /// @brief Field m_EnableRotation, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableRotation, put = __cordl_internal_set_m_EnableRotation)) bool m_EnableRotation;

  /// @brief Field m_EnableScaling, offset 0x7a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableScaling, put = __cordl_internal_set_m_EnableScaling)) bool m_EnableScaling;

  /// @brief Field m_InitialDistanceBetweenHands, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InitialDistanceBetweenHands, put = __cordl_internal_set_m_InitialDistanceBetweenHands)) float_t m_InitialDistanceBetweenHands;

  /// @brief Field m_InitialLeftToRightDirection, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get_m_InitialLeftToRightDirection, put = __cordl_internal_set_m_InitialLeftToRightDirection))::UnityEngine::Vector3 m_InitialLeftToRightDirection;

  /// @brief Field m_InitialLeftToRightOrthogonal, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get_m_InitialLeftToRightOrthogonal, put = __cordl_internal_set_m_InitialLeftToRightOrthogonal))::UnityEngine::Vector3 m_InitialLeftToRightOrthogonal;

  /// @brief Field m_InitialOriginScale, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InitialOriginScale, put = __cordl_internal_set_m_InitialOriginScale)) float_t m_InitialOriginScale;

  /// @brief Field m_InitialOriginYaw, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InitialOriginYaw, put = __cordl_internal_set_m_InitialOriginYaw)) float_t m_InitialOriginYaw;

  /// @brief Field m_IsMoving, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMoving, put = __cordl_internal_set_m_IsMoving)) bool m_IsMoving;

  /// @brief Field m_LeftGrabMoveProvider, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LeftGrabMoveProvider,
                      put = __cordl_internal_set_m_LeftGrabMoveProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> m_LeftGrabMoveProvider;

  /// @brief Field m_MaximumScale, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaximumScale, put = __cordl_internal_set_m_MaximumScale)) float_t m_MaximumScale;

  /// @brief Field m_MinimumScale, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinimumScale, put = __cordl_internal_set_m_MinimumScale)) float_t m_MinimumScale;

  /// @brief Field m_MoveFactor, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MoveFactor, put = __cordl_internal_set_m_MoveFactor)) float_t m_MoveFactor;

  /// @brief Field m_OverrideSharedSettingsOnInit, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OverrideSharedSettingsOnInit, put = __cordl_internal_set_m_OverrideSharedSettingsOnInit)) bool m_OverrideSharedSettingsOnInit;

  /// @brief Field m_PreviousMidpointBetweenControllers, offset 0x88, size 0xc
  __declspec(property(get = __cordl_internal_get_m_PreviousMidpointBetweenControllers,
                      put = __cordl_internal_set_m_PreviousMidpointBetweenControllers))::UnityEngine::Vector3 m_PreviousMidpointBetweenControllers;

  /// @brief Field m_RequireTwoHandsForTranslation, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequireTwoHandsForTranslation, put = __cordl_internal_set_m_RequireTwoHandsForTranslation)) bool m_RequireTwoHandsForTranslation;

  /// @brief Field m_RightGrabMoveProvider, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RightGrabMoveProvider,
                      put = __cordl_internal_set_m_RightGrabMoveProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> m_RightGrabMoveProvider;

  __declspec(property(get = get_maximumScale, put = set_maximumScale)) float_t maximumScale;

  __declspec(property(get = get_minimumScale, put = set_minimumScale)) float_t minimumScale;

  __declspec(property(get = get_moveFactor, put = set_moveFactor)) float_t moveFactor;

  __declspec(property(get = get_overrideSharedSettingsOnInit, put = set_overrideSharedSettingsOnInit)) bool overrideSharedSettingsOnInit;

  __declspec(property(get = get_requireTwoHandsForTranslation, put = set_requireTwoHandsForTranslation)) bool requireTwoHandsForTranslation;

  __declspec(property(get = get_rightGrabMoveProvider, put = set_rightGrabMoveProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> rightGrabMoveProvider;

  /// @brief Method ComputeDesiredMove, addr 0x3017440, size 0x340, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 ComputeDesiredMove(ByRef<bool> attemptingMove);

  static inline ::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider* New_ctor();

  /// @brief Method OnBeginLocomotion, addr 0x3017780, size 0x34c, virtual false, abstract: false, final false
  inline void OnBeginLocomotion(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* otherSystem);

  /// @brief Method OnDisable, addr 0x301733c, size 0x104, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3017154, size 0x1e8, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr bool const& __cordl_internal_get_m_EnableRotation() const;

  constexpr bool& __cordl_internal_get_m_EnableRotation();

  constexpr bool const& __cordl_internal_get_m_EnableScaling() const;

  constexpr bool& __cordl_internal_get_m_EnableScaling();

  constexpr float_t const& __cordl_internal_get_m_InitialDistanceBetweenHands() const;

  constexpr float_t& __cordl_internal_get_m_InitialDistanceBetweenHands();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InitialLeftToRightDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InitialLeftToRightDirection();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InitialLeftToRightOrthogonal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InitialLeftToRightOrthogonal();

  constexpr float_t const& __cordl_internal_get_m_InitialOriginScale() const;

  constexpr float_t& __cordl_internal_get_m_InitialOriginScale();

  constexpr float_t const& __cordl_internal_get_m_InitialOriginYaw() const;

  constexpr float_t& __cordl_internal_get_m_InitialOriginYaw();

  constexpr bool const& __cordl_internal_get_m_IsMoving() const;

  constexpr bool& __cordl_internal_get_m_IsMoving();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> const& __cordl_internal_get_m_LeftGrabMoveProvider() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider>& __cordl_internal_get_m_LeftGrabMoveProvider();

  constexpr float_t const& __cordl_internal_get_m_MaximumScale() const;

  constexpr float_t& __cordl_internal_get_m_MaximumScale();

  constexpr float_t const& __cordl_internal_get_m_MinimumScale() const;

  constexpr float_t& __cordl_internal_get_m_MinimumScale();

  constexpr float_t const& __cordl_internal_get_m_MoveFactor() const;

  constexpr float_t& __cordl_internal_get_m_MoveFactor();

  constexpr bool const& __cordl_internal_get_m_OverrideSharedSettingsOnInit() const;

  constexpr bool& __cordl_internal_get_m_OverrideSharedSettingsOnInit();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousMidpointBetweenControllers() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousMidpointBetweenControllers();

  constexpr bool const& __cordl_internal_get_m_RequireTwoHandsForTranslation() const;

  constexpr bool& __cordl_internal_get_m_RequireTwoHandsForTranslation();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> const& __cordl_internal_get_m_RightGrabMoveProvider() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider>& __cordl_internal_get_m_RightGrabMoveProvider();

  constexpr void __cordl_internal_set_m_EnableRotation(bool value);

  constexpr void __cordl_internal_set_m_EnableScaling(bool value);

  constexpr void __cordl_internal_set_m_InitialDistanceBetweenHands(float_t value);

  constexpr void __cordl_internal_set_m_InitialLeftToRightDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_InitialLeftToRightOrthogonal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_InitialOriginScale(float_t value);

  constexpr void __cordl_internal_set_m_InitialOriginYaw(float_t value);

  constexpr void __cordl_internal_set_m_IsMoving(bool value);

  constexpr void __cordl_internal_set_m_LeftGrabMoveProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> value);

  constexpr void __cordl_internal_set_m_MaximumScale(float_t value);

  constexpr void __cordl_internal_set_m_MinimumScale(float_t value);

  constexpr void __cordl_internal_set_m_MoveFactor(float_t value);

  constexpr void __cordl_internal_set_m_OverrideSharedSettingsOnInit(bool value);

  constexpr void __cordl_internal_set_m_PreviousMidpointBetweenControllers(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_RequireTwoHandsForTranslation(bool value);

  constexpr void __cordl_internal_set_m_RightGrabMoveProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> value);

  /// @brief Method .ctor, addr 0x3017acc, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enableRotation, addr 0x301710c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableRotation();

  /// @brief Method get_enableScaling, addr 0x3017120, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableScaling();

  /// @brief Method get_leftGrabMoveProvider, addr 0x30170b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> get_leftGrabMoveProvider();

  /// @brief Method get_maximumScale, addr 0x3017144, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maximumScale();

  /// @brief Method get_minimumScale, addr 0x3017134, size 0x8, virtual false, abstract: false, final false
  inline float_t get_minimumScale();

  /// @brief Method get_moveFactor, addr 0x30170e8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_moveFactor();

  /// @brief Method get_overrideSharedSettingsOnInit, addr 0x30170d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideSharedSettingsOnInit();

  /// @brief Method get_requireTwoHandsForTranslation, addr 0x30170f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_requireTwoHandsForTranslation();

  /// @brief Method get_rightGrabMoveProvider, addr 0x30170c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> get_rightGrabMoveProvider();

  /// @brief Method set_enableRotation, addr 0x3017114, size 0xc, virtual false, abstract: false, final false
  inline void set_enableRotation(bool value);

  /// @brief Method set_enableScaling, addr 0x3017128, size 0xc, virtual false, abstract: false, final false
  inline void set_enableScaling(bool value);

  /// @brief Method set_leftGrabMoveProvider, addr 0x30170bc, size 0x8, virtual false, abstract: false, final false
  inline void set_leftGrabMoveProvider(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider* value);

  /// @brief Method set_maximumScale, addr 0x301714c, size 0x8, virtual false, abstract: false, final false
  inline void set_maximumScale(float_t value);

  /// @brief Method set_minimumScale, addr 0x301713c, size 0x8, virtual false, abstract: false, final false
  inline void set_minimumScale(float_t value);

  /// @brief Method set_moveFactor, addr 0x30170f0, size 0x8, virtual false, abstract: false, final false
  inline void set_moveFactor(float_t value);

  /// @brief Method set_overrideSharedSettingsOnInit, addr 0x30170dc, size 0xc, virtual false, abstract: false, final false
  inline void set_overrideSharedSettingsOnInit(bool value);

  /// @brief Method set_requireTwoHandsForTranslation, addr 0x3017100, size 0xc, virtual false, abstract: false, final false
  inline void set_requireTwoHandsForTranslation(bool value);

  /// @brief Method set_rightGrabMoveProvider, addr 0x30170cc, size 0x8, virtual false, abstract: false, final false
  inline void set_rightGrabMoveProvider(::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TwoHandedGrabMoveProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TwoHandedGrabMoveProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TwoHandedGrabMoveProvider(TwoHandedGrabMoveProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TwoHandedGrabMoveProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TwoHandedGrabMoveProvider(TwoHandedGrabMoveProvider const&) = delete;

  /// @brief Field m_LeftGrabMoveProvider, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> ___m_LeftGrabMoveProvider;

  /// @brief Field m_RightGrabMoveProvider, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GrabMoveProvider> ___m_RightGrabMoveProvider;

  /// @brief Field m_OverrideSharedSettingsOnInit, offset: 0x70, size: 0x1, def value: None
  bool ___m_OverrideSharedSettingsOnInit;

  /// @brief Field m_MoveFactor, offset: 0x74, size: 0x4, def value: None
  float_t ___m_MoveFactor;

  /// @brief Field m_RequireTwoHandsForTranslation, offset: 0x78, size: 0x1, def value: None
  bool ___m_RequireTwoHandsForTranslation;

  /// @brief Field m_EnableRotation, offset: 0x79, size: 0x1, def value: None
  bool ___m_EnableRotation;

  /// @brief Field m_EnableScaling, offset: 0x7a, size: 0x1, def value: None
  bool ___m_EnableScaling;

  /// @brief Field m_MinimumScale, offset: 0x7c, size: 0x4, def value: None
  float_t ___m_MinimumScale;

  /// @brief Field m_MaximumScale, offset: 0x80, size: 0x4, def value: None
  float_t ___m_MaximumScale;

  /// @brief Field m_IsMoving, offset: 0x84, size: 0x1, def value: None
  bool ___m_IsMoving;

  /// @brief Field m_PreviousMidpointBetweenControllers, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_PreviousMidpointBetweenControllers;

  /// @brief Field m_InitialOriginYaw, offset: 0x94, size: 0x4, def value: None
  float_t ___m_InitialOriginYaw;

  /// @brief Field m_InitialLeftToRightDirection, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_InitialLeftToRightDirection;

  /// @brief Field m_InitialLeftToRightOrthogonal, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_InitialLeftToRightOrthogonal;

  /// @brief Field m_InitialOriginScale, offset: 0xb0, size: 0x4, def value: None
  float_t ___m_InitialOriginScale;

  /// @brief Field m_InitialDistanceBetweenHands, offset: 0xb4, size: 0x4, def value: None
  float_t ___m_InitialDistanceBetweenHands;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_LeftGrabMoveProvider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_RightGrabMoveProvider) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_OverrideSharedSettingsOnInit) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_MoveFactor) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_RequireTwoHandsForTranslation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_EnableRotation) == 0x79, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_EnableScaling) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_MinimumScale) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_MaximumScale) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_IsMoving) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_PreviousMidpointBetweenControllers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_InitialOriginYaw) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_InitialLeftToRightDirection) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_InitialLeftToRightOrthogonal) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_InitialOriginScale) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider, ___m_InitialDistanceBetweenHands) == 0xb4, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TwoHandedGrabMoveProvider*, "UnityEngine.XR.Interaction.Toolkit", "TwoHandedGrabMoveProvider");
