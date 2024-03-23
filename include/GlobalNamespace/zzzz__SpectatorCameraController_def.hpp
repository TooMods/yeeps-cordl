#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SpectatorCameraController_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpectatorCameraController)
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
class MobileTravelAnchor;
}
namespace GlobalNamespace {
class OverrideCamera;
}
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
struct __SpectatorCameraController__FOVData;
}
namespace GlobalNamespace {
struct __SpectatorCameraController__FollowPlayerMode;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SpectatorCameraController__FollowPlayerMode;
}
namespace GlobalNamespace {
class SpectatorCameraController;
}
namespace GlobalNamespace {
struct __SpectatorCameraController__FOVData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode);
MARK_REF_PTR_T(::GlobalNamespace::SpectatorCameraController);
MARK_VAL_T(::GlobalNamespace::__SpectatorCameraController__FOVData);
// Type: ::FOVData
// SizeInfo { instance_size: 44, native_size: 44, calculated_instance_size: 44, calculated_native_size: 60, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SpectatorCameraController::FOVData
struct CORDL_TYPE __SpectatorCameraController__FOVData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpectatorCameraController__FOVData();

  // Ctor Parameters [CppParam { name: "defaultFOV", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "inAnchorFOV", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "inFirstPersonFOV", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "inThirdPersonFOV", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "inOverrideCameraFOV",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "idealThirdPersonOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "thirdPersonRotationOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr __SpectatorCameraController__FOVData(float_t defaultFOV, float_t inAnchorFOV, float_t inFirstPersonFOV, float_t inThirdPersonFOV, float_t inOverrideCameraFOV,
                                                 ::UnityEngine::Vector3 idealThirdPersonOffset, ::UnityEngine::Vector3 thirdPersonRotationOffset) noexcept;

  /// @brief Field defaultFOV, offset: 0x0, size: 0x4, def value: None
  float_t defaultFOV;

  /// @brief Field inAnchorFOV, offset: 0x4, size: 0x4, def value: None
  float_t inAnchorFOV;

  /// @brief Field inFirstPersonFOV, offset: 0x8, size: 0x4, def value: None
  float_t inFirstPersonFOV;

  /// @brief Field inThirdPersonFOV, offset: 0xc, size: 0x4, def value: None
  float_t inThirdPersonFOV;

  /// @brief Field inOverrideCameraFOV, offset: 0x10, size: 0x4, def value: None
  float_t inOverrideCameraFOV;

  /// @brief Field idealThirdPersonOffset, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 idealThirdPersonOffset;

  /// @brief Field thirdPersonRotationOffset, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 thirdPersonRotationOffset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SpectatorCameraController__FOVData, 0x2c>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpectatorCameraController__FOVData, defaultFOV) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpectatorCameraController__FOVData, inAnchorFOV) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpectatorCameraController__FOVData, inFirstPersonFOV) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpectatorCameraController__FOVData, inThirdPersonFOV) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpectatorCameraController__FOVData, inOverrideCameraFOV) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpectatorCameraController__FOVData, idealThirdPersonOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpectatorCameraController__FOVData, thirdPersonRotationOffset) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FollowPlayerMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SpectatorCameraController::FollowPlayerMode
struct CORDL_TYPE __SpectatorCameraController__FollowPlayerMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SpectatorCameraController__FollowPlayerMode_Unwrapped
  enum struct ____SpectatorCameraController__FollowPlayerMode_Unwrapped : int32_t {
    __E_orbit = static_cast<int32_t>(0x0),
    __E_firstPerson = static_cast<int32_t>(0x1),
    __E_thirdPerson = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SpectatorCameraController__FollowPlayerMode_Unwrapped() const noexcept {
    return static_cast<____SpectatorCameraController__FollowPlayerMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpectatorCameraController__FollowPlayerMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SpectatorCameraController__FollowPlayerMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field firstPerson value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode const firstPerson;

  /// @brief Field orbit value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode const orbit;

  /// @brief Field thirdPerson value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode const thirdPerson;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SpectatorCameraController
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 308, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SpectatorCameraController*
class CORDL_TYPE SpectatorCameraController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using FOVData = ::GlobalNamespace::__SpectatorCameraController__FOVData;

  using FollowPlayerMode = ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode;

  /// @brief Field activeOverrideCamera, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_activeOverrideCamera, put = __cordl_internal_set_activeOverrideCamera))::UnityW<::GlobalNamespace::OverrideCamera> activeOverrideCamera;

  /// @brief Field attemptToFollowUserID, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_attemptToFollowUserID, put = __cordl_internal_set_attemptToFollowUserID))::StringW attemptToFollowUserID;

  /// @brief Field curFollowPlayerDistance, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_curFollowPlayerDistance, put = __cordl_internal_set_curFollowPlayerDistance)) float_t curFollowPlayerDistance;

  /// @brief Field curRotationSpeed, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_curRotationSpeed, put = __cordl_internal_set_curRotationSpeed)) float_t curRotationSpeed;

  /// @brief Field currentAnchor, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_currentAnchor, put = __cordl_internal_set_currentAnchor))::UnityW<::GlobalNamespace::MobileTravelAnchor> currentAnchor;

  /// @brief Field currentAnchorTargetPos, offset 0xb4, size 0xc
  __declspec(property(get = __cordl_internal_get_currentAnchorTargetPos, put = __cordl_internal_set_currentAnchorTargetPos))::UnityEngine::Vector3 currentAnchorTargetPos;

  /// @brief Field currentAnchorTargetRot, offset 0xc0, size 0x10
  __declspec(property(get = __cordl_internal_get_currentAnchorTargetRot, put = __cordl_internal_set_currentAnchorTargetRot))::UnityEngine::Quaternion currentAnchorTargetRot;

  /// @brief Field fixedUpdateTargetVelocity, offset 0x114, size 0xc
  __declspec(property(get = __cordl_internal_get_fixedUpdateTargetVelocity, put = __cordl_internal_set_fixedUpdateTargetVelocity))::UnityEngine::Vector3 fixedUpdateTargetVelocity;

  /// @brief Field followPlayer, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_followPlayer, put = __cordl_internal_set_followPlayer))::UnityW<::GlobalNamespace::Player> followPlayer;

  /// @brief Field followPlayerMode, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_followPlayerMode, put = __cordl_internal_set_followPlayerMode))::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode followPlayerMode;

  /// @brief Field followPlayerModeSwitchTimer, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_followPlayerModeSwitchTimer, put = __cordl_internal_set_followPlayerModeSwitchTimer)) float_t followPlayerModeSwitchTimer;

  /// @brief Field idealThirdPersonOffset, offset 0xec, size 0xc
  __declspec(property(get = __cordl_internal_get_idealThirdPersonOffset, put = __cordl_internal_set_idealThirdPersonOffset))::UnityEngine::Vector3 idealThirdPersonOffset;

  /// @brief Field initialFOV, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_initialFOV, put = __cordl_internal_set_initialFOV)) float_t initialFOV;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  /// @brief Field isMouseLocked, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get_isMouseLocked, put = __cordl_internal_set_isMouseLocked)) bool isMouseLocked;

  /// @brief Field isRegistered, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field isTravelingToPoint, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_isTravelingToPoint, put = __cordl_internal_set_isTravelingToPoint)) bool isTravelingToPoint;

  /// @brief Field landscapeFOVData, offset 0x4c, size 0x2c
  __declspec(property(get = __cordl_internal_get_landscapeFOVData, put = __cordl_internal_set_landscapeFOVData))::GlobalNamespace::__SpectatorCameraController__FOVData landscapeFOVData;

  /// @brief Field linkedFollowInThirdPerson, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_linkedFollowInThirdPerson, put = __cordl_internal_set_linkedFollowInThirdPerson)) bool linkedFollowInThirdPerson;

  /// @brief Field mainCamera, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_mainCamera, put = __cordl_internal_set_mainCamera))::UnityW<::UnityEngine::Camera> mainCamera;

  /// @brief Field masterPlayer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> masterPlayer;

  /// @brief Field nextAllowedMagnitizeTime, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_nextAllowedMagnitizeTime, put = __cordl_internal_set_nextAllowedMagnitizeTime)) float_t nextAllowedMagnitizeTime;

  /// @brief Field nextAllowedResetRotationToAnchorTime, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_nextAllowedResetRotationToAnchorTime, put = __cordl_internal_set_nextAllowedResetRotationToAnchorTime)) float_t nextAllowedResetRotationToAnchorTime;

  /// @brief Field nextAttemptToFollowTime, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_nextAttemptToFollowTime, put = __cordl_internal_set_nextAttemptToFollowTime)) float_t nextAttemptToFollowTime;

  /// @brief Field portraitFOVData, offset 0x20, size 0x2c
  __declspec(property(get = __cordl_internal_get_portraitFOVData, put = __cordl_internal_set_portraitFOVData))::GlobalNamespace::__SpectatorCameraController__FOVData portraitFOVData;

  /// @brief Field rb, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_rb, put = __cordl_internal_set_rb))::UnityW<::UnityEngine::Rigidbody> rb;

  /// @brief Field targetFOV, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_targetFOV, put = __cordl_internal_set_targetFOV)) float_t targetFOV;

  /// @brief Field targetRotation, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_targetRotation, put = __cordl_internal_set_targetRotation))::UnityEngine::Quaternion targetRotation;

  /// @brief Field thirdPersonRotationOffset, offset 0xf8, size 0xc
  __declspec(property(get = __cordl_internal_get_thirdPersonRotationOffset, put = __cordl_internal_set_thirdPersonRotationOffset))::UnityEngine::Vector3 thirdPersonRotationOffset;

  /// @brief Field useMobilePhoneControls, offset 0x111, size 0x1
  __declspec(property(get = __cordl_internal_get_useMobilePhoneControls, put = __cordl_internal_set_useMobilePhoneControls)) bool useMobilePhoneControls;

  /// @brief Method CalculateVelocityToTarget, addr 0x1754d58, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 CalculateVelocityToTarget(::UnityEngine::Vector3 targetPosition);

  /// @brief Method ClearCurrentAnchor, addr 0x17539d0, size 0x1c, virtual false, abstract: false, final false
  inline void ClearCurrentAnchor();

  /// @brief Method ClearFollowPlayer, addr 0x17557f4, size 0x100, virtual false, abstract: false, final false
  inline void ClearFollowPlayer();

  /// @brief Method Deregister, addr 0x1753648, size 0x2ec, virtual false, abstract: false, final false
  inline void Deregister();

  /// @brief Method DoUpdate, addr 0x1753ba0, size 0xf14, virtual false, abstract: false, final false
  inline void DoUpdate(float_t deltaTime);

  /// @brief Method FixedUpdate, addr 0x1754ab4, size 0x4, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method Initialize, addr 0x1752cc4, size 0x284, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::Camera* mainCamera, bool rotateToFaceCenter);

  /// @brief Method InitiateFollowPlayer, addr 0x17553f0, size 0x404, virtual false, abstract: false, final false
  inline void InitiateFollowPlayer(::GlobalNamespace::Player* player);

  /// @brief Method LateUpdate, addr 0x1753b34, size 0x6c, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LockMouse, addr 0x1755088, size 0x38, virtual false, abstract: false, final false
  inline void LockMouse();

  static inline ::GlobalNamespace::SpectatorCameraController* New_ctor();

  /// @brief Method OnDisable, addr 0x1753638, size 0x10, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x175360c, size 0x2c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnFollowPlayerSuccess, addr 0x17559b4, size 0x98, virtual false, abstract: false, final false
  inline void OnFollowPlayerSuccess();

  /// @brief Method OnOrientationChanged, addr 0x1753330, size 0xac, virtual false, abstract: false, final false
  inline void OnOrientationChanged(bool isLandscape);

  /// @brief Method OnPlayerToFollowUpdated, addr 0x17539ec, size 0x148, virtual false, abstract: false, final false
  inline void OnPlayerToFollowUpdated(::StringW newUserID);

  /// @brief Method OnRoomPositionShift, addr 0x1755220, size 0x1b8, virtual false, abstract: false, final false
  inline void OnRoomPositionShift(::UnityEngine::Vector3 moveOffset);

  /// @brief Method RefreshFollowPlayerAvatarPortion, addr 0x17558f4, size 0xc0, virtual false, abstract: false, final false
  inline void RefreshFollowPlayerAvatarPortion();

  /// @brief Method RefreshLocalPlayerHidden, addr 0x17550c4, size 0xfc, virtual false, abstract: false, final false
  inline void RefreshLocalPlayerHidden();

  /// @brief Method RefreshTargetFOV, addr 0x17533dc, size 0x230, virtual false, abstract: false, final false
  inline void RefreshTargetFOV();

  /// @brief Method Register, addr 0x17530b4, size 0x27c, virtual false, abstract: false, final false
  inline void Register();

  /// @brief Method RotateUsingInput, addr 0x1754b74, size 0x1e4, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion RotateUsingInput(::UnityEngine::Quaternion currentRotation, ::UnityEngine::Vector2 lookInput);

  /// @brief Method SetActive, addr 0x1752f48, size 0x16c, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  /// @brief Method SetActiveOverrideCamera, addr 0x1753934, size 0x9c, virtual false, abstract: false, final false
  inline void SetActiveOverrideCamera(::GlobalNamespace::OverrideCamera* newActiveOverrideCamera);

  /// @brief Method SetCurrentAnchor, addr 0x1754f08, size 0x180, virtual false, abstract: false, final false
  inline void SetCurrentAnchor(::GlobalNamespace::MobileTravelAnchor* newAnchor);

  /// @brief Method SetFollowPlayerMode, addr 0x1754ae4, size 0x90, virtual false, abstract: false, final false
  inline void SetFollowPlayerMode(::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode newFollowPlayerMode);

  /// @brief Method TravelToAnchorRequested, addr 0x17550c0, size 0x4, virtual false, abstract: false, final false
  inline void TravelToAnchorRequested(::GlobalNamespace::MobileTravelAnchor* anchor);

  /// @brief Method TravelToPointRequested, addr 0x17551c0, size 0x60, virtual false, abstract: false, final false
  inline void TravelToPointRequested(::UnityEngine::Vector3 point);

  /// @brief Method UnlockMouse, addr 0x1754ab8, size 0x2c, virtual false, abstract: false, final false
  inline void UnlockMouse();

  constexpr ::UnityW<::GlobalNamespace::OverrideCamera> const& __cordl_internal_get_activeOverrideCamera() const;

  constexpr ::UnityW<::GlobalNamespace::OverrideCamera>& __cordl_internal_get_activeOverrideCamera();

  constexpr ::StringW const& __cordl_internal_get_attemptToFollowUserID() const;

  constexpr ::StringW& __cordl_internal_get_attemptToFollowUserID();

  constexpr float_t const& __cordl_internal_get_curFollowPlayerDistance() const;

  constexpr float_t& __cordl_internal_get_curFollowPlayerDistance();

  constexpr float_t const& __cordl_internal_get_curRotationSpeed() const;

  constexpr float_t& __cordl_internal_get_curRotationSpeed();

  constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor> const& __cordl_internal_get_currentAnchor() const;

  constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor>& __cordl_internal_get_currentAnchor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentAnchorTargetPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentAnchorTargetPos();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_currentAnchorTargetRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_currentAnchorTargetRot();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_fixedUpdateTargetVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_fixedUpdateTargetVelocity();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_followPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_followPlayer();

  constexpr ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode const& __cordl_internal_get_followPlayerMode() const;

  constexpr ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode& __cordl_internal_get_followPlayerMode();

  constexpr float_t const& __cordl_internal_get_followPlayerModeSwitchTimer() const;

  constexpr float_t& __cordl_internal_get_followPlayerModeSwitchTimer();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_idealThirdPersonOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_idealThirdPersonOffset();

  constexpr float_t const& __cordl_internal_get_initialFOV() const;

  constexpr float_t& __cordl_internal_get_initialFOV();

  constexpr bool const& __cordl_internal_get_isMouseLocked() const;

  constexpr bool& __cordl_internal_get_isMouseLocked();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr bool const& __cordl_internal_get_isTravelingToPoint() const;

  constexpr bool& __cordl_internal_get_isTravelingToPoint();

  constexpr ::GlobalNamespace::__SpectatorCameraController__FOVData const& __cordl_internal_get_landscapeFOVData() const;

  constexpr ::GlobalNamespace::__SpectatorCameraController__FOVData& __cordl_internal_get_landscapeFOVData();

  constexpr bool const& __cordl_internal_get_linkedFollowInThirdPerson() const;

  constexpr bool& __cordl_internal_get_linkedFollowInThirdPerson();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_mainCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_mainCamera();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_masterPlayer();

  constexpr float_t const& __cordl_internal_get_nextAllowedMagnitizeTime() const;

  constexpr float_t& __cordl_internal_get_nextAllowedMagnitizeTime();

  constexpr float_t const& __cordl_internal_get_nextAllowedResetRotationToAnchorTime() const;

  constexpr float_t& __cordl_internal_get_nextAllowedResetRotationToAnchorTime();

  constexpr float_t const& __cordl_internal_get_nextAttemptToFollowTime() const;

  constexpr float_t& __cordl_internal_get_nextAttemptToFollowTime();

  constexpr ::GlobalNamespace::__SpectatorCameraController__FOVData const& __cordl_internal_get_portraitFOVData() const;

  constexpr ::GlobalNamespace::__SpectatorCameraController__FOVData& __cordl_internal_get_portraitFOVData();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb();

  constexpr float_t const& __cordl_internal_get_targetFOV() const;

  constexpr float_t& __cordl_internal_get_targetFOV();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_targetRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_targetRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_thirdPersonRotationOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_thirdPersonRotationOffset();

  constexpr bool const& __cordl_internal_get_useMobilePhoneControls() const;

  constexpr bool& __cordl_internal_get_useMobilePhoneControls();

  constexpr void __cordl_internal_set_activeOverrideCamera(::UnityW<::GlobalNamespace::OverrideCamera> value);

  constexpr void __cordl_internal_set_attemptToFollowUserID(::StringW value);

  constexpr void __cordl_internal_set_curFollowPlayerDistance(float_t value);

  constexpr void __cordl_internal_set_curRotationSpeed(float_t value);

  constexpr void __cordl_internal_set_currentAnchor(::UnityW<::GlobalNamespace::MobileTravelAnchor> value);

  constexpr void __cordl_internal_set_currentAnchorTargetPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_currentAnchorTargetRot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_fixedUpdateTargetVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_followPlayer(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_followPlayerMode(::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode value);

  constexpr void __cordl_internal_set_followPlayerModeSwitchTimer(float_t value);

  constexpr void __cordl_internal_set_idealThirdPersonOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_initialFOV(float_t value);

  constexpr void __cordl_internal_set_isMouseLocked(bool value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_isTravelingToPoint(bool value);

  constexpr void __cordl_internal_set_landscapeFOVData(::GlobalNamespace::__SpectatorCameraController__FOVData value);

  constexpr void __cordl_internal_set_linkedFollowInThirdPerson(bool value);

  constexpr void __cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_nextAllowedMagnitizeTime(float_t value);

  constexpr void __cordl_internal_set_nextAllowedResetRotationToAnchorTime(float_t value);

  constexpr void __cordl_internal_set_nextAttemptToFollowTime(float_t value);

  constexpr void __cordl_internal_set_portraitFOVData(::GlobalNamespace::__SpectatorCameraController__FOVData value);

  constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set_targetFOV(float_t value);

  constexpr void __cordl_internal_set_targetRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_thirdPersonRotationOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_useMobilePhoneControls(bool value);

  /// @brief Method .ctor, addr 0x1755a4c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isInitialized, addr 0x1752c64, size 0x60, virtual false, abstract: false, final false
  inline bool get_isInitialized();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpectatorCameraController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpectatorCameraController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpectatorCameraController(SpectatorCameraController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpectatorCameraController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpectatorCameraController(SpectatorCameraController const&) = delete;

  /// @brief Field linkedFollowInThirdPerson, offset: 0x18, size: 0x1, def value: None
  bool ___linkedFollowInThirdPerson;

  /// @brief Field initialFOV, offset: 0x1c, size: 0x4, def value: None
  float_t ___initialFOV;

  /// @brief Field portraitFOVData, offset: 0x20, size: 0x2c, def value: None
  ::GlobalNamespace::__SpectatorCameraController__FOVData ___portraitFOVData;

  /// @brief Field landscapeFOVData, offset: 0x4c, size: 0x2c, def value: None
  ::GlobalNamespace::__SpectatorCameraController__FOVData ___landscapeFOVData;

  /// @brief Field targetFOV, offset: 0x78, size: 0x4, def value: None
  float_t ___targetFOV;

  /// @brief Field curRotationSpeed, offset: 0x7c, size: 0x4, def value: None
  float_t ___curRotationSpeed;

  /// @brief Field targetRotation, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___targetRotation;

  /// @brief Field rb, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___rb;

  /// @brief Field masterPlayer, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___masterPlayer;

  /// @brief Field mainCamera, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___mainCamera;

  /// @brief Field currentAnchor, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileTravelAnchor> ___currentAnchor;

  /// @brief Field isTravelingToPoint, offset: 0xb0, size: 0x1, def value: None
  bool ___isTravelingToPoint;

  /// @brief Field currentAnchorTargetPos, offset: 0xb4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___currentAnchorTargetPos;

  /// @brief Field currentAnchorTargetRot, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___currentAnchorTargetRot;

  /// @brief Field nextAllowedMagnitizeTime, offset: 0xd0, size: 0x4, def value: None
  float_t ___nextAllowedMagnitizeTime;

  /// @brief Field nextAllowedResetRotationToAnchorTime, offset: 0xd4, size: 0x4, def value: None
  float_t ___nextAllowedResetRotationToAnchorTime;

  /// @brief Field curFollowPlayerDistance, offset: 0xd8, size: 0x4, def value: None
  float_t ___curFollowPlayerDistance;

  /// @brief Field followPlayer, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___followPlayer;

  /// @brief Field followPlayerMode, offset: 0xe8, size: 0x4, def value: None
  ::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode ___followPlayerMode;

  /// @brief Field idealThirdPersonOffset, offset: 0xec, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___idealThirdPersonOffset;

  /// @brief Field thirdPersonRotationOffset, offset: 0xf8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___thirdPersonRotationOffset;

  /// @brief Field followPlayerModeSwitchTimer, offset: 0x104, size: 0x4, def value: None
  float_t ___followPlayerModeSwitchTimer;

  /// @brief Field activeOverrideCamera, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OverrideCamera> ___activeOverrideCamera;

  /// @brief Field isRegistered, offset: 0x110, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field useMobilePhoneControls, offset: 0x111, size: 0x1, def value: None
  bool ___useMobilePhoneControls;

  /// @brief Field fixedUpdateTargetVelocity, offset: 0x114, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___fixedUpdateTargetVelocity;

  /// @brief Field isMouseLocked, offset: 0x120, size: 0x1, def value: None
  bool ___isMouseLocked;

  /// @brief Field attemptToFollowUserID, offset: 0x128, size: 0x8, def value: None
  ::StringW ___attemptToFollowUserID;

  /// @brief Field nextAttemptToFollowTime, offset: 0x130, size: 0x4, def value: None
  float_t ___nextAttemptToFollowTime;

  /// @brief Field anchorClearLookInputThreshold offset 0xffffffff size 0x4
  static constexpr float_t anchorClearLookInputThreshold{ 0.25 };

  /// @brief Field anchorClearMoveInputThreshold offset 0xffffffff size 0x4
  static constexpr float_t anchorClearMoveInputThreshold{ 0.25 };

  /// @brief Field anchoredMoveSpeed offset 0xffffffff size 0x4
  static constexpr float_t anchoredMoveSpeed{ 2.0 };

  /// @brief Field anchoredRotationSpeed offset 0xffffffff size 0x4
  static constexpr float_t anchoredRotationSpeed{ 4.0 };

  /// @brief Field attemptToFollowCooldown offset 0xffffffff size 0x4
  static constexpr float_t attemptToFollowCooldown{ 0.25 };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Spectator: " };

  /// @brief Field defaultFollowPlayerDistance offset 0xffffffff size 0x4
  static constexpr float_t defaultFollowPlayerDistance{ 2.5 };

  /// @brief Field engageFirstPersonDuration offset 0xffffffff size 0x4
  static constexpr float_t engageFirstPersonDuration{ 0.5 };

  /// @brief Field followPlayerDistanceChangeSpeed offset 0xffffffff size 0x4
  static constexpr float_t followPlayerDistanceChangeSpeed{ 3.5 };

  /// @brief Field fovLerpSpeed offset 0xffffffff size 0x4
  static constexpr float_t fovLerpSpeed{ 4.0 };

  /// @brief Field keyboardUpDownSensitivity offset 0xffffffff size 0x4
  static constexpr float_t keyboardUpDownSensitivity{ 0.7 };

  /// @brief Field keyboardWASDSensitivity offset 0xffffffff size 0x4
  static constexpr float_t keyboardWASDSensitivity{ 0.6 };

  /// @brief Field magnitizeCooldown offset 0xffffffff size 0x4
  static constexpr float_t magnitizeCooldown{ 1.0 };

  /// @brief Field maxFollowPlayerDistance offset 0xffffffff size 0x4
  static constexpr float_t maxFollowPlayerDistance{ 5.0 };

  /// @brief Field minFollowPlayerDistance offset 0xffffffff size 0x4
  static constexpr float_t minFollowPlayerDistance{ 0.625 };

  /// @brief Field mouseSensitivity offset 0xffffffff size 0x4
  static constexpr float_t mouseSensitivity{ 3.0 };

  /// @brief Field movementAcceleration offset 0xffffffff size 0x4
  static constexpr float_t movementAcceleration{ 3.0 };

  /// @brief Field movementSpeed offset 0xffffffff size 0x4
  static constexpr float_t movementSpeed{ 8.0 };

  /// @brief Field orbitRotationLerpSpeed offset 0xffffffff size 0x4
  static constexpr float_t orbitRotationLerpSpeed{ 100.0 };

  /// @brief Field orbitSensitivityMultiplier offset 0xffffffff size 0x4
  static constexpr float_t orbitSensitivityMultiplier{ 1.0 };

  /// @brief Field resetRotationToAnchorCooldown offset 0xffffffff size 0x4
  static constexpr float_t resetRotationToAnchorCooldown{ 2.0 };

  /// @brief Field rotationSpeed offset 0xffffffff size 0x4
  static constexpr float_t rotationSpeed{ 30.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpectatorCameraController, 0x138>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___linkedFollowInThirdPerson) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___initialFOV) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___portraitFOVData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___landscapeFOVData) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___targetFOV) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___curRotationSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___targetRotation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___rb) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___masterPlayer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___mainCamera) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___currentAnchor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___isTravelingToPoint) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___currentAnchorTargetPos) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___currentAnchorTargetRot) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___nextAllowedMagnitizeTime) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___nextAllowedResetRotationToAnchorTime) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___curFollowPlayerDistance) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___followPlayer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___followPlayerMode) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___idealThirdPersonOffset) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___thirdPersonRotationOffset) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___followPlayerModeSwitchTimer) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___activeOverrideCamera) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___isRegistered) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___useMobilePhoneControls) == 0x111, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___fixedUpdateTargetVelocity) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___isMouseLocked) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___attemptToFollowUserID) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectatorCameraController, ___nextAttemptToFollowTime) == 0x130, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpectatorCameraController__FollowPlayerMode, "", "SpectatorCameraController/FollowPlayerMode");
NEED_NO_BOX(::GlobalNamespace::SpectatorCameraController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpectatorCameraController*, "", "SpectatorCameraController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpectatorCameraController__FOVData, "", "SpectatorCameraController/FOVData");
