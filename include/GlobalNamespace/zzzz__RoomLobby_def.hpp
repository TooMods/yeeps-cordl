#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomLobby)
namespace GlobalNamespace {
class ATM;
}
namespace GlobalNamespace {
class Hallway;
}
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
class MobileTravelAnchor;
}
namespace GlobalNamespace {
class NavigationSignPost;
}
namespace GlobalNamespace {
class RoomEntrance;
}
namespace GlobalNamespace {
class RoomInfoDisplayUI;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
class Theme;
}
namespace GlobalNamespace {
class __RoomLobby____c__DisplayClass43_0;
}
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Random;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomLobby;
}
namespace GlobalNamespace {
class __RoomLobby____c__DisplayClass43_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomLobby);
MARK_REF_PTR_T(::GlobalNamespace::__RoomLobby____c__DisplayClass43_0);
// Type: ::<>c__DisplayClass43_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomLobby::<>c__DisplayClass43_0*
class CORDL_TYPE __RoomLobby____c__DisplayClass43_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::RoomLobby> __4__this;

  /// @brief Field hallway, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hallway, put = __cordl_internal_set_hallway))::UnityW<::GlobalNamespace::Hallway> hallway;

  static inline ::GlobalNamespace::__RoomLobby____c__DisplayClass43_0* New_ctor();

  /// @brief Method <AttachHallway>b__0, addr 0x163a898, size 0x24, virtual false, abstract: false, final false
  inline void _AttachHallway_b__0(bool newIsPlayerWithinHallway);

  constexpr ::UnityW<::GlobalNamespace::RoomLobby> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::RoomLobby>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::Hallway> const& __cordl_internal_get_hallway() const;

  constexpr ::UnityW<::GlobalNamespace::Hallway>& __cordl_internal_get_hallway();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomLobby> value);

  constexpr void __cordl_internal_set_hallway(::UnityW<::GlobalNamespace::Hallway> value);

  /// @brief Method .ctor, addr 0x163a02c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomLobby____c__DisplayClass43_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomLobby____c__DisplayClass43_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomLobby____c__DisplayClass43_0(__RoomLobby____c__DisplayClass43_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomLobby____c__DisplayClass43_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomLobby____c__DisplayClass43_0(__RoomLobby____c__DisplayClass43_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomLobby> _____4__this;

  /// @brief Field hallway, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Hallway> ___hallway;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomLobby____c__DisplayClass43_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomLobby____c__DisplayClass43_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomLobby____c__DisplayClass43_0, ___hallway) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomLobby
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 285, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomLobby*
class CORDL_TYPE RoomLobby : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass43_0 = ::GlobalNamespace::__RoomLobby____c__DisplayClass43_0;

  /// @brief Field UICanvases, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_UICanvases,
                      put = __cordl_internal_set_UICanvases))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> UICanvases;

  /// @brief Field <isPlayerOutsideMap>k__BackingField, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get__isPlayerOutsideMap_k__BackingField, put = __cordl_internal_set__isPlayerOutsideMap_k__BackingField)) bool _isPlayerOutsideMap_k__BackingField;

  /// @brief Field atm, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_atm, put = __cordl_internal_set_atm))::UnityW<::GlobalNamespace::ATM> atm;

  /// @brief Field attachedHallways, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_attachedHallways,
                      put = __cordl_internal_set_attachedHallways))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Hallway>>* attachedHallways;

  /// @brief Field boundingCenter, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingHalfExtents, offset 0x8c, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingHalfExtents, put = __cordl_internal_set_boundingHalfExtents))::UnityEngine::Vector3 boundingHalfExtents;

  /// @brief Field controllingMobileTravelAnchor, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_controllingMobileTravelAnchor,
                      put = __cordl_internal_set_controllingMobileTravelAnchor))::UnityW<::GlobalNamespace::MobileTravelAnchor> controllingMobileTravelAnchor;

  /// @brief Field corridorRenderer, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_corridorRenderer, put = __cordl_internal_set_corridorRenderer))::UnityW<::UnityEngine::MeshRenderer> corridorRenderer;

  /// @brief Field curLayer, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_curLayer, put = __cordl_internal_set_curLayer)) int32_t curLayer;

  /// @brief Field direction, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_direction, put = __cordl_internal_set_direction))::GlobalNamespace::__RoomManager__TravelDirection direction;

  /// @brief Field entrance, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_entrance, put = __cordl_internal_set_entrance))::UnityW<::GlobalNamespace::RoomEntrance> entrance;

  /// @brief Field entranceAnchor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_entranceAnchor, put = __cordl_internal_set_entranceAnchor))::UnityW<::UnityEngine::Transform> entranceAnchor;

  /// @brief Field forwardHallwayAnchor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_forwardHallwayAnchor, put = __cordl_internal_set_forwardHallwayAnchor))::UnityW<::UnityEngine::Transform> forwardHallwayAnchor;

  /// @brief Field forwardHallwayArch, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_forwardHallwayArch, put = __cordl_internal_set_forwardHallwayArch))::UnityW<::UnityEngine::GameObject> forwardHallwayArch;

  /// @brief Field forwardHallwayBlock, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_forwardHallwayBlock, put = __cordl_internal_set_forwardHallwayBlock))::UnityW<::UnityEngine::GameObject> forwardHallwayBlock;

  __declspec(property(get = get_isPlayerOutsideMap, put = set_isPlayerOutsideMap)) bool isPlayerOutsideMap;

  /// @brief Field isUIActive, offset 0x11c, size 0x1
  __declspec(property(get = __cordl_internal_get_isUIActive, put = __cordl_internal_set_isUIActive)) bool isUIActive;

  /// @brief Field layerChangeContainers, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_layerChangeContainers,
                      put = __cordl_internal_set_layerChangeContainers))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> layerChangeContainers;

  /// @brief Field layerSwitchTriggerThreshold, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_layerSwitchTriggerThreshold, put = __cordl_internal_set_layerSwitchTriggerThreshold)) float_t layerSwitchTriggerThreshold;

  /// @brief Field leftHallwayAnchor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHallwayAnchor, put = __cordl_internal_set_leftHallwayAnchor))::UnityW<::UnityEngine::Transform> leftHallwayAnchor;

  /// @brief Field leftHallwayArch, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHallwayArch, put = __cordl_internal_set_leftHallwayArch))::UnityW<::UnityEngine::GameObject> leftHallwayArch;

  /// @brief Field leftHallwayBlock, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHallwayBlock, put = __cordl_internal_set_leftHallwayBlock))::UnityW<::UnityEngine::GameObject> leftHallwayBlock;

  /// @brief Field masterPlayer, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> masterPlayer;

  /// @brief Field navigationSignPost, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_navigationSignPost, put = __cordl_internal_set_navigationSignPost))::UnityW<::GlobalNamespace::NavigationSignPost> navigationSignPost;

  /// @brief Field nextInsideCheckTime, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_nextInsideCheckTime, put = __cordl_internal_set_nextInsideCheckTime)) float_t nextInsideCheckTime;

  /// @brief Field playerManagement, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_playerManagement, put = __cordl_internal_set_playerManagement))::UnityW<::UnityEngine::GameObject> playerManagement;

  /// @brief Field rand, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_rand, put = __cordl_internal_set_rand))::System::Random* rand;

  /// @brief Field rightHallwayAnchor, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHallwayAnchor, put = __cordl_internal_set_rightHallwayAnchor))::UnityW<::UnityEngine::Transform> rightHallwayAnchor;

  /// @brief Field rightHallwayArch, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHallwayArch, put = __cordl_internal_set_rightHallwayArch))::UnityW<::UnityEngine::GameObject> rightHallwayArch;

  /// @brief Field rightHallwayBlock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHallwayBlock, put = __cordl_internal_set_rightHallwayBlock))::UnityW<::UnityEngine::GameObject> rightHallwayBlock;

  /// @brief Field roomInfoDisplay, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_roomInfoDisplay, put = __cordl_internal_set_roomInfoDisplay))::UnityW<::GlobalNamespace::RoomInfoDisplayUI> roomInfoDisplay;

  /// @brief Field spawnPositionOffset, offset 0xd8, size 0xc
  __declspec(property(get = __cordl_internal_get_spawnPositionOffset, put = __cordl_internal_set_spawnPositionOffset))::UnityEngine::Vector3 spawnPositionOffset;

  /// @brief Field sqrDistToPlayer, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_sqrDistToPlayer, put = __cordl_internal_set_sqrDistToPlayer)) float_t sqrDistToPlayer;

  /// @brief Field theme, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_theme, put = __cordl_internal_set_theme))::GlobalNamespace::Theme* theme;

  /// @brief Method AttachHallway, addr 0x1630378, size 0x648, virtual false, abstract: false, final false
  inline void AttachHallway(::GlobalNamespace::Hallway* hallway, ::UnityEngine::Transform* anchor);

  /// @brief Method AttachToRoom, addr 0x162f1c4, size 0x4b8, virtual false, abstract: false, final false
  inline void AttachToRoom(::GlobalNamespace::Room* room, ::GlobalNamespace::Theme* theme, ::GlobalNamespace::__RoomManager__TravelDirection direction, int32_t seed);

  /// @brief Method DestroySelfImmediate, addr 0x1630b28, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelfImmediate();

  /// @brief Method DoInsideUpdate, addr 0x163a230, size 0x120, virtual false, abstract: false, final false
  inline void DoInsideUpdate();

  /// @brief Method DoLayerTriggerUpdate, addr 0x163a350, size 0xe0, virtual false, abstract: false, final false
  inline void DoLayerTriggerUpdate();

  /// @brief Method GetHallwayAnchor, addr 0x162f67c, size 0x15c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetHallwayAnchor(::GlobalNamespace::__RoomManager__TravelDirection travelDirection);

  /// @brief Method GetSpawnPosition, addr 0x16314c4, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetSpawnPosition();

  /// @brief Method IsWithinBounds, addr 0x163a430, size 0x98, virtual false, abstract: false, final false
  inline bool IsWithinBounds(::UnityEngine::Vector3 position);

  /// @brief Method LateUpdate, addr 0x163a134, size 0xfc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::RoomLobby* New_ctor();

  /// @brief Method OnHallwayDestroyed, addr 0x163a070, size 0xc4, virtual false, abstract: false, final false
  inline void OnHallwayDestroyed(::GlobalNamespace::Hallway* hallway);

  /// @brief Method OnPlayerWithinAttachedHallwayChanged, addr 0x163a034, size 0x3c, virtual false, abstract: false, final false
  inline void OnPlayerWithinAttachedHallwayChanged(bool newIsPlayerWithinHallway, ::GlobalNamespace::Hallway* hallway);

  /// @brief Method RefreshPosition, addr 0x1630164, size 0xfc, virtual false, abstract: false, final false
  inline void RefreshPosition(::GlobalNamespace::Room* room);

  /// @brief Method SetIsPlayerOutsideMap, addr 0x163a578, size 0xe4, virtual false, abstract: false, final false
  inline void SetIsPlayerOutsideMap(bool newIsPlayerOutsideMap);

  /// @brief Method SetLayer, addr 0x163a65c, size 0x1ac, virtual false, abstract: false, final false
  inline void SetLayer(int32_t layer);

  /// @brief Method SetUIActive, addr 0x163a4c8, size 0xb0, virtual false, abstract: false, final false
  inline void SetUIActive(bool newActive);

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_UICanvases() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_UICanvases();

  constexpr bool const& __cordl_internal_get__isPlayerOutsideMap_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isPlayerOutsideMap_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::ATM> const& __cordl_internal_get_atm() const;

  constexpr ::UnityW<::GlobalNamespace::ATM>& __cordl_internal_get_atm();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Hallway>>*& __cordl_internal_get_attachedHallways();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Hallway>>*> const& __cordl_internal_get_attachedHallways() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingHalfExtents() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingHalfExtents();

  constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor> const& __cordl_internal_get_controllingMobileTravelAnchor() const;

  constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor>& __cordl_internal_get_controllingMobileTravelAnchor();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_corridorRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_corridorRenderer();

  constexpr int32_t const& __cordl_internal_get_curLayer() const;

  constexpr int32_t& __cordl_internal_get_curLayer();

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& __cordl_internal_get_direction() const;

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection& __cordl_internal_get_direction();

  constexpr ::UnityW<::GlobalNamespace::RoomEntrance> const& __cordl_internal_get_entrance() const;

  constexpr ::UnityW<::GlobalNamespace::RoomEntrance>& __cordl_internal_get_entrance();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_entranceAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_entranceAnchor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_forwardHallwayAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_forwardHallwayAnchor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_forwardHallwayArch() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_forwardHallwayArch();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_forwardHallwayBlock() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_forwardHallwayBlock();

  constexpr bool const& __cordl_internal_get_isUIActive() const;

  constexpr bool& __cordl_internal_get_isUIActive();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_layerChangeContainers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_layerChangeContainers();

  constexpr float_t const& __cordl_internal_get_layerSwitchTriggerThreshold() const;

  constexpr float_t& __cordl_internal_get_layerSwitchTriggerThreshold();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHallwayAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHallwayAnchor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftHallwayArch() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftHallwayArch();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftHallwayBlock() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftHallwayBlock();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_masterPlayer();

  constexpr ::UnityW<::GlobalNamespace::NavigationSignPost> const& __cordl_internal_get_navigationSignPost() const;

  constexpr ::UnityW<::GlobalNamespace::NavigationSignPost>& __cordl_internal_get_navigationSignPost();

  constexpr float_t const& __cordl_internal_get_nextInsideCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextInsideCheckTime();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerManagement() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerManagement();

  constexpr ::System::Random*& __cordl_internal_get_rand();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __cordl_internal_get_rand() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHallwayAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHallwayAnchor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightHallwayArch() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightHallwayArch();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightHallwayBlock() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightHallwayBlock();

  constexpr ::UnityW<::GlobalNamespace::RoomInfoDisplayUI> const& __cordl_internal_get_roomInfoDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::RoomInfoDisplayUI>& __cordl_internal_get_roomInfoDisplay();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spawnPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_spawnPositionOffset();

  constexpr float_t const& __cordl_internal_get_sqrDistToPlayer() const;

  constexpr float_t& __cordl_internal_get_sqrDistToPlayer();

  constexpr ::GlobalNamespace::Theme*& __cordl_internal_get_theme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Theme*> const& __cordl_internal_get_theme() const;

  constexpr void __cordl_internal_set_UICanvases(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set__isPlayerOutsideMap_k__BackingField(bool value);

  constexpr void __cordl_internal_set_atm(::UnityW<::GlobalNamespace::ATM> value);

  constexpr void __cordl_internal_set_attachedHallways(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Hallway>>* value);

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingHalfExtents(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_controllingMobileTravelAnchor(::UnityW<::GlobalNamespace::MobileTravelAnchor> value);

  constexpr void __cordl_internal_set_corridorRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_curLayer(int32_t value);

  constexpr void __cordl_internal_set_direction(::GlobalNamespace::__RoomManager__TravelDirection value);

  constexpr void __cordl_internal_set_entrance(::UnityW<::GlobalNamespace::RoomEntrance> value);

  constexpr void __cordl_internal_set_entranceAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_forwardHallwayAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_forwardHallwayArch(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_forwardHallwayBlock(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isUIActive(bool value);

  constexpr void __cordl_internal_set_layerChangeContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_layerSwitchTriggerThreshold(float_t value);

  constexpr void __cordl_internal_set_leftHallwayAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftHallwayArch(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_leftHallwayBlock(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_navigationSignPost(::UnityW<::GlobalNamespace::NavigationSignPost> value);

  constexpr void __cordl_internal_set_nextInsideCheckTime(float_t value);

  constexpr void __cordl_internal_set_playerManagement(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_rand(::System::Random* value);

  constexpr void __cordl_internal_set_rightHallwayAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightHallwayArch(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_rightHallwayBlock(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_roomInfoDisplay(::UnityW<::GlobalNamespace::RoomInfoDisplayUI> value);

  constexpr void __cordl_internal_set_spawnPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_sqrDistToPlayer(float_t value);

  constexpr void __cordl_internal_set_theme(::GlobalNamespace::Theme* value);

  /// @brief Method .ctor, addr 0x163a808, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isPlayerOutsideMap, addr 0x1639f7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPlayerOutsideMap();

  /// @brief Method set_isPlayerOutsideMap, addr 0x1639f84, size 0xc, virtual false, abstract: false, final false
  inline void set_isPlayerOutsideMap(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomLobby();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomLobby", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomLobby(RoomLobby&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomLobby", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomLobby(RoomLobby const&) = delete;

  /// @brief Field layerSwitchTriggerThreshold, offset: 0x18, size: 0x4, def value: None
  float_t ___layerSwitchTriggerThreshold;

  /// @brief Field curLayer, offset: 0x1c, size: 0x4, def value: None
  int32_t ___curLayer;

  /// @brief Field entranceAnchor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___entranceAnchor;

  /// @brief Field leftHallwayAnchor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftHallwayAnchor;

  /// @brief Field leftHallwayBlock, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___leftHallwayBlock;

  /// @brief Field forwardHallwayAnchor, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___forwardHallwayAnchor;

  /// @brief Field forwardHallwayBlock, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___forwardHallwayBlock;

  /// @brief Field rightHallwayAnchor, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightHallwayAnchor;

  /// @brief Field rightHallwayBlock, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___rightHallwayBlock;

  /// @brief Field attachedHallways, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Hallway>>* ___attachedHallways;

  /// @brief Field leftHallwayArch, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___leftHallwayArch;

  /// @brief Field forwardHallwayArch, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___forwardHallwayArch;

  /// @brief Field rightHallwayArch, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___rightHallwayArch;

  /// @brief Field entrance, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomEntrance> ___entrance;

  /// @brief Field boundingCenter, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingHalfExtents, offset: 0x8c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingHalfExtents;

  /// @brief Field nextInsideCheckTime, offset: 0x98, size: 0x4, def value: None
  float_t ___nextInsideCheckTime;

  /// @brief Field layerChangeContainers, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___layerChangeContainers;

  /// @brief Field corridorRenderer, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___corridorRenderer;

  /// @brief Field navigationSignPost, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NavigationSignPost> ___navigationSignPost;

  /// @brief Field playerManagement, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___playerManagement;

  /// @brief Field UICanvases, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___UICanvases;

  /// @brief Field roomInfoDisplay, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomInfoDisplayUI> ___roomInfoDisplay;

  /// @brief Field controllingMobileTravelAnchor, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileTravelAnchor> ___controllingMobileTravelAnchor;

  /// @brief Field spawnPositionOffset, offset: 0xd8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___spawnPositionOffset;

  /// @brief Field atm, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ATM> ___atm;

  /// @brief Field <isPlayerOutsideMap>k__BackingField, offset: 0xf0, size: 0x1, def value: None
  bool ____isPlayerOutsideMap_k__BackingField;

  /// @brief Field masterPlayer, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___masterPlayer;

  /// @brief Field theme, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::Theme* ___theme;

  /// @brief Field direction, offset: 0x108, size: 0x4, def value: None
  ::GlobalNamespace::__RoomManager__TravelDirection ___direction;

  /// @brief Field rand, offset: 0x110, size: 0x8, def value: None
  ::System::Random* ___rand;

  /// @brief Field sqrDistToPlayer, offset: 0x118, size: 0x4, def value: None
  float_t ___sqrDistToPlayer;

  /// @brief Field isUIActive, offset: 0x11c, size: 0x1, def value: None
  bool ___isUIActive;

  /// @brief Field distanceForFastTriggerUpdates offset 0xffffffff size 0x4
  static constexpr float_t distanceForFastTriggerUpdates{ 9.0 };

  /// @brief Field floorMatIndex offset 0xffffffff size 0x4
  static constexpr int32_t floorMatIndex{ static_cast<int32_t>(0x1) };

  /// @brief Field layerWhenPlayerInside offset 0xffffffff size 0x4
  static constexpr int32_t layerWhenPlayerInside{ static_cast<int32_t>(0x3) };

  /// @brief Field layerWhenPlayerOutside offset 0xffffffff size 0x4
  static constexpr int32_t layerWhenPlayerOutside{ static_cast<int32_t>(0xc) };

  /// @brief Field timeBetweenTriggerChecksFast offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenTriggerChecksFast{ 0.1 };

  /// @brief Field timeBetweenTriggerChecksSlow offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenTriggerChecksSlow{ 1.0 };

  /// @brief Field wallMatIndex offset 0xffffffff size 0x4
  static constexpr int32_t wallMatIndex{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomLobby, 0x120>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___layerSwitchTriggerThreshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___curLayer) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___entranceAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___leftHallwayAnchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___leftHallwayBlock) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___forwardHallwayAnchor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___forwardHallwayBlock) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___rightHallwayAnchor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___rightHallwayBlock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___attachedHallways) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___leftHallwayArch) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___forwardHallwayArch) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___rightHallwayArch) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___entrance) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___boundingCenter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___boundingHalfExtents) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___nextInsideCheckTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___layerChangeContainers) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___corridorRenderer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___navigationSignPost) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___playerManagement) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___UICanvases) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___roomInfoDisplay) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___controllingMobileTravelAnchor) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___spawnPositionOffset) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___atm) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ____isPlayerOutsideMap_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___masterPlayer) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___theme) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___direction) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___rand) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___sqrDistToPlayer) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomLobby, ___isUIActive) == 0x11c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomLobby);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomLobby*, "", "RoomLobby");
NEED_NO_BOX(::GlobalNamespace::__RoomLobby____c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomLobby____c__DisplayClass43_0*, "", "RoomLobby/<>c__DisplayClass43_0");
