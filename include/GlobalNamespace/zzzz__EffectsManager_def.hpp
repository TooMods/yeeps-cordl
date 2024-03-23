#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ExplosionType_def.hpp"
#include "GlobalNamespace/zzzz__HitType_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEffectType_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EffectsManager)
namespace GlobalNamespace {
struct ExplosionType;
}
namespace GlobalNamespace {
struct HitType;
}
namespace GlobalNamespace {
struct PlayerEffectType;
}
namespace GlobalNamespace {
class Player;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class EffectsManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EffectsManager);
// Type: ::EffectsManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EffectsManager*
class CORDL_TYPE EffectsManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::EffectsManager>> {
public:
  // Declarations
  /// @brief Field detectionEffectPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_detectionEffectPrefab, put = __cordl_internal_set_detectionEffectPrefab))::UnityW<::UnityEngine::GameObject> detectionEffectPrefab;

  /// @brief Field explosionEffectPrefabs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_explosionEffectPrefabs,
                      put = __cordl_internal_set_explosionEffectPrefabs))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> explosionEffectPrefabs;

  /// @brief Field explosionTypeReference, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_explosionTypeReference, put = __cordl_internal_set_explosionTypeReference))::GlobalNamespace::ExplosionType explosionTypeReference;

  /// @brief Field hitEffectPrefabs, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_hitEffectPrefabs,
                      put = __cordl_internal_set_hitEffectPrefabs))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> hitEffectPrefabs;

  /// @brief Field hitTypeReference, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_hitTypeReference, put = __cordl_internal_set_hitTypeReference))::GlobalNamespace::HitType hitTypeReference;

  /// @brief Field playerEffectPrefabs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_playerEffectPrefabs,
                      put = __cordl_internal_set_playerEffectPrefabs))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> playerEffectPrefabs;

  /// @brief Field playerEffectTypeReference, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_playerEffectTypeReference, put = __cordl_internal_set_playerEffectTypeReference))::GlobalNamespace::PlayerEffectType playerEffectTypeReference;

  /// @brief Method CreateDetectionEffect, addr 0x29c5938, size 0x14c, virtual false, abstract: false, final false
  inline void CreateDetectionEffect(::UnityEngine::Vector3 position, float_t radius, bool didDetect);

  /// @brief Method CreateExplosion, addr 0x29c3cc8, size 0x438, virtual false, abstract: false, final false
  inline void CreateExplosion(::GlobalNamespace::ExplosionType explosionType, bool isMaster, ::UnityEngine::Vector3 position, float_t radius, int32_t seed);

  /// @brief Method CreateExplosion, addr 0x29c4100, size 0xa0, virtual false, abstract: false, final false
  inline void CreateExplosion(::GlobalNamespace::ExplosionType explosionType, bool isMaster, ::UnityEngine::Vector3 position, float_t radius, ::StringW seedKey,
                              ::UnityEngine::Vector3Int seedPosition);

  /// @brief Method CreateExplosion, addr 0x29c4214, size 0x68, virtual false, abstract: false, final false
  inline void CreateExplosion(::GlobalNamespace::ExplosionType explosionType, bool isMaster, ::UnityEngine::Vector3 position, float_t radius, ::StringW seedString);

  /// @brief Method CreatePlayerEffect, addr 0x29c548c, size 0x268, virtual false, abstract: false, final false
  inline void CreatePlayerEffect(::GlobalNamespace::PlayerEffectType playerEffectType, ::GlobalNamespace::Player* player);

  /// @brief Method CreatePlayerEffect, addr 0x29c56f4, size 0x244, virtual false, abstract: false, final false
  inline void CreatePlayerEffect(::GlobalNamespace::PlayerEffectType playerEffectType, ::UnityEngine::Vector3 position);

  static inline ::GlobalNamespace::EffectsManager* New_ctor();

  /// @brief Method OnReceiveCreateHitEffect, addr 0x29c5bc8, size 0x1d4, virtual false, abstract: false, final false
  inline void OnReceiveCreateHitEffect(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal, ::GlobalNamespace::HitType hitType);

  /// @brief Method SendCreateExplosion, addr 0x29c3b8c, size 0x13c, virtual false, abstract: false, final false
  inline void SendCreateExplosion(::GlobalNamespace::ExplosionType explosionType, ::UnityEngine::Vector3 position, float_t radius, int32_t seed);

  /// @brief Method SendCreateHitEffect, addr 0x29c5a84, size 0x144, virtual false, abstract: false, final false
  inline void SendCreateHitEffect(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal, ::GlobalNamespace::HitType hitType);

  /// @brief Method StringToSeed, addr 0x29c41a0, size 0x74, virtual false, abstract: false, final false
  static inline int32_t StringToSeed(::StringW str);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_detectionEffectPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_detectionEffectPrefab();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_explosionEffectPrefabs() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_explosionEffectPrefabs();

  constexpr ::GlobalNamespace::ExplosionType const& __cordl_internal_get_explosionTypeReference() const;

  constexpr ::GlobalNamespace::ExplosionType& __cordl_internal_get_explosionTypeReference();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_hitEffectPrefabs() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_hitEffectPrefabs();

  constexpr ::GlobalNamespace::HitType const& __cordl_internal_get_hitTypeReference() const;

  constexpr ::GlobalNamespace::HitType& __cordl_internal_get_hitTypeReference();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_playerEffectPrefabs() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_playerEffectPrefabs();

  constexpr ::GlobalNamespace::PlayerEffectType const& __cordl_internal_get_playerEffectTypeReference() const;

  constexpr ::GlobalNamespace::PlayerEffectType& __cordl_internal_get_playerEffectTypeReference();

  constexpr void __cordl_internal_set_detectionEffectPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_explosionEffectPrefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_explosionTypeReference(::GlobalNamespace::ExplosionType value);

  constexpr void __cordl_internal_set_hitEffectPrefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_hitTypeReference(::GlobalNamespace::HitType value);

  constexpr void __cordl_internal_set_playerEffectPrefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_playerEffectTypeReference(::GlobalNamespace::PlayerEffectType value);

  /// @brief Method .ctor, addr 0x29c5e18, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EffectsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EffectsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EffectsManager(EffectsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EffectsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EffectsManager(EffectsManager const&) = delete;

  /// @brief Field explosionTypeReference, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::ExplosionType ___explosionTypeReference;

  /// @brief Field explosionEffectPrefabs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___explosionEffectPrefabs;

  /// @brief Field playerEffectTypeReference, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::PlayerEffectType ___playerEffectTypeReference;

  /// @brief Field playerEffectPrefabs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___playerEffectPrefabs;

  /// @brief Field detectionEffectPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___detectionEffectPrefab;

  /// @brief Field hitTypeReference, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::HitType ___hitTypeReference;

  /// @brief Field hitEffectPrefabs, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___hitEffectPrefabs;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Effects: " };

  /// @brief Field maxStringReadLength offset 0xffffffff size 0x4
  static constexpr int32_t maxStringReadLength{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EffectsManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectsManager, ___explosionTypeReference) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectsManager, ___explosionEffectPrefabs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectsManager, ___playerEffectTypeReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectsManager, ___playerEffectPrefabs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectsManager, ___detectionEffectPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectsManager, ___hitTypeReference) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectsManager, ___hitEffectPrefabs) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EffectsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EffectsManager*, "", "EffectsManager");
