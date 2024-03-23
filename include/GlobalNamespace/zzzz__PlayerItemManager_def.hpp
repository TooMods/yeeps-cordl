#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerItemManager)
namespace GlobalNamespace {
struct ItemTransformationData;
}
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerItemManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerItemManager);
// Type: ::PlayerItemManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerItemManager*
class CORDL_TYPE PlayerItemManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isMaster>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isMaster_k__BackingField, put = __cordl_internal_set__isMaster_k__BackingField)) bool _isMaster_k__BackingField;

  /// @brief Field <userID>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userID_k__BackingField, put = __cordl_internal_set__userID_k__BackingField))::StringW _userID_k__BackingField;

  /// @brief Field container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::UnityW<::UnityEngine::Transform> container;

  __declspec(property(get = get_isMaster, put = set_isMaster)) bool isMaster;

  /// @brief Field items, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Item>>* items;

  /// @brief Field itemsByItemKeyWithRestrictions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsByItemKeyWithRestrictions, put = __cordl_internal_set_itemsByItemKeyWithRestrictions))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*>* itemsByItemKeyWithRestrictions;

  __declspec(property(get = get_userID, put = set_userID))::StringW userID;

  /// @brief Method AddItem, addr 0x2aa7db4, size 0x388, virtual false, abstract: false, final false
  inline void AddItem(::GlobalNamespace::Item* item);

  /// @brief Method CalculateWorldStuffingCount, addr 0x2aaaa4c, size 0x544, virtual false, abstract: false, final false
  inline int32_t CalculateWorldStuffingCount();

  /// @brief Method DestroyAllItemsLocally, addr 0x2aa8a64, size 0x564, virtual false, abstract: false, final false
  inline void DestroyAllItemsLocally();

  /// @brief Method DestroyAllItemsNotCarriedByUser, addr 0x2aa8fc8, size 0xa5c, virtual false, abstract: false, final false
  inline void DestroyAllItemsNotCarriedByUser(::StringW userID);

  /// @brief Method GetDroppedContainer, addr 0x2aaaa44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetDroppedContainer();

  static inline ::GlobalNamespace::PlayerItemManager* New_ctor(::StringW userID, bool isMaster, ::UnityEngine::Transform* container);

  /// @brief Method OnItemTransfered, addr 0x2aaa42c, size 0x30, virtual false, abstract: false, final false
  inline void OnItemTransfered(::GlobalNamespace::Item* item);

  /// @brief Method OnReceiveCreateItem, addr 0x2aa9c78, size 0x3ac, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::Item> OnReceiveCreateItem(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::ItemTransformationData itemTransformationData,
                                                               ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method OnReceiveDeleteItem, addr 0x2aaa0e4, size 0x174, virtual false, abstract: false, final false
  inline bool OnReceiveDeleteItem(::StringW itemID);

  /// @brief Method OnReceiveItemTransformation, addr 0x2aaa45c, size 0x128, virtual false, abstract: false, final false
  inline void OnReceiveItemTransformation(::StringW itemID, ::GlobalNamespace::ItemTransformationData itemTransformationData);

  /// @brief Method OnReceiveSimpleCustomItemMessage, addr 0x2aaa93c, size 0x108, virtual false, abstract: false, final false
  inline void OnReceiveSimpleCustomItemMessage(::StringW itemID, ::StringW payload);

  /// @brief Method OnReceiveTransferItemOwnership, addr 0x2aaa2c0, size 0x16c, virtual false, abstract: false, final false
  inline void OnReceiveTransferItemOwnership(::StringW itemID, ::GlobalNamespace::PlayerItemManager* otherPlayerItemManager);

  /// @brief Method RemoveItem, addr 0x2aa8300, size 0x148, virtual false, abstract: false, final false
  inline void RemoveItem(::GlobalNamespace::Item* item);

  /// @brief Method SendAllItems, addr 0x2aaa584, size 0x3b8, virtual false, abstract: false, final false
  inline void SendAllItems();

  /// @brief Method SendCreateItem, addr 0x2aa9a24, size 0x194, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::Item> SendCreateItem(::StringW itemKey, ::GlobalNamespace::ItemTransformationData itemTransformationData,
                                                          ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method SendDeleteItem, addr 0x2aa3b50, size 0xe8, virtual false, abstract: false, final false
  inline bool SendDeleteItem(::StringW itemID);

  /// @brief Method SendItemTransformation, addr 0x2aa4ba0, size 0x120, virtual false, abstract: false, final false
  inline void SendItemTransformation(::StringW itemID, ::GlobalNamespace::ItemTransformationData itemTransformationData);

  /// @brief Method SendSimpleCustomItemMessage, addr 0x2aa6044, size 0x100, virtual false, abstract: false, final false
  inline void SendSimpleCustomItemMessage(::StringW itemID, ::StringW payload);

  /// @brief Method SendTransferItemOwnership, addr 0x2aa4020, size 0x1b0, virtual false, abstract: false, final false
  inline void SendTransferItemOwnership(::StringW itemID, ::StringW newUserID);

  /// @brief Method SetUserID, addr 0x2aa8538, size 0x52c, virtual false, abstract: false, final false
  inline void SetUserID(::StringW userID);

  /// @brief Method TryGetItem, addr 0x2aaaf90, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetItem(::StringW itemID, ByRef<::GlobalNamespace::Item*> item);

  constexpr bool const& __cordl_internal_get__isMaster_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isMaster_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__userID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__userID_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_container() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_container();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Item>>*& __cordl_internal_get_items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Item>>*> const& __cordl_internal_get_items() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*>*& __cordl_internal_get_itemsByItemKeyWithRestrictions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*>*> const&
  __cordl_internal_get_itemsByItemKeyWithRestrictions() const;

  constexpr void __cordl_internal_set__isMaster_k__BackingField(bool value);

  constexpr void __cordl_internal_set__userID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_container(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_items(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Item>>* value);

  constexpr void
  __cordl_internal_set_itemsByItemKeyWithRestrictions(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*>* value);

  /// @brief Method .ctor, addr 0x2aa8448, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::StringW userID, bool isMaster, ::UnityEngine::Transform* container);

  /// @brief Method get_isMaster, addr 0x2aa7da0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMaster();

  /// @brief Method get_userID, addr 0x2aa7d90, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userID();

  /// @brief Method set_isMaster, addr 0x2aa7da8, size 0xc, virtual false, abstract: false, final false
  inline void set_isMaster(bool value);

  /// @brief Method set_userID, addr 0x2aa7d98, size 0x8, virtual false, abstract: false, final false
  inline void set_userID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerItemManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerItemManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerItemManager(PlayerItemManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerItemManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerItemManager(PlayerItemManager const&) = delete;

  /// @brief Field <userID>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userID_k__BackingField;

  /// @brief Field <isMaster>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____isMaster_k__BackingField;

  /// @brief Field container, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___container;

  /// @brief Field items, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Item>>* ___items;

  /// @brief Field itemsByItemKeyWithRestrictions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*>* ___itemsByItemKeyWithRestrictions;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Player Items: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerItemManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerItemManager, ____userID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerItemManager, ____isMaster_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerItemManager, ___container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerItemManager, ___items) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerItemManager, ___itemsByItemKeyWithRestrictions) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerItemManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerItemManager*, "", "PlayerItemManager");
