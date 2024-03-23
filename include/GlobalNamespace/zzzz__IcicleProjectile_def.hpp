#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DestructiveProjectile_def.hpp"
#include "GlobalNamespace/zzzz__ExplosionType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IcicleProjectile)
namespace GlobalNamespace {
class Player;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class IcicleProjectile;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IcicleProjectile);
// Type: ::IcicleProjectile
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IcicleProjectile*
class CORDL_TYPE IcicleProjectile : public ::GlobalNamespace::DestructiveProjectile {
public:
  // Declarations
  /// @brief Field acceleration, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get_acceleration, put = __cordl_internal_set_acceleration))::UnityEngine::Vector3 acceleration;

  /// @brief Field accelerationSpeed, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_accelerationSpeed, put = __cordl_internal_set_accelerationSpeed)) float_t accelerationSpeed;

  /// @brief Field explosionRadius, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_explosionRadius, put = __cordl_internal_set_explosionRadius)) float_t explosionRadius;

  /// @brief Field explosionType, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_explosionType, put = __cordl_internal_set_explosionType))::GlobalNamespace::ExplosionType explosionType;

  /// @brief Field freezeDuration, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_freezeDuration, put = __cordl_internal_set_freezeDuration)) float_t freezeDuration;

  /// @brief Field maxSpeed, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_maxSpeed, put = __cordl_internal_set_maxSpeed)) float_t maxSpeed;

  /// @brief Field shatterParticles, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_shatterParticles, put = __cordl_internal_set_shatterParticles))::UnityW<::UnityEngine::ParticleSystem> shatterParticles;

  /// @brief Field shatterSoundKey, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_shatterSoundKey, put = __cordl_internal_set_shatterSoundKey))::StringW shatterSoundKey;

  /// @brief Method DestroySelf, addr 0x1756790, size 0x264, virtual true, abstract: false, final false
  inline void DestroySelf(::UnityEngine::Vector3 position);

  /// @brief Method GetDestroyPosition, addr 0x17566e8, size 0x20, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetDestroyPosition(::UnityEngine::Collider* other);

  /// @brief Method Initialize, addr 0x1756630, size 0x50, virtual true, abstract: false, final false
  inline void Initialize(::StringW projectileID, bool isMaster, ::UnityEngine::Vector3 velocity);

  static inline ::GlobalNamespace::IcicleProjectile* New_ctor();

  /// @brief Method OnFixedUpdate, addr 0x1756680, size 0x68, virtual true, abstract: false, final false
  inline void OnFixedUpdate();

  /// @brief Method OnHitPlayer, addr 0x1756708, size 0x88, virtual true, abstract: false, final false
  inline void OnHitPlayer(::GlobalNamespace::Player* player);

  /// @brief Method SetColor, addr 0x17569f4, size 0xc8, virtual true, abstract: false, final false
  inline void SetColor(::StringW colorKey);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_acceleration() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_acceleration();

  constexpr float_t const& __cordl_internal_get_accelerationSpeed() const;

  constexpr float_t& __cordl_internal_get_accelerationSpeed();

  constexpr float_t const& __cordl_internal_get_explosionRadius() const;

  constexpr float_t& __cordl_internal_get_explosionRadius();

  constexpr ::GlobalNamespace::ExplosionType const& __cordl_internal_get_explosionType() const;

  constexpr ::GlobalNamespace::ExplosionType& __cordl_internal_get_explosionType();

  constexpr float_t const& __cordl_internal_get_freezeDuration() const;

  constexpr float_t& __cordl_internal_get_freezeDuration();

  constexpr float_t const& __cordl_internal_get_maxSpeed() const;

  constexpr float_t& __cordl_internal_get_maxSpeed();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_shatterParticles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_shatterParticles();

  constexpr ::StringW const& __cordl_internal_get_shatterSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_shatterSoundKey();

  constexpr void __cordl_internal_set_acceleration(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_accelerationSpeed(float_t value);

  constexpr void __cordl_internal_set_explosionRadius(float_t value);

  constexpr void __cordl_internal_set_explosionType(::GlobalNamespace::ExplosionType value);

  constexpr void __cordl_internal_set_freezeDuration(float_t value);

  constexpr void __cordl_internal_set_maxSpeed(float_t value);

  constexpr void __cordl_internal_set_shatterParticles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_shatterSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x1756abc, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IcicleProjectile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IcicleProjectile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IcicleProjectile(IcicleProjectile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IcicleProjectile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IcicleProjectile(IcicleProjectile const&) = delete;

  /// @brief Field freezeDuration, offset: 0x5c, size: 0x4, def value: None
  float_t ___freezeDuration;

  /// @brief Field accelerationSpeed, offset: 0x60, size: 0x4, def value: None
  float_t ___accelerationSpeed;

  /// @brief Field maxSpeed, offset: 0x64, size: 0x4, def value: None
  float_t ___maxSpeed;

  /// @brief Field acceleration, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___acceleration;

  /// @brief Field shatterParticles, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___shatterParticles;

  /// @brief Field explosionType, offset: 0x80, size: 0x4, def value: None
  ::GlobalNamespace::ExplosionType ___explosionType;

  /// @brief Field explosionRadius, offset: 0x84, size: 0x4, def value: None
  float_t ___explosionRadius;

  /// @brief Field shatterSoundKey, offset: 0x88, size: 0x8, def value: None
  ::StringW ___shatterSoundKey;

  /// @brief Field mapObjectSource offset 0xffffffff size 0x8
  static constexpr ::ConstString mapObjectSource{ u"1x2_icicleTrap" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IcicleProjectile, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleProjectile, ___freezeDuration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleProjectile, ___accelerationSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleProjectile, ___maxSpeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleProjectile, ___acceleration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleProjectile, ___shatterParticles) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleProjectile, ___explosionType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleProjectile, ___explosionRadius) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleProjectile, ___shatterSoundKey) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IcicleProjectile);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IcicleProjectile*, "", "IcicleProjectile");
