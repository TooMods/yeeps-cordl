#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeCellIndices)
namespace UnityEngine::Experimental::Rendering {
struct __ProbeBrickIndex__CellIndexUpdateInfo;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeCellIndices__IndexMetaData;
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
class ProbeCellIndices;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeCellIndices__IndexMetaData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ProbeCellIndices);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData);
// Type: ::IndexMetaData
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeCellIndices::IndexMetaData
struct CORDL_TYPE __ProbeCellIndices__IndexMetaData {
public:
  // Declarations
  /// @brief Method Pack, addr 0x23c06d0, size 0x10c, virtual false, abstract: false, final false
  inline void Pack(ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> vals);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeCellIndices__IndexMetaData();

  // Ctor Parameters [CppParam { name: "minLocalIdx", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "maxLocalIdx", ty: "::UnityEngine::Vector3Int", modifiers: "",
  // def_value: None }, CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minSubdiv", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ProbeCellIndices__IndexMetaData(::UnityEngine::Vector3Int minLocalIdx, ::UnityEngine::Vector3Int maxLocalIdx, int32_t firstChunkIndex, int32_t minSubdiv) noexcept;

  /// @brief Field minLocalIdx, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int minLocalIdx;

  /// @brief Field maxLocalIdx, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3Int maxLocalIdx;

  /// @brief Field firstChunkIndex, offset: 0x18, size: 0x4, def value: None
  int32_t firstChunkIndex;

  /// @brief Field minSubdiv, offset: 0x1c, size: 0x4, def value: None
  int32_t minSubdiv;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData, minLocalIdx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData, maxLocalIdx) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData, firstChunkIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData, minSubdiv) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: UnityEngine.Experimental.Rendering::ProbeCellIndices
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 69, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeCellIndices*
class CORDL_TYPE ProbeCellIndices : public ::System::Object {
public:
  // Declarations
  using IndexMetaData = ::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData;

  /// @brief Field <estimatedVMemCost>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__estimatedVMemCost_k__BackingField, put = __cordl_internal_set__estimatedVMemCost_k__BackingField)) int32_t _estimatedVMemCost_k__BackingField;

  __declspec(property(get = get_estimatedVMemCost, put = set_estimatedVMemCost)) int32_t estimatedVMemCost;

  /// @brief Field m_CellCount, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CellCount, put = __cordl_internal_set_m_CellCount))::UnityEngine::Vector3Int m_CellCount;

  /// @brief Field m_CellMin, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CellMin, put = __cordl_internal_set_m_CellMin))::UnityEngine::Vector3Int m_CellMin;

  /// @brief Field m_CellSizeInMinBricks, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CellSizeInMinBricks, put = __cordl_internal_set_m_CellSizeInMinBricks)) int32_t m_CellSizeInMinBricks;

  /// @brief Field m_IndexOfIndicesBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexOfIndicesBuffer, put = __cordl_internal_set_m_IndexOfIndicesBuffer))::UnityEngine::ComputeBuffer* m_IndexOfIndicesBuffer;

  /// @brief Field m_IndexOfIndicesData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexOfIndicesData, put = __cordl_internal_set_m_IndexOfIndicesData))::ArrayW<uint32_t, ::Array<uint32_t>*> m_IndexOfIndicesData;

  /// @brief Field m_NeedUpdateComputeBuffer, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedUpdateComputeBuffer, put = __cordl_internal_set_m_NeedUpdateComputeBuffer)) bool m_NeedUpdateComputeBuffer;

  /// @brief Method AddCell, addr 0x23c0568, size 0x168, virtual false, abstract: false, final false
  inline void AddCell(int32_t cellFlatIdx, ::UnityEngine::Experimental::Rendering::__ProbeBrickIndex__CellIndexUpdateInfo cellUpdateInfo);

  /// @brief Method Cleanup, addr 0x23c089c, size 0x64, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method GetCellIndexDimension, addr 0x23c0330, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetCellIndexDimension();

  /// @brief Method GetCellMinPosition, addr 0x23c0340, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetCellMinPosition();

  /// @brief Method GetFlatIdxForCell, addr 0x23c053c, size 0x2c, virtual false, abstract: false, final false
  inline int32_t GetFlatIdxForCell(::UnityEngine::Vector3Int cellPosition);

  /// @brief Method GetFlatIndex, addr 0x23c0350, size 0x14, virtual false, abstract: false, final false
  inline int32_t GetFlatIndex(::UnityEngine::Vector3Int normalizedPos);

  /// @brief Method GetRuntimeResources, addr 0x23c0868, size 0x34, virtual false, abstract: false, final false
  inline void GetRuntimeResources(ByRef<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__RuntimeResources> rr);

  /// @brief Method MarkCellAsUnloaded, addr 0x23c07dc, size 0x60, virtual false, abstract: false, final false
  inline void MarkCellAsUnloaded(int32_t cellFlatIdx);

  static inline ::UnityEngine::Experimental::Rendering::ProbeCellIndices* New_ctor(::UnityEngine::Vector3Int cellMin, ::UnityEngine::Vector3Int cellMax, int32_t cellSizeInMinBricks);

  /// @brief Method PushComputeData, addr 0x23c083c, size 0x2c, virtual false, abstract: false, final false
  inline void PushComputeData();

  constexpr int32_t const& __cordl_internal_get__estimatedVMemCost_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__estimatedVMemCost_k__BackingField();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_m_CellCount() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_m_CellCount();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_m_CellMin() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_m_CellMin();

  constexpr int32_t const& __cordl_internal_get_m_CellSizeInMinBricks() const;

  constexpr int32_t& __cordl_internal_get_m_CellSizeInMinBricks();

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_IndexOfIndicesBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& __cordl_internal_get_m_IndexOfIndicesBuffer() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_m_IndexOfIndicesData() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_m_IndexOfIndicesData();

  constexpr bool const& __cordl_internal_get_m_NeedUpdateComputeBuffer() const;

  constexpr bool& __cordl_internal_get_m_NeedUpdateComputeBuffer();

  constexpr void __cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_CellCount(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_m_CellMin(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_m_CellSizeInMinBricks(int32_t value);

  constexpr void __cordl_internal_set_m_IndexOfIndicesBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_IndexOfIndicesData(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_m_NeedUpdateComputeBuffer(bool value);

  /// @brief Method .ctor, addr 0x23c0364, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3Int cellMin, ::UnityEngine::Vector3Int cellMax, int32_t cellSizeInMinBricks);

  /// @brief Method get_estimatedVMemCost, addr 0x23c0320, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_estimatedVMemCost();

  /// @brief Method set_estimatedVMemCost, addr 0x23c0328, size 0x8, virtual false, abstract: false, final false
  inline void set_estimatedVMemCost(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeCellIndices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeCellIndices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeCellIndices(ProbeCellIndices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeCellIndices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeCellIndices(ProbeCellIndices const&) = delete;

  /// @brief Field <estimatedVMemCost>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____estimatedVMemCost_k__BackingField;

  /// @brief Field m_IndexOfIndicesBuffer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_IndexOfIndicesBuffer;

  /// @brief Field m_IndexOfIndicesData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___m_IndexOfIndicesData;

  /// @brief Field m_CellCount, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___m_CellCount;

  /// @brief Field m_CellMin, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___m_CellMin;

  /// @brief Field m_CellSizeInMinBricks, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_CellSizeInMinBricks;

  /// @brief Field m_NeedUpdateComputeBuffer, offset: 0x44, size: 0x1, def value: None
  bool ___m_NeedUpdateComputeBuffer;

  /// @brief Field kUintPerEntry offset 0xffffffff size 0x4
  static constexpr int32_t kUintPerEntry{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeCellIndices, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeCellIndices, ____estimatedVMemCost_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeCellIndices, ___m_IndexOfIndicesBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeCellIndices, ___m_IndexOfIndicesData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeCellIndices, ___m_CellCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeCellIndices, ___m_CellMin) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeCellIndices, ___m_CellSizeInMinBricks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeCellIndices, ___m_NeedUpdateComputeBuffer) == 0x44, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ProbeCellIndices);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeCellIndices*, "UnityEngine.Experimental.Rendering", "ProbeCellIndices");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeCellIndices__IndexMetaData, "UnityEngine.Experimental.Rendering", "ProbeCellIndices/IndexMetaData");
