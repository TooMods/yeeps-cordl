#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SceneRenderPipeline)
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneRenderPipeline;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneRenderPipeline);
// Type: ::SceneRenderPipeline
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SceneRenderPipeline*
class CORDL_TYPE SceneRenderPipeline : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field renderPipelineAsset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_renderPipelineAsset, put = __cordl_internal_set_renderPipelineAsset))::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> renderPipelineAsset;

  static inline ::GlobalNamespace::SceneRenderPipeline* New_ctor();

  /// @brief Method OnEnable, addr 0x23bb4c0, size 0xc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x23bb4cc, size 0xc, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> const& __cordl_internal_get_renderPipelineAsset() const;

  constexpr ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>& __cordl_internal_get_renderPipelineAsset();

  constexpr void __cordl_internal_set_renderPipelineAsset(::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> value);

  /// @brief Method .ctor, addr 0x23bb4d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneRenderPipeline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneRenderPipeline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneRenderPipeline(SceneRenderPipeline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneRenderPipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneRenderPipeline(SceneRenderPipeline const&) = delete;

  /// @brief Field renderPipelineAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> ___renderPipelineAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneRenderPipeline, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneRenderPipeline, ___renderPipelineAsset) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneRenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneRenderPipeline*, "", "SceneRenderPipeline");
