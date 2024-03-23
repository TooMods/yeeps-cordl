#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ItemTransformationData_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ItemManager)
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
class Player;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
struct __ItemManager__ItemData;
}
namespace GlobalNamespace {
struct __ItemManager__ItemRestrictionDataRaw;
}
namespace GlobalNamespace {
class __ItemManager__OnPlayerItemManagerCreated;
}
namespace GlobalNamespace {
struct __ItemManager__QueuedItemCreation;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __Item__Type;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ItemManager;
}
namespace GlobalNamespace {
class __ItemManager__OnPlayerItemManagerCreated;
}
namespace GlobalNamespace {
struct __ItemManager__ItemData;
}
namespace GlobalNamespace {
struct __ItemManager__ItemRestrictionDataRaw;
}
namespace GlobalNamespace {
struct __ItemManager__QueuedItemCreation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ItemManager);
MARK_REF_PTR_T(::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated);
MARK_VAL_T(::GlobalNamespace::__ItemManager__ItemData);
MARK_VAL_T(::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw);
MARK_VAL_T(::GlobalNamespace::__ItemManager__QueuedItemCreation);
// Type: ::ItemData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ItemManager::ItemData
struct CORDL_TYPE __ItemManager__ItemData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ItemManager__ItemData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::GlobalNamespace::__Item__Type", modifiers: "", def_value: None },
  // CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }]
  constexpr __ItemManager__ItemData(::StringW key, ::GlobalNamespace::__Item__Type type, ::UnityW<::UnityEngine::GameObject> prefab) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::__Item__Type type;

  /// @brief Field prefab, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> prefab;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ItemManager__ItemData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ItemManager__ItemData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ItemManager__ItemData, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ItemManager__ItemData, prefab) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPlayerItemManagerCreated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ItemManager::OnPlayerItemManagerCreated*
class CORDL_TYPE __ItemManager__OnPlayerItemManagerCreated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2aacd90, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PlayerItemManager* playerItemManager, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2aacdb0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2aacd7c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::PlayerItemManager* playerItemManager);

  static inline ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2aacc50, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ItemManager__OnPlayerItemManagerCreated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ItemManager__OnPlayerItemManagerCreated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ItemManager__OnPlayerItemManagerCreated(__ItemManager__OnPlayerItemManagerCreated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ItemManager__OnPlayerItemManagerCreated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ItemManager__OnPlayerItemManagerCreated(__ItemManager__OnPlayerItemManagerCreated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ItemRestrictionDataRaw
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ItemManager::ItemRestrictionDataRaw
struct CORDL_TYPE __ItemManager__ItemRestrictionDataRaw {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ItemManager__ItemRestrictionDataRaw();

  // Ctor Parameters [CppParam { name: "itemKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maxCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ItemManager__ItemRestrictionDataRaw(::StringW itemKey, int32_t maxCount) noexcept;

  /// @brief Field itemKey, offset: 0x0, size: 0x8, def value: None
  ::StringW itemKey;

  /// @brief Field maxCount, offset: 0x8, size: 0x4, def value: None
  int32_t maxCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw, itemKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw, maxCount) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::QueuedItemCreation
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ItemManager::QueuedItemCreation
struct CORDL_TYPE __ItemManager__QueuedItemCreation {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ItemManager__QueuedItemCreation();

  // Ctor Parameters [CppParam { name: "itemID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "itemKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "itemTransformationData", ty: "::GlobalNamespace::ItemTransformationData", modifiers: "", def_value: None }, CppParam { name: "customParameters", ty:
  // "::GlobalNamespace::__Item__CustomParameters*", modifiers: "", def_value: None }]
  constexpr __ItemManager__QueuedItemCreation(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::ItemTransformationData itemTransformationData,
                                              ::GlobalNamespace::__Item__CustomParameters* customParameters) noexcept;

  /// @brief Field itemID, offset: 0x0, size: 0x8, def value: None
  ::StringW itemID;

  /// @brief Field itemKey, offset: 0x8, size: 0x8, def value: None
  ::StringW itemKey;

  /// @brief Field itemTransformationData, offset: 0x10, size: 0x48, def value: None
  ::GlobalNamespace::ItemTransformationData itemTransformationData;

  /// @brief Field customParameters, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__Item__CustomParameters* customParameters;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ItemManager__QueuedItemCreation, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ItemManager__QueuedItemCreation, itemID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ItemManager__QueuedItemCreation, itemKey) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ItemManager__QueuedItemCreation, itemTransformationData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ItemManager__QueuedItemCreation, customParameters) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ItemManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ItemManager*
class CORDL_TYPE ItemManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::ItemManager>> {
public:
  // Declarations
  using ItemData = ::GlobalNamespace::__ItemManager__ItemData;

  using ItemRestrictionDataRaw = ::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw;

  using OnPlayerItemManagerCreated = ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated;

  using QueuedItemCreation = ::GlobalNamespace::__ItemManager__QueuedItemCreation;

  /// @brief Field <masterPlayerItemManager>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__masterPlayerItemManager_k__BackingField,
                      put = __cordl_internal_set__masterPlayerItemManager_k__BackingField))::GlobalNamespace::PlayerItemManager* _masterPlayerItemManager_k__BackingField;

  __declspec(property(get = get_hasMasterPlayerItemManager)) bool hasMasterPlayerItemManager;

  /// @brief Field itemDatas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_itemDatas,
                      put = __cordl_internal_set_itemDatas))::ArrayW<::GlobalNamespace::__ItemManager__ItemData, ::Array<::GlobalNamespace::__ItemManager__ItemData>*> itemDatas;

  /// @brief Field itemDatasDictionary, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_itemDatasDictionary,
                             put = setStaticF_itemDatasDictionary))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ItemManager__ItemData>* itemDatasDictionary;

  /// @brief Field itemDespawnZones, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_itemDespawnZones, put = __cordl_internal_set_itemDespawnZones))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::__Item__Type, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ItemDespawnZone>>*>* itemDespawnZones;

  /// @brief Field itemRestrictionDatasRaw, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_itemRestrictionDatasRaw,
                      put = __cordl_internal_set_itemRestrictionDatasRaw))::ArrayW<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw,
                                                                                   ::Array<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw>*> itemRestrictionDatasRaw;

  /// @brief Field itemRestrictionMaxCounts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_itemRestrictionMaxCounts,
                             put = setStaticF_itemRestrictionMaxCounts))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* itemRestrictionMaxCounts;

  __declspec(property(get = get_masterPlayerItemManager, put = set_masterPlayerItemManager))::GlobalNamespace::PlayerItemManager* masterPlayerItemManager;

  /// @brief Field onMasterPlayerItemManagerCreatedCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onMasterPlayerItemManagerCreatedCallbacks,
                      put = __cordl_internal_set_onMasterPlayerItemManagerCreatedCallbacks))::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated* onMasterPlayerItemManagerCreatedCallbacks;

  /// @brief Field onPlayerItemManagerCreatedCallbacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerItemManagerCreatedCallbacks,
                      put = __cordl_internal_set_onPlayerItemManagerCreatedCallbacks))::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated* onPlayerItemManagerCreatedCallbacks;

  /// @brief Field playerItemManagers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_playerItemManagers,
                      put = __cordl_internal_set_playerItemManagers))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerItemManager*>* playerItemManagers;

  /// @brief Field queuedItemCreations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_queuedItemCreations, put = setStaticF_queuedItemCreations))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__ItemManager__QueuedItemCreation>*>* queuedItemCreations;

  /// @brief Method BuildItemDatasDictionary, addr 0x2aaaff8, size 0x184, virtual false, abstract: false, final false
  static inline void BuildItemDatasDictionary();

  /// @brief Method CalculateWorldStuffingCountOfAllItems, addr 0x2aac974, size 0x164, virtual false, abstract: false, final false
  inline int32_t CalculateWorldStuffingCountOfAllItems();

  /// @brief Method DeregisterItemDespawnZone, addr 0x2aa7684, size 0x110, virtual false, abstract: false, final false
  inline void DeregisterItemDespawnZone(::GlobalNamespace::ItemDespawnZone* itemDespawnZone);

  /// @brief Method ExpressQueuedItemCreationsForUser, addr 0x2aabbe8, size 0x298, virtual false, abstract: false, final false
  static inline void ExpressQueuedItemCreationsForUser(::StringW userID, ::GlobalNamespace::PlayerItemManager* playerItemManager);

  /// @brief Method GenerateNewItemID, addr 0x2aa9bb8, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW GenerateNewItemID();

  /// @brief Method GetOverlappingDespawnZone, addr 0x2aa4ebc, size 0x114, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ItemDespawnZone> GetOverlappingDespawnZone(::GlobalNamespace::__Item__Type itemType, ::UnityEngine::Vector3 position);

  static inline ::GlobalNamespace::ItemManager* New_ctor();

  /// @brief Method OnPlayerCreated, addr 0x2aab658, size 0x28c, virtual false, abstract: false, final false
  inline void OnPlayerCreated(::GlobalNamespace::Player* player);

  /// @brief Method OnPlayerDestroyed, addr 0x2aabe80, size 0xd0, virtual false, abstract: false, final false
  inline void OnPlayerDestroyed(::StringW userID);

  /// @brief Method OnPlayerSwitchedUserIDs, addr 0x2aac03c, size 0x124, virtual false, abstract: false, final false
  inline void OnPlayerSwitchedUserIDs(::StringW oldUserID, ::StringW newUserID);

  /// @brief Method OnRoomLoaded, addr 0x2aab8e4, size 0x4, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* room);

  /// @brief Method OnRoomUnloaded, addr 0x2aab8e8, size 0x300, virtual false, abstract: false, final false
  inline void OnRoomUnloaded();

  /// @brief Method QueueCreateItem, addr 0x2aac3a0, size 0x28c, virtual false, abstract: false, final false
  static inline void QueueCreateItem(::StringW userID, ::StringW itemID, ::StringW itemKey, ::GlobalNamespace::ItemTransformationData itemTransformationData,
                                     ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method RegisterItemDespawnZone, addr 0x2aa7424, size 0x180, virtual false, abstract: false, final false
  inline void RegisterItemDespawnZone(::GlobalNamespace::ItemDespawnZone* itemDespawnZone);

  /// @brief Method RemoveQueuedItem, addr 0x2aac62c, size 0x1bc, virtual false, abstract: false, final false
  static inline void RemoveQueuedItem(::StringW userID, ::StringW itemID);

  /// @brief Method RemoveQueuedItemsForUser, addr 0x2aabf50, size 0xec, virtual false, abstract: false, final false
  static inline void RemoveQueuedItemsForUser(::StringW userID);

  /// @brief Method Start, addr 0x2aab19c, size 0x4bc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TransferQueuedItemsForUser, addr 0x2aac160, size 0x240, virtual false, abstract: false, final false
  static inline void TransferQueuedItemsForUser(::StringW oldUserID, ::StringW newUserID);

  /// @brief Method TryCreateVisualOnlyDuplicate, addr 0x2aa7b8c, size 0x1fc, virtual false, abstract: false, final false
  inline bool TryCreateVisualOnlyDuplicate(::StringW itemKey, ::GlobalNamespace::__Item__CustomParameters* customParameters, ::UnityEngine::Transform* parent,
                                           ByRef<::UnityEngine::Vector3> boundingCenter, ByRef<float_t> boundingRadius, ByRef<::UnityEngine::GameObject*> duplicate);

  /// @brief Method TryGetItem, addr 0x2aac7e8, size 0x18c, virtual false, abstract: false, final false
  inline bool TryGetItem(::StringW itemID, ByRef<::GlobalNamespace::Item*> item);

  /// @brief Method TryGetItemData, addr 0x2aaa024, size 0xc0, virtual false, abstract: false, final false
  static inline bool TryGetItemData(::StringW itemKey, ByRef<::GlobalNamespace::__ItemManager__ItemData> itemData);

  /// @brief Method TryGetItemRestrictionMaxCount, addr 0x2aa813c, size 0x1c4, virtual false, abstract: false, final false
  static inline bool TryGetItemRestrictionMaxCount(::StringW itemKey, ByRef<int32_t> maxCount);

  /// @brief Method TryGetPlayerItemManager, addr 0x2aaa258, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetPlayerItemManager(::StringW userID, ByRef<::GlobalNamespace::PlayerItemManager*> playerItemManager);

  constexpr ::GlobalNamespace::PlayerItemManager*& __cordl_internal_get__masterPlayerItemManager_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerItemManager*> const& __cordl_internal_get__masterPlayerItemManager_k__BackingField() const;

  constexpr ::ArrayW<::GlobalNamespace::__ItemManager__ItemData, ::Array<::GlobalNamespace::__ItemManager__ItemData>*> const& __cordl_internal_get_itemDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__ItemManager__ItemData, ::Array<::GlobalNamespace::__ItemManager__ItemData>*>& __cordl_internal_get_itemDatas();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__Item__Type, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ItemDespawnZone>>*>*&
  __cordl_internal_get_itemDespawnZones();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__Item__Type, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ItemDespawnZone>>*>*> const&
  __cordl_internal_get_itemDespawnZones() const;

  constexpr ::ArrayW<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw, ::Array<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw>*> const&
  __cordl_internal_get_itemRestrictionDatasRaw() const;

  constexpr ::ArrayW<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw, ::Array<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw>*>& __cordl_internal_get_itemRestrictionDatasRaw();

  constexpr ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*& __cordl_internal_get_onMasterPlayerItemManagerCreatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*> const& __cordl_internal_get_onMasterPlayerItemManagerCreatedCallbacks() const;

  constexpr ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*& __cordl_internal_get_onPlayerItemManagerCreatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*> const& __cordl_internal_get_onPlayerItemManagerCreatedCallbacks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerItemManager*>*& __cordl_internal_get_playerItemManagers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerItemManager*>*> const& __cordl_internal_get_playerItemManagers() const;

  constexpr void __cordl_internal_set__masterPlayerItemManager_k__BackingField(::GlobalNamespace::PlayerItemManager* value);

  constexpr void __cordl_internal_set_itemDatas(::ArrayW<::GlobalNamespace::__ItemManager__ItemData, ::Array<::GlobalNamespace::__ItemManager__ItemData>*> value);

  constexpr void __cordl_internal_set_itemDespawnZones(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__Item__Type, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ItemDespawnZone>>*>* value);

  constexpr void
  __cordl_internal_set_itemRestrictionDatasRaw(::ArrayW<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw, ::Array<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw>*> value);

  constexpr void __cordl_internal_set_onMasterPlayerItemManagerCreatedCallbacks(::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated* value);

  constexpr void __cordl_internal_set_onPlayerItemManagerCreatedCallbacks(::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated* value);

  constexpr void __cordl_internal_set_playerItemManagers(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerItemManager*>* value);

  /// @brief Method .ctor, addr 0x2aacad8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ItemManager__ItemData>* getStaticF_itemDatasDictionary();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* getStaticF_itemRestrictionMaxCounts();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__ItemManager__QueuedItemCreation>*>*
  getStaticF_queuedItemCreations();

  /// @brief Method get_hasMasterPlayerItemManager, addr 0x2aab18c, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasMasterPlayerItemManager();

  /// @brief Method get_masterPlayerItemManager, addr 0x2aab17c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerItemManager* get_masterPlayerItemManager();

  static inline void setStaticF_itemDatasDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ItemManager__ItemData>* value);

  static inline void setStaticF_itemRestrictionMaxCounts(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  static inline void
  setStaticF_queuedItemCreations(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__ItemManager__QueuedItemCreation>*>* value);

  /// @brief Method set_masterPlayerItemManager, addr 0x2aab184, size 0x8, virtual false, abstract: false, final false
  inline void set_masterPlayerItemManager(::GlobalNamespace::PlayerItemManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ItemManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemManager(ItemManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemManager(ItemManager const&) = delete;

  /// @brief Field itemDatas, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ItemManager__ItemData, ::Array<::GlobalNamespace::__ItemManager__ItemData>*> ___itemDatas;

  /// @brief Field playerItemManagers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerItemManager*>* ___playerItemManagers;

  /// @brief Field <masterPlayerItemManager>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerItemManager* ____masterPlayerItemManager_k__BackingField;

  /// @brief Field onPlayerItemManagerCreatedCallbacks, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated* ___onPlayerItemManagerCreatedCallbacks;

  /// @brief Field onMasterPlayerItemManagerCreatedCallbacks, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated* ___onMasterPlayerItemManagerCreatedCallbacks;

  /// @brief Field itemDespawnZones, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__Item__Type, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ItemDespawnZone>>*>* ___itemDespawnZones;

  /// @brief Field itemRestrictionDatasRaw, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw, ::Array<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw>*> ___itemRestrictionDatasRaw;

  /// @brief Field VALID_CHARS offset 0xffffffff size 0x8
  static constexpr ::ConstString VALID_CHARS{ u"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-_/.,!@#$%^&*()[]{}" };

  /// @brief Field VALID_CHARS_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t VALID_CHARS_LENGTH{ static_cast<int32_t>(0x52) };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Items: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ItemManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemManager, ___itemDatas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemManager, ___playerItemManagers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemManager, ____masterPlayerItemManager_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemManager, ___onPlayerItemManagerCreatedCallbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemManager, ___onMasterPlayerItemManagerCreatedCallbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemManager, ___itemDespawnZones) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemManager, ___itemRestrictionDatasRaw) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ItemManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ItemManager*, "", "ItemManager");
NEED_NO_BOX(::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*, "", "ItemManager/OnPlayerItemManagerCreated");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ItemManager__ItemData, "", "ItemManager/ItemData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw, "", "ItemManager/ItemRestrictionDataRaw");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ItemManager__QueuedItemCreation, "", "ItemManager/QueuedItemCreation");
