#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WearableItem)
namespace GlobalNamespace {
struct CosmeticZone;
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class WearableItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WearableItem);
// Type: ::WearableItem
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::WearableItem*
class CORDL_TYPE WearableItem : public ::GlobalNamespace::Item {
public:
  // Declarations
  /// @brief Field <isWorn>k__BackingField, offset 0xe9, size 0x1
  __declspec(property(get = __cordl_internal_get__isWorn_k__BackingField, put = __cordl_internal_set__isWorn_k__BackingField)) bool _isWorn_k__BackingField;

  /// @brief Field allowEquipInAnyZone, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_allowEquipInAnyZone, put = __cordl_internal_set_allowEquipInAnyZone)) bool allowEquipInAnyZone;

  /// @brief Field boundingCenter, offset 0x140, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x14c, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field despawnTime, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_despawnTime, put = __cordl_internal_set_despawnTime)) float_t despawnTime;

  /// @brief Field despawnTimer, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get_despawnTimer, put = __cordl_internal_set_despawnTimer)) float_t despawnTimer;

  /// @brief Field doScaleWhenHoveringToEquip, offset 0x118, size 0x1
  __declspec(property(get = __cordl_internal_get_doScaleWhenHoveringToEquip, put = __cordl_internal_set_doScaleWhenHoveringToEquip)) bool doScaleWhenHoveringToEquip;

  /// @brief Field equipSoundKey, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_equipSoundKey, put = __cordl_internal_set_equipSoundKey))::StringW equipSoundKey;

  /// @brief Field equipZones, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_equipZones, put = __cordl_internal_set_equipZones))::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* equipZones;

  /// @brief Field hoveringToEquip, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get_hoveringToEquip, put = __cordl_internal_set_hoveringToEquip)) bool hoveringToEquip;

  __declspec(property(get = get_isWorn, put = set_isWorn)) bool isWorn;

  /// @brief Field wasActiveInHand, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_wasActiveInHand, put = __cordl_internal_set_wasActiveInHand)) bool wasActiveInHand;

  /// @brief Field wearAnchor, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_wearAnchor, put = __cordl_internal_set_wearAnchor))::GlobalNamespace::__Item__AnchorState wearAnchor;

  /// @brief Field wearLocalEulerAngles, offset 0xfc, size 0xc
  __declspec(property(get = __cordl_internal_get_wearLocalEulerAngles, put = __cordl_internal_set_wearLocalEulerAngles))::UnityEngine::Vector3 wearLocalEulerAngles;

  /// @brief Field wearLocalPosition, offset 0xf0, size 0xc
  __declspec(property(get = __cordl_internal_get_wearLocalPosition, put = __cordl_internal_set_wearLocalPosition))::UnityEngine::Vector3 wearLocalPosition;

  /// @brief Field wornHideContainer, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_wornHideContainer, put = __cordl_internal_set_wornHideContainer))::UnityW<::UnityEngine::GameObject> wornHideContainer;

  /// @brief Method GetBounds, addr 0x2f68794, size 0x1c, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method Initialize, addr 0x2f68718, size 0x1c, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::WearableItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2f68878, size 0x260, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnIsMasterUpdated, addr 0x2f6885c, size 0x1c, virtual true, abstract: false, final false
  inline void OnIsMasterUpdated();

  /// @brief Method OnIsWornUpdated, addr 0x2f68d70, size 0x4, virtual true, abstract: false, final false
  inline void OnIsWornUpdated();

  /// @brief Method OnUpdate, addr 0x2f68ba8, size 0x1c8, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method RefreshWornHideContainer, addr 0x2f687b0, size 0xac, virtual false, abstract: false, final false
  inline void RefreshWornHideContainer();

  /// @brief Method SetHoveringToEquip, addr 0x2f68b20, size 0x88, virtual false, abstract: false, final false
  inline void SetHoveringToEquip(bool newHoveringToEquip);

  /// @brief Method SetIsWorn, addr 0x2f68ad8, size 0x48, virtual false, abstract: false, final false
  inline void SetIsWorn(bool newIsWorn);

  constexpr bool const& __cordl_internal_get__isWorn_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isWorn_k__BackingField();

  constexpr bool const& __cordl_internal_get_allowEquipInAnyZone() const;

  constexpr bool& __cordl_internal_get_allowEquipInAnyZone();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr float_t const& __cordl_internal_get_despawnTime() const;

  constexpr float_t& __cordl_internal_get_despawnTime();

  constexpr float_t const& __cordl_internal_get_despawnTimer() const;

  constexpr float_t& __cordl_internal_get_despawnTimer();

  constexpr bool const& __cordl_internal_get_doScaleWhenHoveringToEquip() const;

  constexpr bool& __cordl_internal_get_doScaleWhenHoveringToEquip();

  constexpr ::StringW const& __cordl_internal_get_equipSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_equipSoundKey();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*& __cordl_internal_get_equipZones();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*> const& __cordl_internal_get_equipZones() const;

  constexpr bool const& __cordl_internal_get_hoveringToEquip() const;

  constexpr bool& __cordl_internal_get_hoveringToEquip();

  constexpr bool const& __cordl_internal_get_wasActiveInHand() const;

  constexpr bool& __cordl_internal_get_wasActiveInHand();

  constexpr ::GlobalNamespace::__Item__AnchorState const& __cordl_internal_get_wearAnchor() const;

  constexpr ::GlobalNamespace::__Item__AnchorState& __cordl_internal_get_wearAnchor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_wearLocalEulerAngles() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_wearLocalEulerAngles();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_wearLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_wearLocalPosition();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_wornHideContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_wornHideContainer();

  constexpr void __cordl_internal_set__isWorn_k__BackingField(bool value);

  constexpr void __cordl_internal_set_allowEquipInAnyZone(bool value);

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_despawnTime(float_t value);

  constexpr void __cordl_internal_set_despawnTimer(float_t value);

  constexpr void __cordl_internal_set_doScaleWhenHoveringToEquip(bool value);

  constexpr void __cordl_internal_set_equipSoundKey(::StringW value);

  constexpr void __cordl_internal_set_equipZones(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* value);

  constexpr void __cordl_internal_set_hoveringToEquip(bool value);

  constexpr void __cordl_internal_set_wasActiveInHand(bool value);

  constexpr void __cordl_internal_set_wearAnchor(::GlobalNamespace::__Item__AnchorState value);

  constexpr void __cordl_internal_set_wearLocalEulerAngles(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_wearLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_wornHideContainer(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x2f68770, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isWorn, addr 0x2f68780, size 0x8, virtual false, abstract: false, final false
  inline bool get_isWorn();

  /// @brief Method set_isWorn, addr 0x2f68788, size 0xc, virtual false, abstract: false, final false
  inline void set_isWorn(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WearableItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WearableItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WearableItem(WearableItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WearableItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WearableItem(WearableItem const&) = delete;

  /// @brief Field wasActiveInHand, offset: 0xe8, size: 0x1, def value: None
  bool ___wasActiveInHand;

  /// @brief Field <isWorn>k__BackingField, offset: 0xe9, size: 0x1, def value: None
  bool ____isWorn_k__BackingField;

  /// @brief Field wearAnchor, offset: 0xec, size: 0x4, def value: None
  ::GlobalNamespace::__Item__AnchorState ___wearAnchor;

  /// @brief Field wearLocalPosition, offset: 0xf0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___wearLocalPosition;

  /// @brief Field wearLocalEulerAngles, offset: 0xfc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___wearLocalEulerAngles;

  /// @brief Field allowEquipInAnyZone, offset: 0x108, size: 0x1, def value: None
  bool ___allowEquipInAnyZone;

  /// @brief Field equipZones, offset: 0x110, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* ___equipZones;

  /// @brief Field doScaleWhenHoveringToEquip, offset: 0x118, size: 0x1, def value: None
  bool ___doScaleWhenHoveringToEquip;

  /// @brief Field wornHideContainer, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___wornHideContainer;

  /// @brief Field hoveringToEquip, offset: 0x128, size: 0x1, def value: None
  bool ___hoveringToEquip;

  /// @brief Field equipSoundKey, offset: 0x130, size: 0x8, def value: None
  ::StringW ___equipSoundKey;

  /// @brief Field despawnTime, offset: 0x138, size: 0x4, def value: None
  float_t ___despawnTime;

  /// @brief Field despawnTimer, offset: 0x13c, size: 0x4, def value: None
  float_t ___despawnTimer;

  /// @brief Field boundingCenter, offset: 0x140, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x14c, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field hoveringToEquipDisengageHapticAmplitude offset 0xffffffff size 0x4
  static constexpr float_t hoveringToEquipDisengageHapticAmplitude{ 0.15 };

  /// @brief Field hoveringToEquipDisengageHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t hoveringToEquipDisengageHapticDuration{ 0.1 };

  /// @brief Field hoveringToEquipEngageHapticAmplitude offset 0xffffffff size 0x4
  static constexpr float_t hoveringToEquipEngageHapticAmplitude{ 0.25 };

  /// @brief Field hoveringToEquipEngageHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t hoveringToEquipEngageHapticDuration{ 0.1 };

  /// @brief Field hoveringToEquipScale offset 0xffffffff size 0x4
  static constexpr float_t hoveringToEquipScale{ 2.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WearableItem, 0x150>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___wasActiveInHand) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ____isWorn_k__BackingField) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___wearAnchor) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___wearLocalPosition) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___wearLocalEulerAngles) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___allowEquipInAnyZone) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___equipZones) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___doScaleWhenHoveringToEquip) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___wornHideContainer) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___hoveringToEquip) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___equipSoundKey) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___despawnTime) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___despawnTimer) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___boundingCenter) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableItem, ___boundingRadius) == 0x14c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WearableItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WearableItem*, "", "WearableItem");
