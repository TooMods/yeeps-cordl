#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IcicleTrapMapObject)
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class IcicleTrapMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IcicleTrapMapObject);
// Type: ::IcicleTrapMapObject
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IcicleTrapMapObject*
class CORDL_TYPE IcicleTrapMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field canFireProjectile, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_canFireProjectile, put = __cordl_internal_set_canFireProjectile)) bool canFireProjectile;

  /// @brief Field curGrowRatio, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_curGrowRatio, put = __cordl_internal_set_curGrowRatio)) float_t curGrowRatio;

  /// @brief Field growDuration, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_growDuration, put = __cordl_internal_set_growDuration)) float_t growDuration;

  /// @brief Field growingIcicle, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_growingIcicle, put = __cordl_internal_set_growingIcicle))::UnityW<::UnityEngine::Transform> growingIcicle;

  /// @brief Field masterPlayer, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> masterPlayer;

  /// @brief Field minScale, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_minScale, put = __cordl_internal_set_minScale)) float_t minScale;

  /// @brief Field nextFireCheckTime, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_nextFireCheckTime, put = __cordl_internal_set_nextFireCheckTime)) float_t nextFireCheckTime;

  /// @brief Field shouldGrow, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldGrow, put = __cordl_internal_set_shouldGrow)) bool shouldGrow;

  /// @brief Field triggerSoundKey, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_triggerSoundKey, put = __cordl_internal_set_triggerSoundKey))::StringW triggerSoundKey;

  /// @brief Field worldCenter, offset 0x108, size 0xc
  __declspec(property(get = __cordl_internal_get_worldCenter, put = __cordl_internal_set_worldCenter))::UnityEngine::Vector3 worldCenter;

  /// @brief Field worldHalfExtents, offset 0x114, size 0xc
  __declspec(property(get = __cordl_internal_get_worldHalfExtents, put = __cordl_internal_set_worldHalfExtents))::UnityEngine::Vector3 worldHalfExtents;

  /// @brief Method AllowsBatching, addr 0x307a410, size 0x8, virtual true, abstract: false, final false
  inline bool AllowsBatching();

  /// @brief Method Initialize, addr 0x3079ce4, size 0x108, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerAccountID, bool placementPending, bool instant);

  /// @brief Method IsStuffed, addr 0x307a400, size 0x8, virtual true, abstract: false, final false
  inline bool IsStuffed();

  /// @brief Method IsTriggeredInsteadOfDestroyedOnHit, addr 0x307a408, size 0x8, virtual true, abstract: false, final false
  inline bool IsTriggeredInsteadOfDestroyedOnHit();

  /// @brief Method IsWithin, addr 0x3079ff0, size 0x1e0, virtual false, abstract: false, final false
  inline bool IsWithin(::UnityEngine::Vector3 position);

  static inline ::GlobalNamespace::IcicleTrapMapObject* New_ctor();

  /// @brief Method OnHit, addr 0x307a3bc, size 0x24, virtual true, abstract: false, final false
  inline bool OnHit();

  /// @brief Method OnHit, addr 0x307a3e0, size 0x10, virtual true, abstract: false, final false
  inline bool OnHit(::UnityEngine::Vector3 dropVelocity);

  /// @brief Method OnHitAndCollect, addr 0x307a3f0, size 0x10, virtual true, abstract: false, final false
  inline bool OnHitAndCollect();

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x307a2e0, size 0xdc, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(bool sentByMasterPlayer, ::StringW payload);

  /// @brief Method SetGrowthRatio, addr 0x3079dec, size 0xd4, virtual false, abstract: false, final false
  inline void SetGrowthRatio(float_t ratio);

  /// @brief Method SetRenderersActive, addr 0x307a47c, size 0x64, virtual true, abstract: false, final false
  inline void SetRenderersActive(bool newActive);

  /// @brief Method SetSharedMaterials, addr 0x307a418, size 0x64, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials);

  /// @brief Method TriggerFall, addr 0x307a1d0, size 0x110, virtual false, abstract: false, final false
  inline void TriggerFall();

  /// @brief Method Update, addr 0x3079ec0, size 0x130, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_canFireProjectile() const;

  constexpr bool& __cordl_internal_get_canFireProjectile();

  constexpr float_t const& __cordl_internal_get_curGrowRatio() const;

  constexpr float_t& __cordl_internal_get_curGrowRatio();

  constexpr float_t const& __cordl_internal_get_growDuration() const;

  constexpr float_t& __cordl_internal_get_growDuration();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_growingIcicle() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_growingIcicle();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_masterPlayer();

  constexpr float_t const& __cordl_internal_get_minScale() const;

  constexpr float_t& __cordl_internal_get_minScale();

  constexpr float_t const& __cordl_internal_get_nextFireCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextFireCheckTime();

  constexpr bool const& __cordl_internal_get_shouldGrow() const;

  constexpr bool& __cordl_internal_get_shouldGrow();

  constexpr ::StringW const& __cordl_internal_get_triggerSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_triggerSoundKey();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldHalfExtents() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldHalfExtents();

  constexpr void __cordl_internal_set_canFireProjectile(bool value);

  constexpr void __cordl_internal_set_curGrowRatio(float_t value);

  constexpr void __cordl_internal_set_growDuration(float_t value);

  constexpr void __cordl_internal_set_growingIcicle(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_minScale(float_t value);

  constexpr void __cordl_internal_set_nextFireCheckTime(float_t value);

  constexpr void __cordl_internal_set_shouldGrow(bool value);

  constexpr void __cordl_internal_set_triggerSoundKey(::StringW value);

  constexpr void __cordl_internal_set_worldCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_worldHalfExtents(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x307a4e0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IcicleTrapMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IcicleTrapMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IcicleTrapMapObject(IcicleTrapMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IcicleTrapMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IcicleTrapMapObject(IcicleTrapMapObject const&) = delete;

  /// @brief Field growingIcicle, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___growingIcicle;

  /// @brief Field minScale, offset: 0xe0, size: 0x4, def value: None
  float_t ___minScale;

  /// @brief Field growDuration, offset: 0xe4, size: 0x4, def value: None
  float_t ___growDuration;

  /// @brief Field shouldGrow, offset: 0xe8, size: 0x1, def value: None
  bool ___shouldGrow;

  /// @brief Field curGrowRatio, offset: 0xec, size: 0x4, def value: None
  float_t ___curGrowRatio;

  /// @brief Field triggerSoundKey, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___triggerSoundKey;

  /// @brief Field canFireProjectile, offset: 0xf8, size: 0x1, def value: None
  bool ___canFireProjectile;

  /// @brief Field nextFireCheckTime, offset: 0xfc, size: 0x4, def value: None
  float_t ___nextFireCheckTime;

  /// @brief Field masterPlayer, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___masterPlayer;

  /// @brief Field worldCenter, offset: 0x108, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___worldCenter;

  /// @brief Field worldHalfExtents, offset: 0x114, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___worldHalfExtents;

  /// @brief Field icicleProjectileKey offset 0xffffffff size 0x8
  static constexpr ::ConstString icicleProjectileKey{ u"icicle" };

  /// @brief Field maxZoneDistance offset 0xffffffff size 0x4
  static constexpr float_t maxZoneDistance{ 80.0 };

  /// @brief Field timeBetweenFireChecks offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenFireChecks{ 0.25 };

  /// @brief Field triggerMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString triggerMessage{ u"trigger" };

  /// @brief Field zoneRadius offset 0xffffffff size 0x4
  static constexpr float_t zoneRadius{ 0.75 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IcicleTrapMapObject, 0x120>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleTrapMapObject, ___growingIcicle) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleTrapMapObject, ___minScale) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleTrapMapObject, ___growDuration) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleTrapMapObject, ___shouldGrow) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleTrapMapObject, ___curGrowRatio) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleTrapMapObject, ___triggerSoundKey) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleTrapMapObject, ___canFireProjectile) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleTrapMapObject, ___nextFireCheckTime) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleTrapMapObject, ___masterPlayer) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleTrapMapObject, ___worldCenter) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IcicleTrapMapObject, ___worldHalfExtents) == 0x114, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IcicleTrapMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IcicleTrapMapObject*, "", "IcicleTrapMapObject");
