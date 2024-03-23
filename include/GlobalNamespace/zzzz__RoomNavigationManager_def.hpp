#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RoomNavigation_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RoomNavigationManager)
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class RoomMap;
}
namespace GlobalNamespace {
class RoomNavigation;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
struct __PlayerStatusManager__PlayerStatus;
}
namespace GlobalNamespace {
struct __RoomNavigation__DestinationType;
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
// Forward declare root types
namespace GlobalNamespace {
class RoomNavigationManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomNavigationManager);
// Type: ::RoomNavigationManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomNavigationManager*
class CORDL_TYPE RoomNavigationManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::RoomNavigationManager>> {
public:
  // Declarations
  /// @brief Field activeNavigations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_activeNavigations, put = setStaticF_activeNavigations))::System::Collections::Generic::List_1<::GlobalNamespace::RoomNavigation*>* activeNavigations;

  /// @brief Field curRoomMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_curRoomMap, put = setStaticF_curRoomMap))::GlobalNamespace::RoomMap* curRoomMap;

  /// @brief Field destinationTypeReference, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_destinationTypeReference,
                      put = __cordl_internal_set_destinationTypeReference))::GlobalNamespace::__RoomNavigation__DestinationType destinationTypeReference;

  /// @brief Field friendNavigations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_friendNavigations,
                             put = setStaticF_friendNavigations))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomNavigation*>* friendNavigations;

  /// @brief Field hasInitializedFriendNavigations, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasInitializedFriendNavigations, put = setStaticF_hasInitializedFriendNavigations)) bool hasInitializedFriendNavigations;

  /// @brief Field metPlayerAccountIDs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_metPlayerAccountIDs, put = setStaticF_metPlayerAccountIDs))::System::Collections::Generic::List_1<::StringW>* metPlayerAccountIDs;

  /// @brief Field navigationSignPrefabsByType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_navigationSignPrefabsByType,
                      put = __cordl_internal_set_navigationSignPrefabsByType))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> navigationSignPrefabsByType;

  /// @brief Field navigationToOfficialRooms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_navigationToOfficialRooms, put = setStaticF_navigationToOfficialRooms))::GlobalNamespace::RoomNavigation* navigationToOfficialRooms;

  /// @brief Field navigationToTransition, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_navigationToTransition, put = setStaticF_navigationToTransition))::GlobalNamespace::RoomNavigation* navigationToTransition;

  /// @brief Field roomNavigationDisplayPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_roomNavigationDisplayPrefab, put = __cordl_internal_set_roomNavigationDisplayPrefab))::UnityW<::UnityEngine::GameObject> roomNavigationDisplayPrefab;

  /// @brief Method GetNavigationSignPrefab, addr 0x175cd50, size 0x30, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetNavigationSignPrefab(::GlobalNamespace::__RoomNavigation__DestinationType destinationType);

  /// @brief Method InitializeFriendNavigations, addr 0x175e72c, size 0x5d8, virtual false, abstract: false, final false
  static inline void InitializeFriendNavigations();

  static inline ::GlobalNamespace::RoomNavigationManager* New_ctor();

  /// @brief Method OnBanned, addr 0x1761094, size 0x4c, virtual false, abstract: false, final false
  inline void OnBanned();

  /// @brief Method OnFriendsListUpdated, addr 0x175ed04, size 0x79c, virtual false, abstract: false, final false
  static inline void OnFriendsListUpdated(::System::Collections::Generic::List_1<::StringW>* friendAccountIDs);

  /// @brief Method OnNavigationCanceled, addr 0x175e030, size 0xd0, virtual false, abstract: false, final false
  inline void OnNavigationCanceled(::GlobalNamespace::RoomNavigation* navigation);

  /// @brief Method OnOnlinePlayerStatusesUpdated, addr 0x176014c, size 0x464, virtual false, abstract: false, final false
  static inline void OnOnlinePlayerStatusesUpdated(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* playerStatuses);

  /// @brief Method OnPlayerBecameOffline, addr 0x1760068, size 0xe4, virtual false, abstract: false, final false
  static inline void OnPlayerBecameOffline(::StringW accountID);

  /// @brief Method OnPlayerBecameOnline, addr 0x175f6d0, size 0x1f4, virtual false, abstract: false, final false
  static inline void OnPlayerBecameOnline(::StringW accountID, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus initialStatus);

  /// @brief Method OnPlayerDataAdded, addr 0x175f4a0, size 0x230, virtual false, abstract: false, final false
  static inline void OnPlayerDataAdded(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnRoomLoaded, addr 0x175e3dc, size 0x350, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* room);

  /// @brief Method RemoveActiveNavigationFromAll, addr 0x1760f5c, size 0x138, virtual false, abstract: false, final false
  inline void RemoveActiveNavigationFromAll(::GlobalNamespace::RoomNavigation* navigation);

  /// @brief Method SetRoomMap, addr 0x1760d24, size 0x238, virtual false, abstract: false, final false
  inline void SetRoomMap(::GlobalNamespace::RoomMap* roomMap);

  /// @brief Method ShouldHaveFriendNavigation, addr 0x175f8c4, size 0x12c, virtual false, abstract: false, final false
  static inline bool ShouldHaveFriendNavigation(::GlobalNamespace::__PlayerStatusManager__PlayerStatus friendStatus, ::StringW curRoomMapKey);

  /// @brief Method ShouldHaveNavigationToOfficialRooms, addr 0x1760c08, size 0x11c, virtual false, abstract: false, final false
  static inline bool ShouldHaveNavigationToOfficialRooms();

  /// @brief Method ShouldHaveNavigationToTransition, addr 0x1760990, size 0x60, virtual false, abstract: false, final false
  static inline bool ShouldHaveNavigationToTransition();

  /// @brief Method Start, addr 0x175e20c, size 0x1d0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryBeginNavigation, addr 0x175fbac, size 0x4bc, virtual false, abstract: false, final false
  static inline bool TryBeginNavigation(::StringW roomMapKey, ::StringW roomKey, ::StringW destinationName, ::GlobalNamespace::__RoomNavigation__DestinationType destinationType,
                                        ::StringW destinationID, bool persistant, ByRef<::GlobalNamespace::RoomNavigation*> navigation);

  /// @brief Method TryCreateNavigationToOfficialRooms, addr 0x17609f0, size 0x218, virtual false, abstract: false, final false
  static inline bool TryCreateNavigationToOfficialRooms(ByRef<::GlobalNamespace::RoomNavigation*> navigation);

  /// @brief Method TryCreateNavigationToTransition, addr 0x1760694, size 0x2fc, virtual false, abstract: false, final false
  static inline bool TryCreateNavigationToTransition(ByRef<::GlobalNamespace::RoomNavigation*> navigation);

  /// @brief Method UpdateAllFriendNavigations, addr 0x17605b0, size 0xe4, virtual false, abstract: false, final false
  static inline void UpdateAllFriendNavigations();

  /// @brief Method UpdateFriendNavigation, addr 0x175f9f0, size 0x1bc, virtual false, abstract: false, final false
  static inline void UpdateFriendNavigation(::GlobalNamespace::__PlayerStatusManager__PlayerStatus playerStatus, ::GlobalNamespace::RoomNavigation* navigation);

  constexpr ::GlobalNamespace::__RoomNavigation__DestinationType const& __cordl_internal_get_destinationTypeReference() const;

  constexpr ::GlobalNamespace::__RoomNavigation__DestinationType& __cordl_internal_get_destinationTypeReference();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_navigationSignPrefabsByType() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_navigationSignPrefabsByType();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_roomNavigationDisplayPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_roomNavigationDisplayPrefab();

  constexpr void __cordl_internal_set_destinationTypeReference(::GlobalNamespace::__RoomNavigation__DestinationType value);

  constexpr void __cordl_internal_set_navigationSignPrefabsByType(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_roomNavigationDisplayPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x17610e0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::RoomNavigation*>* getStaticF_activeNavigations();

  static inline ::GlobalNamespace::RoomMap* getStaticF_curRoomMap();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomNavigation*>* getStaticF_friendNavigations();

  static inline bool getStaticF_hasInitializedFriendNavigations();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_metPlayerAccountIDs();

  static inline ::GlobalNamespace::RoomNavigation* getStaticF_navigationToOfficialRooms();

  static inline ::GlobalNamespace::RoomNavigation* getStaticF_navigationToTransition();

  static inline void setStaticF_activeNavigations(::System::Collections::Generic::List_1<::GlobalNamespace::RoomNavigation*>* value);

  static inline void setStaticF_curRoomMap(::GlobalNamespace::RoomMap* value);

  static inline void setStaticF_friendNavigations(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomNavigation*>* value);

  static inline void setStaticF_hasInitializedFriendNavigations(bool value);

  static inline void setStaticF_metPlayerAccountIDs(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_navigationToOfficialRooms(::GlobalNamespace::RoomNavigation* value);

  static inline void setStaticF_navigationToTransition(::GlobalNamespace::RoomNavigation* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomNavigationManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomNavigationManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomNavigationManager(RoomNavigationManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomNavigationManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomNavigationManager(RoomNavigationManager const&) = delete;

  /// @brief Field roomNavigationDisplayPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___roomNavigationDisplayPrefab;

  /// @brief Field destinationTypeReference, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__RoomNavigation__DestinationType ___destinationTypeReference;

  /// @brief Field navigationSignPrefabsByType, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___navigationSignPrefabsByType;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Room Navigation: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomNavigationManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationManager, ___roomNavigationDisplayPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationManager, ___destinationTypeReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigationManager, ___navigationSignPrefabsByType) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomNavigationManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomNavigationManager*, "", "RoomNavigationManager");
