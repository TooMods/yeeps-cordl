#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RoomData_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomData)
namespace GlobalNamespace {
class MapSyncData;
}
namespace GlobalNamespace {
class RoomDoorConfiguration;
}
namespace GlobalNamespace {
struct __RoomData__Type;
}
namespace GlobalNamespace {
struct __RoomDatabase__RoomDatabaseEntry;
}
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
}
namespace GlobalNamespace {
class __RoomMap__Node;
}
namespace System {
struct DateTime;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
struct __RoomData__Type;
}
namespace GlobalNamespace {
class RoomData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__RoomData__Type);
MARK_REF_PTR_T(::GlobalNamespace::RoomData);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomData::Type
struct CORDL_TYPE __RoomData__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____RoomData__Type_Unwrapped
  enum struct ____RoomData__Type_Unwrapped : int32_t {
    __E_unknown = static_cast<int32_t>(0x0),
    __E_publicRoom = static_cast<int32_t>(0x1),
    __E_privateRoom = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____RoomData__Type_Unwrapped() const noexcept {
    return static_cast<____RoomData__Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomData__Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RoomData__Type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field privateRoom value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__RoomData__Type const privateRoom;

  /// @brief Field publicRoom value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__RoomData__Type const publicRoom;

  /// @brief Field unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__RoomData__Type const unknown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomData__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomData__Type, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomData
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomData*
class CORDL_TYPE RoomData : public ::System::Object {
public:
  // Declarations
  using Type = ::GlobalNamespace::__RoomData__Type;

  /// @brief Field <autoCycleTimestamp>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__autoCycleTimestamp_k__BackingField,
                      put = __cordl_internal_set__autoCycleTimestamp_k__BackingField))::System::DateTime _autoCycleTimestamp_k__BackingField;

  /// @brief Field <autoCycleTransitionStartTimestamp>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__autoCycleTransitionStartTimestamp_k__BackingField,
                      put = __cordl_internal_set__autoCycleTransitionStartTimestamp_k__BackingField))::System::DateTime _autoCycleTransitionStartTimestamp_k__BackingField;

  /// @brief Field <dimensions>k__BackingField, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__dimensions_k__BackingField, put = __cordl_internal_set__dimensions_k__BackingField))::UnityEngine::Vector3Int _dimensions_k__BackingField;

  /// @brief Field <downDoor>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__downDoor_k__BackingField, put = __cordl_internal_set__downDoor_k__BackingField))::GlobalNamespace::RoomDoorConfiguration* _downDoor_k__BackingField;

  /// @brief Field <floorDepth>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__floorDepth_k__BackingField, put = __cordl_internal_set__floorDepth_k__BackingField)) int32_t _floorDepth_k__BackingField;

  /// @brief Field <hasDownHallway>k__BackingField, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get__hasDownHallway_k__BackingField, put = __cordl_internal_set__hasDownHallway_k__BackingField)) bool _hasDownHallway_k__BackingField;

  /// @brief Field <hasLeftHallway>k__BackingField, offset 0x73, size 0x1
  __declspec(property(get = __cordl_internal_get__hasLeftHallway_k__BackingField, put = __cordl_internal_set__hasLeftHallway_k__BackingField)) bool _hasLeftHallway_k__BackingField;

  /// @brief Field <hasPermissionToModify>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__hasPermissionToModify_k__BackingField,
                      put = __cordl_internal_set__hasPermissionToModify_k__BackingField)) bool _hasPermissionToModify_k__BackingField;

  /// @brief Field <hasRightHallway>k__BackingField, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get__hasRightHallway_k__BackingField, put = __cordl_internal_set__hasRightHallway_k__BackingField)) bool _hasRightHallway_k__BackingField;

  /// @brief Field <hasUpHallway>k__BackingField, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__hasUpHallway_k__BackingField, put = __cordl_internal_set__hasUpHallway_k__BackingField)) bool _hasUpHallway_k__BackingField;

  /// @brief Field <hasValidAutoCycleTimestamp>k__BackingField, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__hasValidAutoCycleTimestamp_k__BackingField,
                      put = __cordl_internal_set__hasValidAutoCycleTimestamp_k__BackingField)) bool _hasValidAutoCycleTimestamp_k__BackingField;

  /// @brief Field <isAutoCycling>k__BackingField, offset 0x76, size 0x1
  __declspec(property(get = __cordl_internal_get__isAutoCycling_k__BackingField, put = __cordl_internal_set__isAutoCycling_k__BackingField)) bool _isAutoCycling_k__BackingField;

  /// @brief Field <isCreativeMode>k__BackingField, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get__isCreativeMode_k__BackingField, put = __cordl_internal_set__isCreativeMode_k__BackingField)) bool _isCreativeMode_k__BackingField;

  /// @brief Field <isModeLocked>k__BackingField, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get__isModeLocked_k__BackingField, put = __cordl_internal_set__isModeLocked_k__BackingField)) bool _isModeLocked_k__BackingField;

  /// @brief Field <leftDoor>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__leftDoor_k__BackingField, put = __cordl_internal_set__leftDoor_k__BackingField))::GlobalNamespace::RoomDoorConfiguration* _leftDoor_k__BackingField;

  /// @brief Field <lobbyDirection>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__lobbyDirection_k__BackingField,
                      put = __cordl_internal_set__lobbyDirection_k__BackingField))::GlobalNamespace::__RoomManager__TravelDirection _lobbyDirection_k__BackingField;

  /// @brief Field <mapNode>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mapNode_k__BackingField, put = __cordl_internal_set__mapNode_k__BackingField))::GlobalNamespace::__RoomMap__Node* _mapNode_k__BackingField;

  /// @brief Field <rightDoor>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__rightDoor_k__BackingField,
                      put = __cordl_internal_set__rightDoor_k__BackingField))::GlobalNamespace::RoomDoorConfiguration* _rightDoor_k__BackingField;

  /// @brief Field <roomKey>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__roomKey_k__BackingField, put = __cordl_internal_set__roomKey_k__BackingField))::StringW _roomKey_k__BackingField;

  /// @brief Field <roomName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__roomName_k__BackingField, put = __cordl_internal_set__roomName_k__BackingField))::StringW _roomName_k__BackingField;

  /// @brief Field <type>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__type_k__BackingField, put = __cordl_internal_set__type_k__BackingField))::GlobalNamespace::__RoomData__Type _type_k__BackingField;

  /// @brief Field <upDoor>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__upDoor_k__BackingField, put = __cordl_internal_set__upDoor_k__BackingField))::GlobalNamespace::RoomDoorConfiguration* _upDoor_k__BackingField;

  __declspec(property(get = get_autoCycleTimestamp, put = set_autoCycleTimestamp))::System::DateTime autoCycleTimestamp;

  __declspec(property(get = get_autoCycleTransitionStartTimestamp, put = set_autoCycleTransitionStartTimestamp))::System::DateTime autoCycleTransitionStartTimestamp;

  __declspec(property(get = get_dimensions, put = set_dimensions))::UnityEngine::Vector3Int dimensions;

  __declspec(property(get = get_downDoor, put = set_downDoor))::GlobalNamespace::RoomDoorConfiguration* downDoor;

  __declspec(property(get = get_floorDepth, put = set_floorDepth)) int32_t floorDepth;

  __declspec(property(get = get_hasDownHallway, put = set_hasDownHallway)) bool hasDownHallway;

  __declspec(property(get = get_hasLeftHallway, put = set_hasLeftHallway)) bool hasLeftHallway;

  __declspec(property(get = get_hasPermissionToModify, put = set_hasPermissionToModify)) bool hasPermissionToModify;

  __declspec(property(get = get_hasRightHallway, put = set_hasRightHallway)) bool hasRightHallway;

  __declspec(property(get = get_hasUpHallway, put = set_hasUpHallway)) bool hasUpHallway;

  __declspec(property(get = get_hasValidAutoCycleTimestamp, put = set_hasValidAutoCycleTimestamp)) bool hasValidAutoCycleTimestamp;

  __declspec(property(get = get_isAutoCycling, put = set_isAutoCycling)) bool isAutoCycling;

  __declspec(property(get = get_isCreativeMode, put = set_isCreativeMode)) bool isCreativeMode;

  __declspec(property(get = get_isModeLocked, put = set_isModeLocked)) bool isModeLocked;

  __declspec(property(get = get_isSolo)) bool isSolo;

  __declspec(property(get = get_leftDoor, put = set_leftDoor))::GlobalNamespace::RoomDoorConfiguration* leftDoor;

  __declspec(property(get = get_lobbyDirection, put = set_lobbyDirection))::GlobalNamespace::__RoomManager__TravelDirection lobbyDirection;

  __declspec(property(get = get_mapNode, put = set_mapNode))::GlobalNamespace::__RoomMap__Node* mapNode;

  /// @brief Field mapPosition, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mapPosition, put = __cordl_internal_set_mapPosition))::UnityEngine::Vector2Int mapPosition;

  /// @brief Field minDifferenceBetweenFloorDepthAndDimensions, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_minDifferenceBetweenFloorDepthAndDimensions,
                             put = setStaticF_minDifferenceBetweenFloorDepthAndDimensions)) int32_t minDifferenceBetweenFloorDepthAndDimensions;

  __declspec(property(get = get_rightDoor, put = set_rightDoor))::GlobalNamespace::RoomDoorConfiguration* rightDoor;

  __declspec(property(get = get_roomKey, put = set_roomKey))::StringW roomKey;

  __declspec(property(get = get_roomName, put = set_roomName))::StringW roomName;

  /// @brief Field savedMap, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_savedMap, put = __cordl_internal_set_savedMap))::GlobalNamespace::MapSyncData* savedMap;

  __declspec(property(get = get_supportsCodes)) bool supportsCodes;

  __declspec(property(get = get_themeKey))::StringW themeKey;

  __declspec(property(get = get_type, put = set_type))::GlobalNamespace::__RoomData__Type type;

  __declspec(property(get = get_upDoor, put = set_upDoor))::GlobalNamespace::RoomDoorConfiguration* upDoor;

  /// @brief Method CanTravelInDirection, addr 0x1633138, size 0x84, virtual false, abstract: false, final false
  inline bool CanTravelInDirection(::GlobalNamespace::__RoomManager__TravelDirection direction);

  /// @brief Method GetDimensions, addr 0x1633118, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetDimensions();

  /// @brief Method GetPhotonLobbyName, addr 0x16331c4, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW GetPhotonLobbyName();

  /// @brief Method GetRoomDisplayName, addr 0x1633880, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW GetRoomDisplayName();

  /// @brief Method GetSavedMap, addr 0x16331bc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MapSyncData* GetSavedMap();

  /// @brief Method HasLobby, addr 0x1633128, size 0x10, virtual false, abstract: false, final false
  inline bool HasLobby();

  /// @brief Method IsFloorDepthValid, addr 0x16334c0, size 0x7c, virtual false, abstract: false, final false
  inline bool IsFloorDepthValid(int32_t depth);

  /// @brief Method IsInTransitionWindow, addr 0x163338c, size 0x134, virtual false, abstract: false, final false
  inline bool IsInTransitionWindow(ByRef<float_t> timeIntoWindow);

  static inline ::GlobalNamespace::RoomData* New_ctor(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry roomDatabaseEntry, ::GlobalNamespace::__RoomMap__Node* roomMapNode,
                                                      ::GlobalNamespace::RoomData* cachedRoomData);

  /// @brief Method SetAutoSwitchTimestamp, addr 0x1632f98, size 0x110, virtual false, abstract: false, final false
  inline void SetAutoSwitchTimestamp(::System::DateTime newTimestamp);

  /// @brief Method SetAutoSwitchTimestampInvalid, addr 0x16330a8, size 0x70, virtual false, abstract: false, final false
  inline void SetAutoSwitchTimestampInvalid();

  /// @brief Method SetFloorDepth, addr 0x16332d0, size 0x8, virtual false, abstract: false, final false
  inline void SetFloorDepth(int32_t newFloorDepth);

  /// @brief Method SetIsCreativeMode, addr 0x16332c4, size 0xc, virtual false, abstract: false, final false
  inline void SetIsCreativeMode(bool newIsCreative);

  /// @brief Method ShouldAutoSwitchToCreativeMode, addr 0x16332d8, size 0xb4, virtual false, abstract: false, final false
  inline bool ShouldAutoSwitchToCreativeMode();

  /// @brief Method ToString, addr 0x16335cc, size 0x2b4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParsePrivateRoomOwnerAccountID, addr 0x1632ec0, size 0x98, virtual false, abstract: false, final false
  inline bool TryParsePrivateRoomOwnerAccountID(ByRef<::StringW> roomOwnerAccountID);

  /// @brief Method ValidateFloorDepth, addr 0x1632cb0, size 0xc8, virtual false, abstract: false, final false
  inline int32_t ValidateFloorDepth(int32_t floorDepth, ByRef<bool> wasChanged);

  constexpr ::System::DateTime const& __cordl_internal_get__autoCycleTimestamp_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__autoCycleTimestamp_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__autoCycleTransitionStartTimestamp_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__autoCycleTransitionStartTimestamp_k__BackingField();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get__dimensions_k__BackingField() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get__dimensions_k__BackingField();

  constexpr ::GlobalNamespace::RoomDoorConfiguration*& __cordl_internal_get__downDoor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomDoorConfiguration*> const& __cordl_internal_get__downDoor_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__floorDepth_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__floorDepth_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasDownHallway_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasDownHallway_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasLeftHallway_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasLeftHallway_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasPermissionToModify_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasPermissionToModify_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasRightHallway_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasRightHallway_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasUpHallway_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasUpHallway_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasValidAutoCycleTimestamp_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasValidAutoCycleTimestamp_k__BackingField();

  constexpr bool const& __cordl_internal_get__isAutoCycling_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isAutoCycling_k__BackingField();

  constexpr bool const& __cordl_internal_get__isCreativeMode_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isCreativeMode_k__BackingField();

  constexpr bool const& __cordl_internal_get__isModeLocked_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isModeLocked_k__BackingField();

  constexpr ::GlobalNamespace::RoomDoorConfiguration*& __cordl_internal_get__leftDoor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomDoorConfiguration*> const& __cordl_internal_get__leftDoor_k__BackingField() const;

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& __cordl_internal_get__lobbyDirection_k__BackingField() const;

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection& __cordl_internal_get__lobbyDirection_k__BackingField();

  constexpr ::GlobalNamespace::__RoomMap__Node*& __cordl_internal_get__mapNode_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& __cordl_internal_get__mapNode_k__BackingField() const;

  constexpr ::GlobalNamespace::RoomDoorConfiguration*& __cordl_internal_get__rightDoor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomDoorConfiguration*> const& __cordl_internal_get__rightDoor_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__roomKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__roomKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__roomName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__roomName_k__BackingField();

  constexpr ::GlobalNamespace::__RoomData__Type const& __cordl_internal_get__type_k__BackingField() const;

  constexpr ::GlobalNamespace::__RoomData__Type& __cordl_internal_get__type_k__BackingField();

  constexpr ::GlobalNamespace::RoomDoorConfiguration*& __cordl_internal_get__upDoor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomDoorConfiguration*> const& __cordl_internal_get__upDoor_k__BackingField() const;

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_mapPosition() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_mapPosition();

  constexpr ::GlobalNamespace::MapSyncData*& __cordl_internal_get_savedMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MapSyncData*> const& __cordl_internal_get_savedMap() const;

  constexpr void __cordl_internal_set__autoCycleTimestamp_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__autoCycleTransitionStartTimestamp_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__dimensions_k__BackingField(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set__downDoor_k__BackingField(::GlobalNamespace::RoomDoorConfiguration* value);

  constexpr void __cordl_internal_set__floorDepth_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__hasDownHallway_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasLeftHallway_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasPermissionToModify_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasRightHallway_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasUpHallway_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasValidAutoCycleTimestamp_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isAutoCycling_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isCreativeMode_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isModeLocked_k__BackingField(bool value);

  constexpr void __cordl_internal_set__leftDoor_k__BackingField(::GlobalNamespace::RoomDoorConfiguration* value);

  constexpr void __cordl_internal_set__lobbyDirection_k__BackingField(::GlobalNamespace::__RoomManager__TravelDirection value);

  constexpr void __cordl_internal_set__mapNode_k__BackingField(::GlobalNamespace::__RoomMap__Node* value);

  constexpr void __cordl_internal_set__rightDoor_k__BackingField(::GlobalNamespace::RoomDoorConfiguration* value);

  constexpr void __cordl_internal_set__roomKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__roomName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__type_k__BackingField(::GlobalNamespace::__RoomData__Type value);

  constexpr void __cordl_internal_set__upDoor_k__BackingField(::GlobalNamespace::RoomDoorConfiguration* value);

  constexpr void __cordl_internal_set_mapPosition(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_savedMap(::GlobalNamespace::MapSyncData* value);

  /// @brief Method .ctor, addr 0x1632340, size 0x7f8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry roomDatabaseEntry, ::GlobalNamespace::__RoomMap__Node* roomMapNode, ::GlobalNamespace::RoomData* cachedRoomData);

  static inline int32_t getStaticF_minDifferenceBetweenFloorDepthAndDimensions();

  /// @brief Method get_autoCycleTimestamp, addr 0x163229c, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_autoCycleTimestamp();

  /// @brief Method get_autoCycleTransitionStartTimestamp, addr 0x16322c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_autoCycleTransitionStartTimestamp();

  /// @brief Method get_dimensions, addr 0x1632160, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_dimensions();

  /// @brief Method get_downDoor, addr 0x16321f0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RoomDoorConfiguration* get_downDoor();

  /// @brief Method get_floorDepth, addr 0x163217c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_floorDepth();

  /// @brief Method get_hasDownHallway, addr 0x1632238, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasDownHallway();

  /// @brief Method get_hasLeftHallway, addr 0x163224c, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasLeftHallway();

  /// @brief Method get_hasPermissionToModify, addr 0x16321ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasPermissionToModify();

  /// @brief Method get_hasRightHallway, addr 0x1632224, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasRightHallway();

  /// @brief Method get_hasUpHallway, addr 0x1632210, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasUpHallway();

  /// @brief Method get_hasValidAutoCycleTimestamp, addr 0x16322ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasValidAutoCycleTimestamp();

  /// @brief Method get_isAutoCycling, addr 0x1632288, size 0x8, virtual false, abstract: false, final false
  inline bool get_isAutoCycling();

  /// @brief Method get_isCreativeMode, addr 0x1632260, size 0x8, virtual false, abstract: false, final false
  inline bool get_isCreativeMode();

  /// @brief Method get_isModeLocked, addr 0x1632274, size 0x8, virtual false, abstract: false, final false
  inline bool get_isModeLocked();

  /// @brief Method get_isSolo, addr 0x16322d0, size 0x60, virtual false, abstract: false, final false
  inline bool get_isSolo();

  /// @brief Method get_leftDoor, addr 0x1632200, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RoomDoorConfiguration* get_leftDoor();

  /// @brief Method get_lobbyDirection, addr 0x16321c0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RoomManager__TravelDirection get_lobbyDirection();

  /// @brief Method get_mapNode, addr 0x163218c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RoomMap__Node* get_mapNode();

  /// @brief Method get_rightDoor, addr 0x16321e0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RoomDoorConfiguration* get_rightDoor();

  /// @brief Method get_roomKey, addr 0x1632140, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_roomKey();

  /// @brief Method get_roomName, addr 0x1632150, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_roomName();

  /// @brief Method get_supportsCodes, addr 0x1632330, size 0x10, virtual false, abstract: false, final false
  inline bool get_supportsCodes();

  /// @brief Method get_themeKey, addr 0x162f1a8, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_themeKey();

  /// @brief Method get_type, addr 0x163219c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RoomData__Type get_type();

  /// @brief Method get_upDoor, addr 0x16321d0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RoomDoorConfiguration* get_upDoor();

  static inline void setStaticF_minDifferenceBetweenFloorDepthAndDimensions(int32_t value);

  /// @brief Method set_autoCycleTimestamp, addr 0x16322a4, size 0x8, virtual false, abstract: false, final false
  inline void set_autoCycleTimestamp(::System::DateTime value);

  /// @brief Method set_autoCycleTransitionStartTimestamp, addr 0x16322c8, size 0x8, virtual false, abstract: false, final false
  inline void set_autoCycleTransitionStartTimestamp(::System::DateTime value);

  /// @brief Method set_dimensions, addr 0x1632170, size 0xc, virtual false, abstract: false, final false
  inline void set_dimensions(::UnityEngine::Vector3Int value);

  /// @brief Method set_downDoor, addr 0x16321f8, size 0x8, virtual false, abstract: false, final false
  inline void set_downDoor(::GlobalNamespace::RoomDoorConfiguration* value);

  /// @brief Method set_floorDepth, addr 0x1632184, size 0x8, virtual false, abstract: false, final false
  inline void set_floorDepth(int32_t value);

  /// @brief Method set_hasDownHallway, addr 0x1632240, size 0xc, virtual false, abstract: false, final false
  inline void set_hasDownHallway(bool value);

  /// @brief Method set_hasLeftHallway, addr 0x1632254, size 0xc, virtual false, abstract: false, final false
  inline void set_hasLeftHallway(bool value);

  /// @brief Method set_hasPermissionToModify, addr 0x16321b4, size 0xc, virtual false, abstract: false, final false
  inline void set_hasPermissionToModify(bool value);

  /// @brief Method set_hasRightHallway, addr 0x163222c, size 0xc, virtual false, abstract: false, final false
  inline void set_hasRightHallway(bool value);

  /// @brief Method set_hasUpHallway, addr 0x1632218, size 0xc, virtual false, abstract: false, final false
  inline void set_hasUpHallway(bool value);

  /// @brief Method set_hasValidAutoCycleTimestamp, addr 0x16322b4, size 0xc, virtual false, abstract: false, final false
  inline void set_hasValidAutoCycleTimestamp(bool value);

  /// @brief Method set_isAutoCycling, addr 0x1632290, size 0xc, virtual false, abstract: false, final false
  inline void set_isAutoCycling(bool value);

  /// @brief Method set_isCreativeMode, addr 0x1632268, size 0xc, virtual false, abstract: false, final false
  inline void set_isCreativeMode(bool value);

  /// @brief Method set_isModeLocked, addr 0x163227c, size 0xc, virtual false, abstract: false, final false
  inline void set_isModeLocked(bool value);

  /// @brief Method set_leftDoor, addr 0x1632208, size 0x8, virtual false, abstract: false, final false
  inline void set_leftDoor(::GlobalNamespace::RoomDoorConfiguration* value);

  /// @brief Method set_lobbyDirection, addr 0x16321c8, size 0x8, virtual false, abstract: false, final false
  inline void set_lobbyDirection(::GlobalNamespace::__RoomManager__TravelDirection value);

  /// @brief Method set_mapNode, addr 0x1632194, size 0x8, virtual false, abstract: false, final false
  inline void set_mapNode(::GlobalNamespace::__RoomMap__Node* value);

  /// @brief Method set_rightDoor, addr 0x16321e8, size 0x8, virtual false, abstract: false, final false
  inline void set_rightDoor(::GlobalNamespace::RoomDoorConfiguration* value);

  /// @brief Method set_roomKey, addr 0x1632148, size 0x8, virtual false, abstract: false, final false
  inline void set_roomKey(::StringW value);

  /// @brief Method set_roomName, addr 0x1632158, size 0x8, virtual false, abstract: false, final false
  inline void set_roomName(::StringW value);

  /// @brief Method set_type, addr 0x16321a4, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::GlobalNamespace::__RoomData__Type value);

  /// @brief Method set_upDoor, addr 0x16321d8, size 0x8, virtual false, abstract: false, final false
  inline void set_upDoor(::GlobalNamespace::RoomDoorConfiguration* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomData(RoomData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomData(RoomData const&) = delete;

  /// @brief Field <roomKey>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____roomKey_k__BackingField;

  /// @brief Field <roomName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____roomName_k__BackingField;

  /// @brief Field mapPosition, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___mapPosition;

  /// @brief Field <dimensions>k__BackingField, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ____dimensions_k__BackingField;

  /// @brief Field <floorDepth>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____floorDepth_k__BackingField;

  /// @brief Field <mapNode>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMap__Node* ____mapNode_k__BackingField;

  /// @brief Field <type>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__RoomData__Type ____type_k__BackingField;

  /// @brief Field <hasPermissionToModify>k__BackingField, offset: 0x44, size: 0x1, def value: None
  bool ____hasPermissionToModify_k__BackingField;

  /// @brief Field <lobbyDirection>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__RoomManager__TravelDirection ____lobbyDirection_k__BackingField;

  /// @brief Field <upDoor>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::RoomDoorConfiguration* ____upDoor_k__BackingField;

  /// @brief Field <rightDoor>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::RoomDoorConfiguration* ____rightDoor_k__BackingField;

  /// @brief Field <downDoor>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::RoomDoorConfiguration* ____downDoor_k__BackingField;

  /// @brief Field <leftDoor>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::RoomDoorConfiguration* ____leftDoor_k__BackingField;

  /// @brief Field <hasUpHallway>k__BackingField, offset: 0x70, size: 0x1, def value: None
  bool ____hasUpHallway_k__BackingField;

  /// @brief Field <hasRightHallway>k__BackingField, offset: 0x71, size: 0x1, def value: None
  bool ____hasRightHallway_k__BackingField;

  /// @brief Field <hasDownHallway>k__BackingField, offset: 0x72, size: 0x1, def value: None
  bool ____hasDownHallway_k__BackingField;

  /// @brief Field <hasLeftHallway>k__BackingField, offset: 0x73, size: 0x1, def value: None
  bool ____hasLeftHallway_k__BackingField;

  /// @brief Field <isCreativeMode>k__BackingField, offset: 0x74, size: 0x1, def value: None
  bool ____isCreativeMode_k__BackingField;

  /// @brief Field <isModeLocked>k__BackingField, offset: 0x75, size: 0x1, def value: None
  bool ____isModeLocked_k__BackingField;

  /// @brief Field <isAutoCycling>k__BackingField, offset: 0x76, size: 0x1, def value: None
  bool ____isAutoCycling_k__BackingField;

  /// @brief Field <autoCycleTimestamp>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::System::DateTime ____autoCycleTimestamp_k__BackingField;

  /// @brief Field <hasValidAutoCycleTimestamp>k__BackingField, offset: 0x80, size: 0x1, def value: None
  bool ____hasValidAutoCycleTimestamp_k__BackingField;

  /// @brief Field <autoCycleTransitionStartTimestamp>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::DateTime ____autoCycleTransitionStartTimestamp_k__BackingField;

  /// @brief Field savedMap, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::MapSyncData* ___savedMap;

  /// @brief Field autoCycleTransitionDurationSeconds offset 0xffffffff size 0x4
  static constexpr float_t autoCycleTransitionDurationSeconds{ 10.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomData, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____roomKey_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____roomName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ___mapPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____dimensions_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____floorDepth_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____mapNode_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____type_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____hasPermissionToModify_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____lobbyDirection_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____upDoor_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____rightDoor_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____downDoor_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____leftDoor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____hasUpHallway_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____hasRightHallway_k__BackingField) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____hasDownHallway_k__BackingField) == 0x72, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____hasLeftHallway_k__BackingField) == 0x73, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____isCreativeMode_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____isModeLocked_k__BackingField) == 0x75, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____isAutoCycling_k__BackingField) == 0x76, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____autoCycleTimestamp_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____hasValidAutoCycleTimestamp_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ____autoCycleTransitionStartTimestamp_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomData, ___savedMap) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomData__Type, "", "RoomData/Type");
NEED_NO_BOX(::GlobalNamespace::RoomData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomData*, "", "RoomData");
