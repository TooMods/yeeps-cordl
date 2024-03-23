#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerListDisplay)
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class PlayerListItem;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerListDisplay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerListDisplay);
// Type: ::PlayerListDisplay
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerListDisplay*
class CORDL_TYPE PlayerListDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::UnityW<::UnityEngine::Transform> container;

  /// @brief Field isRegisteredForCallbacks, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForCallbacks, put = __cordl_internal_set_isRegisteredForCallbacks)) bool isRegisteredForCallbacks;

  /// @brief Field listItems, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_listItems,
                      put = __cordl_internal_set_listItems))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::PlayerListItem>>* listItems;

  /// @brief Field playerListItemPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerListItemPrefab, put = __cordl_internal_set_playerListItemPrefab))::UnityW<::UnityEngine::GameObject> playerListItemPrefab;

  /// @brief Method ClearList, addr 0x155071c, size 0x184, virtual false, abstract: false, final false
  inline void ClearList();

  /// @brief Method Deregister, addr 0x1550adc, size 0x2fc, virtual false, abstract: false, final false
  inline void Deregister();

  static inline ::GlobalNamespace::PlayerListDisplay* New_ctor();

  /// @brief Method OnDisable, addr 0x1550ab8, size 0x24, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1550254, size 0x20c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPlayerDataAdded, addr 0x15508a0, size 0x218, virtual false, abstract: false, final false
  inline void OnPlayerDataAdded(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerDataModified, addr 0x15512dc, size 0xa4, virtual false, abstract: false, final false
  inline void OnPlayerDataModified(::GlobalNamespace::PlayerData playerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields);

  /// @brief Method OnPlayerDataRemoved, addr 0x15511cc, size 0xa4, virtual false, abstract: false, final false
  inline void OnPlayerDataRemoved(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerSwitchedUserIDs, addr 0x1551380, size 0xc8, virtual false, abstract: false, final false
  inline void OnPlayerSwitchedUserIDs(::StringW oldUserID, ::StringW newUserID);

  /// @brief Method Register, addr 0x1550460, size 0x2bc, virtual false, abstract: false, final false
  inline void Register();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_container() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_container();

  constexpr bool const& __cordl_internal_get_isRegisteredForCallbacks() const;

  constexpr bool& __cordl_internal_get_isRegisteredForCallbacks();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::PlayerListItem>>*& __cordl_internal_get_listItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::PlayerListItem>>*> const& __cordl_internal_get_listItems() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerListItemPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerListItemPrefab();

  constexpr void __cordl_internal_set_container(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_isRegisteredForCallbacks(bool value);

  constexpr void __cordl_internal_set_listItems(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::PlayerListItem>>* value);

  constexpr void __cordl_internal_set_playerListItemPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x1551448, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerListDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerListDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerListDisplay(PlayerListDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerListDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerListDisplay(PlayerListDisplay const&) = delete;

  /// @brief Field playerListItemPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___playerListItemPrefab;

  /// @brief Field container, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___container;

  /// @brief Field listItems, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::PlayerListItem>>* ___listItems;

  /// @brief Field isRegisteredForCallbacks, offset: 0x30, size: 0x1, def value: None
  bool ___isRegisteredForCallbacks;

  /// @brief Field alwaysAllowKicking offset 0xffffffff size 0x1
  static constexpr bool alwaysAllowKicking{ true };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerListDisplay, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListDisplay, ___playerListItemPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListDisplay, ___container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListDisplay, ___listItems) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListDisplay, ___isRegisteredForCallbacks) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerListDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerListDisplay*, "", "PlayerListDisplay");
