#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ItemSpawner_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EndlessItemSpawner)
namespace GlobalNamespace {
class ItemDespawnZone;
}
namespace GlobalNamespace {
struct ItemTransformationData;
}
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
struct __Item__AnchorState;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EndlessItemSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EndlessItemSpawner);
// Type: ::EndlessItemSpawner
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EndlessItemSpawner*
class CORDL_TYPE EndlessItemSpawner : public ::GlobalNamespace::ItemSpawner {
public:
  // Declarations
  /// @brief Field anchorState, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_anchorState, put = __cordl_internal_set_anchorState))::GlobalNamespace::__Item__AnchorState anchorState;

  /// @brief Field controlledItemCount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_controlledItemCount, put = __cordl_internal_set_controlledItemCount)) int32_t controlledItemCount;

  /// @brief Field controlledItems, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_controlledItems,
                      put = __cordl_internal_set_controlledItems))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>* controlledItems;

  /// @brief Field customParameters, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_customParameters, put = __cordl_internal_set_customParameters))::ArrayW<::StringW, ::Array<::StringW>*> customParameters;

  /// @brief Field despawnZoneAcceptedType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_despawnZoneAcceptedType, put = __cordl_internal_set_despawnZoneAcceptedType))::GlobalNamespace::__Item__Type despawnZoneAcceptedType;

  /// @brief Field doHapticOnItemSpawn, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_doHapticOnItemSpawn, put = __cordl_internal_set_doHapticOnItemSpawn)) bool doHapticOnItemSpawn;

  /// @brief Field isActive, offset 0x65, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isActiveByDefault, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveByDefault, put = __cordl_internal_set_isActiveByDefault)) bool isActiveByDefault;

  /// @brief Field itemCap, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_itemCap, put = __cordl_internal_set_itemCap)) int32_t itemCap;

  /// @brief Field itemDespawnZone, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_itemDespawnZone, put = __cordl_internal_set_itemDespawnZone))::UnityW<::GlobalNamespace::ItemDespawnZone> itemDespawnZone;

  /// @brief Field itemKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_itemKey, put = __cordl_internal_set_itemKey))::StringW itemKey;

  /// @brief Field itemsInSpawnAnchor, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsInSpawnAnchor,
                      put = __cordl_internal_set_itemsInSpawnAnchor))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>* itemsInSpawnAnchor;

  /// @brief Field randomizeBetweenCustomParameters, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_randomizeBetweenCustomParameters, put = __cordl_internal_set_randomizeBetweenCustomParameters)) bool randomizeBetweenCustomParameters;

  /// @brief Field spawnRadius, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_spawnRadius, put = __cordl_internal_set_spawnRadius)) float_t spawnRadius;

  /// @brief Method GetSpawnCustomParameters, addr 0x2ab0ee4, size 0x134, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__Item__CustomParameters* GetSpawnCustomParameters();

  static inline ::GlobalNamespace::EndlessItemSpawner* New_ctor();

  /// @brief Method OnItemAnchorStateUpdated, addr 0x2ab0930, size 0x104, virtual false, abstract: false, final false
  inline void OnItemAnchorStateUpdated(::GlobalNamespace::Item* item, ::GlobalNamespace::__Item__AnchorState oldAnchorState, ::GlobalNamespace::__Item__AnchorState newAnchorState);

  /// @brief Method OnItemDespawnedInZone, addr 0x2ab0880, size 0xb0, virtual false, abstract: false, final false
  inline void OnItemDespawnedInZone(::GlobalNamespace::Item* item);

  /// @brief Method OnItemDestroyed, addr 0x2ab04f4, size 0x74, virtual false, abstract: false, final false
  inline void OnItemDestroyed(::GlobalNamespace::Item* item);

  /// @brief Method OnItemSpawned, addr 0x2ab0208, size 0x2ec, virtual true, abstract: false, final false
  inline void OnItemSpawned(::GlobalNamespace::Item* item);

  /// @brief Method OnItemSwitchedOwnership, addr 0x2ab080c, size 0x74, virtual false, abstract: false, final false
  inline void OnItemSwitchedOwnership(::GlobalNamespace::Item* item, ::GlobalNamespace::PlayerItemManager* newPlayerItemManager);

  /// @brief Method OnLostControlOfItem, addr 0x2ab0568, size 0x2a4, virtual false, abstract: false, final false
  inline void OnLostControlOfItem(::GlobalNamespace::Item* item);

  /// @brief Method OnStart, addr 0x2aafd34, size 0x190, virtual true, abstract: false, final false
  inline void OnStart();

  /// @brief Method RefreshIsDespawnZoneActive, addr 0x2ab0144, size 0xc4, virtual false, abstract: false, final false
  inline void RefreshIsDespawnZoneActive();

  /// @brief Method SetIsActive, addr 0x2aafec4, size 0x1bc, virtual false, abstract: false, final false
  inline void SetIsActive(bool newIsActive);

  /// @brief Method TryGetSpawnTransformationData, addr 0x2ab0b44, size 0x3a0, virtual true, abstract: false, final false
  inline bool TryGetSpawnTransformationData(ByRef<::GlobalNamespace::ItemTransformationData> itemTransformationData);

  /// @brief Method TrySpawnItem, addr 0x2ab0080, size 0xc4, virtual false, abstract: false, final false
  inline void TrySpawnItem();

  constexpr ::GlobalNamespace::__Item__AnchorState const& __cordl_internal_get_anchorState() const;

  constexpr ::GlobalNamespace::__Item__AnchorState& __cordl_internal_get_anchorState();

  constexpr int32_t const& __cordl_internal_get_controlledItemCount() const;

  constexpr int32_t& __cordl_internal_get_controlledItemCount();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*& __cordl_internal_get_controlledItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*> const& __cordl_internal_get_controlledItems() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_customParameters() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_customParameters();

  constexpr ::GlobalNamespace::__Item__Type const& __cordl_internal_get_despawnZoneAcceptedType() const;

  constexpr ::GlobalNamespace::__Item__Type& __cordl_internal_get_despawnZoneAcceptedType();

  constexpr bool const& __cordl_internal_get_doHapticOnItemSpawn() const;

  constexpr bool& __cordl_internal_get_doHapticOnItemSpawn();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isActiveByDefault() const;

  constexpr bool& __cordl_internal_get_isActiveByDefault();

  constexpr int32_t const& __cordl_internal_get_itemCap() const;

  constexpr int32_t& __cordl_internal_get_itemCap();

  constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone> const& __cordl_internal_get_itemDespawnZone() const;

  constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone>& __cordl_internal_get_itemDespawnZone();

  constexpr ::StringW const& __cordl_internal_get_itemKey() const;

  constexpr ::StringW& __cordl_internal_get_itemKey();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*& __cordl_internal_get_itemsInSpawnAnchor();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*> const& __cordl_internal_get_itemsInSpawnAnchor() const;

  constexpr bool const& __cordl_internal_get_randomizeBetweenCustomParameters() const;

  constexpr bool& __cordl_internal_get_randomizeBetweenCustomParameters();

  constexpr float_t const& __cordl_internal_get_spawnRadius() const;

  constexpr float_t& __cordl_internal_get_spawnRadius();

  constexpr void __cordl_internal_set_anchorState(::GlobalNamespace::__Item__AnchorState value);

  constexpr void __cordl_internal_set_controlledItemCount(int32_t value);

  constexpr void __cordl_internal_set_controlledItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>* value);

  constexpr void __cordl_internal_set_customParameters(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_despawnZoneAcceptedType(::GlobalNamespace::__Item__Type value);

  constexpr void __cordl_internal_set_doHapticOnItemSpawn(bool value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isActiveByDefault(bool value);

  constexpr void __cordl_internal_set_itemCap(int32_t value);

  constexpr void __cordl_internal_set_itemDespawnZone(::UnityW<::GlobalNamespace::ItemDespawnZone> value);

  constexpr void __cordl_internal_set_itemKey(::StringW value);

  constexpr void __cordl_internal_set_itemsInSpawnAnchor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>* value);

  constexpr void __cordl_internal_set_randomizeBetweenCustomParameters(bool value);

  constexpr void __cordl_internal_set_spawnRadius(float_t value);

  /// @brief Method .ctor, addr 0x2ab1018, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndlessItemSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndlessItemSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndlessItemSpawner(EndlessItemSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndlessItemSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndlessItemSpawner(EndlessItemSpawner const&) = delete;

  /// @brief Field itemKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___itemKey;

  /// @brief Field despawnZoneAcceptedType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__Item__Type ___despawnZoneAcceptedType;

  /// @brief Field anchorState, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__Item__AnchorState ___anchorState;

  /// @brief Field customParameters, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___customParameters;

  /// @brief Field randomizeBetweenCustomParameters, offset: 0x40, size: 0x1, def value: None
  bool ___randomizeBetweenCustomParameters;

  /// @brief Field itemCap, offset: 0x44, size: 0x4, def value: None
  int32_t ___itemCap;

  /// @brief Field controlledItems, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>* ___controlledItems;

  /// @brief Field controlledItemCount, offset: 0x50, size: 0x4, def value: None
  int32_t ___controlledItemCount;

  /// @brief Field itemsInSpawnAnchor, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>* ___itemsInSpawnAnchor;

  /// @brief Field spawnRadius, offset: 0x60, size: 0x4, def value: None
  float_t ___spawnRadius;

  /// @brief Field isActiveByDefault, offset: 0x64, size: 0x1, def value: None
  bool ___isActiveByDefault;

  /// @brief Field isActive, offset: 0x65, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field itemDespawnZone, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ItemDespawnZone> ___itemDespawnZone;

  /// @brief Field doHapticOnItemSpawn, offset: 0x70, size: 0x1, def value: None
  bool ___doHapticOnItemSpawn;

  /// @brief Field itemSpawnHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t itemSpawnHapticDuration{ 0.1 };

  /// @brief Field itemSpawnHapticStrength offset 0xffffffff size 0x4
  static constexpr float_t itemSpawnHapticStrength{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EndlessItemSpawner, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___itemKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___despawnZoneAcceptedType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___anchorState) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___customParameters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___randomizeBetweenCustomParameters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___itemCap) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___controlledItems) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___controlledItemCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___itemsInSpawnAnchor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___spawnRadius) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___isActiveByDefault) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___isActive) == 0x65, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___itemDespawnZone) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EndlessItemSpawner, ___doHapticOnItemSpawn) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EndlessItemSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EndlessItemSpawner*, "", "EndlessItemSpawner");
