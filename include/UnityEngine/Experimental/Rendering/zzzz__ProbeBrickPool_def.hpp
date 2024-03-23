#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeBrickPool_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickPool)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeSHBands;
}
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeTextureMemoryBudget;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickPool__BrickChunkAlloc;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickPool__DataLocation;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolume__RuntimeResources;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture3D;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ProbeBrickPool;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickPool__BrickChunkAlloc;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickPool__DataLocation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ProbeBrickPool);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation);
// Type: ::BrickChunkAlloc
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeBrickPool::BrickChunkAlloc
struct CORDL_TYPE __ProbeBrickPool__BrickChunkAlloc {
public:
  // Declarations
  /// @brief Method flattenIndex, addr 0x23be31c, size 0x14, virtual false, abstract: false, final false
  inline int32_t flattenIndex(int32_t sx, int32_t sy);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeBrickPool__BrickChunkAlloc();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr __ProbeBrickPool__BrickChunkAlloc(int32_t x, int32_t y, int32_t z) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  int32_t z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc, z) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: ::DataLocation
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeBrickPool::DataLocation
struct CORDL_TYPE __ProbeBrickPool__DataLocation {
public:
  // Declarations
  /// @brief Method Cleanup, addr 0x23bf1e0, size 0xb8, virtual false, abstract: false, final false
  inline void Cleanup();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeBrickPool__DataLocation();

  // Ctor Parameters [CppParam { name: "TexL0_L1rx", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }, CppParam { name: "TexL1_G_ry", ty:
  // "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }, CppParam { name: "TexL1_B_rz", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }, CppParam { name:
  // "TexL2_0", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }, CppParam { name: "TexL2_1", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None },
  // CppParam { name: "TexL2_2", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "", def_value: None }, CppParam { name: "TexL2_3", ty: "::UnityW<::UnityEngine::Texture3D>", modifiers: "",
  // def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ProbeBrickPool__DataLocation(::UnityW<::UnityEngine::Texture3D> TexL0_L1rx, ::UnityW<::UnityEngine::Texture3D> TexL1_G_ry, ::UnityW<::UnityEngine::Texture3D> TexL1_B_rz,
                                           ::UnityW<::UnityEngine::Texture3D> TexL2_0, ::UnityW<::UnityEngine::Texture3D> TexL2_1, ::UnityW<::UnityEngine::Texture3D> TexL2_2,
                                           ::UnityW<::UnityEngine::Texture3D> TexL2_3, int32_t width, int32_t height, int32_t depth) noexcept;

  /// @brief Field TexL0_L1rx, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> TexL0_L1rx;

  /// @brief Field TexL1_G_ry, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> TexL1_G_ry;

  /// @brief Field TexL1_B_rz, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> TexL1_B_rz;

  /// @brief Field TexL2_0, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> TexL2_0;

  /// @brief Field TexL2_1, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> TexL2_1;

  /// @brief Field TexL2_2, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> TexL2_2;

  /// @brief Field TexL2_3, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> TexL2_3;

  /// @brief Field width, offset: 0x38, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x3c, size: 0x4, def value: None
  int32_t height;

  /// @brief Field depth, offset: 0x40, size: 0x4, def value: None
  int32_t depth;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, TexL0_L1rx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, TexL1_G_ry) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, TexL1_B_rz) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, TexL2_0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, TexL2_1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, TexL2_2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, TexL2_3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, width) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, height) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, depth) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: UnityEngine.Experimental.Rendering::ProbeBrickPool
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeBrickPool*
class CORDL_TYPE ProbeBrickPool : public ::System::Object {
public:
  // Declarations
  using BrickChunkAlloc = ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc;

  using DataLocation = ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation;

  /// @brief Field <estimatedVMemCost>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__estimatedVMemCost_k__BackingField, put = __cordl_internal_set__estimatedVMemCost_k__BackingField)) int32_t _estimatedVMemCost_k__BackingField;

  __declspec(property(get = get_estimatedVMemCost, put = set_estimatedVMemCost)) int32_t estimatedVMemCost;

  /// @brief Field m_AllocationSize, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AllocationSize, put = __cordl_internal_set_m_AllocationSize)) int32_t m_AllocationSize;

  /// @brief Field m_FreeList, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeList,
                      put = __cordl_internal_set_m_FreeList))::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* m_FreeList;

  /// @brief Field m_MemoryBudget, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MemoryBudget, put = __cordl_internal_set_m_MemoryBudget))::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget m_MemoryBudget;

  /// @brief Field m_NextFreeChunk, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get_m_NextFreeChunk, put = __cordl_internal_set_m_NextFreeChunk))::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc m_NextFreeChunk;

  /// @brief Field m_Pool, offset 0x20, size 0x48
  __declspec(property(get = __cordl_internal_get_m_Pool, put = __cordl_internal_set_m_Pool))::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation m_Pool;

  /// @brief Field m_SHBands, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SHBands, put = __cordl_internal_set_m_SHBands))::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands m_SHBands;

  /// @brief Method Allocate, addr 0x23bf348, size 0x1f0, virtual false, abstract: false, final false
  inline void Allocate(int32_t numberOfBrickChunks, ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* outAllocations);

  /// @brief Method Cleanup, addr 0x23c0318, size 0x8, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x23bf2ec, size 0x5c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateDataLocation, addr 0x23bee0c, size 0x30c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation
  CreateDataLocation(int32_t numProbes, bool compressed, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands bands, ByRef<int32_t> allocatedBytes);

  /// @brief Method Deallocate, addr 0x23bf538, size 0x16c, virtual false, abstract: false, final false
  inline void Deallocate(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* allocations);

  /// @brief Method DerivePoolSizeFromBudget, addr 0x23bedf8, size 0x14, virtual false, abstract: false, final false
  inline void DerivePoolSizeFromBudget(int32_t allocationSize, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ByRef<int32_t> width, ByRef<int32_t> height,
                                       ByRef<int32_t> depth);

  /// @brief Method EnsureTextureValidity, addr 0x23bf118, size 0xc8, virtual false, abstract: false, final false
  inline void EnsureTextureValidity();

  /// @brief Method FillDataLocation, addr 0x23bfa78, size 0x8a0, virtual false, abstract: false, final false
  static inline void FillDataLocation(ByRef<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation> loc,
                                      ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> shl2,
                                      ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands bands);

  /// @brief Method GetChunkSize, addr 0x23bf298, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetChunkSize();

  /// @brief Method GetChunkSizeInProbeCount, addr 0x23bf2a0, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetChunkSizeInProbeCount();

  /// @brief Method GetPoolDimensions, addr 0x23bf2bc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetPoolDimensions();

  /// @brief Method GetPoolHeight, addr 0x23bf2b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetPoolHeight();

  /// @brief Method GetPoolWidth, addr 0x23bf2ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetPoolWidth();

  /// @brief Method GetRuntimeResources, addr 0x23bf2c8, size 0x24, virtual false, abstract: false, final false
  inline void GetRuntimeResources(ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources> rr);

  static inline ::UnityEngine::Experimental::Rendering::ProbeBrickPool* New_ctor(int32_t allocationSize, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget,
                                                                                 ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands);

  /// @brief Method ProbeCountToDataLocSize, addr 0x23bf9c8, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3Int ProbeCountToDataLocSize(int32_t numProbes);

  /// @brief Method SetPixel, addr 0x23bfa38, size 0x40, virtual false, abstract: false, final false
  static inline void SetPixel(ByRef<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>> data, int32_t x, int32_t y, int32_t z, int32_t dataLocWidth, int32_t dataLocHeight,
                              ::UnityEngine::Color value);

  /// @brief Method Update, addr 0x23bf6a4, size 0x324, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation source,
                     ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* srcLocations,
                     ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* dstLocations,
                     ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands bands);

  constexpr int32_t const& __cordl_internal_get__estimatedVMemCost_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__estimatedVMemCost_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_AllocationSize() const;

  constexpr int32_t& __cordl_internal_get_m_AllocationSize();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*& __cordl_internal_get_m_FreeList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>*> const&
  __cordl_internal_get_m_FreeList() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget const& __cordl_internal_get_m_MemoryBudget() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget& __cordl_internal_get_m_MemoryBudget();

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc const& __cordl_internal_get_m_NextFreeChunk() const;

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc& __cordl_internal_get_m_NextFreeChunk();

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation const& __cordl_internal_get_m_Pool() const;

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation& __cordl_internal_get_m_Pool();

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands const& __cordl_internal_get_m_SHBands() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands& __cordl_internal_get_m_SHBands();

  constexpr void __cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_AllocationSize(int32_t value);

  constexpr void __cordl_internal_set_m_FreeList(::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* value);

  constexpr void __cordl_internal_set_m_MemoryBudget(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget value);

  constexpr void __cordl_internal_set_m_NextFreeChunk(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc value);

  constexpr void __cordl_internal_set_m_Pool(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation value);

  constexpr void __cordl_internal_set_m_SHBands(::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands value);

  /// @brief Method .ctor, addr 0x23bed04, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(int32_t allocationSize, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands);

  /// @brief Method get_estimatedVMemCost, addr 0x23becf4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_estimatedVMemCost();

  /// @brief Method set_estimatedVMemCost, addr 0x23becfc, size 0x8, virtual false, abstract: false, final false
  inline void set_estimatedVMemCost(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeBrickPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeBrickPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeBrickPool(ProbeBrickPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeBrickPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeBrickPool(ProbeBrickPool const&) = delete;

  /// @brief Field <estimatedVMemCost>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____estimatedVMemCost_k__BackingField;

  /// @brief Field m_AllocationSize, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_AllocationSize;

  /// @brief Field m_MemoryBudget, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget ___m_MemoryBudget;

  /// @brief Field m_Pool, offset: 0x20, size: 0x48, def value: None
  ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation ___m_Pool;

  /// @brief Field m_NextFreeChunk, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc ___m_NextFreeChunk;

  /// @brief Field m_FreeList, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc>* ___m_FreeList;

  /// @brief Field m_SHBands, offset: 0x80, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands ___m_SHBands;

  /// @brief Field kBrickCellCount offset 0xffffffff size 0x4
  static constexpr int32_t kBrickCellCount{ static_cast<int32_t>(0x3) };

  /// @brief Field kBrickProbeCountPerDim offset 0xffffffff size 0x4
  static constexpr int32_t kBrickProbeCountPerDim{ static_cast<int32_t>(0x4) };

  /// @brief Field kBrickProbeCountTotal offset 0xffffffff size 0x4
  static constexpr int32_t kBrickProbeCountTotal{ static_cast<int32_t>(0x40) };

  /// @brief Field kMaxPoolWidth offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPoolWidth{ static_cast<int32_t>(0x800) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeBrickPool, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickPool, ____estimatedVMemCost_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickPool, ___m_AllocationSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickPool, ___m_MemoryBudget) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickPool, ___m_Pool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickPool, ___m_NextFreeChunk) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickPool, ___m_FreeList) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeBrickPool, ___m_SHBands) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ProbeBrickPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeBrickPool*, "UnityEngine.Experimental.Rendering", "ProbeBrickPool");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__BrickChunkAlloc, "UnityEngine.Experimental.Rendering", "ProbeBrickPool/BrickChunkAlloc");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeBrickPool__DataLocation, "UnityEngine.Experimental.Rendering", "ProbeBrickPool/DataLocation");
