#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayspaceData)
namespace GlobalNamespace {
struct MapLightData;
}
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class MapSyncData;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace GlobalNamespace {
class __PlayspaceData__OnMapObjectsUpdated;
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
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayspaceData;
}
namespace GlobalNamespace {
class __PlayspaceData__OnMapObjectsUpdated;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayspaceData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated);
// Type: ::OnMapObjectsUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayspaceData::OnMapObjectsUpdated*
class CORDL_TYPE __PlayspaceData__OnMapObjectsUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2f6fdac, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2f6fdcc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2f6fd98, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2f6a2f4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayspaceData__OnMapObjectsUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayspaceData__OnMapObjectsUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayspaceData__OnMapObjectsUpdated(__PlayspaceData__OnMapObjectsUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayspaceData__OnMapObjectsUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayspaceData__OnMapObjectsUpdated(__PlayspaceData__OnMapObjectsUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayspaceData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayspaceData*
class CORDL_TYPE PlayspaceData : public ::System::Object {
public:
  // Declarations
  using OnMapObjectsUpdated = ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated;

  /// @brief Field _x, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__x, put = __cordl_internal_set__x)) int32_t _x;

  /// @brief Field _y, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__y, put = __cordl_internal_set__y)) int32_t _y;

  /// @brief Field _z, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__z, put = __cordl_internal_set__z)) int32_t _z;

  /// @brief Field cellData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cellData, put = __cordl_internal_set_cellData)) Il2CppObject* cellData;

  /// @brief Field dimensions, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_dimensions, put = __cordl_internal_set_dimensions))::UnityEngine::Vector3Int dimensions;

  /// @brief Field mapObjects, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjects,
                      put = __cordl_internal_set_mapObjects))::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObject>>* mapObjects;

  /// @brief Field onMapObjectsUpdatedCallbacks, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onMapObjectsUpdatedCallbacks,
                      put = __cordl_internal_set_onMapObjectsUpdatedCallbacks))::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated* onMapObjectsUpdatedCallbacks;

  /// @brief Method AddMapObject, addr 0x2f6d77c, size 0x218, virtual false, abstract: false, final false
  inline bool AddMapObject(::GlobalNamespace::MapObject* mapObject, bool fromSync);

  /// @brief Method CalculateWorldStuffingCount, addr 0x2f6fb48, size 0x198, virtual false, abstract: false, final false
  inline int32_t CalculateWorldStuffingCount();

  /// @brief Method CanShiftAllMapObjects, addr 0x2f6ed54, size 0x2e0, virtual false, abstract: false, final false
  inline bool CanShiftAllMapObjects(::UnityEngine::Vector3Int shift);

  /// @brief Method ClearMapAndPreserveObjects, addr 0x2f6df6c, size 0x35c, virtual false, abstract: false, final false
  inline void ClearMapAndPreserveObjects(ByRef<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*> oldMapObjects);

  /// @brief Method ClearMapLocally, addr 0x2f6dbf0, size 0x37c, virtual false, abstract: false, final false
  inline void ClearMapLocally();

  /// @brief Method ExtractMapSave, addr 0x2f6f5a8, size 0x274, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MapSyncData* ExtractMapSave();

  /// @brief Method ExtractMapSave, addr 0x2f6f844, size 0x304, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MapSyncData* ExtractMapSave(ByRef<::ArrayW<::GlobalNamespace::MapObject*, ::Array<::GlobalNamespace::MapObject*>*>> mapObjects);

  /// @brief Method GenerateMapLightData, addr 0x2f6a490, size 0x3dc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MapLightData GenerateMapLightData();

  /// @brief Method GetCellData, addr 0x2f6e2c8, size 0x8, virtual false, abstract: false, final false
  inline Il2CppObject* GetCellData();

  /// @brief Method GetDimensions, addr 0x2f6fce0, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetDimensions();

  /// @brief Method GetLowestValidPlacementHeight, addr 0x2f6ec90, size 0xc4, virtual false, abstract: false, final false
  inline int32_t GetLowestValidPlacementHeight(::UnityEngine::Vector3Int placePosition);

  /// @brief Method IsCellEmptyAndWithinMap, addr 0x2f6e384, size 0xac, virtual false, abstract: false, final false
  inline bool IsCellEmptyAndWithinMap(::UnityEngine::Vector3Int cellPosition);

  /// @brief Method IsCellOccupied, addr 0x2f6e2d0, size 0xb4, virtual false, abstract: false, final false
  inline bool IsCellOccupied(::UnityEngine::Vector3Int cellPosition);

  /// @brief Method IsPlacementValid, addr 0x2f6ea48, size 0x15c, virtual false, abstract: false, final false
  inline bool IsPlacementValid(::UnityEngine::Vector3Int placePosition, ::UnityEngine::Vector3Int placedDimensions);

  /// @brief Method IsWithinMap, addr 0x2f6fcf0, size 0x4c, virtual false, abstract: false, final false
  inline bool IsWithinMap(::UnityEngine::Vector3Int cellPosition);

  /// @brief Method IsWithinMap, addr 0x2f6fd3c, size 0x5c, virtual false, abstract: false, final false
  inline bool IsWithinMap(::UnityEngine::Vector3Int placedPosition, ::UnityEngine::Vector3Int placedDimensions);

  static inline ::GlobalNamespace::PlayspaceData* New_ctor(::UnityEngine::Vector3Int dimensions);

  /// @brief Method RemoveMapObject, addr 0x2f6d994, size 0x25c, virtual false, abstract: false, final false
  inline bool RemoveMapObject(::GlobalNamespace::MapObject* mapObject);

  /// @brief Method SetStaticTerrainData, addr 0x2f6d510, size 0x26c, virtual false, abstract: false, final false
  inline void SetStaticTerrainData(Il2CppObject* staticTerrainData);

  /// @brief Method TryFindMapObject, addr 0x2f6f404, size 0x1a4, virtual false, abstract: false, final false
  inline bool TryFindMapObject(::StringW mapObjectKey, ByRef<::GlobalNamespace::MapObject*> mapObject);

  /// @brief Method TryFitMapObject, addr 0x2f6e430, size 0x138, virtual false, abstract: false, final false
  inline bool TryFitMapObject(::UnityEngine::Vector3Int attemptedPlacePositon, ::UnityEngine::Vector3Int placeDimensions, ::GlobalNamespace::__MapObject__Facing prioritizedDirection,
                              ByRef<::UnityEngine::Vector3Int> placedPosition);

  /// @brief Method TryFitRecursive, addr 0x2f6e568, size 0x4e0, virtual false, abstract: false, final false
  inline bool TryFitRecursive(::UnityEngine::Vector3Int attemptedPlacePosition, ::UnityEngine::Vector3Int placeDimensions, ::UnityEngine::Vector3 halfDimensions,
                              ::GlobalNamespace::__MapObject__Facing prioritizedDirection, int32_t attemptsRemaining, ByRef<::UnityEngine::Vector3Int> newPosition);

  /// @brief Method TryGetLowestValidPlacement, addr 0x2f6eba4, size 0xec, virtual false, abstract: false, final false
  inline bool TryGetLowestValidPlacement(::UnityEngine::Vector3Int placePosition, ::UnityEngine::Vector3Int placedDimensions, ByRef<::UnityEngine::Vector3Int> validPlacePosition);

  /// @brief Method TryGetMapObject, addr 0x2f6f034, size 0xd0, virtual false, abstract: false, final false
  inline bool TryGetMapObject(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::StringW accountID, ByRef<::GlobalNamespace::MapObject*> mapObject);

  /// @brief Method TryGetMapObject, addr 0x2f6f104, size 0xb0, virtual false, abstract: false, final false
  inline bool TryGetMapObject(::StringW key, ::UnityEngine::Vector3Int placedPosition, ByRef<::GlobalNamespace::MapObject*> mapObject);

  /// @brief Method TryGetMapObject, addr 0x2f6f1b4, size 0x88, virtual false, abstract: false, final false
  inline bool TryGetMapObject(::UnityEngine::Vector3Int placedPosition, ByRef<::GlobalNamespace::MapObject*> mapObject);

  /// @brief Method TryGetRandomMapObject, addr 0x2f6f23c, size 0x1c8, virtual false, abstract: false, final false
  inline bool TryGetRandomMapObject(ByRef<::GlobalNamespace::MapObject*> mapObject);

  constexpr int32_t const& __cordl_internal_get__x() const;

  constexpr int32_t& __cordl_internal_get__x();

  constexpr int32_t const& __cordl_internal_get__y() const;

  constexpr int32_t& __cordl_internal_get__y();

  constexpr int32_t const& __cordl_internal_get__z() const;

  constexpr int32_t& __cordl_internal_get__z();

  constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> const& __cordl_internal_get_cellData() const;

  constexpr Il2CppObject*& __cordl_internal_get_cellData();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_dimensions() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_dimensions();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObject>>*& __cordl_internal_get_mapObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObject>>*> const&
  __cordl_internal_get_mapObjects() const;

  constexpr ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*& __cordl_internal_get_onMapObjectsUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*> const& __cordl_internal_get_onMapObjectsUpdatedCallbacks() const;

  constexpr void __cordl_internal_set__x(int32_t value);

  constexpr void __cordl_internal_set__y(int32_t value);

  constexpr void __cordl_internal_set__z(int32_t value);

  constexpr void __cordl_internal_set_cellData(Il2CppObject* value);

  constexpr void __cordl_internal_set_dimensions(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_mapObjects(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObject>>* value);

  constexpr void __cordl_internal_set_onMapObjectsUpdatedCallbacks(::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated* value);

  /// @brief Method .ctor, addr 0x2f6d374, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3Int dimensions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayspaceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayspaceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayspaceData(PlayspaceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayspaceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayspaceData(PlayspaceData const&) = delete;

  /// @brief Field cellData, offset: 0x10, size: 0x8, def value: None
  Il2CppObject* ___cellData;

  /// @brief Field dimensions, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___dimensions;

  /// @brief Field mapObjects, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObject>>* ___mapObjects;

  /// @brief Field _x, offset: 0x30, size: 0x4, def value: None
  int32_t ____x;

  /// @brief Field _y, offset: 0x34, size: 0x4, def value: None
  int32_t ____y;

  /// @brief Field _z, offset: 0x38, size: 0x4, def value: None
  int32_t ____z;

  /// @brief Field onMapObjectsUpdatedCallbacks, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated* ___onMapObjectsUpdatedCallbacks;

  /// @brief Field emptyCell offset 0xffffffff size 0x1
  static constexpr uint8_t emptyCell{ static_cast<uint8_t>(0x0u) };

  /// @brief Field mapObjectCell offset 0xffffffff size 0x1
  static constexpr uint8_t mapObjectCell{ static_cast<uint8_t>(0x2u) };

  /// @brief Field staticTerrainCell offset 0xffffffff size 0x1
  static constexpr uint8_t staticTerrainCell{ static_cast<uint8_t>(0x1u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayspaceData, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayspaceData, ___cellData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayspaceData, ___dimensions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayspaceData, ___mapObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayspaceData, ____x) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayspaceData, ____y) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayspaceData, ____z) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayspaceData, ___onMapObjectsUpdatedCallbacks) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayspaceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayspaceData*, "", "PlayspaceData");
NEED_NO_BOX(::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*, "", "PlayspaceData/OnMapObjectsUpdated");
