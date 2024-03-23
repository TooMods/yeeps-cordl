#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DespawningItem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GunItem)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GunItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GunItem);
// Type: ::GunItem
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 348, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GunItem*
class CORDL_TYPE GunItem : public ::GlobalNamespace::DespawningItem {
public:
  // Declarations
  /// @brief Field boundingCenter, offset 0x14c, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field failedToLoadSoundKey, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_failedToLoadSoundKey, put = __cordl_internal_set_failedToLoadSoundKey))::StringW failedToLoadSoundKey;

  /// @brief Field grabCooldown, offset 0x128, size 0x4
  __declspec(property(get = __cordl_internal_get_grabCooldown, put = __cordl_internal_set_grabCooldown)) float_t grabCooldown;

  /// @brief Field grabCooldownTimer, offset 0x144, size 0x4
  __declspec(property(get = __cordl_internal_get_grabCooldownTimer, put = __cordl_internal_set_grabCooldownTimer)) float_t grabCooldownTimer;

  /// @brief Field inheritVelocityMultiplier, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_inheritVelocityMultiplier, put = __cordl_internal_set_inheritVelocityMultiplier)) float_t inheritVelocityMultiplier;

  /// @brief Field isLoaded, offset 0x148, size 0x1
  __declspec(property(get = __cordl_internal_get_isLoaded, put = __cordl_internal_set_isLoaded)) bool isLoaded;

  /// @brief Field projectileKey, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_projectileKey, put = __cordl_internal_set_projectileKey))::StringW projectileKey;

  /// @brief Field projectileSpawn, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_projectileSpawn, put = __cordl_internal_set_projectileSpawn))::UnityW<::UnityEngine::Transform> projectileSpawn;

  /// @brief Field projectileSpeed, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_projectileSpeed, put = __cordl_internal_set_projectileSpeed)) float_t projectileSpeed;

  /// @brief Field releaseAngularVelocity, offset 0x138, size 0xc
  __declspec(property(get = __cordl_internal_get_releaseAngularVelocity, put = __cordl_internal_set_releaseAngularVelocity))::UnityEngine::Vector3 releaseAngularVelocity;

  /// @brief Field releaseVelocity, offset 0x12c, size 0xc
  __declspec(property(get = __cordl_internal_get_releaseVelocity, put = __cordl_internal_set_releaseVelocity))::UnityEngine::Vector3 releaseVelocity;

  /// @brief Field reloadCost, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_reloadCost, put = __cordl_internal_set_reloadCost)) int32_t reloadCost;

  /// @brief Field shootParticles, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_shootParticles, put = __cordl_internal_set_shootParticles))::UnityW<::UnityEngine::ParticleSystem> shootParticles;

  /// @brief Field shootSoundKey, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_shootSoundKey, put = __cordl_internal_set_shootSoundKey))::StringW shootSoundKey;

  /// @brief Field wasHeld, offset 0x149, size 0x1
  __declspec(property(get = __cordl_internal_get_wasHeld, put = __cordl_internal_set_wasHeld)) bool wasHeld;

  /// @brief Method CalculateThrowVelocity, addr 0x2aa1f00, size 0x19c, virtual true, abstract: false, final false
  inline void CalculateThrowVelocity(ByRef<::UnityEngine::Vector3> velocity, ByRef<::UnityEngine::Vector3> angularVelocity);

  /// @brief Method GetBounds, addr 0x2aa1dac, size 0x20, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  static inline ::GlobalNamespace::GunItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2aa1dcc, size 0x134, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x2aa209c, size 0x278, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(::StringW payload);

  /// @brief Method OnUpdate, addr 0x2aa2314, size 0x5c, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method SetIsInteractable, addr 0x2aa2370, size 0x1c, virtual true, abstract: false, final false
  inline void SetIsInteractable(bool newIsInteractable);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr ::StringW const& __cordl_internal_get_failedToLoadSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_failedToLoadSoundKey();

  constexpr float_t const& __cordl_internal_get_grabCooldown() const;

  constexpr float_t& __cordl_internal_get_grabCooldown();

  constexpr float_t const& __cordl_internal_get_grabCooldownTimer() const;

  constexpr float_t& __cordl_internal_get_grabCooldownTimer();

  constexpr float_t const& __cordl_internal_get_inheritVelocityMultiplier() const;

  constexpr float_t& __cordl_internal_get_inheritVelocityMultiplier();

  constexpr bool const& __cordl_internal_get_isLoaded() const;

  constexpr bool& __cordl_internal_get_isLoaded();

  constexpr ::StringW const& __cordl_internal_get_projectileKey() const;

  constexpr ::StringW& __cordl_internal_get_projectileKey();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_projectileSpawn() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_projectileSpawn();

  constexpr float_t const& __cordl_internal_get_projectileSpeed() const;

  constexpr float_t& __cordl_internal_get_projectileSpeed();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_releaseAngularVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_releaseAngularVelocity();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_releaseVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_releaseVelocity();

  constexpr int32_t const& __cordl_internal_get_reloadCost() const;

  constexpr int32_t& __cordl_internal_get_reloadCost();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_shootParticles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_shootParticles();

  constexpr ::StringW const& __cordl_internal_get_shootSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_shootSoundKey();

  constexpr bool const& __cordl_internal_get_wasHeld() const;

  constexpr bool& __cordl_internal_get_wasHeld();

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_failedToLoadSoundKey(::StringW value);

  constexpr void __cordl_internal_set_grabCooldown(float_t value);

  constexpr void __cordl_internal_set_grabCooldownTimer(float_t value);

  constexpr void __cordl_internal_set_inheritVelocityMultiplier(float_t value);

  constexpr void __cordl_internal_set_isLoaded(bool value);

  constexpr void __cordl_internal_set_projectileKey(::StringW value);

  constexpr void __cordl_internal_set_projectileSpawn(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_projectileSpeed(float_t value);

  constexpr void __cordl_internal_set_releaseAngularVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_releaseVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_reloadCost(int32_t value);

  constexpr void __cordl_internal_set_shootParticles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_shootSoundKey(::StringW value);

  constexpr void __cordl_internal_set_wasHeld(bool value);

  /// @brief Method .ctor, addr 0x2aa238c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GunItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GunItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GunItem(GunItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GunItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GunItem(GunItem const&) = delete;

  /// @brief Field projectileKey, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___projectileKey;

  /// @brief Field projectileSpawn, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___projectileSpawn;

  /// @brief Field projectileSpeed, offset: 0x100, size: 0x4, def value: None
  float_t ___projectileSpeed;

  /// @brief Field inheritVelocityMultiplier, offset: 0x104, size: 0x4, def value: None
  float_t ___inheritVelocityMultiplier;

  /// @brief Field reloadCost, offset: 0x108, size: 0x4, def value: None
  int32_t ___reloadCost;

  /// @brief Field shootParticles, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___shootParticles;

  /// @brief Field shootSoundKey, offset: 0x118, size: 0x8, def value: None
  ::StringW ___shootSoundKey;

  /// @brief Field failedToLoadSoundKey, offset: 0x120, size: 0x8, def value: None
  ::StringW ___failedToLoadSoundKey;

  /// @brief Field grabCooldown, offset: 0x128, size: 0x4, def value: None
  float_t ___grabCooldown;

  /// @brief Field releaseVelocity, offset: 0x12c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___releaseVelocity;

  /// @brief Field releaseAngularVelocity, offset: 0x138, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___releaseAngularVelocity;

  /// @brief Field grabCooldownTimer, offset: 0x144, size: 0x4, def value: None
  float_t ___grabCooldownTimer;

  /// @brief Field isLoaded, offset: 0x148, size: 0x1, def value: None
  bool ___isLoaded;

  /// @brief Field wasHeld, offset: 0x149, size: 0x1, def value: None
  bool ___wasHeld;

  /// @brief Field boundingCenter, offset: 0x14c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x158, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field failedToShootMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToShootMessage{ u"failed" };

  /// @brief Field shootHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t shootHapticDuration{ 0.2 };

  /// @brief Field shootHapticIntensity offset 0xffffffff size 0x4
  static constexpr float_t shootHapticIntensity{ 0.5 };

  /// @brief Field shootMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString shootMessage{ u"shoot" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GunItem, 0x160>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___projectileKey) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___projectileSpawn) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___projectileSpeed) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___inheritVelocityMultiplier) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___reloadCost) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___shootParticles) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___shootSoundKey) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___failedToLoadSoundKey) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___grabCooldown) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___releaseVelocity) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___releaseAngularVelocity) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___grabCooldownTimer) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___isLoaded) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___wasHeld) == 0x149, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___boundingCenter) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GunItem, ___boundingRadius) == 0x158, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GunItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GunItem*, "", "GunItem");
