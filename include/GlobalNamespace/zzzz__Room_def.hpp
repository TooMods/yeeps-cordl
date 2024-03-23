#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Room)
namespace GlobalNamespace {
class Hallway;
}
namespace GlobalNamespace {
class RoomData;
}
namespace GlobalNamespace {
class RoomDoorConfiguration;
}
namespace GlobalNamespace {
class RoomInfoDisplayUI;
}
namespace GlobalNamespace {
class RoomLobby;
}
namespace GlobalNamespace {
class Scenery;
}
namespace GlobalNamespace {
class Theme;
}
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
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
class Room;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Room);
// Type: ::Room
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Room*
class CORDL_TYPE Room : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <roomData>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__roomData_k__BackingField, put = __cordl_internal_set__roomData_k__BackingField))::GlobalNamespace::RoomData* _roomData_k__BackingField;

  /// @brief Field blockGameRounds, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_blockGameRounds, put = __cordl_internal_set_blockGameRounds)) bool blockGameRounds;

  /// @brief Field ceiling, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_ceiling, put = __cordl_internal_set_ceiling))::UnityW<::UnityEngine::Transform> ceiling;

  /// @brief Field createdWalls, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_createdWalls,
                      put = __cordl_internal_set_createdWalls))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> createdWalls;

  /// @brief Field dimensions, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_dimensions, put = __cordl_internal_set_dimensions))::UnityEngine::Vector3Int dimensions;

  /// @brief Field downHallway, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_downHallway, put = __cordl_internal_set_downHallway))::UnityW<::GlobalNamespace::Hallway> downHallway;

  /// @brief Field downHallwayAnchor, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_downHallwayAnchor, put = __cordl_internal_set_downHallwayAnchor))::UnityW<::UnityEngine::Transform> downHallwayAnchor;

  /// @brief Field floor, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_floor, put = __cordl_internal_set_floor))::UnityW<::UnityEngine::Transform> floor;

  /// @brief Field isConnectedToLobbyDown, offset 0xbe, size 0x1
  __declspec(property(get = __cordl_internal_get_isConnectedToLobbyDown, put = __cordl_internal_set_isConnectedToLobbyDown)) bool isConnectedToLobbyDown;

  /// @brief Field isConnectedToLobbyLeft, offset 0xbf, size 0x1
  __declspec(property(get = __cordl_internal_get_isConnectedToLobbyLeft, put = __cordl_internal_set_isConnectedToLobbyLeft)) bool isConnectedToLobbyLeft;

  /// @brief Field isConnectedToLobbyRight, offset 0xbd, size 0x1
  __declspec(property(get = __cordl_internal_get_isConnectedToLobbyRight, put = __cordl_internal_set_isConnectedToLobbyRight)) bool isConnectedToLobbyRight;

  /// @brief Field isConnectedToLobbyUp, offset 0xbc, size 0x1
  __declspec(property(get = __cordl_internal_get_isConnectedToLobbyUp, put = __cordl_internal_set_isConnectedToLobbyUp)) bool isConnectedToLobbyUp;

  /// @brief Field leftHallway, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHallway, put = __cordl_internal_set_leftHallway))::UnityW<::GlobalNamespace::Hallway> leftHallway;

  /// @brief Field leftHallwayAnchor, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHallwayAnchor, put = __cordl_internal_set_leftHallwayAnchor))::UnityW<::UnityEngine::Transform> leftHallwayAnchor;

  /// @brief Field lobby, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_lobby, put = __cordl_internal_set_lobby))::UnityW<::GlobalNamespace::RoomLobby> lobby;

  /// @brief Field lobbyDirection, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_lobbyDirection, put = __cordl_internal_set_lobbyDirection))::GlobalNamespace::__RoomManager__TravelDirection lobbyDirection;

  /// @brief Field rightHallway, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHallway, put = __cordl_internal_set_rightHallway))::UnityW<::GlobalNamespace::Hallway> rightHallway;

  /// @brief Field rightHallwayAnchor, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHallwayAnchor, put = __cordl_internal_set_rightHallwayAnchor))::UnityW<::UnityEngine::Transform> rightHallwayAnchor;

  __declspec(property(get = get_roomData, put = set_roomData))::GlobalNamespace::RoomData* roomData;

  /// @brief Field roomInfoDisplay, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_roomInfoDisplay, put = __cordl_internal_set_roomInfoDisplay))::UnityW<::GlobalNamespace::RoomInfoDisplayUI> roomInfoDisplay;

  /// @brief Field scenery, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_scenery, put = __cordl_internal_set_scenery))::UnityW<::GlobalNamespace::Scenery> scenery;

  /// @brief Field spawnPosition, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_spawnPosition, put = __cordl_internal_set_spawnPosition))::UnityEngine::Vector3 spawnPosition;

  /// @brief Field theme, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_theme, put = __cordl_internal_set_theme))::GlobalNamespace::Theme* theme;

  /// @brief Field upHallway, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_upHallway, put = __cordl_internal_set_upHallway))::UnityW<::GlobalNamespace::Hallway> upHallway;

  /// @brief Field upHallwayAnchor, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_upHallwayAnchor, put = __cordl_internal_set_upHallwayAnchor))::UnityW<::UnityEngine::Transform> upHallwayAnchor;

  /// @brief Field useOverrideSpawnPosition, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_useOverrideSpawnPosition, put = __cordl_internal_set_useOverrideSpawnPosition)) bool useOverrideSpawnPosition;

  /// @brief Method CreateWall, addr 0x162e2c4, size 0x418, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateWall(::GlobalNamespace::__RoomManager__TravelDirection direction, int32_t floorDepth, ::GlobalNamespace::RoomDoorConfiguration* doorConfiguration,
                                                        ByRef<::UnityEngine::Transform*> hallwayAnchor);

  /// @brief Method DestroySelfImmediate, addr 0x16309c0, size 0x168, virtual false, abstract: false, final false
  inline void DestroySelfImmediate();

  /// @brief Method GenerateHallways, addr 0x162f7d8, size 0x5d0, virtual false, abstract: false, final false
  inline void GenerateHallways();

  /// @brief Method GenerateWalls, addr 0x162eedc, size 0x2cc, virtual false, abstract: false, final false
  inline void GenerateWalls();

  /// @brief Method GetClosestHallway, addr 0x1630e00, size 0x258, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::Hallway> GetClosestHallway(::UnityEngine::Vector3 position);

  /// @brief Method GetHallwayAnchor, addr 0x1630b94, size 0x110, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetHallwayAnchor(::GlobalNamespace::__RoomManager__TravelDirection direction);

  /// @brief Method GetSpawnPosition, addr 0x16312e8, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetSpawnPosition();

  /// @brief Method GetTravelAnchorPosition, addr 0x16310c8, size 0x220, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetTravelAnchorPosition(::GlobalNamespace::__RoomManager__TravelDirection travelDirection, bool isTravelingForward);

  /// @brief Method Initialize, addr 0x162e6dc, size 0x554, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::RoomData* roomData);

  static inline ::GlobalNamespace::Room* New_ctor();

  /// @brief Method RefreshFloorDepth, addr 0x162fda8, size 0x3bc, virtual false, abstract: false, final false
  inline void RefreshFloorDepth();

  /// @brief Method RefreshHallways, addr 0x1630260, size 0x118, virtual false, abstract: false, final false
  inline void RefreshHallways();

  /// @brief Method RefreshScenery, addr 0x162ec30, size 0x288, virtual false, abstract: false, final false
  inline void RefreshScenery();

  /// @brief Method TryGetHallway, addr 0x1630ca4, size 0x15c, virtual false, abstract: false, final false
  inline bool TryGetHallway(::GlobalNamespace::__RoomManager__TravelDirection direction, ByRef<::GlobalNamespace::Hallway*> hallway);

  /// @brief Method TryGetLobby, addr 0x1631058, size 0x70, virtual false, abstract: false, final false
  inline bool TryGetLobby(ByRef<::GlobalNamespace::RoomLobby*> lobby);

  constexpr ::GlobalNamespace::RoomData*& __cordl_internal_get__roomData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomData*> const& __cordl_internal_get__roomData_k__BackingField() const;

  constexpr bool const& __cordl_internal_get_blockGameRounds() const;

  constexpr bool& __cordl_internal_get_blockGameRounds();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ceiling() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ceiling();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_createdWalls() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_createdWalls();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_dimensions() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_dimensions();

  constexpr ::UnityW<::GlobalNamespace::Hallway> const& __cordl_internal_get_downHallway() const;

  constexpr ::UnityW<::GlobalNamespace::Hallway>& __cordl_internal_get_downHallway();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_downHallwayAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_downHallwayAnchor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_floor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_floor();

  constexpr bool const& __cordl_internal_get_isConnectedToLobbyDown() const;

  constexpr bool& __cordl_internal_get_isConnectedToLobbyDown();

  constexpr bool const& __cordl_internal_get_isConnectedToLobbyLeft() const;

  constexpr bool& __cordl_internal_get_isConnectedToLobbyLeft();

  constexpr bool const& __cordl_internal_get_isConnectedToLobbyRight() const;

  constexpr bool& __cordl_internal_get_isConnectedToLobbyRight();

  constexpr bool const& __cordl_internal_get_isConnectedToLobbyUp() const;

  constexpr bool& __cordl_internal_get_isConnectedToLobbyUp();

  constexpr ::UnityW<::GlobalNamespace::Hallway> const& __cordl_internal_get_leftHallway() const;

  constexpr ::UnityW<::GlobalNamespace::Hallway>& __cordl_internal_get_leftHallway();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHallwayAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHallwayAnchor();

  constexpr ::UnityW<::GlobalNamespace::RoomLobby> const& __cordl_internal_get_lobby() const;

  constexpr ::UnityW<::GlobalNamespace::RoomLobby>& __cordl_internal_get_lobby();

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& __cordl_internal_get_lobbyDirection() const;

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection& __cordl_internal_get_lobbyDirection();

  constexpr ::UnityW<::GlobalNamespace::Hallway> const& __cordl_internal_get_rightHallway() const;

  constexpr ::UnityW<::GlobalNamespace::Hallway>& __cordl_internal_get_rightHallway();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHallwayAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHallwayAnchor();

  constexpr ::UnityW<::GlobalNamespace::RoomInfoDisplayUI> const& __cordl_internal_get_roomInfoDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::RoomInfoDisplayUI>& __cordl_internal_get_roomInfoDisplay();

  constexpr ::UnityW<::GlobalNamespace::Scenery> const& __cordl_internal_get_scenery() const;

  constexpr ::UnityW<::GlobalNamespace::Scenery>& __cordl_internal_get_scenery();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spawnPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_spawnPosition();

  constexpr ::GlobalNamespace::Theme*& __cordl_internal_get_theme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Theme*> const& __cordl_internal_get_theme() const;

  constexpr ::UnityW<::GlobalNamespace::Hallway> const& __cordl_internal_get_upHallway() const;

  constexpr ::UnityW<::GlobalNamespace::Hallway>& __cordl_internal_get_upHallway();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_upHallwayAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_upHallwayAnchor();

  constexpr bool const& __cordl_internal_get_useOverrideSpawnPosition() const;

  constexpr bool& __cordl_internal_get_useOverrideSpawnPosition();

  constexpr void __cordl_internal_set__roomData_k__BackingField(::GlobalNamespace::RoomData* value);

  constexpr void __cordl_internal_set_blockGameRounds(bool value);

  constexpr void __cordl_internal_set_ceiling(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_createdWalls(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_dimensions(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_downHallway(::UnityW<::GlobalNamespace::Hallway> value);

  constexpr void __cordl_internal_set_downHallwayAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_floor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_isConnectedToLobbyDown(bool value);

  constexpr void __cordl_internal_set_isConnectedToLobbyLeft(bool value);

  constexpr void __cordl_internal_set_isConnectedToLobbyRight(bool value);

  constexpr void __cordl_internal_set_isConnectedToLobbyUp(bool value);

  constexpr void __cordl_internal_set_leftHallway(::UnityW<::GlobalNamespace::Hallway> value);

  constexpr void __cordl_internal_set_leftHallwayAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_lobby(::UnityW<::GlobalNamespace::RoomLobby> value);

  constexpr void __cordl_internal_set_lobbyDirection(::GlobalNamespace::__RoomManager__TravelDirection value);

  constexpr void __cordl_internal_set_rightHallway(::UnityW<::GlobalNamespace::Hallway> value);

  constexpr void __cordl_internal_set_rightHallwayAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_roomInfoDisplay(::UnityW<::GlobalNamespace::RoomInfoDisplayUI> value);

  constexpr void __cordl_internal_set_scenery(::UnityW<::GlobalNamespace::Scenery> value);

  constexpr void __cordl_internal_set_spawnPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_theme(::GlobalNamespace::Theme* value);

  constexpr void __cordl_internal_set_upHallway(::UnityW<::GlobalNamespace::Hallway> value);

  constexpr void __cordl_internal_set_upHallwayAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_useOverrideSpawnPosition(bool value);

  /// @brief Method .ctor, addr 0x163153c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_roomData, addr 0x162e2b4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RoomData* get_roomData();

  /// @brief Method set_roomData, addr 0x162e2bc, size 0x8, virtual false, abstract: false, final false
  inline void set_roomData(::GlobalNamespace::RoomData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Room();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Room", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Room(Room&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Room", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Room(Room const&) = delete;

  /// @brief Field <roomData>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RoomData* ____roomData_k__BackingField;

  /// @brief Field dimensions, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___dimensions;

  /// @brief Field useOverrideSpawnPosition, offset: 0x2c, size: 0x1, def value: None
  bool ___useOverrideSpawnPosition;

  /// @brief Field spawnPosition, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___spawnPosition;

  /// @brief Field blockGameRounds, offset: 0x3c, size: 0x1, def value: None
  bool ___blockGameRounds;

  /// @brief Field roomInfoDisplay, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomInfoDisplayUI> ___roomInfoDisplay;

  /// @brief Field ceiling, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___ceiling;

  /// @brief Field floor, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___floor;

  /// @brief Field theme, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::Theme* ___theme;

  /// @brief Field scenery, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Scenery> ___scenery;

  /// @brief Field lobby, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomLobby> ___lobby;

  /// @brief Field upHallwayAnchor, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___upHallwayAnchor;

  /// @brief Field rightHallwayAnchor, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightHallwayAnchor;

  /// @brief Field downHallwayAnchor, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___downHallwayAnchor;

  /// @brief Field leftHallwayAnchor, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftHallwayAnchor;

  /// @brief Field upHallway, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Hallway> ___upHallway;

  /// @brief Field rightHallway, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Hallway> ___rightHallway;

  /// @brief Field downHallway, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Hallway> ___downHallway;

  /// @brief Field leftHallway, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Hallway> ___leftHallway;

  /// @brief Field createdWalls, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___createdWalls;

  /// @brief Field lobbyDirection, offset: 0xb8, size: 0x4, def value: None
  ::GlobalNamespace::__RoomManager__TravelDirection ___lobbyDirection;

  /// @brief Field isConnectedToLobbyUp, offset: 0xbc, size: 0x1, def value: None
  bool ___isConnectedToLobbyUp;

  /// @brief Field isConnectedToLobbyRight, offset: 0xbd, size: 0x1, def value: None
  bool ___isConnectedToLobbyRight;

  /// @brief Field isConnectedToLobbyDown, offset: 0xbe, size: 0x1, def value: None
  bool ___isConnectedToLobbyDown;

  /// @brief Field isConnectedToLobbyLeft, offset: 0xbf, size: 0x1, def value: None
  bool ___isConnectedToLobbyLeft;

  /// @brief Field wallHeightBuffer offset 0xffffffff size 0x4
  static constexpr int32_t wallHeightBuffer{ static_cast<int32_t>(0x64) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Room, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ____roomData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___dimensions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___useOverrideSpawnPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___spawnPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___blockGameRounds) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___roomInfoDisplay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___ceiling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___floor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___theme) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___scenery) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___lobby) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___upHallwayAnchor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___rightHallwayAnchor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___downHallwayAnchor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___leftHallwayAnchor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___upHallway) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___rightHallway) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___downHallway) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___leftHallway) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___createdWalls) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___lobbyDirection) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___isConnectedToLobbyUp) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___isConnectedToLobbyRight) == 0xbd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___isConnectedToLobbyDown) == 0xbe, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Room, ___isConnectedToLobbyLeft) == 0xbf, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Room);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Room*, "", "Room");
