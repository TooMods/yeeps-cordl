#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StuffingPlantMapObject)
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class StuffingPlantMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StuffingPlantMapObject);
// Type: ::StuffingPlantMapObject
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StuffingPlantMapObject*
class CORDL_TYPE StuffingPlantMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field currentGrowStage, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_currentGrowStage, put = __cordl_internal_set_currentGrowStage)) int32_t currentGrowStage;

  /// @brief Field fullGrowSoundKey, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_fullGrowSoundKey, put = __cordl_internal_set_fullGrowSoundKey))::StringW fullGrowSoundKey;

  /// @brief Field growDuration, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_growDuration, put = __cordl_internal_set_growDuration)) float_t growDuration;

  /// @brief Field growTimePerStage, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_growTimePerStage, put = __cordl_internal_set_growTimePerStage)) float_t growTimePerStage;

  /// @brief Field growTimer, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_growTimer, put = __cordl_internal_set_growTimer)) float_t growTimer;

  /// @brief Field harvestSoundKey, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_harvestSoundKey, put = __cordl_internal_set_harvestSoundKey))::StringW harvestSoundKey;

  /// @brief Field isFullyGrown, offset 0x11c, size 0x1
  __declspec(property(get = __cordl_internal_get_isFullyGrown, put = __cordl_internal_set_isFullyGrown)) bool isFullyGrown;

  /// @brief Field midGrowSoundKey, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_midGrowSoundKey, put = __cordl_internal_set_midGrowSoundKey))::StringW midGrowSoundKey;

  /// @brief Field plantCollider, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_plantCollider, put = __cordl_internal_set_plantCollider))::UnityW<::UnityEngine::BoxCollider> plantCollider;

  /// @brief Field plantHeights, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_plantHeights, put = __cordl_internal_set_plantHeights))::ArrayW<float_t, ::Array<float_t>*> plantHeights;

  /// @brief Field renderers, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_renderers,
                      put = __cordl_internal_set_renderers))::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> renderers;

  /// @brief Field stageContainers, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_stageContainers,
                      put = __cordl_internal_set_stageContainers))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> stageContainers;

  /// @brief Field stuffingYield, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_stuffingYield, put = __cordl_internal_set_stuffingYield)) int32_t stuffingYield;

  /// @brief Method Initialize, addr 0x30837a8, size 0x64, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerAccountID, bool placementPending, bool instant);

  /// @brief Method MakeVisualOnly, addr 0x3083d44, size 0x88, virtual true, abstract: false, final false
  inline void MakeVisualOnly();

  static inline ::GlobalNamespace::StuffingPlantMapObject* New_ctor();

  /// @brief Method OnHitAndCollect, addr 0x3083b34, size 0x58, virtual true, abstract: false, final false
  inline bool OnHitAndCollect();

  /// @brief Method OnPickedUp, addr 0x3083ad4, size 0x60, virtual true, abstract: false, final false
  inline void OnPickedUp(bool right);

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x3083b8c, size 0x1b8, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(bool sentByMasterPlayer, ::StringW payload);

  /// @brief Method SetGrowStage, addr 0x308380c, size 0x1e4, virtual false, abstract: false, final false
  inline void SetGrowStage(int32_t newGrowStage);

  /// @brief Method SetRenderersActive, addr 0x3083e34, size 0x68, virtual true, abstract: false, final false
  inline void SetRenderersActive(bool newActive);

  /// @brief Method SetSharedMaterials, addr 0x3083dcc, size 0x68, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials);

  /// @brief Method Update, addr 0x30839f0, size 0xe4, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get_currentGrowStage() const;

  constexpr int32_t& __cordl_internal_get_currentGrowStage();

  constexpr ::StringW const& __cordl_internal_get_fullGrowSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_fullGrowSoundKey();

  constexpr float_t const& __cordl_internal_get_growDuration() const;

  constexpr float_t& __cordl_internal_get_growDuration();

  constexpr float_t const& __cordl_internal_get_growTimePerStage() const;

  constexpr float_t& __cordl_internal_get_growTimePerStage();

  constexpr float_t const& __cordl_internal_get_growTimer() const;

  constexpr float_t& __cordl_internal_get_growTimer();

  constexpr ::StringW const& __cordl_internal_get_harvestSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_harvestSoundKey();

  constexpr bool const& __cordl_internal_get_isFullyGrown() const;

  constexpr bool& __cordl_internal_get_isFullyGrown();

  constexpr ::StringW const& __cordl_internal_get_midGrowSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_midGrowSoundKey();

  constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_plantCollider() const;

  constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_plantCollider();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_plantHeights() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_plantHeights();

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& __cordl_internal_get_renderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& __cordl_internal_get_renderers();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_stageContainers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_stageContainers();

  constexpr int32_t const& __cordl_internal_get_stuffingYield() const;

  constexpr int32_t& __cordl_internal_get_stuffingYield();

  constexpr void __cordl_internal_set_currentGrowStage(int32_t value);

  constexpr void __cordl_internal_set_fullGrowSoundKey(::StringW value);

  constexpr void __cordl_internal_set_growDuration(float_t value);

  constexpr void __cordl_internal_set_growTimePerStage(float_t value);

  constexpr void __cordl_internal_set_growTimer(float_t value);

  constexpr void __cordl_internal_set_harvestSoundKey(::StringW value);

  constexpr void __cordl_internal_set_isFullyGrown(bool value);

  constexpr void __cordl_internal_set_midGrowSoundKey(::StringW value);

  constexpr void __cordl_internal_set_plantCollider(::UnityW<::UnityEngine::BoxCollider> value);

  constexpr void __cordl_internal_set_plantHeights(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value);

  constexpr void __cordl_internal_set_stageContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_stuffingYield(int32_t value);

  /// @brief Method .ctor, addr 0x3083e9c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StuffingPlantMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StuffingPlantMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StuffingPlantMapObject(StuffingPlantMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StuffingPlantMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StuffingPlantMapObject(StuffingPlantMapObject const&) = delete;

  /// @brief Field plantCollider, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::BoxCollider> ___plantCollider;

  /// @brief Field stageContainers, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___stageContainers;

  /// @brief Field plantHeights, offset: 0xe8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___plantHeights;

  /// @brief Field growDuration, offset: 0xf0, size: 0x4, def value: None
  float_t ___growDuration;

  /// @brief Field stuffingYield, offset: 0xf4, size: 0x4, def value: None
  int32_t ___stuffingYield;

  /// @brief Field midGrowSoundKey, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___midGrowSoundKey;

  /// @brief Field fullGrowSoundKey, offset: 0x100, size: 0x8, def value: None
  ::StringW ___fullGrowSoundKey;

  /// @brief Field harvestSoundKey, offset: 0x108, size: 0x8, def value: None
  ::StringW ___harvestSoundKey;

  /// @brief Field currentGrowStage, offset: 0x110, size: 0x4, def value: None
  int32_t ___currentGrowStage;

  /// @brief Field growTimePerStage, offset: 0x114, size: 0x4, def value: None
  float_t ___growTimePerStage;

  /// @brief Field growTimer, offset: 0x118, size: 0x4, def value: None
  float_t ___growTimer;

  /// @brief Field isFullyGrown, offset: 0x11c, size: 0x1, def value: None
  bool ___isFullyGrown;

  /// @brief Field renderers, offset: 0x120, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> ___renderers;

  /// @brief Field harvestMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString harvestMessage{ u"harvest" };

  /// @brief Field plantHeightOffset offset 0xffffffff size 0x4
  static constexpr float_t plantHeightOffset{ 0.0 };

  /// @brief Field stuffingDispenseHeightOffset offset 0xffffffff size 0x4
  static constexpr float_t stuffingDispenseHeightOffset{ 0.185 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StuffingPlantMapObject, 0x128>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___plantCollider) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___stageContainers) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___plantHeights) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___growDuration) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___stuffingYield) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___midGrowSoundKey) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___fullGrowSoundKey) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___harvestSoundKey) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___currentGrowStage) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___growTimePerStage) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___growTimer) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___isFullyGrown) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingPlantMapObject, ___renderers) == 0x120, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StuffingPlantMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StuffingPlantMapObject*, "", "StuffingPlantMapObject");
