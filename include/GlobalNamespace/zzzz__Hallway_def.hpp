#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Hallway)
namespace GlobalNamespace {
class HallwayHalf;
}
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
class MobileTravelAnchor;
}
namespace GlobalNamespace {
class PrivateRoomEntranceConsole;
}
namespace GlobalNamespace {
class PrivateRoomsEntranceBlocker;
}
namespace GlobalNamespace {
class PrivateRoomsExpansionBlocker;
}
namespace GlobalNamespace {
class PublicWorldEntranceConsole;
}
namespace GlobalNamespace {
class RoomData;
}
namespace GlobalNamespace {
class RoomLobby;
}
namespace GlobalNamespace {
class RoomNavigationDisplay;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
class Theme;
}
namespace GlobalNamespace {
class TransitionPortal;
}
namespace GlobalNamespace {
class __Hallway__OnPlayerWithinHallwayChanged;
}
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
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
class Hallway;
}
namespace GlobalNamespace {
class __Hallway__OnPlayerWithinHallwayChanged;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Hallway);
MARK_REF_PTR_T(::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged);
// Type: ::OnPlayerWithinHallwayChanged
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Hallway::OnPlayerWithinHallwayChanged*
class CORDL_TYPE __Hallway__OnPlayerWithinHallwayChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x175bb40, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool isPlayerWithinHallway, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x175bbc8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x175bb28, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool isPlayerWithinHallway);

  static inline ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x175ba64, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hallway__OnPlayerWithinHallwayChanged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Hallway__OnPlayerWithinHallwayChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hallway__OnPlayerWithinHallwayChanged(__Hallway__OnPlayerWithinHallwayChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hallway__OnPlayerWithinHallwayChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hallway__OnPlayerWithinHallwayChanged(__Hallway__OnPlayerWithinHallwayChanged const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Hallway
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 305, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Hallway*
class CORDL_TYPE Hallway : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnPlayerWithinHallwayChanged = ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged;

  /// @brief Field <isPlayerWithinHallway>k__BackingField, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get__isPlayerWithinHallway_k__BackingField,
                      put = __cordl_internal_set__isPlayerWithinHallway_k__BackingField)) bool _isPlayerWithinHallway_k__BackingField;

  /// @brief Field attachedLobby, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_attachedLobby, put = __cordl_internal_set_attachedLobby))::UnityW<::GlobalNamespace::RoomLobby> attachedLobby;

  /// @brief Field closeHalf, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_closeHalf, put = __cordl_internal_set_closeHalf))::UnityW<::GlobalNamespace::HallwayHalf> closeHalf;

  /// @brief Field curLayer, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_curLayer, put = __cordl_internal_set_curLayer)) int32_t curLayer;

  /// @brief Field direction, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_direction, put = __cordl_internal_set_direction))::GlobalNamespace::__RoomManager__TravelDirection direction;

  /// @brief Field doTransitionTrigger, offset 0xb4, size 0x1
  __declspec(property(get = __cordl_internal_get_doTransitionTrigger, put = __cordl_internal_set_doTransitionTrigger)) bool doTransitionTrigger;

  /// @brief Field entraceAnchor, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_entraceAnchor, put = __cordl_internal_set_entraceAnchor))::UnityW<::UnityEngine::Transform> entraceAnchor;

  /// @brief Field entranceBlocker, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_entranceBlocker, put = __cordl_internal_set_entranceBlocker))::UnityW<::UnityEngine::Transform> entranceBlocker;

  /// @brief Field entranceHalf, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_entranceHalf, put = __cordl_internal_set_entranceHalf))::UnityW<::GlobalNamespace::HallwayHalf> entranceHalf;

  /// @brief Field entranceHalfContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_entranceHalfContainer, put = __cordl_internal_set_entranceHalfContainer))::UnityW<::UnityEngine::Transform> entranceHalfContainer;

  /// @brief Field exitAnchor, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_exitAnchor, put = __cordl_internal_set_exitAnchor))::UnityW<::UnityEngine::Transform> exitAnchor;

  /// @brief Field exitBlocker, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_exitBlocker, put = __cordl_internal_set_exitBlocker))::UnityW<::UnityEngine::Transform> exitBlocker;

  /// @brief Field exitHalf, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_exitHalf, put = __cordl_internal_set_exitHalf))::UnityW<::GlobalNamespace::HallwayHalf> exitHalf;

  /// @brief Field exitHalfContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_exitHalfContainer, put = __cordl_internal_set_exitHalfContainer))::UnityW<::UnityEngine::Transform> exitHalfContainer;

  /// @brief Field farHalf, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_farHalf, put = __cordl_internal_set_farHalf))::UnityW<::GlobalNamespace::HallwayHalf> farHalf;

  /// @brief Field hasDoneForcedUpdate, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get_hasDoneForcedUpdate, put = __cordl_internal_set_hasDoneForcedUpdate)) bool hasDoneForcedUpdate;

  /// @brief Field isInTransitionTrigger, offset 0xbc, size 0x1
  __declspec(property(get = __cordl_internal_get_isInTransitionTrigger, put = __cordl_internal_set_isInTransitionTrigger)) bool isInTransitionTrigger;

  /// @brief Field isLoadingNextRoom, offset 0x130, size 0x1
  __declspec(property(get = __cordl_internal_get_isLoadingNextRoom, put = __cordl_internal_set_isLoadingNextRoom)) bool isLoadingNextRoom;

  __declspec(property(get = get_isPlayerWithinHallway, put = set_isPlayerWithinHallway)) bool isPlayerWithinHallway;

  /// @brief Field layerSwitchTriggerThreshold, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_layerSwitchTriggerThreshold, put = __cordl_internal_set_layerSwitchTriggerThreshold)) float_t layerSwitchTriggerThreshold;

  /// @brief Field masterPlayer, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> masterPlayer;

  /// @brief Field nextTriggerCheckTime, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_nextTriggerCheckTime, put = __cordl_internal_set_nextTriggerCheckTime)) float_t nextTriggerCheckTime;

  /// @brief Field nextTriggerValidTime, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_nextTriggerValidTime, put = __cordl_internal_set_nextTriggerValidTime)) float_t nextTriggerValidTime;

  /// @brief Field onPlayerWithinHallwayChangedCallbacks, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerWithinHallwayChangedCallbacks,
                      put = __cordl_internal_set_onPlayerWithinHallwayChangedCallbacks))::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged* onPlayerWithinHallwayChangedCallbacks;

  /// @brief Field privateRoomEntranceConsole, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_privateRoomEntranceConsole,
                      put = __cordl_internal_set_privateRoomEntranceConsole))::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> privateRoomEntranceConsole;

  /// @brief Field privateRoomsEntranceBlocker, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_privateRoomsEntranceBlocker,
                      put = __cordl_internal_set_privateRoomsEntranceBlocker))::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> privateRoomsEntranceBlocker;

  /// @brief Field privateRoomsExpansionBlocker, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_privateRoomsExpansionBlocker,
                      put = __cordl_internal_set_privateRoomsExpansionBlocker))::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker> privateRoomsExpansionBlocker;

  /// @brief Field publicWorldEntranceConsole, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_publicWorldEntranceConsole,
                      put = __cordl_internal_set_publicWorldEntranceConsole))::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> publicWorldEntranceConsole;

  /// @brief Field roomNavigationDisplays, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_roomNavigationDisplays,
                      put = __cordl_internal_set_roomNavigationDisplays))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RoomNavigationDisplay>>* roomNavigationDisplays;

  /// @brief Field sqrDistToPlayer, offset 0x12c, size 0x4
  __declspec(property(get = __cordl_internal_get_sqrDistToPlayer, put = __cordl_internal_set_sqrDistToPlayer)) float_t sqrDistToPlayer;

  /// @brief Field transitionPortal, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionPortal, put = __cordl_internal_set_transitionPortal))::UnityW<::GlobalNamespace::TransitionPortal> transitionPortal;

  /// @brief Field transitionTriggerAnchor, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionTriggerAnchor, put = __cordl_internal_set_transitionTriggerAnchor))::UnityW<::UnityEngine::Transform> transitionTriggerAnchor;

  /// @brief Field transitionTriggerEnterHalfExtents, offset 0x94, size 0xc
  __declspec(property(get = __cordl_internal_get_transitionTriggerEnterHalfExtents,
                      put = __cordl_internal_set_transitionTriggerEnterHalfExtents))::UnityEngine::Vector3 transitionTriggerEnterHalfExtents;

  /// @brief Field transitionTriggerEnterLocalCenter, offset 0x88, size 0xc
  __declspec(property(get = __cordl_internal_get_transitionTriggerEnterLocalCenter,
                      put = __cordl_internal_set_transitionTriggerEnterLocalCenter))::UnityEngine::Vector3 transitionTriggerEnterLocalCenter;

  /// @brief Field transitionTriggerExitHalfExtents, offset 0x7c, size 0xc
  __declspec(property(get = __cordl_internal_get_transitionTriggerExitHalfExtents, put = __cordl_internal_set_transitionTriggerExitHalfExtents))::UnityEngine::Vector3 transitionTriggerExitHalfExtents;

  /// @brief Field transitionTriggerExitLocalCenter, offset 0x70, size 0xc
  __declspec(property(get = __cordl_internal_get_transitionTriggerExitLocalCenter, put = __cordl_internal_set_transitionTriggerExitLocalCenter))::UnityEngine::Vector3 transitionTriggerExitLocalCenter;

  /// @brief Field transitionTriggerPosition, offset 0xa8, size 0xc
  __declspec(property(get = __cordl_internal_get_transitionTriggerPosition, put = __cordl_internal_set_transitionTriggerPosition))::UnityEngine::Vector3 transitionTriggerPosition;

  /// @brief Field triggerStartTime, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_triggerStartTime, put = __cordl_internal_set_triggerStartTime)) float_t triggerStartTime;

  /// @brief Field voidObject, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_voidObject, put = __cordl_internal_set_voidObject))::UnityW<::UnityEngine::GameObject> voidObject;

  /// @brief Method AttachToRoom, addr 0x17595a0, size 0xd2c, virtual false, abstract: false, final false
  inline void AttachToRoom(::GlobalNamespace::Room* room, ::GlobalNamespace::Theme* theme, ::GlobalNamespace::RoomLobby* attachedLobby, ::GlobalNamespace::__RoomManager__TravelDirection direction);

  /// @brief Method DeregisterRoomNavigationDisplay, addr 0x175b954, size 0x60, virtual false, abstract: false, final false
  inline void DeregisterRoomNavigationDisplay(::GlobalNamespace::RoomNavigationDisplay* roomNavigationDisplay);

  /// @brief Method DestroySelfImmediate, addr 0x175a3dc, size 0x80, virtual false, abstract: false, final false
  inline void DestroySelfImmediate();

  /// @brief Method DoInsideUpdate, addr 0x175a590, size 0x2e0, virtual false, abstract: false, final false
  inline void DoInsideUpdate(bool forceUpdate);

  /// @brief Method DoLayerTriggerUpdate, addr 0x175a870, size 0x130, virtual false, abstract: false, final false
  inline void DoLayerTriggerUpdate();

  /// @brief Method DoTransitionTrigger, addr 0x175abdc, size 0x16c, virtual false, abstract: false, final false
  inline void DoTransitionTrigger();

  /// @brief Method GetMobileHallwayTransitionAnchor, addr 0x17553d8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MobileTravelAnchor> GetMobileHallwayTransitionAnchor();

  /// @brief Method GetMobileTravelAnchors, addr 0x175b5a0, size 0x28c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* GetMobileTravelAnchors();

  /// @brief Method GetOffsetFromTravelingAnchor, addr 0x175b3fc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetOffsetFromTravelingAnchor(bool isForward, ::UnityEngine::Vector3 position);

  /// @brief Method GetSpawnPosition, addr 0x175b438, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetSpawnPosition();

  /// @brief Method GetTravelAnchorPosition, addr 0x175b3d4, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetTravelAnchorPosition(bool isForward);

  /// @brief Method GetWaypointPosition, addr 0x175afb4, size 0x19c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetWaypointPosition(int32_t index, int32_t waypointCount);

  /// @brief Method IsWithinTransitionTrigger, addr 0x175aa38, size 0xf0, virtual false, abstract: false, final false
  inline bool IsWithinTransitionTrigger(::UnityEngine::Vector3 playerHeadPosition, bool useEnterTrigger);

  /// @brief Method LateUpdate, addr 0x175a45c, size 0x134, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::Hallway* New_ctor();

  /// @brief Method OnGoToRoomFailure, addr 0x175b3cc, size 0x8, virtual false, abstract: false, final false
  inline void OnGoToRoomFailure(::StringW errType, bool isFatal);

  /// @brief Method OnGoToRoomSuccess, addr 0x175b3c4, size 0x8, virtual false, abstract: false, final false
  inline void OnGoToRoomSuccess(::GlobalNamespace::RoomData* roomData);

  /// @brief Method RegisterRoomNavigationDisplay, addr 0x175b82c, size 0x128, virtual false, abstract: false, final false
  inline void RegisterRoomNavigationDisplay(::GlobalNamespace::RoomNavigationDisplay* roomNavigationDisplay, bool moveInstant);

  /// @brief Method SetIsInTransitionTrigger, addr 0x175ab28, size 0x48, virtual false, abstract: false, final false
  inline void SetIsInTransitionTrigger(bool newIsInTrigger);

  /// @brief Method SetIsLoadingNextRoom, addr 0x175b318, size 0xac, virtual false, abstract: false, final false
  inline void SetIsLoadingNextRoom(bool newIsLoadingNextRoom);

  /// @brief Method SetIsPlayerWithinHallway, addr 0x175ad48, size 0x22c, virtual false, abstract: false, final false
  inline void SetIsPlayerWithinHallway(bool newIsPlayerWithinHallway);

  /// @brief Method SetLayer, addr 0x175b1e8, size 0xc0, virtual false, abstract: false, final false
  inline void SetLayer(int32_t newLayer);

  constexpr bool const& __cordl_internal_get__isPlayerWithinHallway_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isPlayerWithinHallway_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::RoomLobby> const& __cordl_internal_get_attachedLobby() const;

  constexpr ::UnityW<::GlobalNamespace::RoomLobby>& __cordl_internal_get_attachedLobby();

  constexpr ::UnityW<::GlobalNamespace::HallwayHalf> const& __cordl_internal_get_closeHalf() const;

  constexpr ::UnityW<::GlobalNamespace::HallwayHalf>& __cordl_internal_get_closeHalf();

  constexpr int32_t const& __cordl_internal_get_curLayer() const;

  constexpr int32_t& __cordl_internal_get_curLayer();

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& __cordl_internal_get_direction() const;

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection& __cordl_internal_get_direction();

  constexpr bool const& __cordl_internal_get_doTransitionTrigger() const;

  constexpr bool& __cordl_internal_get_doTransitionTrigger();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_entraceAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_entraceAnchor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_entranceBlocker() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_entranceBlocker();

  constexpr ::UnityW<::GlobalNamespace::HallwayHalf> const& __cordl_internal_get_entranceHalf() const;

  constexpr ::UnityW<::GlobalNamespace::HallwayHalf>& __cordl_internal_get_entranceHalf();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_entranceHalfContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_entranceHalfContainer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_exitAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_exitAnchor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_exitBlocker() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_exitBlocker();

  constexpr ::UnityW<::GlobalNamespace::HallwayHalf> const& __cordl_internal_get_exitHalf() const;

  constexpr ::UnityW<::GlobalNamespace::HallwayHalf>& __cordl_internal_get_exitHalf();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_exitHalfContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_exitHalfContainer();

  constexpr ::UnityW<::GlobalNamespace::HallwayHalf> const& __cordl_internal_get_farHalf() const;

  constexpr ::UnityW<::GlobalNamespace::HallwayHalf>& __cordl_internal_get_farHalf();

  constexpr bool const& __cordl_internal_get_hasDoneForcedUpdate() const;

  constexpr bool& __cordl_internal_get_hasDoneForcedUpdate();

  constexpr bool const& __cordl_internal_get_isInTransitionTrigger() const;

  constexpr bool& __cordl_internal_get_isInTransitionTrigger();

  constexpr bool const& __cordl_internal_get_isLoadingNextRoom() const;

  constexpr bool& __cordl_internal_get_isLoadingNextRoom();

  constexpr float_t const& __cordl_internal_get_layerSwitchTriggerThreshold() const;

  constexpr float_t& __cordl_internal_get_layerSwitchTriggerThreshold();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_masterPlayer();

  constexpr float_t const& __cordl_internal_get_nextTriggerCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextTriggerCheckTime();

  constexpr float_t const& __cordl_internal_get_nextTriggerValidTime() const;

  constexpr float_t& __cordl_internal_get_nextTriggerValidTime();

  constexpr ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*& __cordl_internal_get_onPlayerWithinHallwayChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*> const& __cordl_internal_get_onPlayerWithinHallwayChangedCallbacks() const;

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> const& __cordl_internal_get_privateRoomEntranceConsole() const;

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole>& __cordl_internal_get_privateRoomEntranceConsole();

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> const& __cordl_internal_get_privateRoomsEntranceBlocker() const;

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker>& __cordl_internal_get_privateRoomsEntranceBlocker();

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker> const& __cordl_internal_get_privateRoomsExpansionBlocker() const;

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker>& __cordl_internal_get_privateRoomsExpansionBlocker();

  constexpr ::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> const& __cordl_internal_get_publicWorldEntranceConsole() const;

  constexpr ::UnityW<::GlobalNamespace::PublicWorldEntranceConsole>& __cordl_internal_get_publicWorldEntranceConsole();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RoomNavigationDisplay>>*& __cordl_internal_get_roomNavigationDisplays();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RoomNavigationDisplay>>*> const& __cordl_internal_get_roomNavigationDisplays() const;

  constexpr float_t const& __cordl_internal_get_sqrDistToPlayer() const;

  constexpr float_t& __cordl_internal_get_sqrDistToPlayer();

  constexpr ::UnityW<::GlobalNamespace::TransitionPortal> const& __cordl_internal_get_transitionPortal() const;

  constexpr ::UnityW<::GlobalNamespace::TransitionPortal>& __cordl_internal_get_transitionPortal();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transitionTriggerAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transitionTriggerAnchor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_transitionTriggerEnterHalfExtents() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_transitionTriggerEnterHalfExtents();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_transitionTriggerEnterLocalCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_transitionTriggerEnterLocalCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_transitionTriggerExitHalfExtents() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_transitionTriggerExitHalfExtents();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_transitionTriggerExitLocalCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_transitionTriggerExitLocalCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_transitionTriggerPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_transitionTriggerPosition();

  constexpr float_t const& __cordl_internal_get_triggerStartTime() const;

  constexpr float_t& __cordl_internal_get_triggerStartTime();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_voidObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_voidObject();

  constexpr void __cordl_internal_set__isPlayerWithinHallway_k__BackingField(bool value);

  constexpr void __cordl_internal_set_attachedLobby(::UnityW<::GlobalNamespace::RoomLobby> value);

  constexpr void __cordl_internal_set_closeHalf(::UnityW<::GlobalNamespace::HallwayHalf> value);

  constexpr void __cordl_internal_set_curLayer(int32_t value);

  constexpr void __cordl_internal_set_direction(::GlobalNamespace::__RoomManager__TravelDirection value);

  constexpr void __cordl_internal_set_doTransitionTrigger(bool value);

  constexpr void __cordl_internal_set_entraceAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_entranceBlocker(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_entranceHalf(::UnityW<::GlobalNamespace::HallwayHalf> value);

  constexpr void __cordl_internal_set_entranceHalfContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_exitAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_exitBlocker(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_exitHalf(::UnityW<::GlobalNamespace::HallwayHalf> value);

  constexpr void __cordl_internal_set_exitHalfContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_farHalf(::UnityW<::GlobalNamespace::HallwayHalf> value);

  constexpr void __cordl_internal_set_hasDoneForcedUpdate(bool value);

  constexpr void __cordl_internal_set_isInTransitionTrigger(bool value);

  constexpr void __cordl_internal_set_isLoadingNextRoom(bool value);

  constexpr void __cordl_internal_set_layerSwitchTriggerThreshold(float_t value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_nextTriggerCheckTime(float_t value);

  constexpr void __cordl_internal_set_nextTriggerValidTime(float_t value);

  constexpr void __cordl_internal_set_onPlayerWithinHallwayChangedCallbacks(::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged* value);

  constexpr void __cordl_internal_set_privateRoomEntranceConsole(::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> value);

  constexpr void __cordl_internal_set_privateRoomsEntranceBlocker(::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> value);

  constexpr void __cordl_internal_set_privateRoomsExpansionBlocker(::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker> value);

  constexpr void __cordl_internal_set_publicWorldEntranceConsole(::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> value);

  constexpr void __cordl_internal_set_roomNavigationDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RoomNavigationDisplay>>* value);

  constexpr void __cordl_internal_set_sqrDistToPlayer(float_t value);

  constexpr void __cordl_internal_set_transitionPortal(::UnityW<::GlobalNamespace::TransitionPortal> value);

  constexpr void __cordl_internal_set_transitionTriggerAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_transitionTriggerEnterHalfExtents(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_transitionTriggerEnterLocalCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_transitionTriggerExitHalfExtents(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_transitionTriggerExitLocalCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_transitionTriggerPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_triggerStartTime(float_t value);

  constexpr void __cordl_internal_set_voidObject(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x175ba54, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isPlayerWithinHallway, addr 0x175958c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPlayerWithinHallway();

  /// @brief Method set_isPlayerWithinHallway, addr 0x1759594, size 0xc, virtual false, abstract: false, final false
  inline void set_isPlayerWithinHallway(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hallway();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hallway", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hallway(Hallway&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hallway", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hallway(Hallway const&) = delete;

  /// @brief Field layerSwitchTriggerThreshold, offset: 0x18, size: 0x4, def value: None
  float_t ___layerSwitchTriggerThreshold;

  /// @brief Field curLayer, offset: 0x1c, size: 0x4, def value: None
  int32_t ___curLayer;

  /// @brief Field entranceHalfContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___entranceHalfContainer;

  /// @brief Field exitHalfContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___exitHalfContainer;

  /// @brief Field entranceHalf, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HallwayHalf> ___entranceHalf;

  /// @brief Field exitHalf, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HallwayHalf> ___exitHalf;

  /// @brief Field closeHalf, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HallwayHalf> ___closeHalf;

  /// @brief Field farHalf, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HallwayHalf> ___farHalf;

  /// @brief Field entraceAnchor, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___entraceAnchor;

  /// @brief Field exitAnchor, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___exitAnchor;

  /// @brief Field entranceBlocker, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___entranceBlocker;

  /// @brief Field exitBlocker, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___exitBlocker;

  /// @brief Field transitionTriggerExitLocalCenter, offset: 0x70, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___transitionTriggerExitLocalCenter;

  /// @brief Field transitionTriggerExitHalfExtents, offset: 0x7c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___transitionTriggerExitHalfExtents;

  /// @brief Field transitionTriggerEnterLocalCenter, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___transitionTriggerEnterLocalCenter;

  /// @brief Field transitionTriggerEnterHalfExtents, offset: 0x94, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___transitionTriggerEnterHalfExtents;

  /// @brief Field transitionTriggerAnchor, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transitionTriggerAnchor;

  /// @brief Field transitionTriggerPosition, offset: 0xa8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___transitionTriggerPosition;

  /// @brief Field doTransitionTrigger, offset: 0xb4, size: 0x1, def value: None
  bool ___doTransitionTrigger;

  /// @brief Field nextTriggerCheckTime, offset: 0xb8, size: 0x4, def value: None
  float_t ___nextTriggerCheckTime;

  /// @brief Field isInTransitionTrigger, offset: 0xbc, size: 0x1, def value: None
  bool ___isInTransitionTrigger;

  /// @brief Field triggerStartTime, offset: 0xc0, size: 0x4, def value: None
  float_t ___triggerStartTime;

  /// @brief Field nextTriggerValidTime, offset: 0xc4, size: 0x4, def value: None
  float_t ___nextTriggerValidTime;

  /// @brief Field <isPlayerWithinHallway>k__BackingField, offset: 0xc8, size: 0x1, def value: None
  bool ____isPlayerWithinHallway_k__BackingField;

  /// @brief Field onPlayerWithinHallwayChangedCallbacks, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged* ___onPlayerWithinHallwayChangedCallbacks;

  /// @brief Field masterPlayer, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___masterPlayer;

  /// @brief Field attachedLobby, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomLobby> ___attachedLobby;

  /// @brief Field direction, offset: 0xe8, size: 0x4, def value: None
  ::GlobalNamespace::__RoomManager__TravelDirection ___direction;

  /// @brief Field privateRoomEntranceConsole, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> ___privateRoomEntranceConsole;

  /// @brief Field privateRoomsEntranceBlocker, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> ___privateRoomsEntranceBlocker;

  /// @brief Field privateRoomsExpansionBlocker, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker> ___privateRoomsExpansionBlocker;

  /// @brief Field publicWorldEntranceConsole, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> ___publicWorldEntranceConsole;

  /// @brief Field transitionPortal, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TransitionPortal> ___transitionPortal;

  /// @brief Field voidObject, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___voidObject;

  /// @brief Field roomNavigationDisplays, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RoomNavigationDisplay>>* ___roomNavigationDisplays;

  /// @brief Field hasDoneForcedUpdate, offset: 0x128, size: 0x1, def value: None
  bool ___hasDoneForcedUpdate;

  /// @brief Field sqrDistToPlayer, offset: 0x12c, size: 0x4, def value: None
  float_t ___sqrDistToPlayer;

  /// @brief Field isLoadingNextRoom, offset: 0x130, size: 0x1, def value: None
  bool ___isLoadingNextRoom;

  /// @brief Field cooldownBetweenTriggers offset 0xffffffff size 0x4
  static constexpr float_t cooldownBetweenTriggers{ 2.0 };

  /// @brief Field distanceForFastTriggerUpdates offset 0xffffffff size 0x4
  static constexpr float_t distanceForFastTriggerUpdates{ 9.0 };

  /// @brief Field layerWhenPlayerInside offset 0xffffffff size 0x4
  static constexpr int32_t layerWhenPlayerInside{ static_cast<int32_t>(0x3) };

  /// @brief Field layerWhenPlayerOutside offset 0xffffffff size 0x4
  static constexpr int32_t layerWhenPlayerOutside{ static_cast<int32_t>(0xc) };

  /// @brief Field timeBetweenTriggerChecksFast offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenTriggerChecksFast{ 0.1 };

  /// @brief Field timeBetweenTriggerChecksSlow offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenTriggerChecksSlow{ 1.0 };

  /// @brief Field waypointSpacing offset 0xffffffff size 0x4
  static constexpr float_t waypointSpacing{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Hallway, 0x138>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___layerSwitchTriggerThreshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___curLayer) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___entranceHalfContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___exitHalfContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___entranceHalf) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___exitHalf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___closeHalf) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___farHalf) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___entraceAnchor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___exitAnchor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___entranceBlocker) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___exitBlocker) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___transitionTriggerExitLocalCenter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___transitionTriggerExitHalfExtents) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___transitionTriggerEnterLocalCenter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___transitionTriggerEnterHalfExtents) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___transitionTriggerAnchor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___transitionTriggerPosition) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___doTransitionTrigger) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___nextTriggerCheckTime) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___isInTransitionTrigger) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___triggerStartTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___nextTriggerValidTime) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ____isPlayerWithinHallway_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___onPlayerWithinHallwayChangedCallbacks) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___masterPlayer) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___attachedLobby) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___direction) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___privateRoomEntranceConsole) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___privateRoomsEntranceBlocker) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___privateRoomsExpansionBlocker) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___publicWorldEntranceConsole) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___transitionPortal) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___voidObject) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___roomNavigationDisplays) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___hasDoneForcedUpdate) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___sqrDistToPlayer) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hallway, ___isLoadingNextRoom) == 0x130, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Hallway);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Hallway*, "", "Hallway");
NEED_NO_BOX(::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*, "", "Hallway/OnPlayerWithinHallwayChanged");
