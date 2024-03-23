#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MapObjectItem)
namespace GlobalNamespace {
class MapObjectPickupData;
}
namespace GlobalNamespace {
class MapObjectPreview;
}
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
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MapObjectItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapObjectItem);
// Type: ::MapObjectItem
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectItem*
class CORDL_TYPE MapObjectItem : public ::GlobalNamespace::Item {
public:
  // Declarations
  /// @brief Field canDeploy, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get_canDeploy, put = __cordl_internal_set_canDeploy)) bool canDeploy;

  /// @brief Field colorKey, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_colorKey, put = __cordl_internal_set_colorKey))::StringW colorKey;

  /// @brief Field creativeModeOnly, offset 0x109, size 0x1
  __declspec(property(get = __cordl_internal_get_creativeModeOnly, put = __cordl_internal_set_creativeModeOnly)) bool creativeModeOnly;

  /// @brief Field defaultColliderRadius, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultColliderRadius, put = __cordl_internal_set_defaultColliderRadius)) float_t defaultColliderRadius;

  /// @brief Field deployCollider, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_deployCollider, put = __cordl_internal_set_deployCollider))::UnityW<::UnityEngine::SphereCollider> deployCollider;

  /// @brief Field deployLayerMask, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_deployLayerMask, put = __cordl_internal_set_deployLayerMask))::UnityEngine::LayerMask deployLayerMask;

  /// @brief Field deployTriggerRadius, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get_deployTriggerRadius, put = __cordl_internal_set_deployTriggerRadius)) float_t deployTriggerRadius;

  /// @brief Field despawnTimer, offset 0x144, size 0x4
  __declspec(property(get = __cordl_internal_get_despawnTimer, put = __cordl_internal_set_despawnTimer)) float_t despawnTimer;

  /// @brief Field droppedOnGroundTimer, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get_droppedOnGroundTimer, put = __cordl_internal_set_droppedOnGroundTimer)) float_t droppedOnGroundTimer;

  /// @brief Field isDroppedOnGround, offset 0x13c, size 0x1
  __declspec(property(get = __cordl_internal_get_isDroppedOnGround, put = __cordl_internal_set_isDroppedOnGround)) bool isDroppedOnGround;

  /// @brief Field maintainUp, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_maintainUp, put = __cordl_internal_set_maintainUp)) bool maintainUp;

  /// @brief Field mapObjectKey, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectKey, put = __cordl_internal_set_mapObjectKey))::StringW mapObjectKey;

  /// @brief Field mapObjectPlaceholder, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectPlaceholder, put = __cordl_internal_set_mapObjectPlaceholder))::UnityW<::UnityEngine::GameObject> mapObjectPlaceholder;

  /// @brief Field mapObjectPreview, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectPreview, put = __cordl_internal_set_mapObjectPreview))::UnityW<::GlobalNamespace::MapObjectPreview> mapObjectPreview;

  /// @brief Field mapObjectVisualCopy, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectVisualCopy, put = __cordl_internal_set_mapObjectVisualCopy))::UnityW<::UnityEngine::Transform> mapObjectVisualCopy;

  /// @brief Field maxPreviewRadius, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_maxPreviewRadius, put = __cordl_internal_set_maxPreviewRadius)) float_t maxPreviewRadius;

  /// @brief Field minPreviewRadius, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_minPreviewRadius, put = __cordl_internal_set_minPreviewRadius)) float_t minPreviewRadius;

  /// @brief Field pickupData, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_pickupData, put = __cordl_internal_set_pickupData))::GlobalNamespace::MapObjectPickupData* pickupData;

  /// @brief Method DestroySelf, addr 0x2aade64, size 0x7c, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method DoPickup, addr 0x2aae0a4, size 0xb4, virtual false, abstract: false, final false
  inline void DoPickup(bool right, ::GlobalNamespace::MapObjectPickupData* pickupData);

  /// @brief Method GetBounds, addr 0x2aad85c, size 0x70, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method Initialize, addr 0x2aadb84, size 0x1d4, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method MakeVisualOnly, addr 0x2aad8cc, size 0x18, virtual true, abstract: false, final false
  inline void MakeVisualOnly(::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::MapObjectItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2aadee0, size 0x1c4, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnMasterCollisionEnter, addr 0x2aae158, size 0x3a8, virtual true, abstract: false, final false
  inline void OnMasterCollisionEnter(::UnityEngine::Collision* collision);

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x2aae500, size 0x6c, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(::StringW payload);

  /// @brief Method OnUpdate, addr 0x2aae56c, size 0x674, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method SetCanDeploy, addr 0x2aadd58, size 0x10c, virtual false, abstract: false, final false
  inline void SetCanDeploy(bool newCanDeploy);

  /// @brief Method TryCreateMapObjectVisualCopy, addr 0x2aad8e4, size 0x2a0, virtual false, abstract: false, final false
  inline bool TryCreateMapObjectVisualCopy(::GlobalNamespace::__Item__CustomParameters* customParameters);

  constexpr bool const& __cordl_internal_get_canDeploy() const;

  constexpr bool& __cordl_internal_get_canDeploy();

  constexpr ::StringW const& __cordl_internal_get_colorKey() const;

  constexpr ::StringW& __cordl_internal_get_colorKey();

  constexpr bool const& __cordl_internal_get_creativeModeOnly() const;

  constexpr bool& __cordl_internal_get_creativeModeOnly();

  constexpr float_t const& __cordl_internal_get_defaultColliderRadius() const;

  constexpr float_t& __cordl_internal_get_defaultColliderRadius();

  constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_deployCollider() const;

  constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_deployCollider();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_deployLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_deployLayerMask();

  constexpr float_t const& __cordl_internal_get_deployTriggerRadius() const;

  constexpr float_t& __cordl_internal_get_deployTriggerRadius();

  constexpr float_t const& __cordl_internal_get_despawnTimer() const;

  constexpr float_t& __cordl_internal_get_despawnTimer();

  constexpr float_t const& __cordl_internal_get_droppedOnGroundTimer() const;

  constexpr float_t& __cordl_internal_get_droppedOnGroundTimer();

  constexpr bool const& __cordl_internal_get_isDroppedOnGround() const;

  constexpr bool& __cordl_internal_get_isDroppedOnGround();

  constexpr bool const& __cordl_internal_get_maintainUp() const;

  constexpr bool& __cordl_internal_get_maintainUp();

  constexpr ::StringW const& __cordl_internal_get_mapObjectKey() const;

  constexpr ::StringW& __cordl_internal_get_mapObjectKey();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mapObjectPlaceholder() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mapObjectPlaceholder();

  constexpr ::UnityW<::GlobalNamespace::MapObjectPreview> const& __cordl_internal_get_mapObjectPreview() const;

  constexpr ::UnityW<::GlobalNamespace::MapObjectPreview>& __cordl_internal_get_mapObjectPreview();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_mapObjectVisualCopy() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_mapObjectVisualCopy();

  constexpr float_t const& __cordl_internal_get_maxPreviewRadius() const;

  constexpr float_t& __cordl_internal_get_maxPreviewRadius();

  constexpr float_t const& __cordl_internal_get_minPreviewRadius() const;

  constexpr float_t& __cordl_internal_get_minPreviewRadius();

  constexpr ::GlobalNamespace::MapObjectPickupData*& __cordl_internal_get_pickupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MapObjectPickupData*> const& __cordl_internal_get_pickupData() const;

  constexpr void __cordl_internal_set_canDeploy(bool value);

  constexpr void __cordl_internal_set_colorKey(::StringW value);

  constexpr void __cordl_internal_set_creativeModeOnly(bool value);

  constexpr void __cordl_internal_set_defaultColliderRadius(float_t value);

  constexpr void __cordl_internal_set_deployCollider(::UnityW<::UnityEngine::SphereCollider> value);

  constexpr void __cordl_internal_set_deployLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_deployTriggerRadius(float_t value);

  constexpr void __cordl_internal_set_despawnTimer(float_t value);

  constexpr void __cordl_internal_set_droppedOnGroundTimer(float_t value);

  constexpr void __cordl_internal_set_isDroppedOnGround(bool value);

  constexpr void __cordl_internal_set_maintainUp(bool value);

  constexpr void __cordl_internal_set_mapObjectKey(::StringW value);

  constexpr void __cordl_internal_set_mapObjectPlaceholder(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_mapObjectPreview(::UnityW<::GlobalNamespace::MapObjectPreview> value);

  constexpr void __cordl_internal_set_mapObjectVisualCopy(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_maxPreviewRadius(float_t value);

  constexpr void __cordl_internal_set_minPreviewRadius(float_t value);

  constexpr void __cordl_internal_set_pickupData(::GlobalNamespace::MapObjectPickupData* value);

  /// @brief Method .ctor, addr 0x2aaebe0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObjectItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObjectItem(MapObjectItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObjectItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObjectItem(MapObjectItem const&) = delete;

  /// @brief Field minPreviewRadius, offset: 0xe8, size: 0x4, def value: None
  float_t ___minPreviewRadius;

  /// @brief Field maxPreviewRadius, offset: 0xec, size: 0x4, def value: None
  float_t ___maxPreviewRadius;

  /// @brief Field mapObjectPlaceholder, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___mapObjectPlaceholder;

  /// @brief Field mapObjectVisualCopy, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___mapObjectVisualCopy;

  /// @brief Field mapObjectKey, offset: 0x100, size: 0x8, def value: None
  ::StringW ___mapObjectKey;

  /// @brief Field maintainUp, offset: 0x108, size: 0x1, def value: None
  bool ___maintainUp;

  /// @brief Field creativeModeOnly, offset: 0x109, size: 0x1, def value: None
  bool ___creativeModeOnly;

  /// @brief Field colorKey, offset: 0x110, size: 0x8, def value: None
  ::StringW ___colorKey;

  /// @brief Field mapObjectPreview, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapObjectPreview> ___mapObjectPreview;

  /// @brief Field canDeploy, offset: 0x120, size: 0x1, def value: None
  bool ___canDeploy;

  /// @brief Field deployCollider, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SphereCollider> ___deployCollider;

  /// @brief Field defaultColliderRadius, offset: 0x130, size: 0x4, def value: None
  float_t ___defaultColliderRadius;

  /// @brief Field deployTriggerRadius, offset: 0x134, size: 0x4, def value: None
  float_t ___deployTriggerRadius;

  /// @brief Field deployLayerMask, offset: 0x138, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___deployLayerMask;

  /// @brief Field isDroppedOnGround, offset: 0x13c, size: 0x1, def value: None
  bool ___isDroppedOnGround;

  /// @brief Field droppedOnGroundTimer, offset: 0x140, size: 0x4, def value: None
  float_t ___droppedOnGroundTimer;

  /// @brief Field despawnTimer, offset: 0x144, size: 0x4, def value: None
  float_t ___despawnTimer;

  /// @brief Field pickupData, offset: 0x148, size: 0x8, def value: None
  ::GlobalNamespace::MapObjectPickupData* ___pickupData;

  /// @brief Field PLACE_INVALID_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString PLACE_INVALID_KEY{ u"placeInvalid" };

  /// @brief Field bobAmplitudeWhenDroppedOnGround offset 0xffffffff size 0x4
  static constexpr float_t bobAmplitudeWhenDroppedOnGround{ 0.025 };

  /// @brief Field bobSpeedWhenDroppedOnGround offset 0xffffffff size 0x4
  static constexpr float_t bobSpeedWhenDroppedOnGround{ 1.0 };

  /// @brief Field deployColliderDropMaxDistance offset 0xffffffff size 0x4
  static constexpr float_t deployColliderDropMaxDistance{ 0.325 };

  /// @brief Field droppedOnGroundMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString droppedOnGroundMessage{ u"onGround" };

  /// @brief Field rotationSpeedWhenDroppedOnGround offset 0xffffffff size 0x4
  static constexpr float_t rotationSpeedWhenDroppedOnGround{ 45.0 };

  /// @brief Field timeUntilDespawn offset 0xffffffff size 0x4
  static constexpr float_t timeUntilDespawn{ 30.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectItem, 0x150>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___minPreviewRadius) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___maxPreviewRadius) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___mapObjectPlaceholder) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___mapObjectVisualCopy) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___mapObjectKey) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___maintainUp) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___creativeModeOnly) == 0x109, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___colorKey) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___mapObjectPreview) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___canDeploy) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___deployCollider) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___defaultColliderRadius) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___deployTriggerRadius) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___deployLayerMask) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___isDroppedOnGround) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___droppedOnGroundTimer) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___despawnTimer) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectItem, ___pickupData) == 0x148, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapObjectItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectItem*, "", "MapObjectItem");
