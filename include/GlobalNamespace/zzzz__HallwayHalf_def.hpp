#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HallwayHalf)
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
class PublicWorldEntranceConsole;
}
namespace GlobalNamespace {
class RoomEntrance;
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
struct __RoomManager__TravelDirection;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HallwayHalf;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HallwayHalf);
// Type: ::HallwayHalf
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HallwayHalf*
class CORDL_TYPE HallwayHalf : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field blocker, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_blocker, put = __cordl_internal_set_blocker))::UnityW<::UnityEngine::Transform> blocker;

  /// @brief Field blockerBacktrackTriggerCenter, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get_blockerBacktrackTriggerCenter, put = __cordl_internal_set_blockerBacktrackTriggerCenter))::UnityEngine::Vector3 blockerBacktrackTriggerCenter;

  /// @brief Field blockerBacktrackTriggerHalfExtents, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get_blockerBacktrackTriggerHalfExtents,
                      put = __cordl_internal_set_blockerBacktrackTriggerHalfExtents))::UnityEngine::Vector3 blockerBacktrackTriggerHalfExtents;

  /// @brief Field boundingBoxCenter, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingBoxCenter, put = __cordl_internal_set_boundingBoxCenter))::UnityEngine::Vector3 boundingBoxCenter;

  /// @brief Field boundingBoxHalfExtents, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingBoxHalfExtents, put = __cordl_internal_set_boundingBoxHalfExtents))::UnityEngine::Vector3 boundingBoxHalfExtents;

  /// @brief Field corridorRenderer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_corridorRenderer, put = __cordl_internal_set_corridorRenderer))::UnityW<::UnityEngine::MeshRenderer> corridorRenderer;

  /// @brief Field deadendBlocker, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_deadendBlocker, put = __cordl_internal_set_deadendBlocker))::UnityW<::UnityEngine::Transform> deadendBlocker;

  /// @brief Field entrance, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_entrance, put = __cordl_internal_set_entrance))::UnityW<::GlobalNamespace::RoomEntrance> entrance;

  /// @brief Field exitAnchor, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_exitAnchor, put = __cordl_internal_set_exitAnchor))::UnityW<::UnityEngine::Transform> exitAnchor;

  /// @brief Field layerChangeContainers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_layerChangeContainers,
                      put = __cordl_internal_set_layerChangeContainers))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> layerChangeContainers;

  /// @brief Field mobileHallwayTransitionAnchor, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_mobileHallwayTransitionAnchor,
                      put = __cordl_internal_set_mobileHallwayTransitionAnchor))::UnityW<::GlobalNamespace::MobileTravelAnchor> mobileHallwayTransitionAnchor;

  /// @brief Field mobileTravelAnchors, offset 0x78, size 0x8
  __declspec(
      property(get = __cordl_internal_get_mobileTravelAnchors,
               put = __cordl_internal_set_mobileTravelAnchors))::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> mobileTravelAnchors;

  /// @brief Field privateRoomEntranceConsole, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_privateRoomEntranceConsole,
                      put = __cordl_internal_set_privateRoomEntranceConsole))::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> privateRoomEntranceConsole;

  /// @brief Field privateRoomsEntranceBlocker, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_privateRoomsEntranceBlocker,
                      put = __cordl_internal_set_privateRoomsEntranceBlocker))::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> privateRoomsEntranceBlocker;

  /// @brief Field publicWorldEntranceConsole, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_publicWorldEntranceConsole,
                      put = __cordl_internal_set_publicWorldEntranceConsole))::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> publicWorldEntranceConsole;

  /// @brief Field transitionPortal, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionPortal, put = __cordl_internal_set_transitionPortal))::UnityW<::GlobalNamespace::TransitionPortal> transitionPortal;

  /// @brief Field voidObject, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_voidObject, put = __cordl_internal_set_voidObject))::UnityW<::UnityEngine::GameObject> voidObject;

  /// @brief Method GetSpawnPosition, addr 0x175b530, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetSpawnPosition();

  /// @brief Method GetWaypointAnchor, addr 0x175b9b4, size 0xa0, virtual false, abstract: false, final false
  inline void GetWaypointAnchor(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method Initialize, addr 0x175bbd4, size 0x35c, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::Room* room, ::GlobalNamespace::Theme* theme, bool isCloseHalf, bool isConnectedToPlayspace,
                         ::GlobalNamespace::__RoomManager__TravelDirection travelDirection, bool isDeadend);

  /// @brief Method Initialize, addr 0x175a2cc, size 0x110, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::Room* room, ::StringW themeKey, bool isCloseHalf, bool isConnectedToPlayspace, ::GlobalNamespace::__RoomManager__TravelDirection travelDirection,
                         bool isDeadend);

  /// @brief Method IsWithinBacktrackTrigger, addr 0x175ab70, size 0x6c, virtual false, abstract: false, final false
  inline bool IsWithinBacktrackTrigger(::UnityEngine::Vector3 position);

  /// @brief Method IsWithinBounds, addr 0x175a9a0, size 0x98, virtual false, abstract: false, final false
  inline bool IsWithinBounds(::UnityEngine::Vector3 position);

  /// @brief Method MarkMobileAnchorsAsFarHalf, addr 0x175bf30, size 0xb8, virtual false, abstract: false, final false
  inline void MarkMobileAnchorsAsFarHalf();

  static inline ::GlobalNamespace::HallwayHalf* New_ctor();

  /// @brief Method SetActive, addr 0x175af8c, size 0x28, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  /// @brief Method SetLayer, addr 0x175b2a8, size 0x70, virtual false, abstract: false, final false
  inline void SetLayer(int32_t layer);

  /// @brief Method SetUIActive, addr 0x175af74, size 0x18, virtual false, abstract: false, final false
  inline void SetUIActive(bool newActive);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_blocker() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_blocker();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_blockerBacktrackTriggerCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_blockerBacktrackTriggerCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_blockerBacktrackTriggerHalfExtents() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_blockerBacktrackTriggerHalfExtents();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingBoxCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingBoxCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingBoxHalfExtents() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingBoxHalfExtents();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_corridorRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_corridorRenderer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_deadendBlocker() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_deadendBlocker();

  constexpr ::UnityW<::GlobalNamespace::RoomEntrance> const& __cordl_internal_get_entrance() const;

  constexpr ::UnityW<::GlobalNamespace::RoomEntrance>& __cordl_internal_get_entrance();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_exitAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_exitAnchor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_layerChangeContainers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_layerChangeContainers();

  constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor> const& __cordl_internal_get_mobileHallwayTransitionAnchor() const;

  constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor>& __cordl_internal_get_mobileHallwayTransitionAnchor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> const& __cordl_internal_get_mobileTravelAnchors() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*>& __cordl_internal_get_mobileTravelAnchors();

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> const& __cordl_internal_get_privateRoomEntranceConsole() const;

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole>& __cordl_internal_get_privateRoomEntranceConsole();

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> const& __cordl_internal_get_privateRoomsEntranceBlocker() const;

  constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker>& __cordl_internal_get_privateRoomsEntranceBlocker();

  constexpr ::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> const& __cordl_internal_get_publicWorldEntranceConsole() const;

  constexpr ::UnityW<::GlobalNamespace::PublicWorldEntranceConsole>& __cordl_internal_get_publicWorldEntranceConsole();

  constexpr ::UnityW<::GlobalNamespace::TransitionPortal> const& __cordl_internal_get_transitionPortal() const;

  constexpr ::UnityW<::GlobalNamespace::TransitionPortal>& __cordl_internal_get_transitionPortal();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_voidObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_voidObject();

  constexpr void __cordl_internal_set_blocker(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_blockerBacktrackTriggerCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_blockerBacktrackTriggerHalfExtents(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingBoxCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingBoxHalfExtents(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_corridorRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_deadendBlocker(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_entrance(::UnityW<::GlobalNamespace::RoomEntrance> value);

  constexpr void __cordl_internal_set_exitAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_layerChangeContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_mobileHallwayTransitionAnchor(::UnityW<::GlobalNamespace::MobileTravelAnchor> value);

  constexpr void __cordl_internal_set_mobileTravelAnchors(::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> value);

  constexpr void __cordl_internal_set_privateRoomEntranceConsole(::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> value);

  constexpr void __cordl_internal_set_privateRoomsEntranceBlocker(::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> value);

  constexpr void __cordl_internal_set_publicWorldEntranceConsole(::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> value);

  constexpr void __cordl_internal_set_transitionPortal(::UnityW<::GlobalNamespace::TransitionPortal> value);

  constexpr void __cordl_internal_set_voidObject(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x175bfe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HallwayHalf();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HallwayHalf", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HallwayHalf(HallwayHalf&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HallwayHalf", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HallwayHalf(HallwayHalf const&) = delete;

  /// @brief Field boundingBoxCenter, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingBoxCenter;

  /// @brief Field boundingBoxHalfExtents, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingBoxHalfExtents;

  /// @brief Field layerChangeContainers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___layerChangeContainers;

  /// @brief Field corridorRenderer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___corridorRenderer;

  /// @brief Field blocker, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___blocker;

  /// @brief Field blockerBacktrackTriggerCenter, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___blockerBacktrackTriggerCenter;

  /// @brief Field blockerBacktrackTriggerHalfExtents, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___blockerBacktrackTriggerHalfExtents;

  /// @brief Field deadendBlocker, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___deadendBlocker;

  /// @brief Field voidObject, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___voidObject;

  /// @brief Field exitAnchor, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___exitAnchor;

  /// @brief Field mobileTravelAnchors, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> ___mobileTravelAnchors;

  /// @brief Field mobileHallwayTransitionAnchor, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileTravelAnchor> ___mobileHallwayTransitionAnchor;

  /// @brief Field privateRoomEntranceConsole, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> ___privateRoomEntranceConsole;

  /// @brief Field privateRoomsEntranceBlocker, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> ___privateRoomsEntranceBlocker;

  /// @brief Field publicWorldEntranceConsole, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> ___publicWorldEntranceConsole;

  /// @brief Field transitionPortal, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TransitionPortal> ___transitionPortal;

  /// @brief Field entrance, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomEntrance> ___entrance;

  /// @brief Field floorMatIndex offset 0xffffffff size 0x4
  static constexpr int32_t floorMatIndex{ static_cast<int32_t>(0x1) };

  /// @brief Field wallMatIndex offset 0xffffffff size 0x4
  static constexpr int32_t wallMatIndex{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HallwayHalf, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___boundingBoxCenter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___boundingBoxHalfExtents) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___layerChangeContainers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___corridorRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___blocker) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___blockerBacktrackTriggerCenter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___blockerBacktrackTriggerHalfExtents) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___deadendBlocker) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___voidObject) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___exitAnchor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___mobileTravelAnchors) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___mobileHallwayTransitionAnchor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___privateRoomEntranceConsole) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___privateRoomsEntranceBlocker) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___publicWorldEntranceConsole) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___transitionPortal) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HallwayHalf, ___entrance) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HallwayHalf);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HallwayHalf*, "", "HallwayHalf");
