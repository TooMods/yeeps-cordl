#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionState_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRControllerState)
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
namespace UnityEngine::XR {
struct InputTrackingState;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRControllerState);
// Type: UnityEngine.XR.Interaction.Toolkit::XRControllerState
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRControllerState*
class CORDL_TYPE XRControllerState : public ::System::Object {
public:
  // Declarations
  /// @brief Field activateInteractionState, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_activateInteractionState,
                      put = __cordl_internal_set_activateInteractionState))::UnityEngine::XR::Interaction::Toolkit::InteractionState activateInteractionState;

  /// @brief Field inputTrackingState, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_inputTrackingState, put = __cordl_internal_set_inputTrackingState))::UnityEngine::XR::InputTrackingState inputTrackingState;

  __declspec(property(get = get_poseDataFlags, put = set_poseDataFlags))::UnityEngine::SpatialTracking::PoseDataFlags poseDataFlags;

  /// @brief Field position, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position))::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation))::UnityEngine::Quaternion rotation;

  /// @brief Field selectInteractionState, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_selectInteractionState,
                      put = __cordl_internal_set_selectInteractionState))::UnityEngine::XR::Interaction::Toolkit::InteractionState selectInteractionState;

  /// @brief Field time, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) double_t time;

  /// @brief Field uiPressInteractionState, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_uiPressInteractionState,
                      put = __cordl_internal_set_uiPressInteractionState))::UnityEngine::XR::Interaction::Toolkit::InteractionState uiPressInteractionState;

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor();

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(double_t time, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                     ::UnityEngine::XR::InputTrackingState inputTrackingState);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(double_t time, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                     ::UnityEngine::XR::InputTrackingState inputTrackingState, bool selectActive, bool activateActive,
                                                                                     bool pressActive);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(double_t time, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                     ::UnityEngine::XR::InputTrackingState inputTrackingState, bool selectActive, bool activateActive, bool pressActive,
                                                                                     float_t selectValue, float_t activateValue, float_t pressValue);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(double_t time, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, bool selectActive,
                                                                                     bool activateActive, bool pressActive);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* value);

  /// @brief Method ResetFrameDependentStates, addr 0x2597f28, size 0x10, virtual false, abstract: false, final false
  inline void ResetFrameDependentStates();

  /// @brief Method ResetInputs, addr 0x259a90c, size 0x10, virtual false, abstract: false, final false
  inline void ResetInputs();

  /// @brief Method ToString, addr 0x259a668, size 0x270, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_activateInteractionState() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_activateInteractionState();

  constexpr ::UnityEngine::XR::InputTrackingState const& __cordl_internal_get_inputTrackingState() const;

  constexpr ::UnityEngine::XR::InputTrackingState& __cordl_internal_get_inputTrackingState();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_position();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_selectInteractionState() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_selectInteractionState();

  constexpr double_t const& __cordl_internal_get_time() const;

  constexpr double_t& __cordl_internal_get_time();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_uiPressInteractionState() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_uiPressInteractionState();

  constexpr void __cordl_internal_set_activateInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState value);

  constexpr void __cordl_internal_set_inputTrackingState(::UnityEngine::XR::InputTrackingState value);

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_selectInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState value);

  constexpr void __cordl_internal_set_time(double_t value);

  constexpr void __cordl_internal_set_uiPressInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState value);

  /// @brief Method .ctor, addr 0x259882c, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x259a4b0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(double_t time, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::XR::InputTrackingState inputTrackingState);

  /// @brief Method .ctor, addr 0x259a234, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(double_t time, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::XR::InputTrackingState inputTrackingState, bool selectActive,
                    bool activateActive, bool pressActive);

  /// @brief Method .ctor, addr 0x259a52c, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(double_t time, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::XR::InputTrackingState inputTrackingState, bool selectActive,
                    bool activateActive, bool pressActive, float_t selectValue, float_t activateValue, float_t pressValue);

  /// @brief Method .ctor, addr 0x259a8f0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t time, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, bool selectActive, bool activateActive, bool pressActive);

  /// @brief Method .ctor, addr 0x259a034, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* value);

  /// @brief Method get_poseDataFlags, addr 0x259a8d8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::SpatialTracking::PoseDataFlags get_poseDataFlags();

  /// @brief Method set_poseDataFlags, addr 0x259a8e4, size 0xc, virtual false, abstract: false, final false
  inline void set_poseDataFlags(::UnityEngine::SpatialTracking::PoseDataFlags value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRControllerState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRControllerState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRControllerState(XRControllerState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRControllerState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRControllerState(XRControllerState const&) = delete;

  /// @brief Field time, offset: 0x10, size: 0x8, def value: None
  double_t ___time;

  /// @brief Field inputTrackingState, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::InputTrackingState ___inputTrackingState;

  /// @brief Field position, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___position;

  /// @brief Field rotation, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rotation;

  /// @brief Field selectInteractionState, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::InteractionState ___selectInteractionState;

  /// @brief Field activateInteractionState, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::InteractionState ___activateInteractionState;

  /// @brief Field uiPressInteractionState, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::InteractionState ___uiPressInteractionState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRControllerState, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___inputTrackingState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___position) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___rotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___selectInteractionState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___activateInteractionState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___uiPressInteractionState) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRControllerState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*, "UnityEngine.XR.Interaction.Toolkit", "XRControllerState");
