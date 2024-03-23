#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayerUtility)
namespace UnityEngine::Rendering::Universal {
class ILight2DCullResult;
}
namespace UnityEngine::Rendering::Universal {
struct LayerBatch;
}
namespace UnityEngine {
struct SortingLayer;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class LayerUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LayerUtility);
// Type: UnityEngine.Rendering.Universal::LayerUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::LayerUtility*
class CORDL_TYPE LayerUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field <maxTextureCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__maxTextureCount_k__BackingField, put = setStaticF__maxTextureCount_k__BackingField)) uint32_t _maxTextureCount_k__BackingField;

  /// @brief Field s_LayerBatches, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LayerBatches,
                             put = setStaticF_s_LayerBatches))::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*> s_LayerBatches;

  /// @brief Method CalculateBatches, addr 0x2f3bf84, size 0x25c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>
  CalculateBatches(::UnityEngine::Rendering::Universal::ILight2DCullResult* lightCullResult, ByRef<int32_t> batchCount);

  /// @brief Method CanBatchLightsInLayer, addr 0x2f3cc1c, size 0x274, virtual false, abstract: false, final false
  static inline bool CanBatchLightsInLayer(int32_t layerIndex1, int32_t layerIndex2, ::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> sortingLayers,
                                           ::UnityEngine::Rendering::Universal::ILight2DCullResult* lightCullResult);

  /// @brief Method FindUpperBoundInBatch, addr 0x2f3ce90, size 0x68, virtual false, abstract: false, final false
  static inline int32_t FindUpperBoundInBatch(int32_t startLayerIndex, ::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> sortingLayers,
                                              ::UnityEngine::Rendering::Universal::ILight2DCullResult* lightCullResult);

  /// @brief Method InitializeBatchInfos, addr 0x2f3cef8, size 0xd8, virtual false, abstract: false, final false
  static inline void InitializeBatchInfos(::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> cachedSortingLayers);

  /// @brief Method InitializeBudget, addr 0x2f3b9d4, size 0x54, virtual false, abstract: false, final false
  static inline void InitializeBudget(uint32_t maxTextureCount);

  static inline uint32_t getStaticF__maxTextureCount_k__BackingField();

  static inline ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*> getStaticF_s_LayerBatches();

  /// @brief Method get_maxTextureCount, addr 0x2f3cb88, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t get_maxTextureCount();

  static inline void setStaticF__maxTextureCount_k__BackingField(uint32_t value);

  static inline void setStaticF_s_LayerBatches(::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*> value);

  /// @brief Method set_maxTextureCount, addr 0x2f3cbd0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxTextureCount(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayerUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayerUtility(LayerUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayerUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayerUtility(LayerUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LayerUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LayerUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LayerUtility*, "UnityEngine.Rendering.Universal", "LayerUtility");
