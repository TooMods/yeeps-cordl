#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickIndex_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickIndex)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class BitArray;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeTextureMemoryBudget;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__BrickMeta;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__Brick;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__CellIndexUpdateInfo;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__ReservedBrick;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__VoxelMeta;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeBrickIndex____c__DisplayClass31_0;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeBrickIndex____c__DisplayClass32_0;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickPool__BrickChunkAlloc;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume__Cell;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__RegId;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__RuntimeResources;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ProbeBrickIndex;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeBrickIndex____c__DisplayClass31_0;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeBrickIndex____c__DisplayClass32_0;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__Brick;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__BrickMeta;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__CellIndexUpdateInfo;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__ReservedBrick;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__VoxelMeta;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ProbeBrickIndex);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta);
// Type: ::Brick
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeBrickIndex::Brick
struct CORDL_TYPE __ProbeBrickIndex__Brick {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*();

  /// @brief Method Equals, addr 0x23bec7c, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick other);

  /// @brief Method .ctor, addr 0x23bec70, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3Int position, int32_t subdivisionLevel);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>"
  constexpr ::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>* i___System__IEquatable_1___UnityEngine__Experimental__Rendering____ProbeBrickIndex__Brick_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeBrickIndex__Brick();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "subdivisionLevel", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr __ProbeBrickIndex__Brick(::UnityEngine::Vector3Int position, int32_t subdivisionLevel) noexcept;

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int position;

  /// @brief Field subdivisionLevel, offset: 0xc, size: 0x4, def value: None
  int32_t subdivisionLevel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick, subdivisionLevel) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::ReservedBrick
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeBrickIndex::ReservedBrick
struct CORDL_TYPE __ProbeBrickIndex__ReservedBrick {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeBrickIndex__ReservedBrick();

  // Ctor Parameters [CppParam { name: "brick", ty: "::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick", modifiers: "", def_value: None }, CppParam { name: "flattenedIdx", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr __ProbeBrickIndex__ReservedBrick(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick brick, int32_t flattenedIdx) noexcept;

  /// @brief Field brick, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick brick;

  /// @brief Field flattenedIdx, offset: 0x10, size: 0x4, def value: None
  int32_t flattenedIdx;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick, brick) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick, flattenedIdx) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::VoxelMeta
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeBrickIndex::VoxelMeta
struct CORDL_TYPE __ProbeBrickIndex__VoxelMeta {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeBrickIndex__VoxelMeta();

  // Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId", modifiers: "", def_value: None }, CppParam { name: "brickIndices", ty:
  // "::System::Collections::Generic::List_1<uint16_t>*", modifiers: "", def_value: None }]
  constexpr __ProbeBrickIndex__VoxelMeta(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId id, ::System::Collections::Generic::List_1<uint16_t>* brickIndices) noexcept;

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId id;

  /// @brief Field brickIndices, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint16_t>* brickIndices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta, brickIndices) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::BrickMeta
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeBrickIndex::BrickMeta
struct CORDL_TYPE __ProbeBrickIndex__BrickMeta {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeBrickIndex__BrickMeta();

  // Ctor Parameters [CppParam { name: "voxels", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>*", modifiers: "", def_value: None }, CppParam { name: "bricks", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick>*", modifiers: "", def_value: None }]
  constexpr __ProbeBrickIndex__BrickMeta(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>* voxels,
                                         ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick>* bricks) noexcept;

  /// @brief Field voxels, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>* voxels;

  /// @brief Field bricks, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick>* bricks;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta, voxels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta, bricks) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::CellIndexUpdateInfo
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeBrickIndex::CellIndexUpdateInfo
struct CORDL_TYPE __ProbeBrickIndex__CellIndexUpdateInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeBrickIndex__CellIndexUpdateInfo();

  // Ctor Parameters [CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numberOfChunks", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "minSubdivInCell", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minValidBrickIndexForCellAtMaxRes", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None
  // }, CppParam { name: "maxValidBrickIndexForCellAtMaxResPlusOne", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "cellPositionInBricksAtMaxRes", ty:
  // "::UnityEngine::Vector3Int", modifiers: "", def_value: None }]
  constexpr __ProbeBrickIndex__CellIndexUpdateInfo(int32_t firstChunkIndex, int32_t numberOfChunks, int32_t minSubdivInCell, ::UnityEngine::Vector3Int minValidBrickIndexForCellAtMaxRes,
                                                   ::UnityEngine::Vector3Int maxValidBrickIndexForCellAtMaxResPlusOne, ::UnityEngine::Vector3Int cellPositionInBricksAtMaxRes) noexcept;

  /// @brief Field firstChunkIndex, offset: 0x0, size: 0x4, def value: None
  int32_t firstChunkIndex;

  /// @brief Field numberOfChunks, offset: 0x4, size: 0x4, def value: None
  int32_t numberOfChunks;

  /// @brief Field minSubdivInCell, offset: 0x8, size: 0x4, def value: None
  int32_t minSubdivInCell;

  /// @brief Field minValidBrickIndexForCellAtMaxRes, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3Int minValidBrickIndexForCellAtMaxRes;

  /// @brief Field maxValidBrickIndexForCellAtMaxResPlusOne, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3Int maxValidBrickIndexForCellAtMaxResPlusOne;

  /// @brief Field cellPositionInBricksAtMaxRes, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3Int cellPositionInBricksAtMaxRes;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo, firstChunkIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo, numberOfChunks) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo, minSubdivInCell) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo, minValidBrickIndexForCellAtMaxRes) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo, maxValidBrickIndexForCellAtMaxResPlusOne) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo, cellPositionInBricksAtMaxRes) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::<>c__DisplayClass31_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::ProbeBrickIndex::<>c__DisplayClass31_0*
class CORDL_TYPE __ProbeBrickIndex____c__DisplayClass31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0))::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>* __9__0;

  /// @brief Field id, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId id;

  static inline ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0* New_ctor();

  /// @brief Method <AddBricks>b__0, addr 0x23becc8, size 0x10, virtual false, abstract: false, final false
  inline bool _AddBricks_b__0(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta lhs);

  constexpr ::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*& __cordl_internal_get___9__0();

  constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*> const& __cordl_internal_get___9__0() const;

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId const& __cordl_internal_get_id() const;

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId& __cordl_internal_get_id();

  constexpr void __cordl_internal_set___9__0(::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>* value);

  constexpr void __cordl_internal_set_id(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId value);

  /// @brief Method .ctor, addr 0x23be314, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeBrickIndex____c__DisplayClass31_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProbeBrickIndex____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProbeBrickIndex____c__DisplayClass31_0(__ProbeBrickIndex____c__DisplayClass31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProbeBrickIndex____c__DisplayClass31_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProbeBrickIndex____c__DisplayClass31_0(__ProbeBrickIndex____c__DisplayClass31_0 const&) = delete;

  /// @brief Field id, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId ___id;

  /// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
  ::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0, _____9__0) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::ProbeBrickIndex::<>c__DisplayClass32_0*
class CORDL_TYPE __ProbeBrickIndex____c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0))::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>* __9__0;

  /// @brief Field id, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId id;

  static inline ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0* New_ctor();

  /// @brief Method <RemoveBricks>b__0, addr 0x23bece4, size 0x10, virtual false, abstract: false, final false
  inline bool _RemoveBricks_b__0(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta lhs);

  constexpr ::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*& __cordl_internal_get___9__0();

  constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*> const& __cordl_internal_get___9__0() const;

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId const& __cordl_internal_get_id() const;

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId& __cordl_internal_get_id();

  constexpr void __cordl_internal_set___9__0(::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>* value);

  constexpr void __cordl_internal_set_id(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId value);

  /// @brief Method .ctor, addr 0x23be93c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeBrickIndex____c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProbeBrickIndex____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProbeBrickIndex____c__DisplayClass32_0(__ProbeBrickIndex____c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProbeBrickIndex____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProbeBrickIndex____c__DisplayClass32_0(__ProbeBrickIndex____c__DisplayClass32_0 const&) = delete;

  /// @brief Field id, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId ___id;

  /// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
  ::System::Predicate_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0, _____9__0) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: UnityEngine.Experimental.Rendering::ProbeBrickIndex
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeBrickIndex*
class CORDL_TYPE ProbeBrickIndex : public ::System::Object {
public:
  // Declarations
  using Brick = ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick;

  using BrickMeta = ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta;

  using CellIndexUpdateInfo = ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo;

  using ReservedBrick = ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick;

  using VoxelMeta = ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta;

  using __c__DisplayClass31_0 = ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0;

  using __c__DisplayClass32_0 = ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0;

  /// @brief Field <estimatedVMemCost>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__estimatedVMemCost_k__BackingField, put = __cordl_internal_set__estimatedVMemCost_k__BackingField)) int32_t _estimatedVMemCost_k__BackingField;

  __declspec(property(get = get_estimatedVMemCost, put = set_estimatedVMemCost)) int32_t estimatedVMemCost;

  /// @brief Field m_BricksToVoxels, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BricksToVoxels,
                      put = __cordl_internal_set_m_BricksToVoxels))::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                                                                                                ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta>* m_BricksToVoxels;

  /// @brief Field m_CenterRS, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CenterRS, put = __cordl_internal_set_m_CenterRS))::UnityEngine::Vector3Int m_CenterRS;

  /// @brief Field m_IndexChunks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexChunks, put = __cordl_internal_set_m_IndexChunks))::System::Collections::BitArray* m_IndexChunks;

  /// @brief Field m_IndexInChunks, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IndexInChunks, put = __cordl_internal_set_m_IndexInChunks)) int32_t m_IndexInChunks;

  /// @brief Field m_NeedUpdateIndexComputeBuffer, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedUpdateIndexComputeBuffer, put = __cordl_internal_set_m_NeedUpdateIndexComputeBuffer)) bool m_NeedUpdateIndexComputeBuffer;

  /// @brief Field m_NextFreeChunk, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextFreeChunk, put = __cordl_internal_set_m_NextFreeChunk)) int32_t m_NextFreeChunk;

  /// @brief Field m_PhysicalIndexBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PhysicalIndexBuffer, put = __cordl_internal_set_m_PhysicalIndexBuffer))::UnityEngine::ComputeBuffer* m_PhysicalIndexBuffer;

  /// @brief Field m_PhysicalIndexBufferData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PhysicalIndexBufferData, put = __cordl_internal_set_m_PhysicalIndexBufferData))::ArrayW<int32_t, ::Array<int32_t>*> m_PhysicalIndexBufferData;

  /// @brief Field m_VoxelToBricks, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VoxelToBricks, put = __cordl_internal_set_m_VoxelToBricks))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::Vector3Int, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*>* m_VoxelToBricks;

  /// @brief Method AddBricks, addr 0x23bda70, size 0x8a4, virtual false, abstract: false, final false
  inline void AddBricks(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId id,
                        ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>* bricks,
                        ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* allocations, int32_t allocationSize, int32_t poolWidth,
                        int32_t poolHeight, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo);

  /// @brief Method AssignIndexChunksToCell, addr 0x23bd8f8, size 0x178, virtual false, abstract: false, final false
  inline bool AssignIndexChunksToCell(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* cell, int32_t bricksCount,
                                      ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo> cellUpdateInfo);

  /// @brief Method Cleanup, addr 0x23bd888, size 0x64, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x23bcf20, size 0xd8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearVoxel, addr 0x23bd35c, size 0xa8, virtual false, abstract: false, final false
  inline void ClearVoxel(::UnityEngine::Vector3Int pos, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo);

  /// @brief Method ClipToIndexSpace, addr 0x23bd404, size 0x1ac, virtual false, abstract: false, final false
  inline void ClipToIndexSpace(::UnityEngine::Vector3Int pos, int32_t subdiv, ByRef<::UnityEngine::Vector3Int> outMinpos, ByRef<::UnityEngine::Vector3Int> outMaxpos,
                               ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo);

  /// @brief Method GetRuntimeResources, addr 0x23bd854, size 0x34, virtual false, abstract: false, final false
  inline void GetRuntimeResources(ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources> rr);

  /// @brief Method GetVoxelSubdivLevel, addr 0x23bcbec, size 0xa4, virtual false, abstract: false, final false
  inline int32_t GetVoxelSubdivLevel();

  /// @brief Method MapBrickToVoxels, addr 0x23bd024, size 0x308, virtual false, abstract: false, final false
  inline void MapBrickToVoxels(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick brick, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>* voxels);

  /// @brief Method MergeIndex, addr 0x23bd8ec, size 0xc, virtual false, abstract: false, final false
  inline int32_t MergeIndex(int32_t index, int32_t size);

  static inline ::UnityEngine::Experimental::Rendering::ProbeBrickIndex* New_ctor(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget);

  /// @brief Method RemoveBricks, addr 0x23be534, size 0x408, virtual false, abstract: false, final false
  inline void RemoveBricks(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId id, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo);

  /// @brief Method SizeOfPhysicalIndexFromBudget, addr 0x23bcc90, size 0x44, virtual false, abstract: false, final false
  inline int32_t SizeOfPhysicalIndexFromBudget(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget);

  /// @brief Method UpdateIndexForVoxel, addr 0x23be944, size 0x32c, virtual false, abstract: false, final false
  inline void UpdateIndexForVoxel(::UnityEngine::Vector3Int voxel, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick>* bricks,
                                  ::System::Collections::Generic::List_1<uint16_t>* indices, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo);

  /// @brief Method UpdateIndexForVoxel, addr 0x23be330, size 0x204, virtual false, abstract: false, final false
  inline void UpdateIndexForVoxel(::UnityEngine::Vector3Int voxel, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo);

  /// @brief Method UpdatePhysicalIndex, addr 0x23bd5b0, size 0x2a4, virtual false, abstract: false, final false
  inline void UpdatePhysicalIndex(::UnityEngine::Vector3Int brickMin, ::UnityEngine::Vector3Int brickMax, int32_t value,
                                  ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellInfo);

  /// @brief Method UploadIndexData, addr 0x23bcff8, size 0x2c, virtual false, abstract: false, final false
  inline void UploadIndexData();

  constexpr int32_t const& __cordl_internal_get__estimatedVMemCost_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__estimatedVMemCost_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta>*&
  __cordl_internal_get_m_BricksToVoxels();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta>*> const&
  __cordl_internal_get_m_BricksToVoxels() const;

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_m_CenterRS() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_m_CenterRS();

  constexpr ::System::Collections::BitArray*& __cordl_internal_get_m_IndexChunks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::BitArray*> const& __cordl_internal_get_m_IndexChunks() const;

  constexpr int32_t const& __cordl_internal_get_m_IndexInChunks() const;

  constexpr int32_t& __cordl_internal_get_m_IndexInChunks();

  constexpr bool const& __cordl_internal_get_m_NeedUpdateIndexComputeBuffer() const;

  constexpr bool& __cordl_internal_get_m_NeedUpdateIndexComputeBuffer();

  constexpr int32_t const& __cordl_internal_get_m_NextFreeChunk() const;

  constexpr int32_t& __cordl_internal_get_m_NextFreeChunk();

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_PhysicalIndexBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& __cordl_internal_get_m_PhysicalIndexBuffer() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_PhysicalIndexBufferData() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_PhysicalIndexBufferData();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*>*&
  __cordl_internal_get_m_VoxelToBricks();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*>*> const&
  __cordl_internal_get_m_VoxelToBricks() const;

  constexpr void __cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_BricksToVoxels(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta>* value);

  constexpr void __cordl_internal_set_m_CenterRS(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_m_IndexChunks(::System::Collections::BitArray* value);

  constexpr void __cordl_internal_set_m_IndexInChunks(int32_t value);

  constexpr void __cordl_internal_set_m_NeedUpdateIndexComputeBuffer(bool value);

  constexpr void __cordl_internal_set_m_NextFreeChunk(int32_t value);

  constexpr void __cordl_internal_set_m_PhysicalIndexBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_PhysicalIndexBufferData(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_VoxelToBricks(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*>* value);

  /// @brief Method .ctor, addr 0x23bccd4, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget);

  /// @brief Method get_estimatedVMemCost, addr 0x23bcbdc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_estimatedVMemCost();

  /// @brief Method set_estimatedVMemCost, addr 0x23bcbe4, size 0x8, virtual false, abstract: false, final false
  inline void set_estimatedVMemCost(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeBrickIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeBrickIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeBrickIndex(ProbeBrickIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeBrickIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeBrickIndex(ProbeBrickIndex const&) = delete;

  /// @brief Field m_IndexChunks, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::BitArray* ___m_IndexChunks;

  /// @brief Field m_IndexInChunks, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_IndexInChunks;

  /// @brief Field m_NextFreeChunk, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_NextFreeChunk;

  /// @brief Field m_PhysicalIndexBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_PhysicalIndexBuffer;

  /// @brief Field m_PhysicalIndexBufferData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_PhysicalIndexBufferData;

  /// @brief Field <estimatedVMemCost>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____estimatedVMemCost_k__BackingField;

  /// @brief Field m_CenterRS, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___m_CenterRS;

  /// @brief Field m_VoxelToBricks, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta>*>*
      ___m_VoxelToBricks;

  /// @brief Field m_BricksToVoxels, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta>*
      ___m_BricksToVoxels;

  /// @brief Field m_NeedUpdateIndexComputeBuffer, offset: 0x50, size: 0x1, def value: None
  bool ___m_NeedUpdateIndexComputeBuffer;

  /// @brief Field kIndexChunkSize offset 0xffffffff size 0x4
  static constexpr int32_t kIndexChunkSize{ static_cast<int32_t>(0xf3) };

  /// @brief Field kMaxSubdivisionLevels offset 0xffffffff size 0x4
  static constexpr int32_t kMaxSubdivisionLevels{ static_cast<int32_t>(0x7) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeBrickIndex, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickIndex, ___m_IndexChunks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickIndex, ___m_IndexInChunks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickIndex, ___m_NextFreeChunk) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickIndex, ___m_PhysicalIndexBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickIndex, ___m_PhysicalIndexBufferData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickIndex, ____estimatedVMemCost_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickIndex, ___m_CenterRS) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickIndex, ___m_VoxelToBricks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickIndex, ___m_BricksToVoxels) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickIndex, ___m_NeedUpdateIndexComputeBuffer) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ProbeBrickIndex);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeBrickIndex*, "UnityEngine.Experimental.Rendering", "ProbeBrickIndex");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass31_0*, "UnityEngine.Experimental.Rendering", "ProbeBrickIndex/<>c__DisplayClass31_0");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex____c__DisplayClass32_0*, "UnityEngine.Experimental.Rendering", "ProbeBrickIndex/<>c__DisplayClass32_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick, "UnityEngine.Experimental.Rendering", "ProbeBrickIndex/Brick");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__BrickMeta, "UnityEngine.Experimental.Rendering", "ProbeBrickIndex/BrickMeta");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo, "UnityEngine.Experimental.Rendering", "ProbeBrickIndex/CellIndexUpdateInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__ReservedBrick, "UnityEngine.Experimental.Rendering", "ProbeBrickIndex/ReservedBrick");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__VoxelMeta, "UnityEngine.Experimental.Rendering", "ProbeBrickIndex/VoxelMeta");
