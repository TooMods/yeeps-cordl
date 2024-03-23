#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DespawningItem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FireworkItem)
namespace GlobalNamespace {
class MasterPlayer;
}
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
class AudioSource;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class LineRenderer;
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
// Forward declare root types
namespace GlobalNamespace {
class FireworkItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FireworkItem);
// Type: ::FireworkItem
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 372, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FireworkItem*
class CORDL_TYPE FireworkItem : public ::GlobalNamespace::DespawningItem {
public:
  // Declarations
  /// @brief Field boundingCenter, offset 0x13c, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field curFlySoundEffect, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_curFlySoundEffect, put = __cordl_internal_set_curFlySoundEffect))::UnityW<::UnityEngine::AudioSource> curFlySoundEffect;

  /// @brief Field explodeParticles, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_explodeParticles, put = __cordl_internal_set_explodeParticles))::UnityW<::UnityEngine::ParticleSystem> explodeParticles;

  /// @brief Field explodeSoundKey, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_explodeSoundKey, put = __cordl_internal_set_explodeSoundKey))::StringW explodeSoundKey;

  /// @brief Field flyDuration, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get_flyDuration, put = __cordl_internal_set_flyDuration)) float_t flyDuration;

  /// @brief Field flyParticles, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_flyParticles, put = __cordl_internal_set_flyParticles))::UnityW<::UnityEngine::ParticleSystem> flyParticles;

  /// @brief Field flySoundKey, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_flySoundKey, put = __cordl_internal_set_flySoundKey))::StringW flySoundKey;

  /// @brief Field flySpeed, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_flySpeed, put = __cordl_internal_set_flySpeed)) float_t flySpeed;

  /// @brief Field flyTimer, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_flyTimer, put = __cordl_internal_set_flyTimer)) float_t flyTimer;

  /// @brief Field isActivated, offset 0x14c, size 0x1
  __declspec(property(get = __cordl_internal_get_isActivated, put = __cordl_internal_set_isActivated)) bool isActivated;

  /// @brief Field isRegisteredForKnockbackCallback, offset 0x160, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForKnockbackCallback, put = __cordl_internal_set_isRegisteredForKnockbackCallback)) bool isRegisteredForKnockbackCallback;

  /// @brief Field lastTetheredMasterPlayerBodyPosition, offset 0x168, size 0xc
  __declspec(property(get = __cordl_internal_get_lastTetheredMasterPlayerBodyPosition,
                      put = __cordl_internal_set_lastTetheredMasterPlayerBodyPosition))::UnityEngine::Vector3 lastTetheredMasterPlayerBodyPosition;

  /// @brief Field tetherAnchor, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_tetherAnchor, put = __cordl_internal_set_tetherAnchor))::UnityW<::UnityEngine::Transform> tetherAnchor;

  /// @brief Field tetherLine, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_tetherLine, put = __cordl_internal_set_tetherLine))::UnityW<::UnityEngine::LineRenderer> tetherLine;

  /// @brief Field tetherLineWidth, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_tetherLineWidth, put = __cordl_internal_set_tetherLineWidth)) float_t tetherLineWidth;

  /// @brief Field tetheredFireworkItem, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tetheredFireworkItem, put = setStaticF_tetheredFireworkItem))::UnityW<::GlobalNamespace::FireworkItem> tetheredFireworkItem;

  /// @brief Field tetheredMasterPlayer, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_tetheredMasterPlayer, put = __cordl_internal_set_tetheredMasterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> tetheredMasterPlayer;

  /// @brief Field tetheredPlayer, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_tetheredPlayer, put = __cordl_internal_set_tetheredPlayer))::UnityW<::GlobalNamespace::Player> tetheredPlayer;

  /// @brief Field totalDistanceTraveledWhileTetheredToMasterPlayer, offset 0x164, size 0x4
  __declspec(property(get = __cordl_internal_get_totalDistanceTraveledWhileTetheredToMasterPlayer,
                      put = __cordl_internal_set_totalDistanceTraveledWhileTetheredToMasterPlayer)) float_t totalDistanceTraveledWhileTetheredToMasterPlayer;

  /// @brief Method Activate, addr 0x2a9e5dc, size 0x338, virtual false, abstract: false, final false
  inline void Activate();

  /// @brief Method CanTransferOwnership, addr 0x2a9def8, size 0x10, virtual true, abstract: false, final false
  inline bool CanTransferOwnership();

  /// @brief Method DestroySelf, addr 0x2a9f39c, size 0x148, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method EndTether, addr 0x2a9ed2c, size 0x21c, virtual false, abstract: false, final false
  inline void EndTether();

  /// @brief Method Explode, addr 0x2a9e914, size 0x2c0, virtual false, abstract: false, final false
  inline void Explode();

  /// @brief Method GetBounds, addr 0x2a9de58, size 0x20, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method Initialize, addr 0x2a9de78, size 0x80, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method LateUpdate, addr 0x2a9f090, size 0x2b0, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::FireworkItem* New_ctor();

  /// @brief Method OnFixedUpdate, addr 0x2a9df48, size 0x3fc, virtual true, abstract: false, final false
  inline void OnFixedUpdate();

  /// @brief Method OnMasterCollisionEnter, addr 0x2a9f340, size 0x5c, virtual true, abstract: false, final false
  inline void OnMasterCollisionEnter(::UnityEngine::Collision* collision);

  /// @brief Method OnMasterPlayerKnockedBack, addr 0x2a9ef48, size 0xa4, virtual false, abstract: false, final false
  inline void OnMasterPlayerKnockedBack(float_t intensityRatio);

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x2a9e3bc, size 0x220, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(::StringW payload);

  /// @brief Method OnUpdate, addr 0x2a9efec, size 0xa4, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method SetIsInteractable, addr 0x2a9df08, size 0x18, virtual true, abstract: false, final false
  inline void SetIsInteractable(bool newIsInteractable);

  /// @brief Method StartTether, addr 0x2a9ebf0, size 0x13c, virtual false, abstract: false, final false
  inline void StartTether(::GlobalNamespace::Player* player);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_curFlySoundEffect() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_curFlySoundEffect();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_explodeParticles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_explodeParticles();

  constexpr ::StringW const& __cordl_internal_get_explodeSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_explodeSoundKey();

  constexpr float_t const& __cordl_internal_get_flyDuration() const;

  constexpr float_t& __cordl_internal_get_flyDuration();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_flyParticles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_flyParticles();

  constexpr ::StringW const& __cordl_internal_get_flySoundKey() const;

  constexpr ::StringW& __cordl_internal_get_flySoundKey();

  constexpr float_t const& __cordl_internal_get_flySpeed() const;

  constexpr float_t& __cordl_internal_get_flySpeed();

  constexpr float_t const& __cordl_internal_get_flyTimer() const;

  constexpr float_t& __cordl_internal_get_flyTimer();

  constexpr bool const& __cordl_internal_get_isActivated() const;

  constexpr bool& __cordl_internal_get_isActivated();

  constexpr bool const& __cordl_internal_get_isRegisteredForKnockbackCallback() const;

  constexpr bool& __cordl_internal_get_isRegisteredForKnockbackCallback();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastTetheredMasterPlayerBodyPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastTetheredMasterPlayerBodyPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tetherAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tetherAnchor();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_tetherLine() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_tetherLine();

  constexpr float_t const& __cordl_internal_get_tetherLineWidth() const;

  constexpr float_t& __cordl_internal_get_tetherLineWidth();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_tetheredMasterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_tetheredMasterPlayer();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_tetheredPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_tetheredPlayer();

  constexpr float_t const& __cordl_internal_get_totalDistanceTraveledWhileTetheredToMasterPlayer() const;

  constexpr float_t& __cordl_internal_get_totalDistanceTraveledWhileTetheredToMasterPlayer();

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_curFlySoundEffect(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_explodeParticles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_explodeSoundKey(::StringW value);

  constexpr void __cordl_internal_set_flyDuration(float_t value);

  constexpr void __cordl_internal_set_flyParticles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_flySoundKey(::StringW value);

  constexpr void __cordl_internal_set_flySpeed(float_t value);

  constexpr void __cordl_internal_set_flyTimer(float_t value);

  constexpr void __cordl_internal_set_isActivated(bool value);

  constexpr void __cordl_internal_set_isRegisteredForKnockbackCallback(bool value);

  constexpr void __cordl_internal_set_lastTetheredMasterPlayerBodyPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_tetherAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_tetherLine(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr void __cordl_internal_set_tetherLineWidth(float_t value);

  constexpr void __cordl_internal_set_tetheredMasterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_tetheredPlayer(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_totalDistanceTraveledWhileTetheredToMasterPlayer(float_t value);

  /// @brief Method .ctor, addr 0x2a9f6d4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::GlobalNamespace::FireworkItem> getStaticF_tetheredFireworkItem();

  static inline void setStaticF_tetheredFireworkItem(::UnityW<::GlobalNamespace::FireworkItem> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FireworkItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FireworkItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FireworkItem(FireworkItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FireworkItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FireworkItem(FireworkItem const&) = delete;

  /// @brief Field tetherAnchor, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___tetherAnchor;

  /// @brief Field tetherLine, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___tetherLine;

  /// @brief Field tetherLineWidth, offset: 0x100, size: 0x4, def value: None
  float_t ___tetherLineWidth;

  /// @brief Field flyParticles, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___flyParticles;

  /// @brief Field explodeParticles, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___explodeParticles;

  /// @brief Field flySoundKey, offset: 0x118, size: 0x8, def value: None
  ::StringW ___flySoundKey;

  /// @brief Field curFlySoundEffect, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___curFlySoundEffect;

  /// @brief Field explodeSoundKey, offset: 0x128, size: 0x8, def value: None
  ::StringW ___explodeSoundKey;

  /// @brief Field flySpeed, offset: 0x130, size: 0x4, def value: None
  float_t ___flySpeed;

  /// @brief Field flyDuration, offset: 0x134, size: 0x4, def value: None
  float_t ___flyDuration;

  /// @brief Field flyTimer, offset: 0x138, size: 0x4, def value: None
  float_t ___flyTimer;

  /// @brief Field boundingCenter, offset: 0x13c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x148, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field isActivated, offset: 0x14c, size: 0x1, def value: None
  bool ___isActivated;

  /// @brief Field tetheredPlayer, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___tetheredPlayer;

  /// @brief Field tetheredMasterPlayer, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___tetheredMasterPlayer;

  /// @brief Field isRegisteredForKnockbackCallback, offset: 0x160, size: 0x1, def value: None
  bool ___isRegisteredForKnockbackCallback;

  /// @brief Field totalDistanceTraveledWhileTetheredToMasterPlayer, offset: 0x164, size: 0x4, def value: None
  float_t ___totalDistanceTraveledWhileTetheredToMasterPlayer;

  /// @brief Field lastTetheredMasterPlayerBodyPosition, offset: 0x168, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastTetheredMasterPlayerBodyPosition;

  /// @brief Field activateMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString activateMessage{ u"activate" };

  /// @brief Field activationSpeedThreshold offset 0xffffffff size 0x4
  static constexpr float_t activationSpeedThreshold{ 3.3 };

  /// @brief Field activationWindow offset 0xffffffff size 0x4
  static constexpr float_t activationWindow{ 0.5 };

  /// @brief Field explodeMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString explodeMessage{ u"explode" };

  /// @brief Field maxTetherDistance offset 0xffffffff size 0x4
  static constexpr float_t maxTetherDistance{ 2.25 };

  /// @brief Field tetherEndHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t tetherEndHapticDuration{ 0.2 };

  /// @brief Field tetherEndHapticIntensity offset 0xffffffff size 0x4
  static constexpr float_t tetherEndHapticIntensity{ 0.3 };

  /// @brief Field tetherEndMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString tetherEndMessage{ u"tetherEnd" };

  /// @brief Field tetherStartDistance offset 0xffffffff size 0x4
  static constexpr float_t tetherStartDistance{ 1.5 };

  /// @brief Field tetherStartHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t tetherStartHapticDuration{ 0.2 };

  /// @brief Field tetherStartHapticIntensity offset 0xffffffff size 0x4
  static constexpr float_t tetherStartHapticIntensity{ 0.5 };

  /// @brief Field tetherStartMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString tetherStartMessage{ u"tetherStart" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireworkItem, 0x178>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___tetherAnchor) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___tetherLine) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___tetherLineWidth) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___flyParticles) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___explodeParticles) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___flySoundKey) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___curFlySoundEffect) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___explodeSoundKey) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___flySpeed) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___flyDuration) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___flyTimer) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___boundingCenter) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___boundingRadius) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___isActivated) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___tetheredPlayer) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___tetheredMasterPlayer) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___isRegisteredForKnockbackCallback) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___totalDistanceTraveledWhileTetheredToMasterPlayer) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworkItem, ___lastTetheredMasterPlayerBodyPosition) == 0x168, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireworkItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireworkItem*, "", "FireworkItem");
