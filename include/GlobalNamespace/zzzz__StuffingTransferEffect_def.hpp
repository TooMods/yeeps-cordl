#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StuffingManager_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StuffingTransferEffect)
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
struct __StuffingManager__TransferType;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct __ParticleSystem__Particle;
}
// Forward declare root types
namespace GlobalNamespace {
class StuffingTransferEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StuffingTransferEffect);
// Type: ::StuffingTransferEffect
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StuffingTransferEffect*
class CORDL_TYPE StuffingTransferEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field amountToParticleCountRatio, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_amountToParticleCountRatio, put = __cordl_internal_set_amountToParticleCountRatio)) float_t amountToParticleCountRatio;

  /// @brief Field distanceToTarget, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_distanceToTarget, put = __cordl_internal_set_distanceToTarget)) float_t distanceToTarget;

  /// @brief Field fromTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_fromTransform, put = __cordl_internal_set_fromTransform))::UnityW<::UnityEngine::Transform> fromTransform;

  /// @brief Field lastToWorldPosition, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_lastToWorldPosition, put = __cordl_internal_set_lastToWorldPosition))::UnityEngine::Vector3 lastToWorldPosition;

  /// @brief Field nextSpawnTime, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_nextSpawnTime, put = __cordl_internal_set_nextSpawnTime)) float_t nextSpawnTime;

  /// @brief Field notifiedPlayer, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_notifiedPlayer, put = __cordl_internal_set_notifiedPlayer))::UnityW<::GlobalNamespace::Player> notifiedPlayer;

  /// @brief Field notifyPlayerAsSoonAsSpawningComplete, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_notifyPlayerAsSoonAsSpawningComplete, put = __cordl_internal_set_notifyPlayerAsSoonAsSpawningComplete)) bool notifyPlayerAsSoonAsSpawningComplete;

  /// @brief Field particleAttractionForce, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_particleAttractionForce, put = __cordl_internal_set_particleAttractionForce)) float_t particleAttractionForce;

  /// @brief Field particleDrag, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_particleDrag, put = __cordl_internal_set_particleDrag)) float_t particleDrag;

  /// @brief Field particles, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_particles,
                      put = __cordl_internal_set_particles))::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> particles;

  /// @brief Field remainingParticlesToSpawn, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_remainingParticlesToSpawn, put = __cordl_internal_set_remainingParticlesToSpawn)) int32_t remainingParticlesToSpawn;

  /// @brief Field soundTriggeredUserID, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_soundTriggeredUserID, put = __cordl_internal_set_soundTriggeredUserID))::StringW soundTriggeredUserID;

  /// @brief Field speedRampPreserveVelocityRatio, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_speedRampPreserveVelocityRatio, put = __cordl_internal_set_speedRampPreserveVelocityRatio)) float_t speedRampPreserveVelocityRatio;

  /// @brief Field speedRampSpeed, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_speedRampSpeed, put = __cordl_internal_set_speedRampSpeed)) float_t speedRampSpeed;

  /// @brief Field speedRampTimer, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_speedRampTimer, put = __cordl_internal_set_speedRampTimer)) float_t speedRampTimer;

  /// @brief Field stuffingParticles, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingParticles, put = __cordl_internal_set_stuffingParticles))::UnityW<::UnityEngine::ParticleSystem> stuffingParticles;

  /// @brief Field toLocalPosition, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_toLocalPosition, put = __cordl_internal_set_toLocalPosition))::UnityEngine::Vector3 toLocalPosition;

  /// @brief Field toTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_toTransform, put = __cordl_internal_set_toTransform))::UnityW<::UnityEngine::Transform> toTransform;

  /// @brief Field transferType, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_transferType, put = __cordl_internal_set_transferType))::GlobalNamespace::__StuffingManager__TransferType transferType;

  /// @brief Method DestroySelf, addr 0x1441e28, size 0x9c, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method FixedUpdate, addr 0x14418e4, size 0x544, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method Initialize, addr 0x1440dc4, size 0x404, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::Player* player, ::UnityEngine::Transform* source, ::UnityEngine::Vector3 sourcePosition, ::GlobalNamespace::__StuffingManager__TransferType transferType,
                         int32_t amount);

  /// @brief Method LateUpdate, addr 0x1441818, size 0xcc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::StuffingTransferEffect* New_ctor();

  /// @brief Method OnDisable, addr 0x1441ec4, size 0x80, virtual false, abstract: false, final false
  inline void OnDisable();

  constexpr float_t const& __cordl_internal_get_amountToParticleCountRatio() const;

  constexpr float_t& __cordl_internal_get_amountToParticleCountRatio();

  constexpr float_t const& __cordl_internal_get_distanceToTarget() const;

  constexpr float_t& __cordl_internal_get_distanceToTarget();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_fromTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_fromTransform();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastToWorldPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastToWorldPosition();

  constexpr float_t const& __cordl_internal_get_nextSpawnTime() const;

  constexpr float_t& __cordl_internal_get_nextSpawnTime();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_notifiedPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_notifiedPlayer();

  constexpr bool const& __cordl_internal_get_notifyPlayerAsSoonAsSpawningComplete() const;

  constexpr bool& __cordl_internal_get_notifyPlayerAsSoonAsSpawningComplete();

  constexpr float_t const& __cordl_internal_get_particleAttractionForce() const;

  constexpr float_t& __cordl_internal_get_particleAttractionForce();

  constexpr float_t const& __cordl_internal_get_particleDrag() const;

  constexpr float_t& __cordl_internal_get_particleDrag();

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> const& __cordl_internal_get_particles() const;

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>& __cordl_internal_get_particles();

  constexpr int32_t const& __cordl_internal_get_remainingParticlesToSpawn() const;

  constexpr int32_t& __cordl_internal_get_remainingParticlesToSpawn();

  constexpr ::StringW const& __cordl_internal_get_soundTriggeredUserID() const;

  constexpr ::StringW& __cordl_internal_get_soundTriggeredUserID();

  constexpr float_t const& __cordl_internal_get_speedRampPreserveVelocityRatio() const;

  constexpr float_t& __cordl_internal_get_speedRampPreserveVelocityRatio();

  constexpr float_t const& __cordl_internal_get_speedRampSpeed() const;

  constexpr float_t& __cordl_internal_get_speedRampSpeed();

  constexpr float_t const& __cordl_internal_get_speedRampTimer() const;

  constexpr float_t& __cordl_internal_get_speedRampTimer();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_stuffingParticles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_stuffingParticles();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_toLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_toLocalPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_toTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_toTransform();

  constexpr ::GlobalNamespace::__StuffingManager__TransferType const& __cordl_internal_get_transferType() const;

  constexpr ::GlobalNamespace::__StuffingManager__TransferType& __cordl_internal_get_transferType();

  constexpr void __cordl_internal_set_amountToParticleCountRatio(float_t value);

  constexpr void __cordl_internal_set_distanceToTarget(float_t value);

  constexpr void __cordl_internal_set_fromTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_lastToWorldPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_nextSpawnTime(float_t value);

  constexpr void __cordl_internal_set_notifiedPlayer(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_notifyPlayerAsSoonAsSpawningComplete(bool value);

  constexpr void __cordl_internal_set_particleAttractionForce(float_t value);

  constexpr void __cordl_internal_set_particleDrag(float_t value);

  constexpr void __cordl_internal_set_particles(::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> value);

  constexpr void __cordl_internal_set_remainingParticlesToSpawn(int32_t value);

  constexpr void __cordl_internal_set_soundTriggeredUserID(::StringW value);

  constexpr void __cordl_internal_set_speedRampPreserveVelocityRatio(float_t value);

  constexpr void __cordl_internal_set_speedRampSpeed(float_t value);

  constexpr void __cordl_internal_set_speedRampTimer(float_t value);

  constexpr void __cordl_internal_set_stuffingParticles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_toLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_toTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_transferType(::GlobalNamespace::__StuffingManager__TransferType value);

  /// @brief Method .ctor, addr 0x1441f44, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StuffingTransferEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StuffingTransferEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StuffingTransferEffect(StuffingTransferEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StuffingTransferEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StuffingTransferEffect(StuffingTransferEffect const&) = delete;

  /// @brief Field stuffingParticles, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___stuffingParticles;

  /// @brief Field particles, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> ___particles;

  /// @brief Field fromTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___fromTransform;

  /// @brief Field toTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___toTransform;

  /// @brief Field lastToWorldPosition, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastToWorldPosition;

  /// @brief Field toLocalPosition, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___toLocalPosition;

  /// @brief Field distanceToTarget, offset: 0x50, size: 0x4, def value: None
  float_t ___distanceToTarget;

  /// @brief Field remainingParticlesToSpawn, offset: 0x54, size: 0x4, def value: None
  int32_t ___remainingParticlesToSpawn;

  /// @brief Field amountToParticleCountRatio, offset: 0x58, size: 0x4, def value: None
  float_t ___amountToParticleCountRatio;

  /// @brief Field speedRampTimer, offset: 0x5c, size: 0x4, def value: None
  float_t ___speedRampTimer;

  /// @brief Field speedRampSpeed, offset: 0x60, size: 0x4, def value: None
  float_t ___speedRampSpeed;

  /// @brief Field speedRampPreserveVelocityRatio, offset: 0x64, size: 0x4, def value: None
  float_t ___speedRampPreserveVelocityRatio;

  /// @brief Field particleDrag, offset: 0x68, size: 0x4, def value: None
  float_t ___particleDrag;

  /// @brief Field particleAttractionForce, offset: 0x6c, size: 0x4, def value: None
  float_t ___particleAttractionForce;

  /// @brief Field nextSpawnTime, offset: 0x70, size: 0x4, def value: None
  float_t ___nextSpawnTime;

  /// @brief Field soundTriggeredUserID, offset: 0x78, size: 0x8, def value: None
  ::StringW ___soundTriggeredUserID;

  /// @brief Field notifiedPlayer, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___notifiedPlayer;

  /// @brief Field notifyPlayerAsSoonAsSpawningComplete, offset: 0x88, size: 0x1, def value: None
  bool ___notifyPlayerAsSoonAsSpawningComplete;

  /// @brief Field transferType, offset: 0x8c, size: 0x4, def value: None
  ::GlobalNamespace::__StuffingManager__TransferType ___transferType;

  /// @brief Field absoluteMaxParticles offset 0xffffffff size 0x4
  static constexpr int32_t absoluteMaxParticles{ static_cast<int32_t>(0x7d) };

  /// @brief Field arrivalThreshold offset 0xffffffff size 0x4
  static constexpr float_t arrivalThreshold{ 0.075 };

  /// @brief Field distanceThresholdForSpeedScaling offset 0xffffffff size 0x4
  static constexpr float_t distanceThresholdForSpeedScaling{ 1.5 };

  /// @brief Field maxLifeTime offset 0xffffffff size 0x4
  static constexpr float_t maxLifeTime{ 5.0 };

  /// @brief Field particleLifetime offset 0xffffffff size 0x4
  static constexpr float_t particleLifetime{ 100.0 };

  /// @brief Field particlesPerSecond offset 0xffffffff size 0x4
  static constexpr float_t particlesPerSecond{ 50.0 };

  /// @brief Field scaleDownDistance offset 0xffffffff size 0x4
  static constexpr float_t scaleDownDistance{ 0.2 };

  /// @brief Field speedRampDuration offset 0xffffffff size 0x4
  static constexpr float_t speedRampDuration{ 1.75 };

  /// @brief Field speedRampPreserveVelocityRatioEnd offset 0xffffffff size 0x4
  static constexpr float_t speedRampPreserveVelocityRatioEnd{ 0.4 };

  /// @brief Field speedRampPreserveVelocityRatioStart offset 0xffffffff size 0x4
  static constexpr float_t speedRampPreserveVelocityRatioStart{ 0.8 };

  /// @brief Field speedRampSpeedEnd offset 0xffffffff size 0x4
  static constexpr float_t speedRampSpeedEnd{ 40.0 };

  /// @brief Field speedRampSpeedStart offset 0xffffffff size 0x4
  static constexpr float_t speedRampSpeedStart{ 2.0 };

  /// @brief Field timeBetweenParticles offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenParticles{ 0.02 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StuffingTransferEffect, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___stuffingParticles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___particles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___fromTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___toTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___lastToWorldPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___toLocalPosition) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___distanceToTarget) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___remainingParticlesToSpawn) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___amountToParticleCountRatio) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___speedRampTimer) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___speedRampSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___speedRampPreserveVelocityRatio) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___particleDrag) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___particleAttractionForce) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___nextSpawnTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___soundTriggeredUserID) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___notifiedPlayer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___notifyPlayerAsSoonAsSpawningComplete) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingTransferEffect, ___transferType) == 0x8c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StuffingTransferEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StuffingTransferEffect*, "", "StuffingTransferEffect");
