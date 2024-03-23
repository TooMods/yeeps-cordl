#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ExplosionType_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BombMapObject)
namespace GlobalNamespace {
struct SignalChannel;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BombMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BombMapObject);
// Type: ::BombMapObject
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 261, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BombMapObject*
class CORDL_TYPE BombMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field explosionRadius, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_explosionRadius, put = __cordl_internal_set_explosionRadius)) float_t explosionRadius;

  /// @brief Field explosionType, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_explosionType, put = __cordl_internal_set_explosionType))::GlobalNamespace::ExplosionType explosionType;

  /// @brief Field fuseDuration, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_fuseDuration, put = __cordl_internal_set_fuseDuration)) float_t fuseDuration;

  /// @brief Field fuseLitMat, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_fuseLitMat, put = __cordl_internal_set_fuseLitMat))::UnityW<::UnityEngine::Material> fuseLitMat;

  /// @brief Field fuseTimer, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_fuseTimer, put = __cordl_internal_set_fuseTimer)) float_t fuseTimer;

  /// @brief Field hasExploded, offset 0xf1, size 0x1
  __declspec(property(get = __cordl_internal_get_hasExploded, put = __cordl_internal_set_hasExploded)) bool hasExploded;

  /// @brief Field hasPlayedTickSound, offset 0x104, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPlayedTickSound, put = __cordl_internal_set_hasPlayedTickSound)) bool hasPlayedTickSound;

  /// @brief Field isFuseLit, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_isFuseLit, put = __cordl_internal_set_isFuseLit)) bool isFuseLit;

  /// @brief Field isFuseMaster, offset 0xf2, size 0x1
  __declspec(property(get = __cordl_internal_get_isFuseMaster, put = __cordl_internal_set_isFuseMaster)) bool isFuseMaster;

  /// @brief Field tickSoundKey, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_tickSoundKey, put = __cordl_internal_set_tickSoundKey))::StringW tickSoundKey;

  /// @brief Field timeBetweenFlashes, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_timeBetweenFlashes, put = __cordl_internal_set_timeBetweenFlashes)) float_t timeBetweenFlashes;

  /// @brief Method DoCollisionMessaging, addr 0x3076538, size 0x8, virtual true, abstract: false, final false
  inline bool DoCollisionMessaging();

  /// @brief Method GetSignalChannel, addr 0x30762d4, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::SignalChannel GetSignalChannel();

  /// @brief Method Initialize, addr 0x3075da4, size 0x3c, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerUserID, bool placementPending, bool instant);

  /// @brief Method IsTriggeredInsteadOfDestroyedOnHit, addr 0x3076660, size 0x8, virtual true, abstract: false, final false
  inline bool IsTriggeredInsteadOfDestroyedOnHit();

  static inline ::GlobalNamespace::BombMapObject* New_ctor();

  /// @brief Method OnHit, addr 0x3076540, size 0x60, virtual true, abstract: false, final false
  inline bool OnHit();

  /// @brief Method OnHit, addr 0x30765a0, size 0x60, virtual true, abstract: false, final false
  inline bool OnHit(::UnityEngine::Vector3 dropVelocity);

  /// @brief Method OnHitAndCollect, addr 0x3076600, size 0x60, virtual true, abstract: false, final false
  inline bool OnHitAndCollect();

  /// @brief Method OnMasterPlayerCollided, addr 0x3076668, size 0x5c, virtual true, abstract: false, final false
  inline void OnMasterPlayerCollided(::UnityEngine::Vector3 playerPosition, ::UnityEngine::Vector3 relativeVelocity);

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x30766c4, size 0x3b8, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(bool sentByMasterPlayer, ::StringW payload);

  /// @brief Method OnSignal, addr 0x30762dc, size 0x15c, virtual true, abstract: false, final false
  inline void OnSignal(::StringW payload);

  /// @brief Method ProcessSharedMaterials, addr 0x3076fc4, size 0x1ac, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
  ProcessSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newSharedMats);

  /// @brief Method Update, addr 0x3076d8c, size 0x238, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_explosionRadius() const;

  constexpr float_t& __cordl_internal_get_explosionRadius();

  constexpr ::GlobalNamespace::ExplosionType const& __cordl_internal_get_explosionType() const;

  constexpr ::GlobalNamespace::ExplosionType& __cordl_internal_get_explosionType();

  constexpr float_t const& __cordl_internal_get_fuseDuration() const;

  constexpr float_t& __cordl_internal_get_fuseDuration();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_fuseLitMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_fuseLitMat();

  constexpr float_t const& __cordl_internal_get_fuseTimer() const;

  constexpr float_t& __cordl_internal_get_fuseTimer();

  constexpr bool const& __cordl_internal_get_hasExploded() const;

  constexpr bool& __cordl_internal_get_hasExploded();

  constexpr bool const& __cordl_internal_get_hasPlayedTickSound() const;

  constexpr bool& __cordl_internal_get_hasPlayedTickSound();

  constexpr bool const& __cordl_internal_get_isFuseLit() const;

  constexpr bool& __cordl_internal_get_isFuseLit();

  constexpr bool const& __cordl_internal_get_isFuseMaster() const;

  constexpr bool& __cordl_internal_get_isFuseMaster();

  constexpr ::StringW const& __cordl_internal_get_tickSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_tickSoundKey();

  constexpr float_t const& __cordl_internal_get_timeBetweenFlashes() const;

  constexpr float_t& __cordl_internal_get_timeBetweenFlashes();

  constexpr void __cordl_internal_set_explosionRadius(float_t value);

  constexpr void __cordl_internal_set_explosionType(::GlobalNamespace::ExplosionType value);

  constexpr void __cordl_internal_set_fuseDuration(float_t value);

  constexpr void __cordl_internal_set_fuseLitMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_fuseTimer(float_t value);

  constexpr void __cordl_internal_set_hasExploded(bool value);

  constexpr void __cordl_internal_set_hasPlayedTickSound(bool value);

  constexpr void __cordl_internal_set_isFuseLit(bool value);

  constexpr void __cordl_internal_set_isFuseMaster(bool value);

  constexpr void __cordl_internal_set_tickSoundKey(::StringW value);

  constexpr void __cordl_internal_set_timeBetweenFlashes(float_t value);

  /// @brief Method .ctor, addr 0x3077170, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BombMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BombMapObject(BombMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BombMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BombMapObject(BombMapObject const&) = delete;

  /// @brief Field explosionType, offset: 0xd8, size: 0x4, def value: None
  ::GlobalNamespace::ExplosionType ___explosionType;

  /// @brief Field explosionRadius, offset: 0xdc, size: 0x4, def value: None
  float_t ___explosionRadius;

  /// @brief Field fuseDuration, offset: 0xe0, size: 0x4, def value: None
  float_t ___fuseDuration;

  /// @brief Field tickSoundKey, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___tickSoundKey;

  /// @brief Field isFuseLit, offset: 0xf0, size: 0x1, def value: None
  bool ___isFuseLit;

  /// @brief Field hasExploded, offset: 0xf1, size: 0x1, def value: None
  bool ___hasExploded;

  /// @brief Field isFuseMaster, offset: 0xf2, size: 0x1, def value: None
  bool ___isFuseMaster;

  /// @brief Field fuseTimer, offset: 0xf4, size: 0x4, def value: None
  float_t ___fuseTimer;

  /// @brief Field fuseLitMat, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___fuseLitMat;

  /// @brief Field timeBetweenFlashes, offset: 0x100, size: 0x4, def value: None
  float_t ___timeBetweenFlashes;

  /// @brief Field hasPlayedTickSound, offset: 0x104, size: 0x1, def value: None
  bool ___hasPlayedTickSound;

  /// @brief Field explodeMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString explodeMessage{ u"explode" };

  /// @brief Field explodeScaleUpAmount offset 0xffffffff size 0x4
  static constexpr float_t explodeScaleUpAmount{ 1.5 };

  /// @brief Field explodeScaleUpPow offset 0xffffffff size 0x4
  static constexpr float_t explodeScaleUpPow{ 4.0 };

  /// @brief Field flashDuration offset 0xffffffff size 0x4
  static constexpr float_t flashDuration{ 0.1 };

  /// @brief Field flashIntensity offset 0xffffffff size 0x4
  static constexpr float_t flashIntensity{ 4.0 };

  /// @brief Field fuseLitMaterialIndex offset 0xffffffff size 0x4
  static constexpr int32_t fuseLitMaterialIndex{ static_cast<int32_t>(0x1) };

  /// @brief Field numFlashes offset 0xffffffff size 0x4
  static constexpr int32_t numFlashes{ static_cast<int32_t>(0x3) };

  /// @brief Field signalChannelTrigger offset 0xffffffff size 0x8
  static constexpr ::ConstString signalChannelTrigger{ u"trigger" };

  /// @brief Field signalChannelUntrigger offset 0xffffffff size 0x8
  static constexpr ::ConstString signalChannelUntrigger{ u"untrigger" };

  /// @brief Field startFuseMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString startFuseMessage{ u"fuse" };

  /// @brief Field stopFuseMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString stopFuseMessage{ u"stopFuse" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BombMapObject, 0x108>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BombMapObject, ___explosionType) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombMapObject, ___explosionRadius) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombMapObject, ___fuseDuration) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombMapObject, ___tickSoundKey) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombMapObject, ___isFuseLit) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombMapObject, ___hasExploded) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombMapObject, ___isFuseMaster) == 0xf2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombMapObject, ___fuseTimer) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombMapObject, ___fuseLitMat) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombMapObject, ___timeBetweenFlashes) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombMapObject, ___hasPlayedTickSound) == 0x104, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BombMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombMapObject*, "", "BombMapObject");
