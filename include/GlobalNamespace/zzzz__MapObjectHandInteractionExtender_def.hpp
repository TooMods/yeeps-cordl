#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MapObjectHandInteractionExtender)
namespace GlobalNamespace {
class CosmeticsZone;
}
namespace GlobalNamespace {
class InputController;
}
namespace GlobalNamespace {
class MapObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MapObjectHandInteractionExtender;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapObjectHandInteractionExtender);
// Type: ::MapObjectHandInteractionExtender
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectHandInteractionExtender*
class CORDL_TYPE MapObjectHandInteractionExtender : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field detectionCenterOffset, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_detectionCenterOffset, put = __cordl_internal_set_detectionCenterOffset))::UnityEngine::Vector3 detectionCenterOffset;

  /// @brief Field detectionLayerMask, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_detectionLayerMask, put = __cordl_internal_set_detectionLayerMask))::UnityEngine::LayerMask detectionLayerMask;

  /// @brief Field detectionRadius, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_detectionRadius, put = __cordl_internal_set_detectionRadius)) float_t detectionRadius;

  /// @brief Field hoverPointPramName, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_hoverPointPramName, put = __cordl_internal_set_hoverPointPramName))::StringW hoverPointPramName;

  /// @brief Field hoverPositionCenterOffset, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_hoverPositionCenterOffset, put = __cordl_internal_set_hoverPositionCenterOffset))::UnityEngine::Vector3 hoverPositionCenterOffset;

  /// @brief Field hoveredCosmeticsZone, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_hoveredCosmeticsZone, put = __cordl_internal_set_hoveredCosmeticsZone))::UnityW<::GlobalNamespace::CosmeticsZone> hoveredCosmeticsZone;

  /// @brief Field hoveredMapObject, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_hoveredMapObject, put = __cordl_internal_set_hoveredMapObject))::UnityW<::GlobalNamespace::MapObject> hoveredMapObject;

  /// @brief Field hoveredMapObjectMats, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_hoveredMapObjectMats,
                      put = __cordl_internal_set_hoveredMapObjectMats))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> hoveredMapObjectMats;

  /// @brief Field hoveredToPickupCosmeticKey, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_hoveredToPickupCosmeticKey, put = __cordl_internal_set_hoveredToPickupCosmeticKey))::StringW hoveredToPickupCosmeticKey;

  /// @brief Field inputController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_inputController, put = __cordl_internal_set_inputController))::UnityW<::GlobalNamespace::InputController> inputController;

  /// @brief Field isActive, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isHandHoveringInteractable, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_isHandHoveringInteractable, put = __cordl_internal_set_isHandHoveringInteractable)) bool isHandHoveringInteractable;

  /// @brief Field isHandSelectingInteractable, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_isHandSelectingInteractable, put = __cordl_internal_set_isHandSelectingInteractable)) bool isHandSelectingInteractable;

  /// @brief Field nonHoveringPoint, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_nonHoveringPoint, put = setStaticF_nonHoveringPoint))::UnityEngine::Vector3 nonHoveringPoint;

  /// @brief Field right, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_right, put = __cordl_internal_set_right)) bool right;

  /// @brief Field wasMenuInputActiveLastFrame, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_wasMenuInputActiveLastFrame, put = __cordl_internal_set_wasMenuInputActiveLastFrame)) bool wasMenuInputActiveLastFrame;

  /// @brief Field wasSelectInputActiveLastFrame, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_wasSelectInputActiveLastFrame, put = __cordl_internal_set_wasSelectInputActiveLastFrame)) bool wasSelectInputActiveLastFrame;

  static inline ::GlobalNamespace::MapObjectHandInteractionExtender* New_ctor();

  /// @brief Method OnFirstHoverBegun, addr 0x29d946c, size 0xc, virtual false, abstract: false, final false
  inline void OnFirstHoverBegun();

  /// @brief Method OnFirstSelectBegun, addr 0x29d9458, size 0xc, virtual false, abstract: false, final false
  inline void OnFirstSelectBegun();

  /// @brief Method OnHoveredMapObjectChangedMaterials, addr 0x29d9248, size 0x190, virtual false, abstract: false, final false
  inline void OnHoveredMapObjectChangedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials);

  /// @brief Method OnLastHoverEnded, addr 0x29d9478, size 0x8, virtual false, abstract: false, final false
  inline void OnLastHoverEnded();

  /// @brief Method OnLastSelectEnded, addr 0x29d9464, size 0x8, virtual false, abstract: false, final false
  inline void OnLastSelectEnded();

  /// @brief Method PickUpCosmetic, addr 0x29d8cb0, size 0x3b8, virtual false, abstract: false, final false
  inline void PickUpCosmetic(::StringW cosmeticKey);

  /// @brief Method RefreshIsActive, addr 0x29d93d8, size 0x80, virtual false, abstract: false, final false
  inline void RefreshIsActive();

  /// @brief Method SetHoveredCosmeticsZone, addr 0x29d9068, size 0xf8, virtual false, abstract: false, final false
  inline void SetHoveredCosmeticsZone(::GlobalNamespace::CosmeticsZone* newHoveredCosmeticsZone);

  /// @brief Method SetHoveredMapObject, addr 0x29d8ac4, size 0x1ec, virtual false, abstract: false, final false
  inline void SetHoveredMapObject(::GlobalNamespace::MapObject* newHoveredMapObject);

  /// @brief Method SetHoveredToPickupCosmeticKey, addr 0x29d9160, size 0xe8, virtual false, abstract: false, final false
  inline void SetHoveredToPickupCosmeticKey(::StringW newCosmeticKey);

  /// @brief Method Start, addr 0x29d8488, size 0x70, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x29d84f8, size 0x5cc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_detectionCenterOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_detectionCenterOffset();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_detectionLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_detectionLayerMask();

  constexpr float_t const& __cordl_internal_get_detectionRadius() const;

  constexpr float_t& __cordl_internal_get_detectionRadius();

  constexpr ::StringW const& __cordl_internal_get_hoverPointPramName() const;

  constexpr ::StringW& __cordl_internal_get_hoverPointPramName();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_hoverPositionCenterOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_hoverPositionCenterOffset();

  constexpr ::UnityW<::GlobalNamespace::CosmeticsZone> const& __cordl_internal_get_hoveredCosmeticsZone() const;

  constexpr ::UnityW<::GlobalNamespace::CosmeticsZone>& __cordl_internal_get_hoveredCosmeticsZone();

  constexpr ::UnityW<::GlobalNamespace::MapObject> const& __cordl_internal_get_hoveredMapObject() const;

  constexpr ::UnityW<::GlobalNamespace::MapObject>& __cordl_internal_get_hoveredMapObject();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_hoveredMapObjectMats() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_hoveredMapObjectMats();

  constexpr ::StringW const& __cordl_internal_get_hoveredToPickupCosmeticKey() const;

  constexpr ::StringW& __cordl_internal_get_hoveredToPickupCosmeticKey();

  constexpr ::UnityW<::GlobalNamespace::InputController> const& __cordl_internal_get_inputController() const;

  constexpr ::UnityW<::GlobalNamespace::InputController>& __cordl_internal_get_inputController();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isHandHoveringInteractable() const;

  constexpr bool& __cordl_internal_get_isHandHoveringInteractable();

  constexpr bool const& __cordl_internal_get_isHandSelectingInteractable() const;

  constexpr bool& __cordl_internal_get_isHandSelectingInteractable();

  constexpr bool const& __cordl_internal_get_right() const;

  constexpr bool& __cordl_internal_get_right();

  constexpr bool const& __cordl_internal_get_wasMenuInputActiveLastFrame() const;

  constexpr bool& __cordl_internal_get_wasMenuInputActiveLastFrame();

  constexpr bool const& __cordl_internal_get_wasSelectInputActiveLastFrame() const;

  constexpr bool& __cordl_internal_get_wasSelectInputActiveLastFrame();

  constexpr void __cordl_internal_set_detectionCenterOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_detectionLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_detectionRadius(float_t value);

  constexpr void __cordl_internal_set_hoverPointPramName(::StringW value);

  constexpr void __cordl_internal_set_hoverPositionCenterOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_hoveredCosmeticsZone(::UnityW<::GlobalNamespace::CosmeticsZone> value);

  constexpr void __cordl_internal_set_hoveredMapObject(::UnityW<::GlobalNamespace::MapObject> value);

  constexpr void __cordl_internal_set_hoveredMapObjectMats(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_hoveredToPickupCosmeticKey(::StringW value);

  constexpr void __cordl_internal_set_inputController(::UnityW<::GlobalNamespace::InputController> value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isHandHoveringInteractable(bool value);

  constexpr void __cordl_internal_set_isHandSelectingInteractable(bool value);

  constexpr void __cordl_internal_set_right(bool value);

  constexpr void __cordl_internal_set_wasMenuInputActiveLastFrame(bool value);

  constexpr void __cordl_internal_set_wasSelectInputActiveLastFrame(bool value);

  /// @brief Method .ctor, addr 0x29d9480, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Vector3 getStaticF_nonHoveringPoint();

  static inline void setStaticF_nonHoveringPoint(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectHandInteractionExtender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObjectHandInteractionExtender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObjectHandInteractionExtender(MapObjectHandInteractionExtender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObjectHandInteractionExtender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObjectHandInteractionExtender(MapObjectHandInteractionExtender const&) = delete;

  /// @brief Field inputController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::InputController> ___inputController;

  /// @brief Field right, offset: 0x20, size: 0x1, def value: None
  bool ___right;

  /// @brief Field detectionCenterOffset, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___detectionCenterOffset;

  /// @brief Field hoverPositionCenterOffset, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___hoverPositionCenterOffset;

  /// @brief Field detectionRadius, offset: 0x3c, size: 0x4, def value: None
  float_t ___detectionRadius;

  /// @brief Field detectionLayerMask, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___detectionLayerMask;

  /// @brief Field isHandHoveringInteractable, offset: 0x44, size: 0x1, def value: None
  bool ___isHandHoveringInteractable;

  /// @brief Field isHandSelectingInteractable, offset: 0x45, size: 0x1, def value: None
  bool ___isHandSelectingInteractable;

  /// @brief Field isActive, offset: 0x46, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field hoveredMapObject, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapObject> ___hoveredMapObject;

  /// @brief Field wasSelectInputActiveLastFrame, offset: 0x50, size: 0x1, def value: None
  bool ___wasSelectInputActiveLastFrame;

  /// @brief Field wasMenuInputActiveLastFrame, offset: 0x51, size: 0x1, def value: None
  bool ___wasMenuInputActiveLastFrame;

  /// @brief Field hoveredMapObjectMats, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___hoveredMapObjectMats;

  /// @brief Field hoverPointPramName, offset: 0x60, size: 0x8, def value: None
  ::StringW ___hoverPointPramName;

  /// @brief Field hoveredCosmeticsZone, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CosmeticsZone> ___hoveredCosmeticsZone;

  /// @brief Field hoveredToPickupCosmeticKey, offset: 0x70, size: 0x8, def value: None
  ::StringW ___hoveredToPickupCosmeticKey;

  /// @brief Field UNEQUIP_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString UNEQUIP_SOUND_KEY{ u"cosmeticUnequip" };

  /// @brief Field hoverPointLeftPramName offset 0xffffffff size 0x8
  static constexpr ::ConstString hoverPointLeftPramName{ u"_HoverPointLeft" };

  /// @brief Field hoverPointRightPramName offset 0xffffffff size 0x8
  static constexpr ::ConstString hoverPointRightPramName{ u"_HoverPointRight" };

  /// @brief Field noPickupTag offset 0xffffffff size 0x8
  static constexpr ::ConstString noPickupTag{ u"NoPickup" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectHandInteractionExtender, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___inputController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___right) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___detectionCenterOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___hoverPositionCenterOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___detectionRadius) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___detectionLayerMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___isHandHoveringInteractable) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___isHandSelectingInteractable) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___isActive) == 0x46, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___hoveredMapObject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___wasSelectInputActiveLastFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___wasMenuInputActiveLastFrame) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___hoveredMapObjectMats) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___hoverPointPramName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___hoveredCosmeticsZone) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectHandInteractionExtender, ___hoveredToPickupCosmeticKey) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapObjectHandInteractionExtender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectHandInteractionExtender*, "", "MapObjectHandInteractionExtender");
