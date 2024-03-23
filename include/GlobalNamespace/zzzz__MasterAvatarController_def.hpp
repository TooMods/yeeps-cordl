#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AvatarController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MasterAvatarController)
namespace GlobalNamespace {
class CosmeticsZone;
}
namespace GlobalNamespace {
class InputController;
}
namespace GlobalNamespace {
class __AvatarHand__GripData;
}
namespace GlobalNamespace {
struct __AvatarHand__GripType;
}
namespace GlobalNamespace {
struct __Player__SurfaceTouchType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MasterAvatarController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MasterAvatarController);
// Type: ::MasterAvatarController
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MasterAvatarController*
class CORDL_TYPE MasterAvatarController : public ::GlobalNamespace::AvatarController {
public:
  // Declarations
  /// @brief Field bodyReference, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_bodyReference, put = __cordl_internal_set_bodyReference))::UnityW<::UnityEngine::Transform> bodyReference;

  /// @brief Field cosmeticZones, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticZones,
                      put = __cordl_internal_set_cosmeticZones))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>* cosmeticZones;

  /// @brief Field headTarget, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_headTarget, put = __cordl_internal_set_headTarget))::UnityW<::UnityEngine::Transform> headTarget;

  /// @brief Field leftGripData, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_leftGripData, put = __cordl_internal_set_leftGripData))::GlobalNamespace::__AvatarHand__GripData* leftGripData;

  /// @brief Field leftHandTarget, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandTarget, put = __cordl_internal_set_leftHandTarget))::UnityW<::UnityEngine::Transform> leftHandTarget;

  /// @brief Field leftIndexFingerRatio, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_leftIndexFingerRatio, put = __cordl_internal_set_leftIndexFingerRatio)) float_t leftIndexFingerRatio;

  /// @brief Field leftInput, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_leftInput, put = __cordl_internal_set_leftInput))::UnityW<::GlobalNamespace::InputController> leftInput;

  /// @brief Field leftMiddleFingerRatio, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_leftMiddleFingerRatio, put = __cordl_internal_set_leftMiddleFingerRatio)) float_t leftMiddleFingerRatio;

  /// @brief Field leftThumbFingerRatio, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get_leftThumbFingerRatio, put = __cordl_internal_set_leftThumbFingerRatio)) float_t leftThumbFingerRatio;

  /// @brief Field rightGripData, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_rightGripData, put = __cordl_internal_set_rightGripData))::GlobalNamespace::__AvatarHand__GripData* rightGripData;

  /// @brief Field rightHandTarget, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandTarget, put = __cordl_internal_set_rightHandTarget))::UnityW<::UnityEngine::Transform> rightHandTarget;

  /// @brief Field rightIndexFingerRatio, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_rightIndexFingerRatio, put = __cordl_internal_set_rightIndexFingerRatio)) float_t rightIndexFingerRatio;

  /// @brief Field rightInput, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_rightInput, put = __cordl_internal_set_rightInput))::UnityW<::GlobalNamespace::InputController> rightInput;

  /// @brief Field rightMiddleFingerRatio, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_rightMiddleFingerRatio, put = __cordl_internal_set_rightMiddleFingerRatio)) float_t rightMiddleFingerRatio;

  /// @brief Field rightThumbFingerRatio, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_rightThumbFingerRatio, put = __cordl_internal_set_rightThumbFingerRatio)) float_t rightThumbFingerRatio;

  /// @brief Method ClearGrip, addr 0x158dc54, size 0x18, virtual true, abstract: false, final false
  inline void ClearGrip(bool right);

  /// @brief Method DoBodyHaptic, addr 0x158d814, size 0x7c, virtual true, abstract: false, final false
  inline void DoBodyHaptic(float_t amplitude, float_t duration);

  /// @brief Method DoHandHaptic, addr 0x158d7d0, size 0x44, virtual true, abstract: false, final false
  inline void DoHandHaptic(bool right, float_t amplitude, float_t duration);

  /// @brief Method DoHandTouchFeedback, addr 0x158d718, size 0xb8, virtual true, abstract: false, final false
  inline void DoHandTouchFeedback(bool right, ::GlobalNamespace::__Player__SurfaceTouchType surfaceTouchType);

  /// @brief Method ExpressActivePose, addr 0x158d210, size 0x508, virtual true, abstract: false, final false
  inline void ExpressActivePose();

  /// @brief Method GetRollInput, addr 0x158d890, size 0x1a4, virtual true, abstract: false, final false
  inline float_t GetRollInput();

  /// @brief Method GetTurnInput, addr 0x158da34, size 0x1a4, virtual true, abstract: false, final false
  inline float_t GetTurnInput();

  static inline ::GlobalNamespace::MasterAvatarController* New_ctor();

  /// @brief Method OnStart, addr 0x158d1b8, size 0x58, virtual true, abstract: false, final false
  inline void OnStart();

  /// @brief Method SetGrip, addr 0x158dbd8, size 0x7c, virtual true, abstract: false, final false
  inline void SetGrip(bool right, ::GlobalNamespace::__AvatarHand__GripType gripType);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bodyReference() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bodyReference();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*& __cordl_internal_get_cosmeticZones();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*> const& __cordl_internal_get_cosmeticZones() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headTarget();

  constexpr ::GlobalNamespace::__AvatarHand__GripData*& __cordl_internal_get_leftGripData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AvatarHand__GripData*> const& __cordl_internal_get_leftGripData() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandTarget();

  constexpr float_t const& __cordl_internal_get_leftIndexFingerRatio() const;

  constexpr float_t& __cordl_internal_get_leftIndexFingerRatio();

  constexpr ::UnityW<::GlobalNamespace::InputController> const& __cordl_internal_get_leftInput() const;

  constexpr ::UnityW<::GlobalNamespace::InputController>& __cordl_internal_get_leftInput();

  constexpr float_t const& __cordl_internal_get_leftMiddleFingerRatio() const;

  constexpr float_t& __cordl_internal_get_leftMiddleFingerRatio();

  constexpr float_t const& __cordl_internal_get_leftThumbFingerRatio() const;

  constexpr float_t& __cordl_internal_get_leftThumbFingerRatio();

  constexpr ::GlobalNamespace::__AvatarHand__GripData*& __cordl_internal_get_rightGripData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AvatarHand__GripData*> const& __cordl_internal_get_rightGripData() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandTarget();

  constexpr float_t const& __cordl_internal_get_rightIndexFingerRatio() const;

  constexpr float_t& __cordl_internal_get_rightIndexFingerRatio();

  constexpr ::UnityW<::GlobalNamespace::InputController> const& __cordl_internal_get_rightInput() const;

  constexpr ::UnityW<::GlobalNamespace::InputController>& __cordl_internal_get_rightInput();

  constexpr float_t const& __cordl_internal_get_rightMiddleFingerRatio() const;

  constexpr float_t& __cordl_internal_get_rightMiddleFingerRatio();

  constexpr float_t const& __cordl_internal_get_rightThumbFingerRatio() const;

  constexpr float_t& __cordl_internal_get_rightThumbFingerRatio();

  constexpr void __cordl_internal_set_bodyReference(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_cosmeticZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>* value);

  constexpr void __cordl_internal_set_headTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftGripData(::GlobalNamespace::__AvatarHand__GripData* value);

  constexpr void __cordl_internal_set_leftHandTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftIndexFingerRatio(float_t value);

  constexpr void __cordl_internal_set_leftInput(::UnityW<::GlobalNamespace::InputController> value);

  constexpr void __cordl_internal_set_leftMiddleFingerRatio(float_t value);

  constexpr void __cordl_internal_set_leftThumbFingerRatio(float_t value);

  constexpr void __cordl_internal_set_rightGripData(::GlobalNamespace::__AvatarHand__GripData* value);

  constexpr void __cordl_internal_set_rightHandTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightIndexFingerRatio(float_t value);

  constexpr void __cordl_internal_set_rightInput(::UnityW<::GlobalNamespace::InputController> value);

  constexpr void __cordl_internal_set_rightMiddleFingerRatio(float_t value);

  constexpr void __cordl_internal_set_rightThumbFingerRatio(float_t value);

  /// @brief Method .ctor, addr 0x158dc6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MasterAvatarController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MasterAvatarController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MasterAvatarController(MasterAvatarController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MasterAvatarController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MasterAvatarController(MasterAvatarController const&) = delete;

  /// @brief Field bodyReference, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bodyReference;

  /// @brief Field headTarget, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___headTarget;

  /// @brief Field rightHandTarget, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightHandTarget;

  /// @brief Field leftHandTarget, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftHandTarget;

  /// @brief Field rightInput, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::InputController> ___rightInput;

  /// @brief Field leftInput, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::InputController> ___leftInput;

  /// @brief Field cosmeticZones, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>* ___cosmeticZones;

  /// @brief Field rightGripData, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::__AvatarHand__GripData* ___rightGripData;

  /// @brief Field leftGripData, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::__AvatarHand__GripData* ___leftGripData;

  /// @brief Field rightIndexFingerRatio, offset: 0x108, size: 0x4, def value: None
  float_t ___rightIndexFingerRatio;

  /// @brief Field rightMiddleFingerRatio, offset: 0x10c, size: 0x4, def value: None
  float_t ___rightMiddleFingerRatio;

  /// @brief Field rightThumbFingerRatio, offset: 0x110, size: 0x4, def value: None
  float_t ___rightThumbFingerRatio;

  /// @brief Field leftIndexFingerRatio, offset: 0x114, size: 0x4, def value: None
  float_t ___leftIndexFingerRatio;

  /// @brief Field leftMiddleFingerRatio, offset: 0x118, size: 0x4, def value: None
  float_t ___leftMiddleFingerRatio;

  /// @brief Field leftThumbFingerRatio, offset: 0x11c, size: 0x4, def value: None
  float_t ___leftThumbFingerRatio;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MasterAvatarController, 0x120>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___bodyReference) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___headTarget) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___rightHandTarget) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___leftHandTarget) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___rightInput) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___leftInput) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___cosmeticZones) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___rightGripData) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___leftGripData) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___rightIndexFingerRatio) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___rightMiddleFingerRatio) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___rightThumbFingerRatio) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___leftIndexFingerRatio) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___leftMiddleFingerRatio) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterAvatarController, ___leftThumbFingerRatio) == 0x11c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MasterAvatarController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MasterAvatarController*, "", "MasterAvatarController");
