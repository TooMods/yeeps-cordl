#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DespawningItem_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MagnifyingGlassItem)
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class ObservationDisplay;
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
class GameObject;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MagnifyingGlassItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MagnifyingGlassItem);
// Type: ::MagnifyingGlassItem
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 328, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MagnifyingGlassItem*
class CORDL_TYPE MagnifyingGlassItem : public ::GlobalNamespace::DespawningItem {
public:
  // Declarations
  /// @brief Field boundingCenter, offset 0x138, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x144, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field canObserve, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get_canObserve, put = __cordl_internal_set_canObserve)) bool canObserve;

  /// @brief Field linePoints, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_linePoints, put = __cordl_internal_set_linePoints))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> linePoints;

  /// @brief Field lineRenderer, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_lineRenderer, put = __cordl_internal_set_lineRenderer))::UnityW<::UnityEngine::LineRenderer> lineRenderer;

  /// @brief Field observationDisplay, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_observationDisplay, put = __cordl_internal_set_observationDisplay))::UnityW<::GlobalNamespace::ObservationDisplay> observationDisplay;

  /// @brief Field observationDisplayPrefab, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_observationDisplayPrefab, put = __cordl_internal_set_observationDisplayPrefab))::UnityW<::UnityEngine::GameObject> observationDisplayPrefab;

  /// @brief Field observedMapObject, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_observedMapObject, put = __cordl_internal_set_observedMapObject))::UnityW<::GlobalNamespace::MapObject> observedMapObject;

  /// @brief Field observedPlayer, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_observedPlayer, put = __cordl_internal_set_observedPlayer))::UnityW<::GlobalNamespace::Player> observedPlayer;

  /// @brief Field raycastDistance, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_raycastDistance, put = __cordl_internal_set_raycastDistance)) float_t raycastDistance;

  /// @brief Field raycastLayerMask, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_raycastLayerMask, put = __cordl_internal_set_raycastLayerMask))::UnityEngine::LayerMask raycastLayerMask;

  /// @brief Field raycastOrigin, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_raycastOrigin, put = __cordl_internal_set_raycastOrigin))::UnityW<::UnityEngine::Transform> raycastOrigin;

  /// @brief Method CanTransferOwnership, addr 0x2aacdd8, size 0x8, virtual true, abstract: false, final false
  inline bool CanTransferOwnership();

  /// @brief Method ClearObservation, addr 0x2aacf04, size 0xb0, virtual false, abstract: false, final false
  inline void ClearObservation(bool deleteDisplay);

  /// @brief Method DestroySelf, addr 0x2aacfb4, size 0x28, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method DoObservation, addr 0x2aacfdc, size 0x33c, virtual false, abstract: false, final false
  inline void DoObservation();

  /// @brief Method GetBounds, addr 0x2aacdbc, size 0x1c, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method Initialize, addr 0x2aacde8, size 0x58, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method LateUpdate, addr 0x2aad318, size 0x10, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MagnifyingGlassItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2aace88, size 0x50, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnIsMasterUpdated, addr 0x2aaced8, size 0x2c, virtual true, abstract: false, final false
  inline void OnIsMasterUpdated();

  /// @brief Method SetCanObserve, addr 0x2aace40, size 0x48, virtual false, abstract: false, final false
  inline void SetCanObserve(bool newCanObserve);

  /// @brief Method SetLine, addr 0x2aad328, size 0xa4, virtual false, abstract: false, final false
  inline void SetLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end);

  /// @brief Method SetObservedMapObject, addr 0x2aad5a4, size 0x104, virtual false, abstract: false, final false
  inline void SetObservedMapObject(::GlobalNamespace::MapObject* newObservedMapObject, ::UnityEngine::Vector3 hitPoint, ::UnityEngine::Vector3 hitNormal);

  /// @brief Method SetObservedPlayer, addr 0x2aad3cc, size 0x1d8, virtual false, abstract: false, final false
  inline void SetObservedPlayer(::GlobalNamespace::Player* newObservedPlayer, ::UnityEngine::Vector3 hitPoint, ::UnityEngine::Vector3 hitNormal);

  /// @brief Method ShouldShrinkWhenOverDespawnZone, addr 0x2aacde0, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldShrinkWhenOverDespawnZone();

  /// @brief Method TryCreateAndPositionDisplay, addr 0x2aad6a8, size 0x144, virtual false, abstract: false, final false
  inline void TryCreateAndPositionDisplay(::UnityEngine::Vector3 hitPoint, ::UnityEngine::Vector3 hitNormal);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr bool const& __cordl_internal_get_canObserve() const;

  constexpr bool& __cordl_internal_get_canObserve();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_linePoints() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_linePoints();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lineRenderer() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lineRenderer();

  constexpr ::UnityW<::GlobalNamespace::ObservationDisplay> const& __cordl_internal_get_observationDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::ObservationDisplay>& __cordl_internal_get_observationDisplay();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_observationDisplayPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_observationDisplayPrefab();

  constexpr ::UnityW<::GlobalNamespace::MapObject> const& __cordl_internal_get_observedMapObject() const;

  constexpr ::UnityW<::GlobalNamespace::MapObject>& __cordl_internal_get_observedMapObject();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_observedPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_observedPlayer();

  constexpr float_t const& __cordl_internal_get_raycastDistance() const;

  constexpr float_t& __cordl_internal_get_raycastDistance();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_raycastLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_raycastLayerMask();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_raycastOrigin() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_raycastOrigin();

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_canObserve(bool value);

  constexpr void __cordl_internal_set_linePoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr void __cordl_internal_set_observationDisplay(::UnityW<::GlobalNamespace::ObservationDisplay> value);

  constexpr void __cordl_internal_set_observationDisplayPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_observedMapObject(::UnityW<::GlobalNamespace::MapObject> value);

  constexpr void __cordl_internal_set_observedPlayer(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_raycastDistance(float_t value);

  constexpr void __cordl_internal_set_raycastLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_raycastOrigin(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x2aad7ec, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MagnifyingGlassItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MagnifyingGlassItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MagnifyingGlassItem(MagnifyingGlassItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MagnifyingGlassItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MagnifyingGlassItem(MagnifyingGlassItem const&) = delete;

  /// @brief Field raycastOrigin, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___raycastOrigin;

  /// @brief Field raycastDistance, offset: 0xf8, size: 0x4, def value: None
  float_t ___raycastDistance;

  /// @brief Field raycastLayerMask, offset: 0xfc, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___raycastLayerMask;

  /// @brief Field lineRenderer, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___lineRenderer;

  /// @brief Field linePoints, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___linePoints;

  /// @brief Field observationDisplayPrefab, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___observationDisplayPrefab;

  /// @brief Field observationDisplay, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObservationDisplay> ___observationDisplay;

  /// @brief Field canObserve, offset: 0x120, size: 0x1, def value: None
  bool ___canObserve;

  /// @brief Field observedMapObject, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapObject> ___observedMapObject;

  /// @brief Field observedPlayer, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___observedPlayer;

  /// @brief Field boundingCenter, offset: 0x138, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x144, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field displayBufferDistance offset 0xffffffff size 0x4
  static constexpr float_t displayBufferDistance{ 0.1 };

  /// @brief Field linePointCount offset 0xffffffff size 0x4
  static constexpr int32_t linePointCount{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MagnifyingGlassItem, 0x148>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___raycastOrigin) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___raycastDistance) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___raycastLayerMask) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___lineRenderer) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___linePoints) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___observationDisplayPrefab) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___observationDisplay) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___canObserve) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___observedMapObject) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___observedPlayer) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___boundingCenter) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagnifyingGlassItem, ___boundingRadius) == 0x144, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MagnifyingGlassItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MagnifyingGlassItem*, "", "MagnifyingGlassItem");
