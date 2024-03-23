#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FrisbeeItem)
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __Item__Type;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class TrailRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FrisbeeItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FrisbeeItem);
// Type: ::FrisbeeItem
// SizeInfo { instance_size: 432, native_size: -1, calculated_instance_size: 432, calculated_native_size: 428, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FrisbeeItem*
class CORDL_TYPE FrisbeeItem : public ::GlobalNamespace::Item {
public:
  // Declarations
  /// @brief Field _volumePercent, offset 0x1a8, size 0x4
  __declspec(property(get = __cordl_internal_get__volumePercent, put = __cordl_internal_set__volumePercent)) float_t _volumePercent;

  /// @brief Field activeSoundBaseVolume, offset 0x17c, size 0x4
  __declspec(property(get = __cordl_internal_get_activeSoundBaseVolume, put = __cordl_internal_set_activeSoundBaseVolume)) float_t activeSoundBaseVolume;

  /// @brief Field activeSoundEffect, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_activeSoundEffect, put = __cordl_internal_set_activeSoundEffect))::UnityW<::UnityEngine::AudioSource> activeSoundEffect;

  /// @brief Field activeSoundEffectKey, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_activeSoundEffectKey, put = __cordl_internal_set_activeSoundEffectKey))::StringW activeSoundEffectKey;

  /// @brief Field bounceSoundEffectKey, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_bounceSoundEffectKey, put = __cordl_internal_set_bounceSoundEffectKey))::StringW bounceSoundEffectKey;

  /// @brief Field boundingCenter, offset 0x188, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x194, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field defaultDrag, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultDrag, put = __cordl_internal_set_defaultDrag)) float_t defaultDrag;

  /// @brief Field despawnTime, offset 0x198, size 0x4
  __declspec(property(get = __cordl_internal_get_despawnTime, put = __cordl_internal_set_despawnTime)) float_t despawnTime;

  /// @brief Field dragCap, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_dragCap, put = __cordl_internal_set_dragCap)) float_t dragCap;

  /// @brief Field inMotionWalkableColliderSize, offset 0x13c, size 0xc
  __declspec(property(get = __cordl_internal_get_inMotionWalkableColliderSize, put = __cordl_internal_set_inMotionWalkableColliderSize))::UnityEngine::Vector3 inMotionWalkableColliderSize;

  /// @brief Field isActive, offset 0x149, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isWalkable, offset 0x148, size 0x1
  __declspec(property(get = __cordl_internal_get_isWalkable, put = __cordl_internal_set_isWalkable)) bool isWalkable;

  /// @brief Field liftCurve, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_liftCurve, put = __cordl_internal_set_liftCurve))::UnityEngine::AnimationCurve* liftCurve;

  /// @brief Field liftMultiplier, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_liftMultiplier, put = __cordl_internal_set_liftMultiplier)) float_t liftMultiplier;

  /// @brief Field nextCanPlayBounceSoundTime, offset 0x184, size 0x4
  __declspec(property(get = __cordl_internal_get_nextCanPlayBounceSoundTime, put = __cordl_internal_set_nextCanPlayBounceSoundTime)) float_t nextCanPlayBounceSoundTime;

  /// @brief Field startSoundBaseVolume, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get_startSoundBaseVolume, put = __cordl_internal_set_startSoundBaseVolume)) float_t startSoundBaseVolume;

  /// @brief Field startSoundEffect, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_startSoundEffect, put = __cordl_internal_set_startSoundEffect))::UnityW<::UnityEngine::AudioSource> startSoundEffect;

  /// @brief Field startSoundEffectKey, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_startSoundEffectKey, put = __cordl_internal_set_startSoundEffectKey))::StringW startSoundEffectKey;

  /// @brief Field stationaryWalkableColliderSize, offset 0x130, size 0xc
  __declspec(property(get = __cordl_internal_get_stationaryWalkableColliderSize, put = __cordl_internal_set_stationaryWalkableColliderSize))::UnityEngine::Vector3 stationaryWalkableColliderSize;

  /// @brief Field thrownDrag, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_thrownDrag, put = __cordl_internal_set_thrownDrag)) float_t thrownDrag;

  /// @brief Field thrownSidewaysDriftForce, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_thrownSidewaysDriftForce, put = __cordl_internal_set_thrownSidewaysDriftForce)) float_t thrownSidewaysDriftForce;

  /// @brief Field timeSinceLastUsed, offset 0x19c, size 0x4
  __declspec(property(get = __cordl_internal_get_timeSinceLastUsed, put = __cordl_internal_set_timeSinceLastUsed)) float_t timeSinceLastUsed;

  /// @brief Field timeSincePickup, offset 0x1a0, size 0x4
  __declspec(property(get = __cordl_internal_get_timeSincePickup, put = __cordl_internal_set_timeSincePickup)) float_t timeSincePickup;

  /// @brief Field trail, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_trail, put = __cordl_internal_set_trail))::UnityW<::UnityEngine::TrailRenderer> trail;

  /// @brief Field walkableCollider, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_walkableCollider, put = __cordl_internal_set_walkableCollider))::UnityW<::UnityEngine::GameObject> walkableCollider;

  /// @brief Field walkableColliderAnchor, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_walkableColliderAnchor, put = __cordl_internal_set_walkableColliderAnchor))::UnityW<::UnityEngine::Transform> walkableColliderAnchor;

  /// @brief Field walkableColliderBoxCollider, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_walkableColliderBoxCollider, put = __cordl_internal_set_walkableColliderBoxCollider))::UnityW<::UnityEngine::BoxCollider> walkableColliderBoxCollider;

  /// @brief Field walkableColliderTransform, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_walkableColliderTransform, put = __cordl_internal_set_walkableColliderTransform))::UnityW<::UnityEngine::Transform> walkableColliderTransform;

  /// @brief Field wasAnchoredToNothingLastTime, offset 0x1a4, size 0x1
  __declspec(property(get = __cordl_internal_get_wasAnchoredToNothingLastTime, put = __cordl_internal_set_wasAnchoredToNothingLastTime)) bool wasAnchoredToNothingLastTime;

  /// @brief Field wasFrisbeeThrown, offset 0x180, size 0x1
  __declspec(property(get = __cordl_internal_get_wasFrisbeeThrown, put = __cordl_internal_set_wasFrisbeeThrown)) bool wasFrisbeeThrown;

  /// @brief Method DestroySelf, addr 0x2a9fd80, size 0x90, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method DisableDespawning, addr 0x2aa0778, size 0xc, virtual true, abstract: false, final false
  inline void DisableDespawning();

  /// @brief Method GetBounds, addr 0x2a9f6f8, size 0x1c, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method GetFlipLocalCenter, addr 0x2aa00e4, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetFlipLocalCenter();

  /// @brief Method Initialize, addr 0x2a9f714, size 0x15c, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::FrisbeeItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2a9fe10, size 0x120, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnFixedUpdate, addr 0x2aa02b4, size 0x4c4, virtual true, abstract: false, final false
  inline void OnFixedUpdate();

  /// @brief Method OnMasterCollisionEnter, addr 0x2aa0784, size 0x2fc, virtual true, abstract: false, final false
  inline void OnMasterCollisionEnter(::UnityEngine::Collision* collision);

  /// @brief Method OnUpdate, addr 0x2aa00f4, size 0x16c, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method RefreshIsWalkable, addr 0x2a9ff30, size 0x50, virtual false, abstract: false, final false
  inline void RefreshIsWalkable();

  /// @brief Method RefreshSoundVolume, addr 0x2a9ff80, size 0x164, virtual false, abstract: false, final false
  inline void RefreshSoundVolume();

  /// @brief Method SetActive, addr 0x2a9f870, size 0x510, virtual false, abstract: false, final false
  inline void SetActive(bool newIsActive);

  /// @brief Method SetIsWalkable, addr 0x2aa0c4c, size 0xc8, virtual false, abstract: false, final false
  inline void SetIsWalkable(bool newIsWalkable);

  constexpr float_t const& __cordl_internal_get__volumePercent() const;

  constexpr float_t& __cordl_internal_get__volumePercent();

  constexpr float_t const& __cordl_internal_get_activeSoundBaseVolume() const;

  constexpr float_t& __cordl_internal_get_activeSoundBaseVolume();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_activeSoundEffect() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_activeSoundEffect();

  constexpr ::StringW const& __cordl_internal_get_activeSoundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_activeSoundEffectKey();

  constexpr ::StringW const& __cordl_internal_get_bounceSoundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_bounceSoundEffectKey();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr float_t const& __cordl_internal_get_defaultDrag() const;

  constexpr float_t& __cordl_internal_get_defaultDrag();

  constexpr float_t const& __cordl_internal_get_despawnTime() const;

  constexpr float_t& __cordl_internal_get_despawnTime();

  constexpr float_t const& __cordl_internal_get_dragCap() const;

  constexpr float_t& __cordl_internal_get_dragCap();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_inMotionWalkableColliderSize() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_inMotionWalkableColliderSize();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isWalkable() const;

  constexpr bool& __cordl_internal_get_isWalkable();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_liftCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_liftCurve() const;

  constexpr float_t const& __cordl_internal_get_liftMultiplier() const;

  constexpr float_t& __cordl_internal_get_liftMultiplier();

  constexpr float_t const& __cordl_internal_get_nextCanPlayBounceSoundTime() const;

  constexpr float_t& __cordl_internal_get_nextCanPlayBounceSoundTime();

  constexpr float_t const& __cordl_internal_get_startSoundBaseVolume() const;

  constexpr float_t& __cordl_internal_get_startSoundBaseVolume();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_startSoundEffect() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_startSoundEffect();

  constexpr ::StringW const& __cordl_internal_get_startSoundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_startSoundEffectKey();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_stationaryWalkableColliderSize() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_stationaryWalkableColliderSize();

  constexpr float_t const& __cordl_internal_get_thrownDrag() const;

  constexpr float_t& __cordl_internal_get_thrownDrag();

  constexpr float_t const& __cordl_internal_get_thrownSidewaysDriftForce() const;

  constexpr float_t& __cordl_internal_get_thrownSidewaysDriftForce();

  constexpr float_t const& __cordl_internal_get_timeSinceLastUsed() const;

  constexpr float_t& __cordl_internal_get_timeSinceLastUsed();

  constexpr float_t const& __cordl_internal_get_timeSincePickup() const;

  constexpr float_t& __cordl_internal_get_timeSincePickup();

  constexpr ::UnityW<::UnityEngine::TrailRenderer> const& __cordl_internal_get_trail() const;

  constexpr ::UnityW<::UnityEngine::TrailRenderer>& __cordl_internal_get_trail();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_walkableCollider() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_walkableCollider();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_walkableColliderAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_walkableColliderAnchor();

  constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_walkableColliderBoxCollider() const;

  constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_walkableColliderBoxCollider();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_walkableColliderTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_walkableColliderTransform();

  constexpr bool const& __cordl_internal_get_wasAnchoredToNothingLastTime() const;

  constexpr bool& __cordl_internal_get_wasAnchoredToNothingLastTime();

  constexpr bool const& __cordl_internal_get_wasFrisbeeThrown() const;

  constexpr bool& __cordl_internal_get_wasFrisbeeThrown();

  constexpr void __cordl_internal_set__volumePercent(float_t value);

  constexpr void __cordl_internal_set_activeSoundBaseVolume(float_t value);

  constexpr void __cordl_internal_set_activeSoundEffect(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_activeSoundEffectKey(::StringW value);

  constexpr void __cordl_internal_set_bounceSoundEffectKey(::StringW value);

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_defaultDrag(float_t value);

  constexpr void __cordl_internal_set_despawnTime(float_t value);

  constexpr void __cordl_internal_set_dragCap(float_t value);

  constexpr void __cordl_internal_set_inMotionWalkableColliderSize(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isWalkable(bool value);

  constexpr void __cordl_internal_set_liftCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_liftMultiplier(float_t value);

  constexpr void __cordl_internal_set_nextCanPlayBounceSoundTime(float_t value);

  constexpr void __cordl_internal_set_startSoundBaseVolume(float_t value);

  constexpr void __cordl_internal_set_startSoundEffect(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_startSoundEffectKey(::StringW value);

  constexpr void __cordl_internal_set_stationaryWalkableColliderSize(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_thrownDrag(float_t value);

  constexpr void __cordl_internal_set_thrownSidewaysDriftForce(float_t value);

  constexpr void __cordl_internal_set_timeSinceLastUsed(float_t value);

  constexpr void __cordl_internal_set_timeSincePickup(float_t value);

  constexpr void __cordl_internal_set_trail(::UnityW<::UnityEngine::TrailRenderer> value);

  constexpr void __cordl_internal_set_walkableCollider(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_walkableColliderAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_walkableColliderBoxCollider(::UnityW<::UnityEngine::BoxCollider> value);

  constexpr void __cordl_internal_set_walkableColliderTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_wasAnchoredToNothingLastTime(bool value);

  constexpr void __cordl_internal_set_wasFrisbeeThrown(bool value);

  /// @brief Method .ctor, addr 0x2aa0d14, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrisbeeItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FrisbeeItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FrisbeeItem(FrisbeeItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FrisbeeItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FrisbeeItem(FrisbeeItem const&) = delete;

  /// @brief Field trail, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TrailRenderer> ___trail;

  /// @brief Field liftCurve, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___liftCurve;

  /// @brief Field thrownSidewaysDriftForce, offset: 0xf8, size: 0x4, def value: None
  float_t ___thrownSidewaysDriftForce;

  /// @brief Field liftMultiplier, offset: 0xfc, size: 0x4, def value: None
  float_t ___liftMultiplier;

  /// @brief Field thrownDrag, offset: 0x100, size: 0x4, def value: None
  float_t ___thrownDrag;

  /// @brief Field defaultDrag, offset: 0x104, size: 0x4, def value: None
  float_t ___defaultDrag;

  /// @brief Field dragCap, offset: 0x108, size: 0x4, def value: None
  float_t ___dragCap;

  /// @brief Field walkableColliderAnchor, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___walkableColliderAnchor;

  /// @brief Field walkableCollider, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___walkableCollider;

  /// @brief Field walkableColliderTransform, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___walkableColliderTransform;

  /// @brief Field walkableColliderBoxCollider, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::BoxCollider> ___walkableColliderBoxCollider;

  /// @brief Field stationaryWalkableColliderSize, offset: 0x130, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___stationaryWalkableColliderSize;

  /// @brief Field inMotionWalkableColliderSize, offset: 0x13c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___inMotionWalkableColliderSize;

  /// @brief Field isWalkable, offset: 0x148, size: 0x1, def value: None
  bool ___isWalkable;

  /// @brief Field isActive, offset: 0x149, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field startSoundEffectKey, offset: 0x150, size: 0x8, def value: None
  ::StringW ___startSoundEffectKey;

  /// @brief Field activeSoundEffectKey, offset: 0x158, size: 0x8, def value: None
  ::StringW ___activeSoundEffectKey;

  /// @brief Field bounceSoundEffectKey, offset: 0x160, size: 0x8, def value: None
  ::StringW ___bounceSoundEffectKey;

  /// @brief Field startSoundEffect, offset: 0x168, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___startSoundEffect;

  /// @brief Field activeSoundEffect, offset: 0x170, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___activeSoundEffect;

  /// @brief Field startSoundBaseVolume, offset: 0x178, size: 0x4, def value: None
  float_t ___startSoundBaseVolume;

  /// @brief Field activeSoundBaseVolume, offset: 0x17c, size: 0x4, def value: None
  float_t ___activeSoundBaseVolume;

  /// @brief Field wasFrisbeeThrown, offset: 0x180, size: 0x1, def value: None
  bool ___wasFrisbeeThrown;

  /// @brief Field nextCanPlayBounceSoundTime, offset: 0x184, size: 0x4, def value: None
  float_t ___nextCanPlayBounceSoundTime;

  /// @brief Field boundingCenter, offset: 0x188, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x194, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field despawnTime, offset: 0x198, size: 0x4, def value: None
  float_t ___despawnTime;

  /// @brief Field timeSinceLastUsed, offset: 0x19c, size: 0x4, def value: None
  float_t ___timeSinceLastUsed;

  /// @brief Field timeSincePickup, offset: 0x1a0, size: 0x4, def value: None
  float_t ___timeSincePickup;

  /// @brief Field wasAnchoredToNothingLastTime, offset: 0x1a4, size: 0x1, def value: None
  bool ___wasAnchoredToNothingLastTime;

  /// @brief Field _volumePercent, offset: 0x1a8, size: 0x4, def value: None
  float_t ____volumePercent;

  /// @brief Field activeMaxVelocityUpAlignmentDot offset 0xffffffff size 0x4
  static constexpr float_t activeMaxVelocityUpAlignmentDot{ 0.4 };

  /// @brief Field activeVelocityThreshold offset 0xffffffff size 0x4
  static constexpr float_t activeVelocityThreshold{ 1.3 };

  /// @brief Field doEmbed offset 0xffffffff size 0x1
  static constexpr bool doEmbed{ false };

  /// @brief Field highVelocityThrowThreshold offset 0xffffffff size 0x4
  static constexpr float_t highVelocityThrowThreshold{ 4.5 };

  /// @brief Field inMotionWalkableColliderSizeMultiplierHorizontal offset 0xffffffff size 0x4
  static constexpr float_t inMotionWalkableColliderSizeMultiplierHorizontal{ 1.4 };

  /// @brief Field inMotionWalkableColliderSizeMultiplierVertical offset 0xffffffff size 0x4
  static constexpr float_t inMotionWalkableColliderSizeMultiplierVertical{ 1.7 };

  /// @brief Field maxSoundVelocitySqrThreshold offset 0xffffffff size 0x4
  static constexpr float_t maxSoundVelocitySqrThreshold{ 25.0 };

  /// @brief Field minTimeBetweenBounceSounds offset 0xffffffff size 0x4
  static constexpr float_t minTimeBetweenBounceSounds{ 0.1 };

  /// @brief Field minWalkableColliderTime offset 0xffffffff size 0x4
  static constexpr float_t minWalkableColliderTime{ 0.15 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FrisbeeItem, 0x1b0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___trail) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___liftCurve) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___thrownSidewaysDriftForce) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___liftMultiplier) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___thrownDrag) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___defaultDrag) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___dragCap) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___walkableColliderAnchor) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___walkableCollider) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___walkableColliderTransform) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___walkableColliderBoxCollider) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___stationaryWalkableColliderSize) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___inMotionWalkableColliderSize) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___isWalkable) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___isActive) == 0x149, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___startSoundEffectKey) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___activeSoundEffectKey) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___bounceSoundEffectKey) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___startSoundEffect) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___activeSoundEffect) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___startSoundBaseVolume) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___activeSoundBaseVolume) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___wasFrisbeeThrown) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___nextCanPlayBounceSoundTime) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___boundingCenter) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___boundingRadius) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___despawnTime) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___timeSinceLastUsed) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___timeSincePickup) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ___wasAnchoredToNothingLastTime) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrisbeeItem, ____volumePercent) == 0x1a8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FrisbeeItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FrisbeeItem*, "", "FrisbeeItem");
