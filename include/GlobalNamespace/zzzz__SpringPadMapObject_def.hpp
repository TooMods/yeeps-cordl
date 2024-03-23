#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpringPadMapObject)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SpringPadMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpringPadMapObject);
// Type: ::SpringPadMapObject
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 308, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SpringPadMapObject*
class CORDL_TYPE SpringPadMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field activateSoundKey, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_activateSoundKey, put = __cordl_internal_set_activateSoundKey))::StringW activateSoundKey;

  /// @brief Field inLaunch, offset 0x12c, size 0x1
  __declspec(property(get = __cordl_internal_get_inLaunch, put = __cordl_internal_set_inLaunch)) bool inLaunch;

  /// @brief Field isActivated, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_isActivated, put = __cordl_internal_set_isActivated)) bool isActivated;

  /// @brief Field launchAngle, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_launchAngle, put = __cordl_internal_set_launchAngle)) float_t launchAngle;

  /// @brief Field launchCurve, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_launchCurve, put = __cordl_internal_set_launchCurve))::UnityEngine::AnimationCurve* launchCurve;

  /// @brief Field launchDuration, offset 0x128, size 0x4
  __declspec(property(get = __cordl_internal_get_launchDuration, put = __cordl_internal_set_launchDuration)) float_t launchDuration;

  /// @brief Field launchP, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_launchP, put = __cordl_internal_set_launchP)) float_t launchP;

  /// @brief Field launchPad, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_launchPad, put = __cordl_internal_set_launchPad))::UnityW<::UnityEngine::Transform> launchPad;

  /// @brief Field launchSoundKey, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_launchSoundKey, put = __cordl_internal_set_launchSoundKey))::StringW launchSoundKey;

  /// @brief Field launchSpeed, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_launchSpeed, put = __cordl_internal_set_launchSpeed)) float_t launchSpeed;

  /// @brief Field launchTime, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_launchTime, put = __cordl_internal_set_launchTime)) float_t launchTime;

  /// @brief Field launchZoneCenter, offset 0xe8, size 0xc
  __declspec(property(get = __cordl_internal_get_launchZoneCenter, put = __cordl_internal_set_launchZoneCenter))::UnityEngine::Vector3 launchZoneCenter;

  /// @brief Field launchZoneHalfExtents, offset 0xf4, size 0xc
  __declspec(property(get = __cordl_internal_get_launchZoneHalfExtents, put = __cordl_internal_set_launchZoneHalfExtents))::UnityEngine::Vector3 launchZoneHalfExtents;

  /// @brief Field nextValidActivateTime, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_nextValidActivateTime, put = __cordl_internal_set_nextValidActivateTime)) float_t nextValidActivateTime;

  /// @brief Field timeFromActivationToLaunch, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_timeFromActivationToLaunch, put = __cordl_internal_set_timeFromActivationToLaunch)) float_t timeFromActivationToLaunch;

  /// @brief Method AllowsBatching, addr 0x308240c, size 0x8, virtual true, abstract: false, final false
  inline bool AllowsBatching();

  /// @brief Method DoCollisionMessaging, addr 0x3081eec, size 0x8, virtual true, abstract: false, final false
  inline bool DoCollisionMessaging();

  /// @brief Method DoLaunch, addr 0x30820f4, size 0x1d8, virtual false, abstract: false, final false
  inline void DoLaunch();

  /// @brief Method GetLaunchVelocity, addr 0x3082318, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLaunchVelocity();

  static inline ::GlobalNamespace::SpringPadMapObject* New_ctor();

  /// @brief Method OnMasterPlayerCollided, addr 0x3081ef4, size 0x70, virtual true, abstract: false, final false
  inline void OnMasterPlayerCollided(::UnityEngine::Vector3 playerPosition, ::UnityEngine::Vector3 relativeVelocity);

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x3081f64, size 0xf8, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(bool sentByMasterPlayer, ::StringW payload);

  /// @brief Method SetLaunchRatio, addr 0x30822cc, size 0x4c, virtual false, abstract: false, final false
  inline void SetLaunchRatio(float_t ratio);

  /// @brief Method SetRenderersActive, addr 0x3082630, size 0x1fc, virtual true, abstract: false, final false
  inline void SetRenderersActive(bool newActive);

  /// @brief Method SetSharedMaterials, addr 0x3082414, size 0x21c, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials);

  /// @brief Method Update, addr 0x308205c, size 0x98, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::StringW const& __cordl_internal_get_activateSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_activateSoundKey();

  constexpr bool const& __cordl_internal_get_inLaunch() const;

  constexpr bool& __cordl_internal_get_inLaunch();

  constexpr bool const& __cordl_internal_get_isActivated() const;

  constexpr bool& __cordl_internal_get_isActivated();

  constexpr float_t const& __cordl_internal_get_launchAngle() const;

  constexpr float_t& __cordl_internal_get_launchAngle();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_launchCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_launchCurve() const;

  constexpr float_t const& __cordl_internal_get_launchDuration() const;

  constexpr float_t& __cordl_internal_get_launchDuration();

  constexpr float_t const& __cordl_internal_get_launchP() const;

  constexpr float_t& __cordl_internal_get_launchP();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_launchPad() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_launchPad();

  constexpr ::StringW const& __cordl_internal_get_launchSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_launchSoundKey();

  constexpr float_t const& __cordl_internal_get_launchSpeed() const;

  constexpr float_t& __cordl_internal_get_launchSpeed();

  constexpr float_t const& __cordl_internal_get_launchTime() const;

  constexpr float_t& __cordl_internal_get_launchTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_launchZoneCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_launchZoneCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_launchZoneHalfExtents() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_launchZoneHalfExtents();

  constexpr float_t const& __cordl_internal_get_nextValidActivateTime() const;

  constexpr float_t& __cordl_internal_get_nextValidActivateTime();

  constexpr float_t const& __cordl_internal_get_timeFromActivationToLaunch() const;

  constexpr float_t& __cordl_internal_get_timeFromActivationToLaunch();

  constexpr void __cordl_internal_set_activateSoundKey(::StringW value);

  constexpr void __cordl_internal_set_inLaunch(bool value);

  constexpr void __cordl_internal_set_isActivated(bool value);

  constexpr void __cordl_internal_set_launchAngle(float_t value);

  constexpr void __cordl_internal_set_launchCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_launchDuration(float_t value);

  constexpr void __cordl_internal_set_launchP(float_t value);

  constexpr void __cordl_internal_set_launchPad(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_launchSoundKey(::StringW value);

  constexpr void __cordl_internal_set_launchSpeed(float_t value);

  constexpr void __cordl_internal_set_launchTime(float_t value);

  constexpr void __cordl_internal_set_launchZoneCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_launchZoneHalfExtents(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_nextValidActivateTime(float_t value);

  constexpr void __cordl_internal_set_timeFromActivationToLaunch(float_t value);

  /// @brief Method .ctor, addr 0x308282c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpringPadMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpringPadMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpringPadMapObject(SpringPadMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpringPadMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpringPadMapObject(SpringPadMapObject const&) = delete;

  /// @brief Field launchSpeed, offset: 0xd8, size: 0x4, def value: None
  float_t ___launchSpeed;

  /// @brief Field launchAngle, offset: 0xdc, size: 0x4, def value: None
  float_t ___launchAngle;

  /// @brief Field launchPad, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___launchPad;

  /// @brief Field launchZoneCenter, offset: 0xe8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___launchZoneCenter;

  /// @brief Field launchZoneHalfExtents, offset: 0xf4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___launchZoneHalfExtents;

  /// @brief Field activateSoundKey, offset: 0x100, size: 0x8, def value: None
  ::StringW ___activateSoundKey;

  /// @brief Field isActivated, offset: 0x108, size: 0x1, def value: None
  bool ___isActivated;

  /// @brief Field timeFromActivationToLaunch, offset: 0x10c, size: 0x4, def value: None
  float_t ___timeFromActivationToLaunch;

  /// @brief Field launchTime, offset: 0x110, size: 0x4, def value: None
  float_t ___launchTime;

  /// @brief Field nextValidActivateTime, offset: 0x114, size: 0x4, def value: None
  float_t ___nextValidActivateTime;

  /// @brief Field launchSoundKey, offset: 0x118, size: 0x8, def value: None
  ::StringW ___launchSoundKey;

  /// @brief Field launchCurve, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___launchCurve;

  /// @brief Field launchDuration, offset: 0x128, size: 0x4, def value: None
  float_t ___launchDuration;

  /// @brief Field inLaunch, offset: 0x12c, size: 0x1, def value: None
  bool ___inLaunch;

  /// @brief Field launchP, offset: 0x130, size: 0x4, def value: None
  float_t ___launchP;

  /// @brief Field activateMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString activateMessage{ u"activate" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpringPadMapObject, 0x138>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___launchSpeed) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___launchAngle) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___launchPad) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___launchZoneCenter) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___launchZoneHalfExtents) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___activateSoundKey) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___isActivated) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___timeFromActivationToLaunch) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___launchTime) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___nextValidActivateTime) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___launchSoundKey) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___launchCurve) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___launchDuration) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___inLaunch) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringPadMapObject, ___launchP) == 0x130, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpringPadMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpringPadMapObject*, "", "SpringPadMapObject");
