#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalChunk_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalCulledChunk)
namespace UnityEngine {
class CullingGroup;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalCulledChunk;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalCulledChunk);
// Type: UnityEngine.Rendering.Universal::DecalCulledChunk
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DecalCulledChunk*
class CORDL_TYPE DecalCulledChunk : public ::UnityEngine::Rendering::Universal::DecalChunk {
public:
  // Declarations
  /// @brief Field cameraPosition, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_cameraPosition, put = __cordl_internal_set_cameraPosition))::UnityEngine::Vector3 cameraPosition;

  /// @brief Field cullingGroups, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_cullingGroups, put = __cordl_internal_set_cullingGroups))::UnityEngine::CullingGroup* cullingGroups;

  /// @brief Field cullingMask, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_cullingMask, put = __cordl_internal_set_cullingMask)) int32_t cullingMask;

  /// @brief Field sceneCullingMask, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneCullingMask, put = __cordl_internal_set_sceneCullingMask)) uint64_t sceneCullingMask;

  /// @brief Field visibleDecalCount, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_visibleDecalCount, put = __cordl_internal_set_visibleDecalCount)) int32_t visibleDecalCount;

  /// @brief Field visibleDecalIndexArray, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_visibleDecalIndexArray, put = __cordl_internal_set_visibleDecalIndexArray))::ArrayW<int32_t, ::Array<int32_t>*> visibleDecalIndexArray;

  /// @brief Field visibleDecalIndices, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_visibleDecalIndices, put = __cordl_internal_set_visibleDecalIndices))::Unity::Collections::NativeArray_1<int32_t> visibleDecalIndices;

  /// @brief Method Dispose, addr 0x2e185cc, size 0x74, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::Rendering::Universal::DecalCulledChunk* New_ctor();

  /// @brief Method RemoveAtSwapBack, addr 0x2e18470, size 0x9c, virtual true, abstract: false, final false
  inline void RemoveAtSwapBack(int32_t entityIndex);

  /// @brief Method SetCapacity, addr 0x2e1850c, size 0xc0, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t newCapacity);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cameraPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_cameraPosition();

  constexpr ::UnityEngine::CullingGroup*& __cordl_internal_get_cullingGroups();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CullingGroup*> const& __cordl_internal_get_cullingGroups() const;

  constexpr int32_t const& __cordl_internal_get_cullingMask() const;

  constexpr int32_t& __cordl_internal_get_cullingMask();

  constexpr uint64_t const& __cordl_internal_get_sceneCullingMask() const;

  constexpr uint64_t& __cordl_internal_get_sceneCullingMask();

  constexpr int32_t const& __cordl_internal_get_visibleDecalCount() const;

  constexpr int32_t& __cordl_internal_get_visibleDecalCount();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_visibleDecalIndexArray() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_visibleDecalIndexArray();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_visibleDecalIndices() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_visibleDecalIndices();

  constexpr void __cordl_internal_set_cameraPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_cullingGroups(::UnityEngine::CullingGroup* value);

  constexpr void __cordl_internal_set_cullingMask(int32_t value);

  constexpr void __cordl_internal_set_sceneCullingMask(uint64_t value);

  constexpr void __cordl_internal_set_visibleDecalCount(int32_t value);

  constexpr void __cordl_internal_set_visibleDecalIndexArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_visibleDecalIndices(::Unity::Collections::NativeArray_1<int32_t> value);

  /// @brief Method .ctor, addr 0x2e15254, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalCulledChunk();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalCulledChunk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalCulledChunk(DecalCulledChunk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalCulledChunk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalCulledChunk(DecalCulledChunk const&) = delete;

  /// @brief Field cameraPosition, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___cameraPosition;

  /// @brief Field sceneCullingMask, offset: 0x38, size: 0x8, def value: None
  uint64_t ___sceneCullingMask;

  /// @brief Field cullingMask, offset: 0x40, size: 0x4, def value: None
  int32_t ___cullingMask;

  /// @brief Field cullingGroups, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::CullingGroup* ___cullingGroups;

  /// @brief Field visibleDecalIndexArray, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___visibleDecalIndexArray;

  /// @brief Field visibleDecalIndices, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___visibleDecalIndices;

  /// @brief Field visibleDecalCount, offset: 0x68, size: 0x4, def value: None
  int32_t ___visibleDecalCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalCulledChunk, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCulledChunk, ___cameraPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCulledChunk, ___sceneCullingMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCulledChunk, ___cullingMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCulledChunk, ___cullingGroups) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCulledChunk, ___visibleDecalIndexArray) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCulledChunk, ___visibleDecalIndices) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCulledChunk, ___visibleDecalCount) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalCulledChunk);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalCulledChunk*, "UnityEngine.Rendering.Universal", "DecalCulledChunk");
