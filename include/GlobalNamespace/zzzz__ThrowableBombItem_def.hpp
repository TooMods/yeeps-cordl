#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ExplosionType_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableEmbeddingItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowableBombItem)
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __Item__Type;
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
class ThrowableBombItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThrowableBombItem);
// Type: ::ThrowableBombItem
// SizeInfo { instance_size: 432, native_size: -1, calculated_instance_size: 432, calculated_native_size: 428, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThrowableBombItem*
class CORDL_TYPE ThrowableBombItem : public ::GlobalNamespace::ThrowableEmbeddingItem {
public:
  // Declarations
  /// @brief Field bombMat, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_bombMat, put = __cordl_internal_set_bombMat))::UnityW<::UnityEngine::Material> bombMat;

  /// @brief Field bombTransform, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_bombTransform, put = __cordl_internal_set_bombTransform))::UnityW<::UnityEngine::Transform> bombTransform;

  /// @brief Field explosionRadius, offset 0x180, size 0x4
  __declspec(property(get = __cordl_internal_get_explosionRadius, put = __cordl_internal_set_explosionRadius)) float_t explosionRadius;

  /// @brief Field explosionType, offset 0x170, size 0x4
  __declspec(property(get = __cordl_internal_get_explosionType, put = __cordl_internal_set_explosionType))::GlobalNamespace::ExplosionType explosionType;

  /// @brief Field fuseDuration, offset 0x184, size 0x4
  __declspec(property(get = __cordl_internal_get_fuseDuration, put = __cordl_internal_set_fuseDuration)) float_t fuseDuration;

  /// @brief Field fuseTimer, offset 0x194, size 0x4
  __declspec(property(get = __cordl_internal_get_fuseTimer, put = __cordl_internal_set_fuseTimer)) float_t fuseTimer;

  /// @brief Field hasPlayedTickSound, offset 0x1a4, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPlayedTickSound, put = __cordl_internal_set_hasPlayedTickSound)) bool hasPlayedTickSound;

  /// @brief Field isFuseLit, offset 0x190, size 0x1
  __declspec(property(get = __cordl_internal_get_isFuseLit, put = __cordl_internal_set_isFuseLit)) bool isFuseLit;

  /// @brief Field tickCount, offset 0x1a8, size 0x4
  __declspec(property(get = __cordl_internal_get_tickCount, put = __cordl_internal_set_tickCount)) int32_t tickCount;

  /// @brief Field tickSoundKey, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_tickSoundKey, put = __cordl_internal_set_tickSoundKey))::StringW tickSoundKey;

  /// @brief Field timeBetweenFlashes, offset 0x1a0, size 0x4
  __declspec(property(get = __cordl_internal_get_timeBetweenFlashes, put = __cordl_internal_set_timeBetweenFlashes)) float_t timeBetweenFlashes;

  /// @brief Method DestroysMapObjectsOnHit, addr 0x2ab2764, size 0x8, virtual true, abstract: false, final false
  inline bool DestroysMapObjectsOnHit();

  /// @brief Method DoExplode, addr 0x2ab2908, size 0x98, virtual false, abstract: false, final false
  inline void DoExplode();

  /// @brief Method DoFuse, addr 0x2ab28f8, size 0x10, virtual false, abstract: false, final false
  inline void DoFuse();

  /// @brief Method EmbedAtRightAngle, addr 0x2ab276c, size 0x8, virtual true, abstract: false, final false
  inline bool EmbedAtRightAngle();

  /// @brief Method Initialize, addr 0x2ab2314, size 0x148, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::ThrowableBombItem* New_ctor();

  /// @brief Method OnEmbedded, addr 0x2ab2774, size 0x5c, virtual true, abstract: false, final false
  inline void OnEmbedded(::UnityEngine::Vector3 embedPosition, ::GlobalNamespace::Player* hitPlayer, bool isStab);

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x2ab27d0, size 0x128, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(::StringW payload);

  /// @brief Method OnUpdate, addr 0x2ab29a0, size 0x188, virtual true, abstract: false, final false
  inline void OnUpdate();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bombMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bombMat();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bombTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bombTransform();

  constexpr float_t const& __cordl_internal_get_explosionRadius() const;

  constexpr float_t& __cordl_internal_get_explosionRadius();

  constexpr ::GlobalNamespace::ExplosionType const& __cordl_internal_get_explosionType() const;

  constexpr ::GlobalNamespace::ExplosionType& __cordl_internal_get_explosionType();

  constexpr float_t const& __cordl_internal_get_fuseDuration() const;

  constexpr float_t& __cordl_internal_get_fuseDuration();

  constexpr float_t const& __cordl_internal_get_fuseTimer() const;

  constexpr float_t& __cordl_internal_get_fuseTimer();

  constexpr bool const& __cordl_internal_get_hasPlayedTickSound() const;

  constexpr bool& __cordl_internal_get_hasPlayedTickSound();

  constexpr bool const& __cordl_internal_get_isFuseLit() const;

  constexpr bool& __cordl_internal_get_isFuseLit();

  constexpr int32_t const& __cordl_internal_get_tickCount() const;

  constexpr int32_t& __cordl_internal_get_tickCount();

  constexpr ::StringW const& __cordl_internal_get_tickSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_tickSoundKey();

  constexpr float_t const& __cordl_internal_get_timeBetweenFlashes() const;

  constexpr float_t& __cordl_internal_get_timeBetweenFlashes();

  constexpr void __cordl_internal_set_bombMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_bombTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_explosionRadius(float_t value);

  constexpr void __cordl_internal_set_explosionType(::GlobalNamespace::ExplosionType value);

  constexpr void __cordl_internal_set_fuseDuration(float_t value);

  constexpr void __cordl_internal_set_fuseTimer(float_t value);

  constexpr void __cordl_internal_set_hasPlayedTickSound(bool value);

  constexpr void __cordl_internal_set_isFuseLit(bool value);

  constexpr void __cordl_internal_set_tickCount(int32_t value);

  constexpr void __cordl_internal_set_tickSoundKey(::StringW value);

  constexpr void __cordl_internal_set_timeBetweenFlashes(float_t value);

  /// @brief Method .ctor, addr 0x2ab2ba4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowableBombItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowableBombItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowableBombItem(ThrowableBombItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowableBombItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowableBombItem(ThrowableBombItem const&) = delete;

  /// @brief Field explosionType, offset: 0x170, size: 0x4, def value: None
  ::GlobalNamespace::ExplosionType ___explosionType;

  /// @brief Field bombTransform, offset: 0x178, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bombTransform;

  /// @brief Field explosionRadius, offset: 0x180, size: 0x4, def value: None
  float_t ___explosionRadius;

  /// @brief Field fuseDuration, offset: 0x184, size: 0x4, def value: None
  float_t ___fuseDuration;

  /// @brief Field tickSoundKey, offset: 0x188, size: 0x8, def value: None
  ::StringW ___tickSoundKey;

  /// @brief Field isFuseLit, offset: 0x190, size: 0x1, def value: None
  bool ___isFuseLit;

  /// @brief Field fuseTimer, offset: 0x194, size: 0x4, def value: None
  float_t ___fuseTimer;

  /// @brief Field bombMat, offset: 0x198, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___bombMat;

  /// @brief Field timeBetweenFlashes, offset: 0x1a0, size: 0x4, def value: None
  float_t ___timeBetweenFlashes;

  /// @brief Field hasPlayedTickSound, offset: 0x1a4, size: 0x1, def value: None
  bool ___hasPlayedTickSound;

  /// @brief Field tickCount, offset: 0x1a8, size: 0x4, def value: None
  int32_t ___tickCount;

  /// @brief Field bombBrightnessBoostPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString bombBrightnessBoostPropertyName{ u"_BrightnessBoost" };

  /// @brief Field bombMatIndex offset 0xffffffff size 0x4
  static constexpr int32_t bombMatIndex{ static_cast<int32_t>(0x0) };

  /// @brief Field explodeMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString explodeMessage{ u"explode" };

  /// @brief Field flashDuration offset 0xffffffff size 0x4
  static constexpr float_t flashDuration{ 0.1 };

  /// @brief Field flashIntensity offset 0xffffffff size 0x4
  static constexpr float_t flashIntensity{ 4.0 };

  /// @brief Field numFlashes offset 0xffffffff size 0x4
  static constexpr int32_t numFlashes{ static_cast<int32_t>(0x3) };

  /// @brief Field startFuseMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString startFuseMessage{ u"fuse" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThrowableBombItem, 0x1b0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBombItem, ___explosionType) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBombItem, ___bombTransform) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBombItem, ___explosionRadius) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBombItem, ___fuseDuration) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBombItem, ___tickSoundKey) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBombItem, ___isFuseLit) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBombItem, ___fuseTimer) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBombItem, ___bombMat) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBombItem, ___timeBetweenFlashes) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBombItem, ___hasPlayedTickSound) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBombItem, ___tickCount) == 0x1a8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThrowableBombItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThrowableBombItem*, "", "ThrowableBombItem");
