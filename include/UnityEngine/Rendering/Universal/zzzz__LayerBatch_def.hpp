#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__LayerBatch_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingLayerRange_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayerBatch)
namespace UnityEngine::Rendering::Universal {
struct LightStats;
}
namespace UnityEngine::Rendering::Universal {
struct __LayerBatch___renderTargetIds_e__FixedBuffer;
}
namespace UnityEngine::Rendering::Universal {
struct __LayerBatch___renderTargetUsed_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct SortingLayerRange;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LayerBatch;
}
namespace UnityEngine::Rendering::Universal {
struct __LayerBatch___renderTargetIds_e__FixedBuffer;
}
namespace UnityEngine::Rendering::Universal {
struct __LayerBatch___renderTargetUsed_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LayerBatch);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer);
// Type: ::<renderTargetIds>e__FixedBuffer
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::LayerBatch::<renderTargetIds>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __LayerBatch___renderTargetIds_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LayerBatch___renderTargetIds_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LayerBatch___renderTargetIds_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x10 - 0x4 = 0xc, packed as 0xc
  uint8_t _cordl_size_padding[0xc];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<renderTargetUsed>e__FixedBuffer
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::LayerBatch::<renderTargetUsed>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __LayerBatch___renderTargetUsed_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LayerBatch___renderTargetUsed_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "bool", modifiers: "", def_value: None }]
  constexpr __LayerBatch___renderTargetUsed_e__FixedBuffer(bool FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  bool FixedElementField;

  /// @brief Size padding 0x4 - 0x1 = 0x3, packed as 0x3
  uint8_t _cordl_size_padding[0x3];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::LayerBatch
// SizeInfo { instance_size: 52, native_size: 52, calculated_instance_size: 52, calculated_native_size: 68, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::LayerBatch
struct CORDL_TYPE LayerBatch {
public:
  // Declarations
  using _renderTargetIds_e__FixedBuffer = ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer;

  using _renderTargetUsed_e__FixedBuffer = ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer;

  /// @brief Method GetRTId, addr 0x2f3a5d0, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier GetRTId(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor desc, int32_t index);

  /// @brief Method InitRTIds, addr 0x2f3cab4, size 0xd4, virtual false, abstract: false, final false
  inline void InitRTIds(int32_t index);

  /// @brief Method ReleaseRT, addr 0x2f3af54, size 0x60, virtual false, abstract: false, final false
  inline void ReleaseRT(::UnityEngine::Rendering::CommandBuffer* cmd);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerBatch();

  // Ctor Parameters [CppParam { name: "startLayerID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "endLayerValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "layerRange", ty: "::UnityEngine::Rendering::SortingLayerRange", modifiers: "", def_value: None }, CppParam { name: "lightStats", ty: "::UnityEngine::Rendering::Universal::LightStats",
  // modifiers: "", def_value: None }, CppParam { name: "renderTargetIds", ty: "::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer", modifiers: "", def_value: None },
  // CppParam { name: "renderTargetUsed", ty: "::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr LayerBatch(int32_t startLayerID, int32_t endLayerValue, ::UnityEngine::Rendering::SortingLayerRange layerRange, ::UnityEngine::Rendering::Universal::LightStats lightStats,
                       ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer renderTargetIds,
                       ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer renderTargetUsed) noexcept;

  /// @brief Field startLayerID, offset: 0x0, size: 0x4, def value: None
  int32_t startLayerID;

  /// @brief Field endLayerValue, offset: 0x4, size: 0x4, def value: None
  int32_t endLayerValue;

  /// @brief Field layerRange, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::SortingLayerRange layerRange;

  /// @brief Field lightStats, offset: 0xc, size: 0x14, def value: None
  ::UnityEngine::Rendering::Universal::LightStats lightStats;

  /// @brief Field renderTargetIds, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer renderTargetIds;

  /// @brief Field renderTargetUsed, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer renderTargetUsed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LayerBatch, 0x34>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LayerBatch, startLayerID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LayerBatch, endLayerValue) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LayerBatch, layerRange) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LayerBatch, lightStats) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LayerBatch, renderTargetIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LayerBatch, renderTargetUsed) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LayerBatch, "UnityEngine.Rendering.Universal", "LayerBatch");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer, "UnityEngine.Rendering.Universal", "LayerBatch/<renderTargetIds>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer, "UnityEngine.Rendering.Universal", "LayerBatch/<renderTargetUsed>e__FixedBuffer");
