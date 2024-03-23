#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ItemSpawner)
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
class __Item__CustomParameters;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ItemSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ItemSpawner);
// Type: ::ItemSpawner
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ItemSpawner*
class CORDL_TYPE ItemSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <masterPlayerItemManager>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__masterPlayerItemManager_k__BackingField,
                      put = __cordl_internal_set__masterPlayerItemManager_k__BackingField))::GlobalNamespace::PlayerItemManager* _masterPlayerItemManager_k__BackingField;

  __declspec(property(get = get_canSpawn)) bool canSpawn;

  __declspec(property(get = get_masterPlayerItemManager, put = set_masterPlayerItemManager))::GlobalNamespace::PlayerItemManager* masterPlayerItemManager;

  /// @brief Field queuedItemSpawns, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_queuedItemSpawns, put = __cordl_internal_set_queuedItemSpawns))::System::Collections::Generic::List_1<::StringW>* queuedItemSpawns;

  /// @brief Method CleanUpCallbacks, addr 0x2ab1358, size 0x124, virtual true, abstract: false, final false
  inline void CleanUpCallbacks();

  /// @brief Method ExecuteSpawnItem, addr 0x2ab1480, size 0xb8, virtual false, abstract: false, final false
  inline void ExecuteSpawnItem(::StringW itemKey);

  /// @brief Method GetSpawnCustomParameters, addr 0x2ab153c, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__Item__CustomParameters* GetSpawnCustomParameters();

  static inline ::GlobalNamespace::ItemSpawner* New_ctor();

  /// @brief Method OnDisable, addr 0x2ab134c, size 0xc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnItemSpawned, addr 0x2ab1538, size 0x4, virtual true, abstract: false, final false
  inline void OnItemSpawned(::GlobalNamespace::Item* item);

  /// @brief Method OnMasterPlayerItemManagerCreated, addr 0x2ab1204, size 0x148, virtual false, abstract: false, final false
  inline void OnMasterPlayerItemManagerCreated(::GlobalNamespace::PlayerItemManager* playerItemManager);

  /// @brief Method OnStart, addr 0x2ab147c, size 0x4, virtual true, abstract: false, final false
  inline void OnStart();

  /// @brief Method SpawnItem, addr 0x2ab0a34, size 0x110, virtual false, abstract: false, final false
  inline void SpawnItem(::StringW itemKey);

  /// @brief Method Start, addr 0x2ab10f4, size 0x110, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryGetSpawnTransformationData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryGetSpawnTransformationData(ByRef<::GlobalNamespace::ItemTransformationData> itemTransformationData);

  constexpr ::GlobalNamespace::PlayerItemManager*& __cordl_internal_get__masterPlayerItemManager_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerItemManager*> const& __cordl_internal_get__masterPlayerItemManager_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_queuedItemSpawns();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_queuedItemSpawns() const;

  constexpr void __cordl_internal_set__masterPlayerItemManager_k__BackingField(::GlobalNamespace::PlayerItemManager* value);

  constexpr void __cordl_internal_set_queuedItemSpawns(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x2ab10cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canSpawn, addr 0x2ab10e4, size 0x10, virtual false, abstract: false, final false
  inline bool get_canSpawn();

  /// @brief Method get_masterPlayerItemManager, addr 0x2ab10d4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerItemManager* get_masterPlayerItemManager();

  /// @brief Method set_masterPlayerItemManager, addr 0x2ab10dc, size 0x8, virtual false, abstract: false, final false
  inline void set_masterPlayerItemManager(::GlobalNamespace::PlayerItemManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ItemSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemSpawner(ItemSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemSpawner(ItemSpawner const&) = delete;

  /// @brief Field <masterPlayerItemManager>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerItemManager* ____masterPlayerItemManager_k__BackingField;

  /// @brief Field queuedItemSpawns, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___queuedItemSpawns;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ItemSpawner, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemSpawner, ____masterPlayerItemManager_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemSpawner, ___queuedItemSpawns) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ItemSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ItemSpawner*, "", "ItemSpawner");
