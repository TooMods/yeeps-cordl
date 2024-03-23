#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeReferenceVolume)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IComparable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Experimental::Rendering {
class ProbeBrickIndex;
}
namespace UnityEngine::Experimental::Rendering {
class ProbeBrickPool;
}
namespace UnityEngine::Experimental::Rendering {
class ProbeCellIndices;
}
namespace UnityEngine::Experimental::Rendering {
class ProbeVolumeAsset;
}
namespace UnityEngine::Experimental::Rendering {
class ProbeVolumeDebug;
}
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeSHBands;
}
namespace UnityEngine::Experimental::Rendering {
class ProbeVolumeSceneData;
}
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeShadingParameters;
}
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeSystemParameters;
}
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeTextureMemoryBudget;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__Brick;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__CellIndexUpdateInfo;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickPool__BrickChunkAlloc;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickPool__DataLocation;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume__CellChunkInfo;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume__CellInstancedDebugProbes;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume__CellSortInfo;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume__Cell;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__ExtraDataActionInput;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__InitInfo;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__RefVolTransform;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__RegId;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__RuntimeResources;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__Volume;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume____c;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine::Rendering {
template <typename T> class __DebugUI__Field_1;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture3D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ProbeReferenceVolume;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume__Cell;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume__CellChunkInfo;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume__CellInstancedDebugProbes;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume__CellSortInfo;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume____c;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__ExtraDataActionInput;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__InitInfo;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__RefVolTransform;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__RegId;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__RuntimeResources;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__Volume;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume);
// Type: ::Cell
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::ProbeReferenceVolume::Cell*
class CORDL_TYPE __ProbeReferenceVolume__Cell : public ::System::Object {
public:
  // Declarations
  /// @brief Field bricks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_bricks,
                      put = __cordl_internal_set_bricks))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>* bricks;

  /// @brief Field flatIdxInCellIndices, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_flatIdxInCellIndices, put = __cordl_internal_set_flatIdxInCellIndices)) int32_t flatIdxInCellIndices;

  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field loaded, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_loaded, put = __cordl_internal_set_loaded)) bool loaded;

  /// @brief Field minSubdiv, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_minSubdiv, put = __cordl_internal_set_minSubdiv)) int32_t minSubdiv;

  /// @brief Field position, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position))::UnityEngine::Vector3Int position;

  /// @brief Field probePositions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_probePositions, put = __cordl_internal_set_probePositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> probePositions;

  /// @brief Field sh, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_sh,
                      put = __cordl_internal_set_sh))::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> sh;

  /// @brief Field validity, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_validity, put = __cordl_internal_set_validity))::ArrayW<float_t, ::Array<float_t>*> validity;

  static inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*& __cordl_internal_get_bricks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*> const& __cordl_internal_get_bricks() const;

  constexpr int32_t const& __cordl_internal_get_flatIdxInCellIndices() const;

  constexpr int32_t& __cordl_internal_get_flatIdxInCellIndices();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr bool const& __cordl_internal_get_loaded() const;

  constexpr bool& __cordl_internal_get_loaded();

  constexpr int32_t const& __cordl_internal_get_minSubdiv() const;

  constexpr int32_t& __cordl_internal_get_minSubdiv();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_position();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_probePositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_probePositions();

  constexpr ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> const& __cordl_internal_get_sh() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*>& __cordl_internal_get_sh();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_validity() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_validity();

  constexpr void __cordl_internal_set_bricks(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>* value);

  constexpr void __cordl_internal_set_flatIdxInCellIndices(int32_t value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_loaded(bool value);

  constexpr void __cordl_internal_set_minSubdiv(int32_t value);

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_probePositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_sh(::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> value);

  constexpr void __cordl_internal_set_validity(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method .ctor, addr 0x23c6bec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolume__Cell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProbeReferenceVolume__Cell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProbeReferenceVolume__Cell(__ProbeReferenceVolume__Cell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProbeReferenceVolume__Cell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProbeReferenceVolume__Cell(__ProbeReferenceVolume__Cell const&) = delete;

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field position, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___position;

  /// @brief Field bricks, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>* ___bricks;

  /// @brief Field probePositions, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___probePositions;

  /// @brief Field sh, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> ___sh;

  /// @brief Field validity, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___validity;

  /// @brief Field minSubdiv, offset: 0x40, size: 0x4, def value: None
  int32_t ___minSubdiv;

  /// @brief Field flatIdxInCellIndices, offset: 0x44, size: 0x4, def value: None
  int32_t ___flatIdxInCellIndices;

  /// @brief Field loaded, offset: 0x48, size: 0x1, def value: None
  bool ___loaded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell, ___position) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell, ___bricks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell, ___probePositions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell, ___sh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell, ___validity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell, ___minSubdiv) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell, ___flatIdxInCellIndices) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell, ___loaded) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::CellChunkInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::ProbeReferenceVolume::CellChunkInfo*
class CORDL_TYPE __ProbeReferenceVolume__CellChunkInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field chunks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_chunks,
                      put = __cordl_internal_set_chunks))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* chunks;

  static inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*& __cordl_internal_get_chunks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*> const&
  __cordl_internal_get_chunks() const;

  constexpr void __cordl_internal_set_chunks(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* value);

  /// @brief Method .ctor, addr 0x23c1538, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolume__CellChunkInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProbeReferenceVolume__CellChunkInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProbeReferenceVolume__CellChunkInfo(__ProbeReferenceVolume__CellChunkInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProbeReferenceVolume__CellChunkInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProbeReferenceVolume__CellChunkInfo(__ProbeReferenceVolume__CellChunkInfo const&) = delete;

  /// @brief Field chunks, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* ___chunks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo, ___chunks) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::CellSortInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::ProbeReferenceVolume::CellSortInfo*
class CORDL_TYPE __ProbeReferenceVolume__CellSortInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field cell, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cell, put = __cordl_internal_set_cell))::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* cell;

  /// @brief Field distanceToCamera, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_distanceToCamera, put = __cordl_internal_set_distanceToCamera)) float_t distanceToCamera;

  /// @brief Field position, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position))::UnityEngine::Vector3 position;

  /// @brief Field sourceAsset, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceAsset, put = __cordl_internal_set_sourceAsset))::StringW sourceAsset;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Method CompareTo, addr 0x23c6bfc, size 0x94, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  static inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo* New_ctor();

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*& __cordl_internal_get_cell();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*> const& __cordl_internal_get_cell() const;

  constexpr float_t const& __cordl_internal_get_distanceToCamera() const;

  constexpr float_t& __cordl_internal_get_distanceToCamera();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_position();

  constexpr ::StringW const& __cordl_internal_get_sourceAsset() const;

  constexpr ::StringW& __cordl_internal_get_sourceAsset();

  constexpr void __cordl_internal_set_cell(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* value);

  constexpr void __cordl_internal_set_distanceToCamera(float_t value);

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_sourceAsset(::StringW value);

  /// @brief Method .ctor, addr 0x23c25c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolume__CellSortInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProbeReferenceVolume__CellSortInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProbeReferenceVolume__CellSortInfo(__ProbeReferenceVolume__CellSortInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProbeReferenceVolume__CellSortInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProbeReferenceVolume__CellSortInfo(__ProbeReferenceVolume__CellSortInfo const&) = delete;

  /// @brief Field sourceAsset, offset: 0x10, size: 0x8, def value: None
  ::StringW ___sourceAsset;

  /// @brief Field cell, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* ___cell;

  /// @brief Field distanceToCamera, offset: 0x20, size: 0x4, def value: None
  float_t ___distanceToCamera;

  /// @brief Field position, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo, ___sourceAsset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo, ___cell) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo, ___distanceToCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo, ___position) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::Volume
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeReferenceVolume::Volume
struct CORDL_TYPE __ProbeReferenceVolume__Volume {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>*();

  /// @brief Method CalculateAABB, addr 0x23c6e50, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds CalculateAABB();

  /// @brief Method CalculateCenterAndSize, addr 0x23c6f5c, size 0x1b8, virtual false, abstract: false, final false
  inline void CalculateCenterAndSize(ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> size);

  /// @brief Method Equals, addr 0x23c73e4, size 0x104, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume other);

  /// @brief Method ToString, addr 0x23c71c4, size 0x220, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Transform, addr 0x23c7114, size 0xb0, virtual false, abstract: false, final false
  inline void Transform(::UnityEngine::Matrix4x4 trs);

  /// @brief Method .ctor, addr 0x23c6db0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume copy);

  /// @brief Method .ctor, addr 0x23c6d74, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 corner, ::UnityEngine::Vector3 X, ::UnityEngine::Vector3 Y, ::UnityEngine::Vector3 Z, float_t maxSubdivision, float_t minSubdivision);

  /// @brief Method .ctor, addr 0x23c6c90, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Matrix4x4 trs, float_t maxSubdivision, float_t minSubdivision);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>"
  constexpr ::System::IEquatable_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume>*
  i___System__IEquatable_1___UnityEngine__Experimental__Rendering____ProbeReferenceVolume__Volume_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolume__Volume();

  // Ctor Parameters [CppParam { name: "corner", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "X", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None },
  // CppParam { name: "Y", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "Z", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "maxSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __ProbeReferenceVolume__Volume(::UnityEngine::Vector3 corner, ::UnityEngine::Vector3 X, ::UnityEngine::Vector3 Y, ::UnityEngine::Vector3 Z, float_t maxSubdivisionMultiplier,
                                           float_t minSubdivisionMultiplier) noexcept;

  /// @brief Field corner, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 corner;

  /// @brief Field X, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 X;

  /// @brief Field Y, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 Y;

  /// @brief Field Z, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 Z;

  /// @brief Field maxSubdivisionMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t maxSubdivisionMultiplier;

  /// @brief Field minSubdivisionMultiplier, offset: 0x34, size: 0x4, def value: None
  float_t minSubdivisionMultiplier;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume, corner) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume, X) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume, Y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume, Z) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume, maxSubdivisionMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume, minSubdivisionMultiplier) == 0x34, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::RefVolTransform
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeReferenceVolume::RefVolTransform
struct CORDL_TYPE __ProbeReferenceVolume__RefVolTransform {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolume__RefVolTransform();

  // Ctor Parameters [CppParam { name: "refSpaceToWS", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "posWS", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "rot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __ProbeReferenceVolume__RefVolTransform(::UnityEngine::Matrix4x4 refSpaceToWS, ::UnityEngine::Vector3 posWS, ::UnityEngine::Quaternion rot, float_t scale) noexcept;

  /// @brief Field refSpaceToWS, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 refSpaceToWS;

  /// @brief Field posWS, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 posWS;

  /// @brief Field rot, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Quaternion rot;

  /// @brief Field scale, offset: 0x5c, size: 0x4, def value: None
  float_t scale;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform, refSpaceToWS) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform, posWS) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform, rot) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform, scale) == 0x5c, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::RuntimeResources
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeReferenceVolume::RuntimeResources
struct CORDL_TYPE __ProbeReferenceVolume__RuntimeResources {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolume__RuntimeResources();

  // Ctor Parameters [CppParam { name: "index", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "cellIndices", ty: "::UnityEngine::ComputeBuffer*", modifiers:
  // "", def_value: None }, CppParam { name: "L0_L1rx", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }, CppParam { name: "L1_G_ry", ty:
  // "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }, CppParam { name: "L1_B_rz", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }, CppParam { name:
  // "L2_0", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }, CppParam { name: "L2_1", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }, CppParam {
  // name: "L2_2", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }, CppParam { name: "L2_3", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }]
  constexpr __ProbeReferenceVolume__RuntimeResources(::UnityEngine::ComputeBuffer* index, ::UnityEngine::ComputeBuffer* cellIndices, ::UnityW<::UnityEngine::Texture3D> L0_L1rx,
                                                     ::UnityW<::UnityEngine::Texture3D> L1_G_ry, ::UnityW<::UnityEngine::Texture3D> L1_B_rz, ::UnityW<::UnityEngine::Texture3D> L2_0,
                                                     ::UnityW<::UnityEngine::Texture3D> L2_1, ::UnityW<::UnityEngine::Texture3D> L2_2, ::UnityW<::UnityEngine::Texture3D> L2_3) noexcept;

  /// @brief Field index, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* index;

  /// @brief Field cellIndices, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* cellIndices;

  /// @brief Field L0_L1rx, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> L0_L1rx;

  /// @brief Field L1_G_ry, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> L1_G_ry;

  /// @brief Field L1_B_rz, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> L1_B_rz;

  /// @brief Field L2_0, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> L2_0;

  /// @brief Field L2_1, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> L2_1;

  /// @brief Field L2_2, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> L2_2;

  /// @brief Field L2_3, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> L2_3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, cellIndices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, L0_L1rx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, L1_G_ry) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, L1_B_rz) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, L2_0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, L2_1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, L2_2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, L2_3) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::RegId
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeReferenceVolume::RegId
struct CORDL_TYPE __ProbeReferenceVolume__RegId {
public:
  // Declarations
  /// @brief Method Equals, addr 0x23c750c, size 0xe0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x23c75ec, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Invalidate, addr 0x23c74f8, size 0x8, virtual false, abstract: false, final false
  inline void Invalidate();

  /// @brief Method IsValid, addr 0x23c74e8, size 0x10, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method op_Equality, addr 0x23becd8, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId lhs, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId rhs);

  /// @brief Method op_Inequality, addr 0x23c7500, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId lhs, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolume__RegId();

  // Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ProbeReferenceVolume__RegId(int32_t id) noexcept;

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  int32_t id;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, id) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::ExtraDataActionInput
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeReferenceVolume::ExtraDataActionInput
#pragma pack(push, 0)
struct CORDL_TYPE __ProbeReferenceVolume__ExtraDataActionInput {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolume__ExtraDataActionInput();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::InitInfo
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeReferenceVolume::InitInfo
struct CORDL_TYPE __ProbeReferenceVolume__InitInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolume__InitInfo();

  // Ctor Parameters [CppParam { name: "pendingMinCellPosition", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "pendingMaxCellPosition", ty:
  // "::UnityEngine::Vector3Int", modifiers: "", def_value: None }]
  constexpr __ProbeReferenceVolume__InitInfo(::UnityEngine::Vector3Int pendingMinCellPosition, ::UnityEngine::Vector3Int pendingMaxCellPosition) noexcept;

  /// @brief Field pendingMinCellPosition, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int pendingMinCellPosition;

  /// @brief Field pendingMaxCellPosition, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3Int pendingMaxCellPosition;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo, pendingMinCellPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo, pendingMaxCellPosition) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::CellInstancedDebugProbes
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::ProbeReferenceVolume::CellInstancedDebugProbes*
class CORDL_TYPE __ProbeReferenceVolume__CellInstancedDebugProbes : public ::System::Object {
public:
  // Declarations
  /// @brief Field cellHash, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_cellHash, put = __cordl_internal_set_cellHash))::UnityEngine::Hash128 cellHash;

  /// @brief Field cellPosition, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_cellPosition, put = __cordl_internal_set_cellPosition))::UnityEngine::Vector3 cellPosition;

  /// @brief Field probeBuffers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_probeBuffers,
                      put = __cordl_internal_set_probeBuffers))::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* probeBuffers;

  /// @brief Field props, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_props, put = __cordl_internal_set_props))::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* props;

  static inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes* New_ctor();

  constexpr ::UnityEngine::Hash128 const& __cordl_internal_get_cellHash() const;

  constexpr ::UnityEngine::Hash128& __cordl_internal_get_cellHash();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cellPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_cellPosition();

  constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*& __cordl_internal_get_probeBuffers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*> const&
  __cordl_internal_get_probeBuffers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*& __cordl_internal_get_props();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*> const& __cordl_internal_get_props() const;

  constexpr void __cordl_internal_set_cellHash(::UnityEngine::Hash128 value);

  constexpr void __cordl_internal_set_cellPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_probeBuffers(::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* value);

  constexpr void __cordl_internal_set_props(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* value);

  /// @brief Method .ctor, addr 0x23c68a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolume__CellInstancedDebugProbes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProbeReferenceVolume__CellInstancedDebugProbes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProbeReferenceVolume__CellInstancedDebugProbes(__ProbeReferenceVolume__CellInstancedDebugProbes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProbeReferenceVolume__CellInstancedDebugProbes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProbeReferenceVolume__CellInstancedDebugProbes(__ProbeReferenceVolume__CellInstancedDebugProbes const&) = delete;

  /// @brief Field probeBuffers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* ___probeBuffers;

  /// @brief Field props, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* ___props;

  /// @brief Field cellHash, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Hash128 ___cellHash;

  /// @brief Field cellPosition, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___cellPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes, ___probeBuffers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes, ___props) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes, ___cellHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes, ___cellPosition) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::ProbeReferenceVolume::<>c*
class CORDL_TYPE __ProbeReferenceVolume____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c* __9;

  /// @brief Field <>9__119_15, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__119_15, put = setStaticF___9__119_15))::System::Func_1<float_t>* __9__119_15;

  /// @brief Field <>9__119_16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__119_16, put = setStaticF___9__119_16))::System::Func_1<float_t>* __9__119_16;

  /// @brief Field <>9__119_21, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__119_21, put = setStaticF___9__119_21))::System::Func_1<float_t>* __9__119_21;

  /// @brief Field <>9__119_24, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__119_24, put = setStaticF___9__119_24))::System::Func_1<int32_t>* __9__119_24;

  /// @brief Field <>9__119_25, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__119_25, put = setStaticF___9__119_25))::System::Func_1<int32_t>* __9__119_25;

  /// @brief Field <>9__119_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__119_6, put = setStaticF___9__119_6))::System::Func_1<float_t>* __9__119_6;

  static inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c* New_ctor();

  /// @brief Method <RegisterDebug>b__119_15, addr 0x23c7668, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__119_15();

  /// @brief Method <RegisterDebug>b__119_16, addr 0x23c7674, size 0x8, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__119_16();

  /// @brief Method <RegisterDebug>b__119_21, addr 0x23c767c, size 0x8, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__119_21();

  /// @brief Method <RegisterDebug>b__119_24, addr 0x23c7684, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__119_24();

  /// @brief Method <RegisterDebug>b__119_25, addr 0x23c768c, size 0x94, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__119_25();

  /// @brief Method <RegisterDebug>b__119_6, addr 0x23c7660, size 0x8, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__119_6();

  /// @brief Method .ctor, addr 0x23c7658, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c* getStaticF___9();

  static inline ::System::Func_1<float_t>* getStaticF___9__119_15();

  static inline ::System::Func_1<float_t>* getStaticF___9__119_16();

  static inline ::System::Func_1<float_t>* getStaticF___9__119_21();

  static inline ::System::Func_1<int32_t>* getStaticF___9__119_24();

  static inline ::System::Func_1<int32_t>* getStaticF___9__119_25();

  static inline ::System::Func_1<float_t>* getStaticF___9__119_6();

  static inline void setStaticF___9(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c* value);

  static inline void setStaticF___9__119_15(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__119_16(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__119_21(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__119_24(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__119_25(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__119_6(::System::Func_1<float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolume____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProbeReferenceVolume____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProbeReferenceVolume____c(__ProbeReferenceVolume____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProbeReferenceVolume____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProbeReferenceVolume____c(__ProbeReferenceVolume____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: UnityEngine.Experimental.Rendering::ProbeReferenceVolume
// SizeInfo { instance_size: 424, native_size: -1, calculated_instance_size: 424, calculated_native_size: 424, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeReferenceVolume*
class CORDL_TYPE ProbeReferenceVolume : public ::System::Object {
public:
  // Declarations
  using Cell = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell;

  using CellChunkInfo = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo;

  using CellInstancedDebugProbes = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes;

  using CellSortInfo = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo;

  using ExtraDataActionInput = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput;

  using InitInfo = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo;

  using RefVolTransform = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform;

  using RegId = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId;

  using RuntimeResources = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources;

  using Volume = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume;

  using __c = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c;

  /// @brief Field <debugDisplay>k__BackingField, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__debugDisplay_k__BackingField,
                      put = __cordl_internal_set__debugDisplay_k__BackingField))::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* _debugDisplay_k__BackingField;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* _instance;

  /// @brief Field <subdivisionDebugColors>k__BackingField, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__subdivisionDebugColors_k__BackingField,
                      put = __cordl_internal_set__subdivisionDebugColors_k__BackingField))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _subdivisionDebugColors_k__BackingField;

  /// @brief Field cells, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_cells,
                      put = __cordl_internal_set_cells))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>* cells;

  /// @brief Field clearAssetsOnVolumeClear, offset 0x158, size 0x1
  __declspec(property(get = __cordl_internal_get_clearAssetsOnVolumeClear, put = __cordl_internal_set_clearAssetsOnVolumeClear)) bool clearAssetsOnVolumeClear;

  __declspec(property(get = get_debugDisplay))::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* debugDisplay;

  /// @brief Field dilationValidtyThreshold, offset 0x198, size 0x4
  __declspec(property(get = __cordl_internal_get_dilationValidtyThreshold, put = __cordl_internal_set_dilationValidtyThreshold)) float_t dilationValidtyThreshold;

  __declspec(property(get = get_enabledBySRP)) bool enabledBySRP;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  /// @brief Field m_ActiveAssets, offset 0x110, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_ActiveAssets,
               put = __cordl_internal_set_m_ActiveAssets))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* m_ActiveAssets;

  /// @brief Field m_BricksLoaded, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BricksLoaded, put = __cordl_internal_set_m_BricksLoaded)) bool m_BricksLoaded;

  /// @brief Field m_BricksToCellUpdateInfo, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BricksToCellUpdateInfo, put = __cordl_internal_set_m_BricksToCellUpdateInfo))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>* m_BricksToCellUpdateInfo;

  /// @brief Field m_CBShaderID, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CBShaderID, put = __cordl_internal_set_m_CBShaderID)) int32_t m_CBShaderID;

  /// @brief Field m_CellDebugData, offset 0x188, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CellDebugData,
      put = __cordl_internal_set_m_CellDebugData))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*>* m_CellDebugData;

  /// @brief Field m_CellIndices, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CellIndices, put = __cordl_internal_set_m_CellIndices))::UnityEngine::Experimental::Rendering::ProbeCellIndices* m_CellIndices;

  /// @brief Field m_CellRefCounting, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CellRefCounting, put = __cordl_internal_set_m_CellRefCounting))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_CellRefCounting;

  /// @brief Field m_CellToBricks, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CellToBricks,
                      put = __cordl_internal_set_m_CellToBricks))::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*,
                                                                                                              ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>* m_CellToBricks;

  /// @brief Field m_CellsToBeLoaded, offset 0x118, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_CellsToBeLoaded,
               put = __cordl_internal_set_m_CellsToBeLoaded))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>* m_CellsToBeLoaded;

  /// @brief Field m_ChunkInfo, offset 0xd0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ChunkInfo,
      put = __cordl_internal_set_m_ChunkInfo))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*>* m_ChunkInfo;

  /// @brief Field m_CurrGlobalBounds, offset 0xb0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_CurrGlobalBounds, put = __cordl_internal_set_m_CurrGlobalBounds))::UnityEngine::Bounds m_CurrGlobalBounds;

  /// @brief Field m_DebugFrustumPlanes, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugFrustumPlanes,
                      put = __cordl_internal_set_m_DebugFrustumPlanes))::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> m_DebugFrustumPlanes;

  /// @brief Field m_DebugItems, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugItems,
                      put = __cordl_internal_set_m_DebugItems))::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> m_DebugItems;

  /// @brief Field m_DebugMaterial, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugMaterial, put = __cordl_internal_set_m_DebugMaterial))::UnityW<::UnityEngine::Material> m_DebugMaterial;

  /// @brief Field m_DebugMesh, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugMesh, put = __cordl_internal_set_m_DebugMesh))::UnityW<::UnityEngine::Mesh> m_DebugMesh;

  /// @brief Field m_EnabledBySRP, offset 0x12a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnabledBySRP, put = __cordl_internal_set_m_EnabledBySRP)) bool m_EnabledBySRP;

  /// @brief Field m_HasChangedIndex, offset 0x145, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasChangedIndex, put = __cordl_internal_set_m_HasChangedIndex)) bool m_HasChangedIndex;

  /// @brief Field m_ID, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ID, put = __cordl_internal_set_m_ID)) int32_t m_ID;

  /// @brief Field m_Index, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index))::UnityEngine::Experimental::Rendering::ProbeBrickIndex* m_Index;

  /// @brief Field m_IsInitialized, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsInitialized, put = __cordl_internal_set_m_IsInitialized)) bool m_IsInitialized;

  /// @brief Field m_MaxSubdivision, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxSubdivision, put = __cordl_internal_set_m_MaxSubdivision)) int32_t m_MaxSubdivision;

  /// @brief Field m_MemoryBudget, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MemoryBudget, put = __cordl_internal_set_m_MemoryBudget))::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget m_MemoryBudget;

  /// @brief Field m_NeedLoadAsset, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedLoadAsset, put = __cordl_internal_set_m_NeedLoadAsset)) bool m_NeedLoadAsset;

  /// @brief Field m_NeedsIndexRebuild, offset 0x144, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedsIndexRebuild, put = __cordl_internal_set_m_NeedsIndexRebuild)) bool m_NeedsIndexRebuild;

  /// @brief Field m_NumberOfCellsLoadedPerFrame, offset 0x14c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumberOfCellsLoadedPerFrame, put = __cordl_internal_set_m_NumberOfCellsLoadedPerFrame)) int32_t m_NumberOfCellsLoadedPerFrame;

  /// @brief Field m_PendingAssetsToBeLoaded, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PendingAssetsToBeLoaded, put = __cordl_internal_set_m_PendingAssetsToBeLoaded))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* m_PendingAssetsToBeLoaded;

  /// @brief Field m_PendingAssetsToBeUnloaded, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PendingAssetsToBeUnloaded, put = __cordl_internal_set_m_PendingAssetsToBeUnloaded))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* m_PendingAssetsToBeUnloaded;

  /// @brief Field m_PendingInitInfo, offset 0x12c, size 0x18
  __declspec(property(get = __cordl_internal_get_m_PendingInitInfo,
                      put = __cordl_internal_set_m_PendingInitInfo))::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo m_PendingInitInfo;

  /// @brief Field m_Pool, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pool, put = __cordl_internal_set_m_Pool))::UnityEngine::Experimental::Rendering::ProbeBrickPool* m_Pool;

  /// @brief Field m_PositionOffsets, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionOffsets, put = __cordl_internal_set_m_PositionOffsets))::ArrayW<float_t, ::Array<float_t>*> m_PositionOffsets;

  /// @brief Field m_ProbeReferenceVolumeInit, offset 0x129, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ProbeReferenceVolumeInit, put = __cordl_internal_set_m_ProbeReferenceVolumeInit)) bool m_ProbeReferenceVolumeInit;

  /// @brief Field m_Registry, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Registry, put = __cordl_internal_set_m_Registry))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
      ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>* m_Registry;

  /// @brief Field m_SHBands, offset 0x154, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SHBands, put = __cordl_internal_set_m_SHBands))::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands m_SHBands;

  /// @brief Field m_TmpSrcChunks, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TmpSrcChunks,
                      put = __cordl_internal_set_m_TmpSrcChunks))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* m_TmpSrcChunks;

  /// @brief Field m_Transform, offset 0x18, size 0x60
  __declspec(property(get = __cordl_internal_get_m_Transform, put = __cordl_internal_set_m_Transform))::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform m_Transform;

  __declspec(property(get = get_memoryBudget))::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget;

  /// @brief Field realtimeSubdivisionInfo, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_realtimeSubdivisionInfo, put = __cordl_internal_set_realtimeSubdivisionInfo))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume,
      ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>* realtimeSubdivisionInfo;

  /// @brief Field retrieveExtraDataAction, offset 0xe0, size 0x8
  __declspec(
      property(get = __cordl_internal_get_retrieveExtraDataAction,
               put = __cordl_internal_set_retrieveExtraDataAction))::System::Action_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput>* retrieveExtraDataAction;

  /// @brief Field sceneData, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneData, put = __cordl_internal_set_sceneData))::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData* sceneData;

  __declspec(property(get = get_shBands))::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands;

  __declspec(property(get = get_subdivisionDebugColors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> subdivisionDebugColors;

  /// @brief Method AddBricks, addr 0x23c3570, size 0x32c, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId
  AddBricks(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>* bricks,
            ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation dataloc, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellUpdateInfo,
            ByRef<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*> ch_list);

  /// @brief Method AddCell, addr 0x23c13b0, size 0x188, virtual false, abstract: false, final false
  inline void AddCell(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* cell,
                      ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* chunks);

  /// @brief Method AddPendingAssetLoading, addr 0x23c17b0, size 0x580, virtual false, abstract: false, final false
  inline void AddPendingAssetLoading(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset);

  /// @brief Method AddPendingAssetRemoval, addr 0x23c1d30, size 0xb8, virtual false, abstract: false, final false
  inline void AddPendingAssetRemoval(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset);

  /// @brief Method BrickSize, addr 0x23c4050, size 0x98, virtual false, abstract: false, final false
  inline float_t BrickSize(int32_t subdivisionLevel);

  /// @brief Method CellSize, addr 0x23bd32c, size 0x30, virtual false, abstract: false, final false
  static inline int32_t CellSize(int32_t subdivisionLevel);

  /// @brief Method CheckCompatibilityWithCollection, addr 0x23c1540, size 0x208, virtual false, abstract: false, final false
  inline bool CheckCompatibilityWithCollection(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset,
                                               ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* collection);

  /// @brief Method Cleanup, addr 0x23c0e68, size 0x9c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CleanupDebug, addr 0x23c0f04, size 0x68, virtual false, abstract: false, final false
  inline void CleanupDebug();

  /// @brief Method CleanupLoadedData, addr 0x23c0e18, size 0x50, virtual false, abstract: false, final false
  inline void CleanupLoadedData();

  /// @brief Method Clear, addr 0x23c41d0, size 0xdc, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearDebugData, addr 0x23c2020, size 0x88, virtual false, abstract: false, final false
  inline void ClearDebugData();

  /// @brief Method CreateInstancedProbes, addr 0x23c5cd0, size 0xbd8, virtual false, abstract: false, final false
  inline void CreateInstancedProbes();

  /// @brief Method DataHasBeenLoaded, addr 0x23c41c8, size 0x8, virtual false, abstract: false, final false
  inline bool DataHasBeenLoaded();

  /// @brief Method DebugCellIndexChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void DebugCellIndexChanged(::UnityEngine::Rendering::__DebugUI__Field_1<T>* field, T value);

  /// @brief Method DrawProbeDebug, addr 0x23c44e8, size 0x4e8, virtual false, abstract: false, final false
  inline void DrawProbeDebug(::UnityEngine::Camera* camera);

  /// @brief Method ForceSHBand, addr 0x23c0dd4, size 0x44, virtual false, abstract: false, final false
  inline void ForceSHBand(::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands);

  /// @brief Method GetCellIndexUpdate, addr 0x23c307c, size 0x154, virtual false, abstract: false, final false
  inline bool GetCellIndexUpdate(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* cell,
                                 ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo> cellUpdateInfo);

  /// @brief Method GetDistanceBetweenProbes, addr 0x23c4194, size 0x18, virtual false, abstract: false, final false
  inline float_t GetDistanceBetweenProbes(int32_t subdivisionLevel);

  /// @brief Method GetMaxSubdivision, addr 0x23c4114, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetMaxSubdivision();

  /// @brief Method GetMaxSubdivision, addr 0x23c411c, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetMaxSubdivision(float_t multiplier);

  /// @brief Method GetNumberOfBricksAtSubdiv, addr 0x23c2ab0, size 0x5c4, virtual false, abstract: false, final false
  inline int32_t GetNumberOfBricksAtSubdiv(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* cell, ByRef<::UnityEngine::Vector3Int> minValidLocalIdxAtMaxRes,
                                           ByRef<::UnityEngine::Vector3Int> sizeOfValidIndicesAtMaxRes);

  /// @brief Method GetRefSpaceToWS, addr 0x23c40e8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetRefSpaceToWS();

  /// @brief Method GetRuntimeResources, addr 0x23c3fb0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources GetRuntimeResources();

  /// @brief Method GetTransform, addr 0x23c4104, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform GetTransform();

  /// @brief Method GetVideoMemoryCost, addr 0x23c0f6c, size 0x4c, virtual false, abstract: false, final false
  inline int32_t GetVideoMemoryCost();

  /// @brief Method InitProbeReferenceVolume, addr 0x23c0c10, size 0x1b8, virtual false, abstract: false, final false
  inline void InitProbeReferenceVolume(int32_t allocationSize, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget,
                                       ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands);

  /// @brief Method Initialize, addr 0x23c09d8, size 0xcc, virtual false, abstract: false, final false
  inline void Initialize(ByRef<::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters> parameters);

  /// @brief Method InitializeDebug, addr 0x23c0aa4, size 0x16c, virtual false, abstract: false, final false
  inline void InitializeDebug(::UnityEngine::Mesh* debugProbeMesh, ::UnityEngine::Shader* debugProbeShader);

  /// @brief Method InvalidateAllCellRefs, addr 0x23c0900, size 0x50, virtual false, abstract: false, final false
  inline void InvalidateAllCellRefs();

  /// @brief Method LoadAsset, addr 0x23c231c, size 0x280, virtual false, abstract: false, final false
  inline void LoadAsset(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset);

  /// @brief Method LoadPendingCells, addr 0x23c31d0, size 0x3a0, virtual false, abstract: false, final false
  inline void LoadPendingCells(bool loadAll);

  /// @brief Method MaxBrickSize, addr 0x23c25cc, size 0xc, virtual false, abstract: false, final false
  inline float_t MaxBrickSize();

  /// @brief Method MinBrickSize, addr 0x23c3074, size 0x8, virtual false, abstract: false, final false
  inline float_t MinBrickSize();

  /// @brief Method MinDistanceBetweenProbes, addr 0x23c41ac, size 0x1c, virtual false, abstract: false, final false
  inline float_t MinDistanceBetweenProbes();

  static inline ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* New_ctor();

  /// @brief Method OnClearLightingdata, addr 0x23c68b0, size 0x4, virtual false, abstract: false, final false
  inline void OnClearLightingdata();

  /// @brief Method PerformPendingDeletion, addr 0x23c290c, size 0x1a4, virtual false, abstract: false, final false
  inline void PerformPendingDeletion();

  /// @brief Method PerformPendingIndexChangeAndInit, addr 0x23c20a8, size 0x40, virtual false, abstract: false, final false
  inline void PerformPendingIndexChangeAndInit();

  /// @brief Method PerformPendingLoading, addr 0x23c25d8, size 0x334, virtual false, abstract: false, final false
  inline void PerformPendingLoading();

  /// @brief Method PerformPendingOperations, addr 0x23c389c, size 0x38, virtual false, abstract: false, final false
  inline void PerformPendingOperations(bool loadAllCells);

  /// @brief Method RefreshDebug, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RefreshDebug(::UnityEngine::Rendering::__DebugUI__Field_1<T>* field, T value);

  /// @brief Method RegisterDebug, addr 0x23c49d0, size 0xfb0, virtual false, abstract: false, final false
  inline void RegisterDebug();

  /// @brief Method ReleaseBricks, addr 0x23c11ec, size 0x1c4, virtual false, abstract: false, final false
  inline void ReleaseBricks(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId id);

  /// @brief Method RemoveCell, addr 0x23c0fb8, size 0x234, virtual false, abstract: false, final false
  inline void RemoveCell(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell* cell);

  /// @brief Method RemovePendingAsset, addr 0x23c1de8, size 0x238, virtual false, abstract: false, final false
  inline void RemovePendingAsset(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset);

  /// @brief Method RenderDebug, addr 0x23c4478, size 0x70, virtual false, abstract: false, final false
  inline void RenderDebug(::UnityEngine::Camera* camera);

  /// @brief Method SetEnableStateFromSRP, addr 0x23c0dc8, size 0xc, virtual false, abstract: false, final false
  inline void SetEnableStateFromSRP(bool srpEnablesPV);

  /// @brief Method SetMaxSubdivision, addr 0x23c22ac, size 0x70, virtual false, abstract: false, final false
  inline void SetMaxSubdivision(int32_t maxSubdivision);

  /// @brief Method SetMinBrickAndMaxSubdiv, addr 0x23c20e8, size 0xc0, virtual false, abstract: false, final false
  inline void SetMinBrickAndMaxSubdiv(float_t minBrickSize, int32_t maxSubdiv);

  /// @brief Method SetNumberOfCellsLoadedPerFrame, addr 0x23c09c8, size 0x10, virtual false, abstract: false, final false
  inline void SetNumberOfCellsLoadedPerFrame(int32_t numberOfCells);

  /// @brief Method SetTRS, addr 0x23c21a8, size 0x104, virtual false, abstract: false, final false
  inline void SetTRS(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t minBrickSize);

  /// @brief Method ShouldCullCell, addr 0x23c5a58, size 0x278, virtual false, abstract: false, final false
  inline bool ShouldCullCell(::UnityEngine::Vector3 cellPosition, ::UnityEngine::Transform* cameraTransform, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> frustumPlanes);

  /// @brief Method SortPendingCells, addr 0x23c38d4, size 0x18c, virtual false, abstract: false, final false
  inline void SortPendingCells(::UnityEngine::Vector3 cameraPosition);

  /// @brief Method UnregisterDebug, addr 0x23c5980, size 0xd8, virtual false, abstract: false, final false
  inline void UnregisterDebug(bool destroyPanel);

  /// @brief Method UpdateConstantBuffer, addr 0x23c42ac, size 0x1bc, virtual false, abstract: false, final false
  inline void UpdateConstantBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters parameters);

  /// @brief Method <RegisterDebug>b__119_0, addr 0x23c6914, size 0x1c, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__119_0();

  /// @brief Method <RegisterDebug>b__119_1, addr 0x23c6930, size 0x20, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__119_1(bool value);

  /// @brief Method <RegisterDebug>b__119_10, addr 0x23c6a1c, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__119_10(int32_t value);

  /// @brief Method <RegisterDebug>b__119_11, addr 0x23c6a38, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__119_11();

  /// @brief Method <RegisterDebug>b__119_12, addr 0x23c6a54, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__119_12(int32_t value);

  /// @brief Method <RegisterDebug>b__119_13, addr 0x23c6a70, size 0x1c, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__119_13();

  /// @brief Method <RegisterDebug>b__119_14, addr 0x23c6a8c, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__119_14(float_t value);

  /// @brief Method <RegisterDebug>b__119_17, addr 0x23c6aa8, size 0x1c, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__119_17();

  /// @brief Method <RegisterDebug>b__119_18, addr 0x23c6ac4, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__119_18(float_t value);

  /// @brief Method <RegisterDebug>b__119_19, addr 0x23c6ae0, size 0x1c, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__119_19();

  /// @brief Method <RegisterDebug>b__119_2, addr 0x23c6950, size 0x1c, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__119_2();

  /// @brief Method <RegisterDebug>b__119_20, addr 0x23c6afc, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__119_20(float_t value);

  /// @brief Method <RegisterDebug>b__119_22, addr 0x23c6b18, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__119_22();

  /// @brief Method <RegisterDebug>b__119_23, addr 0x23c6b34, size 0xb8, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__119_23(int32_t v);

  /// @brief Method <RegisterDebug>b__119_3, addr 0x23c696c, size 0x20, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__119_3(bool value);

  /// @brief Method <RegisterDebug>b__119_4, addr 0x23c698c, size 0x1c, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__119_4();

  /// @brief Method <RegisterDebug>b__119_5, addr 0x23c69a8, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__119_5(float_t value);

  /// @brief Method <RegisterDebug>b__119_7, addr 0x23c69c4, size 0x1c, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__119_7();

  /// @brief Method <RegisterDebug>b__119_8, addr 0x23c69e0, size 0x20, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__119_8(bool value);

  /// @brief Method <RegisterDebug>b__119_9, addr 0x23c6a00, size 0x1c, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__119_9();

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeDebug*& __cordl_internal_get__debugDisplay_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::ProbeVolumeDebug*> const& __cordl_internal_get__debugDisplay_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __cordl_internal_get__subdivisionDebugColors_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __cordl_internal_get__subdivisionDebugColors_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>*& __cordl_internal_get_cells();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>*> const&
  __cordl_internal_get_cells() const;

  constexpr bool const& __cordl_internal_get_clearAssetsOnVolumeClear() const;

  constexpr bool& __cordl_internal_get_clearAssetsOnVolumeClear();

  constexpr float_t const& __cordl_internal_get_dilationValidtyThreshold() const;

  constexpr float_t& __cordl_internal_get_dilationValidtyThreshold();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*& __cordl_internal_get_m_ActiveAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*> const&
  __cordl_internal_get_m_ActiveAssets() const;

  constexpr bool const& __cordl_internal_get_m_BricksLoaded() const;

  constexpr bool& __cordl_internal_get_m_BricksLoaded();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                                         ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>*&
  __cordl_internal_get_m_BricksToCellUpdateInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                                                                             ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>*> const&
  __cordl_internal_get_m_BricksToCellUpdateInfo() const;

  constexpr int32_t const& __cordl_internal_get_m_CBShaderID() const;

  constexpr int32_t& __cordl_internal_get_m_CBShaderID();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*>*& __cordl_internal_get_m_CellDebugData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*>*> const&
  __cordl_internal_get_m_CellDebugData() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeCellIndices*& __cordl_internal_get_m_CellIndices();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::ProbeCellIndices*> const& __cordl_internal_get_m_CellIndices() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_m_CellRefCounting();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __cordl_internal_get_m_CellRefCounting() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>*&
  __cordl_internal_get_m_CellToBricks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*,
                                                                                             ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>*> const&
  __cordl_internal_get_m_CellToBricks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>*& __cordl_internal_get_m_CellsToBeLoaded();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>*> const&
  __cordl_internal_get_m_CellsToBeLoaded() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*>*& __cordl_internal_get_m_ChunkInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*>*> const&
  __cordl_internal_get_m_ChunkInfo() const;

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_CurrGlobalBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_CurrGlobalBounds();

  constexpr ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> const& __cordl_internal_get_m_DebugFrustumPlanes() const;

  constexpr ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>& __cordl_internal_get_m_DebugFrustumPlanes();

  constexpr ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> const& __cordl_internal_get_m_DebugItems() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*>& __cordl_internal_get_m_DebugItems();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DebugMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DebugMaterial();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_DebugMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_DebugMesh();

  constexpr bool const& __cordl_internal_get_m_EnabledBySRP() const;

  constexpr bool& __cordl_internal_get_m_EnabledBySRP();

  constexpr bool const& __cordl_internal_get_m_HasChangedIndex() const;

  constexpr bool& __cordl_internal_get_m_HasChangedIndex();

  constexpr int32_t const& __cordl_internal_get_m_ID() const;

  constexpr int32_t& __cordl_internal_get_m_ID();

  constexpr ::UnityEngine::Experimental::Rendering::ProbeBrickIndex*& __cordl_internal_get_m_Index();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::ProbeBrickIndex*> const& __cordl_internal_get_m_Index() const;

  constexpr bool const& __cordl_internal_get_m_IsInitialized() const;

  constexpr bool& __cordl_internal_get_m_IsInitialized();

  constexpr int32_t const& __cordl_internal_get_m_MaxSubdivision() const;

  constexpr int32_t& __cordl_internal_get_m_MaxSubdivision();

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget const& __cordl_internal_get_m_MemoryBudget() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget& __cordl_internal_get_m_MemoryBudget();

  constexpr bool const& __cordl_internal_get_m_NeedLoadAsset() const;

  constexpr bool& __cordl_internal_get_m_NeedLoadAsset();

  constexpr bool const& __cordl_internal_get_m_NeedsIndexRebuild() const;

  constexpr bool& __cordl_internal_get_m_NeedsIndexRebuild();

  constexpr int32_t const& __cordl_internal_get_m_NumberOfCellsLoadedPerFrame() const;

  constexpr int32_t& __cordl_internal_get_m_NumberOfCellsLoadedPerFrame();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*& __cordl_internal_get_m_PendingAssetsToBeLoaded();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*> const&
  __cordl_internal_get_m_PendingAssetsToBeLoaded() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*& __cordl_internal_get_m_PendingAssetsToBeUnloaded();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*> const&
  __cordl_internal_get_m_PendingAssetsToBeUnloaded() const;

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo const& __cordl_internal_get_m_PendingInitInfo() const;

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo& __cordl_internal_get_m_PendingInitInfo();

  constexpr ::UnityEngine::Experimental::Rendering::ProbeBrickPool*& __cordl_internal_get_m_Pool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::ProbeBrickPool*> const& __cordl_internal_get_m_Pool() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_PositionOffsets() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_PositionOffsets();

  constexpr bool const& __cordl_internal_get_m_ProbeReferenceVolumeInit() const;

  constexpr bool& __cordl_internal_get_m_ProbeReferenceVolumeInit();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                                         ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>*&
  __cordl_internal_get_m_Registry();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>*> const&
  __cordl_internal_get_m_Registry() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands const& __cordl_internal_get_m_SHBands() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands& __cordl_internal_get_m_SHBands();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*& __cordl_internal_get_m_TmpSrcChunks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*> const&
  __cordl_internal_get_m_TmpSrcChunks() const;

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform const& __cordl_internal_get_m_Transform() const;

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform& __cordl_internal_get_m_Transform();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume,
                                                         ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>*&
  __cordl_internal_get_realtimeSubdivisionInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>*> const&
  __cordl_internal_get_realtimeSubdivisionInfo() const;

  constexpr ::System::Action_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput>*& __cordl_internal_get_retrieveExtraDataAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput>*> const&
  __cordl_internal_get_retrieveExtraDataAction() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*& __cordl_internal_get_sceneData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*> const& __cordl_internal_get_sceneData() const;

  constexpr void __cordl_internal_set__debugDisplay_k__BackingField(::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* value);

  constexpr void __cordl_internal_set__subdivisionDebugColors_k__BackingField(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr void __cordl_internal_set_cells(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>* value);

  constexpr void __cordl_internal_set_clearAssetsOnVolumeClear(bool value);

  constexpr void __cordl_internal_set_dilationValidtyThreshold(float_t value);

  constexpr void __cordl_internal_set_m_ActiveAssets(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* value);

  constexpr void __cordl_internal_set_m_BricksLoaded(bool value);

  constexpr void __cordl_internal_set_m_BricksToCellUpdateInfo(::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                                                                                            ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>* value);

  constexpr void __cordl_internal_set_m_CBShaderID(int32_t value);

  constexpr void __cordl_internal_set_m_CellDebugData(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*>* value);

  constexpr void __cordl_internal_set_m_CellIndices(::UnityEngine::Experimental::Rendering::ProbeCellIndices* value);

  constexpr void __cordl_internal_set_m_CellRefCounting(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_CellToBricks(::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*,
                                                                                                  ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>* value);

  constexpr void __cordl_internal_set_m_CellsToBeLoaded(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>* value);

  constexpr void __cordl_internal_set_m_ChunkInfo(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*>* value);

  constexpr void __cordl_internal_set_m_CurrGlobalBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_DebugFrustumPlanes(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> value);

  constexpr void __cordl_internal_set_m_DebugItems(::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> value);

  constexpr void __cordl_internal_set_m_DebugMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DebugMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_EnabledBySRP(bool value);

  constexpr void __cordl_internal_set_m_HasChangedIndex(bool value);

  constexpr void __cordl_internal_set_m_ID(int32_t value);

  constexpr void __cordl_internal_set_m_Index(::UnityEngine::Experimental::Rendering::ProbeBrickIndex* value);

  constexpr void __cordl_internal_set_m_IsInitialized(bool value);

  constexpr void __cordl_internal_set_m_MaxSubdivision(int32_t value);

  constexpr void __cordl_internal_set_m_MemoryBudget(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget value);

  constexpr void __cordl_internal_set_m_NeedLoadAsset(bool value);

  constexpr void __cordl_internal_set_m_NeedsIndexRebuild(bool value);

  constexpr void __cordl_internal_set_m_NumberOfCellsLoadedPerFrame(int32_t value);

  constexpr void __cordl_internal_set_m_PendingAssetsToBeLoaded(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* value);

  constexpr void __cordl_internal_set_m_PendingAssetsToBeUnloaded(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* value);

  constexpr void __cordl_internal_set_m_PendingInitInfo(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo value);

  constexpr void __cordl_internal_set_m_Pool(::UnityEngine::Experimental::Rendering::ProbeBrickPool* value);

  constexpr void __cordl_internal_set_m_PositionOffsets(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_ProbeReferenceVolumeInit(bool value);

  constexpr void __cordl_internal_set_m_Registry(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>* value);

  constexpr void __cordl_internal_set_m_SHBands(::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands value);

  constexpr void __cordl_internal_set_m_TmpSrcChunks(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* value);

  constexpr void __cordl_internal_set_m_Transform(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform value);

  constexpr void __cordl_internal_set_realtimeSubdivisionInfo(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>* value);

  constexpr void __cordl_internal_set_retrieveExtraDataAction(::System::Action_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput>* value);

  constexpr void __cordl_internal_set_sceneData(::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData* value);

  /// @brief Method .ctor, addr 0x23c3a60, size 0x524, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* getStaticF__instance();

  /// @brief Method get_debugDisplay, addr 0x23c4468, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* get_debugDisplay();

  /// @brief Method get_enabledBySRP, addr 0x23c0958, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabledBySRP();

  /// @brief Method get_instance, addr 0x23c0970, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* get_instance();

  /// @brief Method get_isInitialized, addr 0x23c0950, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_memoryBudget, addr 0x23c0968, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget get_memoryBudget();

  /// @brief Method get_shBands, addr 0x23c0960, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands get_shBands();

  /// @brief Method get_subdivisionDebugColors, addr 0x23c4470, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> get_subdivisionDebugColors();

  static inline void setStaticF__instance(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume(ProbeReferenceVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume(ProbeReferenceVolume const&) = delete;

  /// @brief Field m_IsInitialized, offset: 0x10, size: 0x1, def value: None
  bool ___m_IsInitialized;

  /// @brief Field m_ID, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_ID;

  /// @brief Field m_Transform, offset: 0x18, size: 0x60, def value: None
  ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform ___m_Transform;

  /// @brief Field m_MaxSubdivision, offset: 0x78, size: 0x4, def value: None
  int32_t ___m_MaxSubdivision;

  /// @brief Field m_Pool, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeBrickPool* ___m_Pool;

  /// @brief Field m_Index, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeBrickIndex* ___m_Index;

  /// @brief Field m_CellIndices, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeCellIndices* ___m_CellIndices;

  /// @brief Field m_TmpSrcChunks, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* ___m_TmpSrcChunks;

  /// @brief Field m_PositionOffsets, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_PositionOffsets;

  /// @brief Field m_Registry, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId,
                                               ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*>* ___m_Registry;

  /// @brief Field m_CurrGlobalBounds, offset: 0xb0, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_CurrGlobalBounds;

  /// @brief Field cells, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>* ___cells;

  /// @brief Field m_ChunkInfo, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*>* ___m_ChunkInfo;

  /// @brief Field sceneData, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData* ___sceneData;

  /// @brief Field retrieveExtraDataAction, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput>* ___retrieveExtraDataAction;

  /// @brief Field m_BricksLoaded, offset: 0xe8, size: 0x1, def value: None
  bool ___m_BricksLoaded;

  /// @brief Field m_CellToBricks, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*, ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId>*
      ___m_CellToBricks;

  /// @brief Field m_BricksToCellUpdateInfo, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo>*
      ___m_BricksToCellUpdateInfo;

  /// @brief Field m_PendingAssetsToBeLoaded, offset: 0x100, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* ___m_PendingAssetsToBeLoaded;

  /// @brief Field m_PendingAssetsToBeUnloaded, offset: 0x108, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* ___m_PendingAssetsToBeUnloaded;

  /// @brief Field m_ActiveAssets, offset: 0x110, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* ___m_ActiveAssets;

  /// @brief Field m_CellsToBeLoaded, offset: 0x118, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*>* ___m_CellsToBeLoaded;

  /// @brief Field m_CellRefCounting, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_CellRefCounting;

  /// @brief Field m_NeedLoadAsset, offset: 0x128, size: 0x1, def value: None
  bool ___m_NeedLoadAsset;

  /// @brief Field m_ProbeReferenceVolumeInit, offset: 0x129, size: 0x1, def value: None
  bool ___m_ProbeReferenceVolumeInit;

  /// @brief Field m_EnabledBySRP, offset: 0x12a, size: 0x1, def value: None
  bool ___m_EnabledBySRP;

  /// @brief Field m_PendingInitInfo, offset: 0x12c, size: 0x18, def value: None
  ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo ___m_PendingInitInfo;

  /// @brief Field m_NeedsIndexRebuild, offset: 0x144, size: 0x1, def value: None
  bool ___m_NeedsIndexRebuild;

  /// @brief Field m_HasChangedIndex, offset: 0x145, size: 0x1, def value: None
  bool ___m_HasChangedIndex;

  /// @brief Field m_CBShaderID, offset: 0x148, size: 0x4, def value: None
  int32_t ___m_CBShaderID;

  /// @brief Field m_NumberOfCellsLoadedPerFrame, offset: 0x14c, size: 0x4, def value: None
  int32_t ___m_NumberOfCellsLoadedPerFrame;

  /// @brief Field m_MemoryBudget, offset: 0x150, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget ___m_MemoryBudget;

  /// @brief Field m_SHBands, offset: 0x154, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands ___m_SHBands;

  /// @brief Field clearAssetsOnVolumeClear, offset: 0x158, size: 0x1, def value: None
  bool ___clearAssetsOnVolumeClear;

  /// @brief Field <debugDisplay>k__BackingField, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeDebug* ____debugDisplay_k__BackingField;

  /// @brief Field <subdivisionDebugColors>k__BackingField, offset: 0x168, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____subdivisionDebugColors_k__BackingField;

  /// @brief Field m_DebugItems, offset: 0x170, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> ___m_DebugItems;

  /// @brief Field m_DebugMesh, offset: 0x178, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_DebugMesh;

  /// @brief Field m_DebugMaterial, offset: 0x180, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DebugMaterial;

  /// @brief Field m_CellDebugData, offset: 0x188, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*>* ___m_CellDebugData;

  /// @brief Field m_DebugFrustumPlanes, offset: 0x190, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> ___m_DebugFrustumPlanes;

  /// @brief Field dilationValidtyThreshold, offset: 0x198, size: 0x4, def value: None
  float_t ___dilationValidtyThreshold;

  /// @brief Field realtimeSubdivisionInfo, offset: 0x1a0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume,
                                               ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__Brick>*>* ___realtimeSubdivisionInfo;

  /// @brief Field kProbeIndexPoolAllocationSize offset 0xffffffff size 0x4
  static constexpr int32_t kProbeIndexPoolAllocationSize{ static_cast<int32_t>(0x80) };

  /// @brief Field kProbesPerBatch offset 0xffffffff size 0x4
  static constexpr int32_t kProbesPerBatch{ static_cast<int32_t>(0x3ff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, 0x1a8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_IsInitialized) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_ID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_Transform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_MaxSubdivision) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_Pool) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_Index) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_CellIndices) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_TmpSrcChunks) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_PositionOffsets) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_Registry) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_CurrGlobalBounds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___cells) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_ChunkInfo) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___sceneData) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___retrieveExtraDataAction) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_BricksLoaded) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_CellToBricks) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_BricksToCellUpdateInfo) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_PendingAssetsToBeLoaded) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_PendingAssetsToBeUnloaded) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_ActiveAssets) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_CellsToBeLoaded) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_CellRefCounting) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_NeedLoadAsset) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_ProbeReferenceVolumeInit) == 0x129, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_EnabledBySRP) == 0x12a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_PendingInitInfo) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_NeedsIndexRebuild) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_HasChangedIndex) == 0x145, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_CBShaderID) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_NumberOfCellsLoadedPerFrame) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_MemoryBudget) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_SHBands) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___clearAssetsOnVolumeClear) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ____debugDisplay_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ____subdivisionDebugColors_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_DebugItems) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_DebugMesh) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_DebugMaterial) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_CellDebugData) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___m_DebugFrustumPlanes) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___dilationValidtyThreshold) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume, ___realtimeSubdivisionInfo) == 0x1a0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeReferenceVolume*, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolume");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolume/Cell");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellChunkInfo*, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolume/CellChunkInfo");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellInstancedDebugProbes*, "UnityEngine.Experimental.Rendering",
                       "ProbeReferenceVolume/CellInstancedDebugProbes");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__CellSortInfo*, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolume/CellSortInfo");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume____c*, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolume/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__ExtraDataActionInput, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolume/ExtraDataActionInput");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__InitInfo, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolume/InitInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RefVolTransform, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolume/RefVolTransform");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RegId, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolume/RegId");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolume/RuntimeResources");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Volume, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolume/Volume");
