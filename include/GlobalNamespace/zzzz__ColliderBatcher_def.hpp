#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColliderBatcher)
namespace GlobalNamespace {
class ColliderBatch;
}
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
struct __ColliderBatcher__ColliderBatchData;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class PhysicMaterial;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class ColliderBatcher;
}
namespace GlobalNamespace {
struct __ColliderBatcher__ColliderBatchData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColliderBatcher);
MARK_VAL_T(::GlobalNamespace::__ColliderBatcher__ColliderBatchData);
// Type: ::ColliderBatchData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ColliderBatcher::ColliderBatchData
struct CORDL_TYPE __ColliderBatcher__ColliderBatchData {
public:
  // Declarations
  __declspec(property(get = get_upSlopeFacing, put = set_upSlopeFacing))::GlobalNamespace::__MapObject__Facing upSlopeFacing;

  /// @brief Method .ctor, addr 0x275ec44, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__ColliderBatcher__ColliderBatchData source, ::StringW key, ::GlobalNamespace::__MapObject__Facing upSlopeFacing);

  /// @brief Method get_upSlopeFacing, addr 0x276104c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MapObject__Facing get_upSlopeFacing();

  /// @brief Method set_upSlopeFacing, addr 0x2761054, size 0x8, virtual false, abstract: false, final false
  inline void set_upSlopeFacing(::GlobalNamespace::__MapObject__Facing value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColliderBatcher__ColliderBatchData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "physicMaterial", ty: "::UnityW<::UnityEngine::PhysicMaterial>", modifiers: "",
  // def_value: None }, CppParam { name: "footstepSoundKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "addedTopThickness", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "isSlopes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "slopeSize", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name:
  // "_upSlopeFacing_k__BackingField", ty: "::GlobalNamespace::__MapObject__Facing", modifiers: "", def_value: None }]
  constexpr __ColliderBatcher__ColliderBatchData(::StringW key, ::UnityW<::UnityEngine::PhysicMaterial> physicMaterial, ::StringW footstepSoundKey, float_t addedTopThickness, bool isSlopes,
                                                 ::UnityEngine::Vector3Int slopeSize, ::GlobalNamespace::__MapObject__Facing _upSlopeFacing_k__BackingField) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field physicMaterial, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::PhysicMaterial> physicMaterial;

  /// @brief Field footstepSoundKey, offset: 0x10, size: 0x8, def value: None
  ::StringW footstepSoundKey;

  /// @brief Field addedTopThickness, offset: 0x18, size: 0x4, def value: None
  float_t addedTopThickness;

  /// @brief Field isSlopes, offset: 0x1c, size: 0x1, def value: None
  bool isSlopes;

  /// @brief Field slopeSize, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3Int slopeSize;

  /// @brief Field <upSlopeFacing>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__MapObject__Facing _upSlopeFacing_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ColliderBatcher__ColliderBatchData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatcher__ColliderBatchData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatcher__ColliderBatchData, physicMaterial) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatcher__ColliderBatchData, footstepSoundKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatcher__ColliderBatchData, addedTopThickness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatcher__ColliderBatchData, isSlopes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatcher__ColliderBatchData, slopeSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatcher__ColliderBatchData, _upSlopeFacing_k__BackingField) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ColliderBatcher
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColliderBatcher*
class CORDL_TYPE ColliderBatcher : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::ColliderBatcher>> {
public:
  // Declarations
  using ColliderBatchData = ::GlobalNamespace::__ColliderBatcher__ColliderBatchData;

  /// @brief Field batches, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_batches, put = __cordl_internal_set_batches))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColliderBatch*>* batches;

  /// @brief Field colliderBatchData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_colliderBatchData,
                             put = setStaticF_colliderBatchData))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ColliderBatcher__ColliderBatchData>* colliderBatchData;

  /// @brief Field colliderBatchDataRaw, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_colliderBatchDataRaw,
                      put = __cordl_internal_set_colliderBatchDataRaw))::ArrayW<::GlobalNamespace::__ColliderBatcher__ColliderBatchData,
                                                                                ::Array<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>*> colliderBatchDataRaw;

  /// @brief Method AddCollidersForLayer, addr 0x275f744, size 0x300, virtual false, abstract: false, final false
  static inline void AddCollidersForLayer(int32_t layerIndex, Il2CppObject* occupiedCells, int32_t occupiedCellCount,
                                          ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* boxes);

  /// @brief Method CalculateColliderBoxes, addr 0x275e624, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*
  CalculateColliderBoxes(Il2CppObject* occupiedCells, ::ArrayW<bool, ::Array<bool>*> yLayerHasOccupiedCells, int32_t occupiedCellCount);

  /// @brief Method CalculateColliderSlopes, addr 0x275e228, size 0x3fc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*
  CalculateColliderSlopes(::GlobalNamespace::__ColliderBatcher__ColliderBatchData batchData, Il2CppObject* occupiedCells, ::ArrayW<bool, ::Array<bool>*> yLayerHasOccupiedCells,
                          int32_t occupiedCellCount);

  /// @brief Method DeleteAll, addr 0x275f018, size 0x244, virtual false, abstract: false, final false
  inline void DeleteAll();

  /// @brief Method DeleteAllSilent, addr 0x275f25c, size 0x244, virtual false, abstract: false, final false
  inline void DeleteAllSilent();

  /// @brief Method GenerateColliderObjectFromBoxes, addr 0x275d3d8, size 0x338, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject>
  GenerateColliderObjectFromBoxes(::GlobalNamespace::__ColliderBatcher__ColliderBatchData batchData, int32_t layer, ::UnityEngine::Vector3Int dimensions,
                                  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* boxes);

  /// @brief Method GenerateColliderObjectFromSlopes, addr 0x275ce58, size 0x580, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject>
  GenerateColliderObjectFromSlopes(::GlobalNamespace::__ColliderBatcher__ColliderBatchData batchData, int32_t layer, ::UnityEngine::Vector3Int dimensions,
                                   ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes);

  /// @brief Method GetColliderBatchData, addr 0x275ec94, size 0x12c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ColliderBatcher__ColliderBatchData GetColliderBatchData(::StringW key);

  /// @brief Method InitializeColliderBatchData, addr 0x275e70c, size 0x538, virtual false, abstract: false, final false
  static inline void InitializeColliderBatchData();

  /// @brief Method MergeRectanglesOnX, addr 0x275fa44, size 0x258, virtual false, abstract: false, final false
  static inline int32_t MergeRectanglesOnX(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* rectangles);

  /// @brief Method MergeRectanglesOnZ, addr 0x275fc9c, size 0x258, virtual false, abstract: false, final false
  static inline int32_t MergeRectanglesOnZ(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* rectangles);

  /// @brief Method MergeSlopesOnXNegative, addr 0x2760190, size 0x2e0, virtual false, abstract: false, final false
  static inline int32_t MergeSlopesOnXNegative(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes, int32_t slopeSizeXZ,
                                               int32_t slopeSizeY);

  /// @brief Method MergeSlopesOnXPositive, addr 0x275fef4, size 0x29c, virtual false, abstract: false, final false
  static inline int32_t MergeSlopesOnXPositive(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes, int32_t slopeSizeXZ,
                                               int32_t slopeSizeY);

  /// @brief Method MergeSlopesOnZNegative, addr 0x276070c, size 0x318, virtual false, abstract: false, final false
  static inline int32_t MergeSlopesOnZNegative(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes, int32_t slopeSizeXZ,
                                               int32_t slopeSizeY);

  /// @brief Method MergeSlopesOnZPositive, addr 0x2760470, size 0x29c, virtual false, abstract: false, final false
  static inline int32_t MergeSlopesOnZPositive(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes, int32_t slopeSizeXZ,
                                               int32_t slopeSizeY);

  /// @brief Method MergeSlopesPerpendicularOnX, addr 0x2760cf0, size 0x2cc, virtual false, abstract: false, final false
  static inline int32_t MergeSlopesPerpendicularOnX(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes, int32_t slopeSizeXZ,
                                                    int32_t slopeSizeY);

  /// @brief Method MergeSlopesPerpendicularOnZ, addr 0x2760a24, size 0x2cc, virtual false, abstract: false, final false
  static inline int32_t MergeSlopesPerpendicularOnZ(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* slopes, int32_t slopeSizeXZ,
                                                    int32_t slopeSizeY);

  static inline ::GlobalNamespace::ColliderBatcher* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x275eea4, size 0x168, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnSetLoadedMapData, addr 0x275f00c, size 0xc, virtual false, abstract: false, final false
  inline void OnSetLoadedMapData(bool newHasLoadedMapData);

  /// @brief Method RegisterForBatching, addr 0x275f4a0, size 0x13c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColliderBatch* RegisterForBatching(::GlobalNamespace::MapObject* mapObject, ::StringW batchKey);

  /// @brief Method Start, addr 0x275edc0, size 0xe4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryGetColliderBakePrepDataForBoxes, addr 0x275db40, size 0x374, virtual false, abstract: false, final false
  static inline bool TryGetColliderBakePrepDataForBoxes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* mapObjects, ByRef<Il2CppObject*> occupiedCells,
                                                        ByRef<::ArrayW<bool, ::Array<bool>*>> yLayerHasOccupiedCells, ByRef<int32_t> occupiedCellCount);

  /// @brief Method TryGetColliderBakePrepDataForSlopes, addr 0x275d83c, size 0x304, virtual false, abstract: false, final false
  static inline bool TryGetColliderBakePrepDataForSlopes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* mapObjects,
                                                         ::GlobalNamespace::__ColliderBatcher__ColliderBatchData batchData, ByRef<Il2CppObject*> occupiedCells,
                                                         ByRef<::ArrayW<bool, ::Array<bool>*>> yLayerHasOccupiedCells, ByRef<int32_t> occupiedCellCount);

  /// @brief Method Update, addr 0x275f5dc, size 0x168, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColliderBatch*>*& __cordl_internal_get_batches();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColliderBatch*>*> const& __cordl_internal_get_batches() const;

  constexpr ::ArrayW<::GlobalNamespace::__ColliderBatcher__ColliderBatchData, ::Array<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>*> const&
  __cordl_internal_get_colliderBatchDataRaw() const;

  constexpr ::ArrayW<::GlobalNamespace::__ColliderBatcher__ColliderBatchData, ::Array<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>*>& __cordl_internal_get_colliderBatchDataRaw();

  constexpr void __cordl_internal_set_batches(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColliderBatch*>* value);

  constexpr void __cordl_internal_set_colliderBatchDataRaw(::ArrayW<::GlobalNamespace::__ColliderBatcher__ColliderBatchData, ::Array<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>*> value);

  /// @brief Method .ctor, addr 0x2760fbc, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ColliderBatcher__ColliderBatchData>* getStaticF_colliderBatchData();

  static inline void setStaticF_colliderBatchData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ColliderBatcher__ColliderBatchData>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColliderBatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColliderBatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColliderBatcher(ColliderBatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColliderBatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColliderBatcher(ColliderBatcher const&) = delete;

  /// @brief Field colliderBatchDataRaw, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ColliderBatcher__ColliderBatchData, ::Array<::GlobalNamespace::__ColliderBatcher__ColliderBatchData>*> ___colliderBatchDataRaw;

  /// @brief Field batches, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColliderBatch*>* ___batches;

  /// @brief Field allowBatching offset 0xffffffff size 0x1
  static constexpr bool allowBatching{ true };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Collider Batcher: " };

  /// @brief Field slopeBatchKeyPostfix_XNegative offset 0xffffffff size 0x8
  static constexpr ::ConstString slopeBatchKeyPostfix_XNegative{ u"_XNegative" };

  /// @brief Field slopeBatchKeyPostfix_XPositive offset 0xffffffff size 0x8
  static constexpr ::ConstString slopeBatchKeyPostfix_XPositive{ u"_XPositive" };

  /// @brief Field slopeBatchKeyPostfix_ZNegative offset 0xffffffff size 0x8
  static constexpr ::ConstString slopeBatchKeyPostfix_ZNegative{ u"_ZNegative" };

  /// @brief Field slopeBatchKeyPostfix_ZPositive offset 0xffffffff size 0x8
  static constexpr ::ConstString slopeBatchKeyPostfix_ZPositive{ u"_ZPositive" };

  /// @brief Field slopeColliderThickness offset 0xffffffff size 0x4
  static constexpr float_t slopeColliderThickness{ 0.0625 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColliderBatcher, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatcher, ___colliderBatchDataRaw) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatcher, ___batches) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColliderBatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColliderBatcher*, "", "ColliderBatcher");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ColliderBatcher__ColliderBatchData, "", "ColliderBatcher/ColliderBatchData");
