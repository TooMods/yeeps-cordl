#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRRig)
namespace Unity::XR::CoreUtils {
struct __XROrigin__TrackingOriginMode;
}
namespace UnityEngine::XR {
struct TrackingOriginModeFlags;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRRig;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRRig);
// Type: UnityEngine.XR.Interaction.Toolkit::XRRig
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRRig*
class CORDL_TYPE XRRig : public ::Unity::XR::CoreUtils::XROrigin {
public:
  // Declarations
  __declspec(property(get = get_cameraFloorOffsetObject, put = set_cameraFloorOffsetObject))::UnityW<::UnityEngine::GameObject> cameraFloorOffsetObject;

  __declspec(property(get = get_cameraGameObject, put = set_cameraGameObject))::UnityW<::UnityEngine::GameObject> cameraGameObject;

  __declspec(property(get = get_cameraInRigSpaceHeight)) float_t cameraInRigSpaceHeight;

  __declspec(property(get = get_cameraInRigSpacePos))::UnityEngine::Vector3 cameraInRigSpacePos;

  __declspec(property(get = get_cameraYOffset, put = set_cameraYOffset)) float_t cameraYOffset;

  __declspec(property(get = get_currentTrackingOriginMode))::UnityEngine::XR::TrackingOriginModeFlags currentTrackingOriginMode;

  /// @brief Field m_CameraGameObject, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraGameObject, put = __cordl_internal_set_m_CameraGameObject))::UnityW<::UnityEngine::GameObject> m_CameraGameObject;

  __declspec(property(get = get_requestedTrackingOriginMode, put = set_requestedTrackingOriginMode))::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode requestedTrackingOriginMode;

  __declspec(property(get = get_rig, put = set_rig))::UnityW<::UnityEngine::GameObject> rig;

  __declspec(property(get = get_rigInCameraSpacePos))::UnityEngine::Vector3 rigInCameraSpacePos;

  /// @brief Method Awake, addr 0x301e2ac, size 0x10c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method MatchRigUp, addr 0x301e4d0, size 0x8, virtual false, abstract: false, final false
  inline bool MatchRigUp(::UnityEngine::Vector3 destinationUp);

  /// @brief Method MatchRigUpCameraForward, addr 0x301e4d8, size 0x8, virtual false, abstract: false, final false
  inline bool MatchRigUpCameraForward(::UnityEngine::Vector3 destinationUp, ::UnityEngine::Vector3 destinationForward);

  /// @brief Method MatchRigUpRigForward, addr 0x301e4e0, size 0x8, virtual false, abstract: false, final false
  inline bool MatchRigUpRigForward(::UnityEngine::Vector3 destinationUp, ::UnityEngine::Vector3 destinationForward);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRRig* New_ctor();

  /// @brief Method RotateAroundCameraUsingRigUp, addr 0x301e4c8, size 0x8, virtual false, abstract: false, final false
  inline bool RotateAroundCameraUsingRigUp(float_t angleDegrees);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_CameraGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_CameraGameObject();

  constexpr void __cordl_internal_set_m_CameraGameObject(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x301e4e8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cameraFloorOffsetObject, addr 0x301e478, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_cameraFloorOffsetObject();

  /// @brief Method get_cameraGameObject, addr 0x301e3c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_cameraGameObject();

  /// @brief Method get_cameraInRigSpaceHeight, addr 0x301e4c0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cameraInRigSpaceHeight();

  /// @brief Method get_cameraInRigSpacePos, addr 0x301e4b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_cameraInRigSpacePos();

  /// @brief Method get_cameraYOffset, addr 0x301e498, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cameraYOffset();

  /// @brief Method get_currentTrackingOriginMode, addr 0x301e4a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::TrackingOriginModeFlags get_currentTrackingOriginMode();

  /// @brief Method get_requestedTrackingOriginMode, addr 0x301e488, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode get_requestedTrackingOriginMode();

  /// @brief Method get_rig, addr 0x301e3b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_rig();

  /// @brief Method get_rigInCameraSpacePos, addr 0x301e4b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rigInCameraSpacePos();

  /// @brief Method set_cameraFloorOffsetObject, addr 0x301e480, size 0x8, virtual false, abstract: false, final false
  inline void set_cameraFloorOffsetObject(::UnityEngine::GameObject* value);

  /// @brief Method set_cameraGameObject, addr 0x301e3d0, size 0xa8, virtual false, abstract: false, final false
  inline void set_cameraGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_cameraYOffset, addr 0x301e4a0, size 0x8, virtual false, abstract: false, final false
  inline void set_cameraYOffset(float_t value);

  /// @brief Method set_requestedTrackingOriginMode, addr 0x301e490, size 0x8, virtual false, abstract: false, final false
  inline void set_requestedTrackingOriginMode(::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode value);

  /// @brief Method set_rig, addr 0x301e3c0, size 0x8, virtual false, abstract: false, final false
  inline void set_rig(::UnityEngine::GameObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRRig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRRig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRRig(XRRig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRRig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRRig(XRRig const&) = delete;

  /// @brief Field m_CameraGameObject, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_CameraGameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRRig, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRig, ___m_CameraGameObject) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRRig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRRig*, "UnityEngine.XR.Interaction.Toolkit", "XRRig");
