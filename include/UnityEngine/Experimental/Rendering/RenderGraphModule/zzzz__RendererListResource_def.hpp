#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererListDesc_def.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererList_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RendererListResource)
namespace UnityEngine::Rendering::RendererUtils {
struct RendererListDesc;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererList;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RendererListResource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RendererListResource
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RendererListResource
struct CORDL_TYPE RendererListResource {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x1bcb844, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererListResource();

  // Ctor Parameters [CppParam { name: "desc", ty: "::UnityEngine::Rendering::RendererUtils::RendererListDesc", modifiers: "", def_value: None }, CppParam { name: "rendererList", ty:
  // "::UnityEngine::Rendering::RendererUtils::RendererList", modifiers: "", def_value: None }]
  constexpr RendererListResource(::UnityEngine::Rendering::RendererUtils::RendererListDesc desc, ::UnityEngine::Rendering::RendererUtils::RendererList rendererList) noexcept;

  /// @brief Field desc, offset: 0x0, size: 0xc0, def value: None
  ::UnityEngine::Rendering::RendererUtils::RendererListDesc desc;

  /// @brief Field rendererList, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Rendering::RendererUtils::RendererList rendererList;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource, 0xd0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource, desc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource, rendererList) == 0xc0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RendererListResource");
