#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AvatarController)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
struct __AvatarHand__GripType;
}
namespace GlobalNamespace {
struct __Player__Pose;
}
namespace GlobalNamespace {
struct __Player__SurfaceTouchType;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarController);
// Type: ::AvatarController
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AvatarController*
class CORDL_TYPE AvatarController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <expressedPlayerPose>k__BackingField, offset 0x20, size 0x88
  __declspec(property(get = __cordl_internal_get__expressedPlayerPose_k__BackingField,
                      put = __cordl_internal_set__expressedPlayerPose_k__BackingField))::GlobalNamespace::__Player__Pose _expressedPlayerPose_k__BackingField;

  /// @brief Field avatar, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_avatar, put = __cordl_internal_set_avatar))::UnityW<::GlobalNamespace::Avatar> avatar;

  /// @brief Field bodyHeight, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_bodyHeight, put = __cordl_internal_set_bodyHeight)) float_t bodyHeight;

  __declspec(property(get = get_expressedPlayerPose, put = set_expressedPlayerPose))::GlobalNamespace::__Player__Pose expressedPlayerPose;

  /// @brief Field groundLayerMask, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_groundLayerMask, put = __cordl_internal_set_groundLayerMask))::UnityEngine::LayerMask groundLayerMask;

  /// @brief Field hasExpressedPose, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_hasExpressedPose, put = __cordl_internal_set_hasExpressedPose)) bool hasExpressedPose;

  /// @brief Field velocity, offset 0xb4, size 0xc
  __declspec(property(get = __cordl_internal_get_velocity, put = __cordl_internal_set_velocity))::UnityEngine::Vector3 velocity;

  /// @brief Method ClearGrip, addr 0x158a640, size 0x40, virtual true, abstract: false, final false
  inline void ClearGrip(bool right);

  /// @brief Method DoBodyHaptic, addr 0x158a540, size 0x40, virtual true, abstract: false, final false
  inline void DoBodyHaptic(float_t amplitude, float_t duration);

  /// @brief Method DoHandHaptic, addr 0x158a500, size 0x40, virtual true, abstract: false, final false
  inline void DoHandHaptic(bool right, float_t amplitude, float_t duration);

  /// @brief Method DoHandTouchFeedback, addr 0x158a4c0, size 0x40, virtual true, abstract: false, final false
  inline void DoHandTouchFeedback(bool right, ::GlobalNamespace::__Player__SurfaceTouchType surfaceTouchType);

  /// @brief Method ExpressActivePose, addr 0x158a480, size 0x40, virtual true, abstract: false, final false
  inline void ExpressActivePose();

  /// @brief Method ExpressPlayerPose, addr 0x158a1d8, size 0x2a8, virtual false, abstract: false, final false
  inline void ExpressPlayerPose(::GlobalNamespace::__Player__Pose pose);

  /// @brief Method GetRollInput, addr 0x158a580, size 0x40, virtual true, abstract: false, final false
  inline float_t GetRollInput();

  /// @brief Method GetTurnInput, addr 0x158a5c0, size 0x40, virtual true, abstract: false, final false
  inline float_t GetTurnInput();

  static inline ::GlobalNamespace::AvatarController* New_ctor();

  /// @brief Method OnStart, addr 0x158a1d4, size 0x4, virtual true, abstract: false, final false
  inline void OnStart();

  /// @brief Method SetGrip, addr 0x158a600, size 0x40, virtual true, abstract: false, final false
  inline void SetGrip(bool right, ::GlobalNamespace::__AvatarHand__GripType gripType);

  /// @brief Method Start, addr 0x158a0ec, size 0xe8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::__Player__Pose const& __cordl_internal_get__expressedPlayerPose_k__BackingField() const;

  constexpr ::GlobalNamespace::__Player__Pose& __cordl_internal_get__expressedPlayerPose_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_avatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_avatar();

  constexpr float_t const& __cordl_internal_get_bodyHeight() const;

  constexpr float_t& __cordl_internal_get_bodyHeight();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_groundLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_groundLayerMask();

  constexpr bool const& __cordl_internal_get_hasExpressedPose() const;

  constexpr bool& __cordl_internal_get_hasExpressedPose();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity();

  constexpr void __cordl_internal_set__expressedPlayerPose_k__BackingField(::GlobalNamespace::__Player__Pose value);

  constexpr void __cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_bodyHeight(float_t value);

  constexpr void __cordl_internal_set_groundLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_hasExpressedPose(bool value);

  constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x158a680, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_expressedPlayerPose, addr 0x158a0c4, size 0x10, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Player__Pose get_expressedPlayerPose();

  /// @brief Method set_expressedPlayerPose, addr 0x158a0d4, size 0x18, virtual false, abstract: false, final false
  inline void set_expressedPlayerPose(::GlobalNamespace::__Player__Pose value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarController(AvatarController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarController(AvatarController const&) = delete;

  /// @brief Field avatar, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___avatar;

  /// @brief Field <expressedPlayerPose>k__BackingField, offset: 0x20, size: 0x88, def value: None
  ::GlobalNamespace::__Player__Pose ____expressedPlayerPose_k__BackingField;

  /// @brief Field hasExpressedPose, offset: 0xa8, size: 0x1, def value: None
  bool ___hasExpressedPose;

  /// @brief Field bodyHeight, offset: 0xac, size: 0x4, def value: None
  float_t ___bodyHeight;

  /// @brief Field groundLayerMask, offset: 0xb0, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___groundLayerMask;

  /// @brief Field velocity, offset: 0xb4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___velocity;

  /// @brief Field maxGroundCheckDistance offset 0xffffffff size 0x4
  static constexpr float_t maxGroundCheckDistance{ 0.5 };

  /// @brief Field velocityLerp offset 0xffffffff size 0x4
  static constexpr float_t velocityLerp{ 5.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarController, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarController, ___avatar) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarController, ____expressedPlayerPose_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarController, ___hasExpressedPose) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarController, ___bodyHeight) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarController, ___groundLayerMask) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarController, ___velocity) == 0xb4, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarController*, "", "AvatarController");
