#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RenderGraphExecution)
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraph;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RenderGraphExecution;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphExecution
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphExecution
struct CORDL_TYPE RenderGraphExecution {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x23cad48, size 0x18, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x23cad40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphExecution();

  // Ctor Parameters [CppParam { name: "renderGraph", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*", modifiers: "", def_value: None }]
  constexpr RenderGraphExecution(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph) noexcept;

  /// @brief Field renderGraph, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution, renderGraph) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphExecution");
