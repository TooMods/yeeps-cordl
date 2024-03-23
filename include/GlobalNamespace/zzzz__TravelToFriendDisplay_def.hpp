#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TravelToFriendDisplay)
namespace GlobalNamespace {
class TravelToFriendListItem;
}
namespace GlobalNamespace {
struct __PlayerStatusManager__PlayerStatus;
}
namespace GlobalNamespace {
class __TravelToFriendDisplay__OnAttemptToSelectDestination;
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
// Forward declare root types
namespace GlobalNamespace {
class TravelToFriendDisplay;
}
namespace GlobalNamespace {
class __TravelToFriendDisplay__OnAttemptToSelectDestination;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TravelToFriendDisplay);
MARK_REF_PTR_T(::GlobalNamespace::__TravelToFriendDisplay__OnAttemptToSelectDestination);
// Type: ::OnAttemptToSelectDestination
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TravelToFriendDisplay::OnAttemptToSelectDestination*
class CORDL_TYPE __TravelToFriendDisplay__OnAttemptToSelectDestination : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf26b3c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW accountID, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf26b5c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf26b28, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW accountID);

  static inline ::GlobalNamespace::__TravelToFriendDisplay__OnAttemptToSelectDestination* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf26a54, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TravelToFriendDisplay__OnAttemptToSelectDestination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TravelToFriendDisplay__OnAttemptToSelectDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TravelToFriendDisplay__OnAttemptToSelectDestination(__TravelToFriendDisplay__OnAttemptToSelectDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TravelToFriendDisplay__OnAttemptToSelectDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TravelToFriendDisplay__OnAttemptToSelectDestination(__TravelToFriendDisplay__OnAttemptToSelectDestination const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TravelToFriendDisplay__OnAttemptToSelectDestination, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TravelToFriendDisplay
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TravelToFriendDisplay*
class CORDL_TYPE TravelToFriendDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnAttemptToSelectDestination = ::GlobalNamespace::__TravelToFriendDisplay__OnAttemptToSelectDestination;

  /// @brief Field container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::UnityW<::UnityEngine::Transform> container;

  /// @brief Field isRegisteredForCallbacks, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForCallbacks, put = __cordl_internal_set_isRegisteredForCallbacks)) bool isRegisteredForCallbacks;

  /// @brief Field listItems, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_listItems,
                      put = __cordl_internal_set_listItems))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::TravelToFriendListItem>>* listItems;

  /// @brief Field onAttemptToSelectDestinationCallbacks, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onAttemptToSelectDestinationCallbacks,
                      put = __cordl_internal_set_onAttemptToSelectDestinationCallbacks))::GlobalNamespace::__TravelToFriendDisplay__OnAttemptToSelectDestination* onAttemptToSelectDestinationCallbacks;

  /// @brief Field selectedDestinationAccountID, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_selectedDestinationAccountID, put = __cordl_internal_set_selectedDestinationAccountID))::StringW selectedDestinationAccountID;

  /// @brief Field travelToFriendListItemPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_travelToFriendListItemPrefab,
                      put = __cordl_internal_set_travelToFriendListItemPrefab))::UnityW<::UnityEngine::GameObject> travelToFriendListItemPrefab;

  /// @brief Method ClearList, addr 0xf258f4, size 0x184, virtual false, abstract: false, final false
  inline void ClearList();

  /// @brief Method CreateListItem, addr 0xf25a78, size 0x138, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::TravelToFriendListItem> CreateListItem(::StringW accountID);

  /// @brief Method Deregister, addr 0xf26000, size 0x210, virtual false, abstract: false, final false
  inline void Deregister();

  static inline ::GlobalNamespace::TravelToFriendDisplay* New_ctor();

  /// @brief Method OnBanned, addr 0xf2696c, size 0x6c, virtual false, abstract: false, final false
  inline void OnBanned();

  /// @brief Method OnDisable, addr 0xf25fdc, size 0x24, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0xf25614, size 0xcc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnListItemSelected, addr 0xf2679c, size 0x1d0, virtual false, abstract: false, final false
  inline void OnListItemSelected(::StringW accountID, ::StringW displayName);

  /// @brief Method OnOnlinePlayerStatusesUpdated, addr 0xf25bb0, size 0x2b4, virtual false, abstract: false, final false
  inline void OnOnlinePlayerStatusesUpdated(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* onlinePlayerStatuses);

  /// @brief Method OnPlayerBecameOffline, addr 0xf26408, size 0xa4, virtual false, abstract: false, final false
  inline void OnPlayerBecameOffline(::StringW accountID);

  /// @brief Method OnPlayerBecameOnline, addr 0xf2627c, size 0xe0, virtual false, abstract: false, final false
  inline void OnPlayerBecameOnline(::StringW accountID, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus initialStatus);

  /// @brief Method RefreshListItem, addr 0xf263d0, size 0x38, virtual false, abstract: false, final false
  inline void RefreshListItem(::GlobalNamespace::TravelToFriendListItem* listItem, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus playerStatus);

  /// @brief Method Register, addr 0xf256e0, size 0x214, virtual false, abstract: false, final false
  inline void Register();

  /// @brief Method SetSelectedDestination, addr 0xf25e64, size 0x178, virtual false, abstract: false, final false
  inline void SetSelectedDestination(::StringW accountID);

  /// @brief Method ShouldShowPlayer, addr 0xf2635c, size 0x74, virtual false, abstract: false, final false
  inline bool ShouldShowPlayer(::GlobalNamespace::__PlayerStatusManager__PlayerStatus playerStatus);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_container() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_container();

  constexpr bool const& __cordl_internal_get_isRegisteredForCallbacks() const;

  constexpr bool& __cordl_internal_get_isRegisteredForCallbacks();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::TravelToFriendListItem>>*& __cordl_internal_get_listItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::TravelToFriendListItem>>*> const&
  __cordl_internal_get_listItems() const;

  constexpr ::GlobalNamespace::__TravelToFriendDisplay__OnAttemptToSelectDestination*& __cordl_internal_get_onAttemptToSelectDestinationCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TravelToFriendDisplay__OnAttemptToSelectDestination*> const& __cordl_internal_get_onAttemptToSelectDestinationCallbacks() const;

  constexpr ::StringW const& __cordl_internal_get_selectedDestinationAccountID() const;

  constexpr ::StringW& __cordl_internal_get_selectedDestinationAccountID();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_travelToFriendListItemPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_travelToFriendListItemPrefab();

  constexpr void __cordl_internal_set_container(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_isRegisteredForCallbacks(bool value);

  constexpr void __cordl_internal_set_listItems(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::TravelToFriendListItem>>* value);

  constexpr void __cordl_internal_set_onAttemptToSelectDestinationCallbacks(::GlobalNamespace::__TravelToFriendDisplay__OnAttemptToSelectDestination* value);

  constexpr void __cordl_internal_set_selectedDestinationAccountID(::StringW value);

  constexpr void __cordl_internal_set_travelToFriendListItemPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0xf269d8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TravelToFriendDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TravelToFriendDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TravelToFriendDisplay(TravelToFriendDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TravelToFriendDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TravelToFriendDisplay(TravelToFriendDisplay const&) = delete;

  /// @brief Field travelToFriendListItemPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___travelToFriendListItemPrefab;

  /// @brief Field container, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___container;

  /// @brief Field listItems, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::TravelToFriendListItem>>* ___listItems;

  /// @brief Field selectedDestinationAccountID, offset: 0x30, size: 0x8, def value: None
  ::StringW ___selectedDestinationAccountID;

  /// @brief Field isRegisteredForCallbacks, offset: 0x38, size: 0x1, def value: None
  bool ___isRegisteredForCallbacks;

  /// @brief Field onAttemptToSelectDestinationCallbacks, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__TravelToFriendDisplay__OnAttemptToSelectDestination* ___onAttemptToSelectDestinationCallbacks;

  /// @brief Field autoSelectLocalPlayerIfDestinationBecomesInvalid offset 0xffffffff size 0x1
  static constexpr bool autoSelectLocalPlayerIfDestinationBecomesInvalid{ false };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TravelToFriendDisplay, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendDisplay, ___travelToFriendListItemPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendDisplay, ___container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendDisplay, ___listItems) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendDisplay, ___selectedDestinationAccountID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendDisplay, ___isRegisteredForCallbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TravelToFriendDisplay, ___onAttemptToSelectDestinationCallbacks) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TravelToFriendDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TravelToFriendDisplay*, "", "TravelToFriendDisplay");
NEED_NO_BOX(::GlobalNamespace::__TravelToFriendDisplay__OnAttemptToSelectDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TravelToFriendDisplay__OnAttemptToSelectDestination*, "", "TravelToFriendDisplay/OnAttemptToSelectDestination");
