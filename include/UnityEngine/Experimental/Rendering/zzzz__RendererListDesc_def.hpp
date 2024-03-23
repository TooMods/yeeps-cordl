#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererListDesc)
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct PerObjectData;
}
namespace UnityEngine::Rendering {
struct RenderQueueRange;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct SortingCriteria;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct RendererListDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RendererListDesc);
// Type: UnityEngine.Experimental.Rendering::RendererListDesc
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering::RendererListDesc
struct CORDL_TYPE RendererListDesc {
public:
  // Declarations
  __declspec(property(get = get_camera, put = set_camera))::UnityW<::UnityEngine::Camera> camera;

  __declspec(property(get = get_cullingResult, put = set_cullingResult))::UnityEngine::Rendering::CullingResults cullingResult;

  __declspec(property(get = get_passName, put = set_passName))::UnityEngine::Rendering::ShaderTagId passName;

  __declspec(property(get = get_passNames, put = set_passNames))::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> passNames;

  /// @brief Method IsValid, addr 0x23caad0, size 0xb4, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method .ctor, addr 0x23cac50, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ShaderTagId passName, ::UnityEngine::Rendering::CullingResults cullingResult, ::UnityEngine::Camera* camera);

  /// @brief Method .ctor, addr 0x23caca4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> passNames, ::UnityEngine::Rendering::CullingResults cullingResult,
                    ::UnityEngine::Camera* camera);

  /// @brief Method get_camera, addr 0x23cac20, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_camera();

  /// @brief Method get_cullingResult, addr 0x23cac0c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CullingResults get_cullingResult();

  /// @brief Method get_passName, addr 0x23cac30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId get_passName();

  /// @brief Method get_passNames, addr 0x23cac40, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> get_passNames();

  /// @brief Method set_camera, addr 0x23cac28, size 0x8, virtual false, abstract: false, final false
  inline void set_camera(::UnityEngine::Camera* value);

  /// @brief Method set_cullingResult, addr 0x23cac18, size 0x8, virtual false, abstract: false, final false
  inline void set_cullingResult(::UnityEngine::Rendering::CullingResults value);

  /// @brief Method set_passName, addr 0x23cac38, size 0x8, virtual false, abstract: false, final false
  inline void set_passName(::UnityEngine::Rendering::ShaderTagId value);

  /// @brief Method set_passNames, addr 0x23cac48, size 0x8, virtual false, abstract: false, final false
  inline void set_passNames(::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererListDesc();

  // Ctor Parameters [CppParam { name: "sortingCriteria", ty: "::UnityEngine::Rendering::SortingCriteria", modifiers: "", def_value: None }, CppParam { name: "rendererConfiguration", ty:
  // "::UnityEngine::Rendering::PerObjectData", modifiers: "", def_value: None }, CppParam { name: "renderQueueRange", ty: "::UnityEngine::Rendering::RenderQueueRange", modifiers: "", def_value: None
  // }, CppParam { name: "stateBlock", ty: "::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock>", modifiers: "", def_value: None }, CppParam { name: "overrideMaterial", ty:
  // "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "excludeObjectMotionVectors", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "layerMask",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "overrideMaterialPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_cullingResult_k__BackingField",
  // ty: "::UnityEngine::Rendering::CullingResults", modifiers: "", def_value: None }, CppParam { name: "_camera_k__BackingField", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: None
  // }, CppParam { name: "_passName_k__BackingField", ty: "::UnityEngine::Rendering::ShaderTagId", modifiers: "", def_value: None }, CppParam { name: "_passNames_k__BackingField", ty:
  // "::ArrayW<::UnityEngine::Rendering::ShaderTagId,::Array<::UnityEngine::Rendering::ShaderTagId>*>", modifiers: "", def_value: None }]
  constexpr RendererListDesc(::UnityEngine::Rendering::SortingCriteria sortingCriteria, ::UnityEngine::Rendering::PerObjectData rendererConfiguration,
                             ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock> stateBlock,
                             ::UnityW<::UnityEngine::Material> overrideMaterial, bool excludeObjectMotionVectors, int32_t layerMask, int32_t overrideMaterialPassIndex,
                             ::UnityEngine::Rendering::CullingResults _cullingResult_k__BackingField, ::UnityW<::UnityEngine::Camera> _camera_k__BackingField,
                             ::UnityEngine::Rendering::ShaderTagId _passName_k__BackingField,
                             ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> _passNames_k__BackingField) noexcept;

  /// @brief Field sortingCriteria, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::SortingCriteria sortingCriteria;

  /// @brief Field rendererConfiguration, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::PerObjectData rendererConfiguration;

  /// @brief Field renderQueueRange, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderQueueRange renderQueueRange;

  /// @brief Field stateBlock, offset: 0x10, size: 0x70, def value: None
  ::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock> stateBlock;

  /// @brief Field overrideMaterial, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> overrideMaterial;

  /// @brief Field excludeObjectMotionVectors, offset: 0x88, size: 0x1, def value: None
  bool excludeObjectMotionVectors;

  /// @brief Field layerMask, offset: 0x8c, size: 0x4, def value: None
  int32_t layerMask;

  /// @brief Field overrideMaterialPassIndex, offset: 0x90, size: 0x4, def value: None
  int32_t overrideMaterialPassIndex;

  /// @brief Field <cullingResult>k__BackingField, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Rendering::CullingResults _cullingResult_k__BackingField;

  /// @brief Field <camera>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> _camera_k__BackingField;

  /// @brief Field <passName>k__BackingField, offset: 0xb0, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShaderTagId _passName_k__BackingField;

  /// @brief Field <passNames>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> _passNames_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RendererListDesc, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, sortingCriteria) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, rendererConfiguration) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, renderQueueRange) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, stateBlock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, overrideMaterial) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, excludeObjectMotionVectors) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, layerMask) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, overrideMaterialPassIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, _cullingResult_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, _camera_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, _passName_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RendererListDesc, _passNames_k__BackingField) == 0xb8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RendererListDesc, "UnityEngine.Experimental.Rendering", "RendererListDesc");
