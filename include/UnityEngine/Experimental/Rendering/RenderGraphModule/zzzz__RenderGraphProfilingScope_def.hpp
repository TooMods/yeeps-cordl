#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RenderGraphProfilingScope)
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RenderGraphProfilingScope;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphProfilingScope
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphProfilingScope
struct CORDL_TYPE RenderGraphProfilingScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x1bc643c, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1bc6444, size 0x3c, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method .ctor, addr 0x1bc6414, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ProfilingSampler* sampler);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphProfilingScope();

  // Ctor Parameters [CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Sampler", ty: "::UnityEngine::Rendering::ProfilingSampler*", modifiers: "",
  // def_value: None }, CppParam { name: "m_RenderGraph", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*", modifiers: "", def_value: None }]
  constexpr RenderGraphProfilingScope(bool m_Disposed, ::UnityEngine::Rendering::ProfilingSampler* m_Sampler,
                                      ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph) noexcept;

  /// @brief Field m_Disposed, offset: 0x0, size: 0x1, def value: None
  bool m_Disposed;

  /// @brief Field m_Sampler, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* m_Sampler;

  /// @brief Field m_RenderGraph, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope, m_Disposed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope, m_Sampler) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope, m_RenderGraph) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphProfilingScope");
