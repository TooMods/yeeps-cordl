#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphBuilder)
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ComputeBufferDesc;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ComputeBufferHandle;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct DepthAccess;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename PassData> class RenderFunc_1;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RenderGraphBuilder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphBuilder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphBuilder
struct CORDL_TYPE RenderGraphBuilder {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AllowPassCulling, addr 0x1bc73ac, size 0x20, virtual false, abstract: false, final false
  inline void AllowPassCulling(bool value);

  /// @brief Method AllowRendererListCulling, addr 0x1bc7418, size 0x20, virtual false, abstract: false, final false
  inline void AllowRendererListCulling(bool value);

  /// @brief Method CheckResource, addr 0x1bc64c8, size 0x4, virtual false, abstract: false, final false
  inline void CheckResource(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res, bool dontCheckTransientReadWrite);

  /// @brief Method CreateTransientComputeBuffer, addr 0x1bc7200, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle
  CreateTransientComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> computebuffer);

  /// @brief Method CreateTransientComputeBuffer, addr 0x1bc70d8, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle
  CreateTransientComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc> desc);

  /// @brief Method CreateTransientTexture, addr 0x1bc6d08, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle CreateTransientTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc);

  /// @brief Method CreateTransientTexture, addr 0x1bc6f14, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle CreateTransientTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> texture);

  /// @brief Method DependsOn, addr 0x1bc7444, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle DependsOn(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle> input);

  /// @brief Method Dispose, addr 0x1bc73d8, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1bc73e0, size 0x38, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnableAsyncCompute, addr 0x1bc7380, size 0x20, virtual false, abstract: false, final false
  inline void EnableAsyncCompute(bool value);

  /// @brief Method GenerateDebugData, addr 0x1bc747c, size 0x20, virtual false, abstract: false, final false
  inline void GenerateDebugData(bool value);

  /// @brief Method ReadComputeBuffer, addr 0x1bc7074, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle ReadComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> input);

  /// @brief Method ReadTexture, addr 0x1bc6860, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle ReadTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> input);

  /// @brief Method ReadWriteTexture, addr 0x1bc6cb8, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle ReadWriteTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> input);

  /// @brief Method SetRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData> inline void SetRenderFunc(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>* renderFunc);

  /// @brief Method UseColorBuffer, addr 0x1bc6480, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle UseColorBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> input, int32_t index);

  /// @brief Method UseDepthBuffer, addr 0x1bc663c, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle UseDepthBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> input,
                                                                                                 ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess flags);

  /// @brief Method UseRendererList, addr 0x1bc6fa4, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle UseRendererList(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle> input);

  /// @brief Method WriteComputeBuffer, addr 0x1bc7098, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle WriteComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> input);

  /// @brief Method WriteTexture, addr 0x1bc67d0, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle WriteTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> input);

  /// @brief Method .ctor, addr 0x1bc746c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* renderPass,
                    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphBuilder();

  // Ctor Parameters [CppParam { name: "m_RenderPass", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*", modifiers: "", def_value: None }, CppParam { name:
  // "m_Resources", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*", modifiers: "", def_value: None }, CppParam { name: "m_RenderGraph", ty:
  // "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*", modifiers: "", def_value: None }, CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: None }]
  constexpr RenderGraphBuilder(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* m_RenderPass,
                               ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources,
                               ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph, bool m_Disposed) noexcept;

  /// @brief Field m_RenderPass, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* m_RenderPass;

  /// @brief Field m_Resources, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources;

  /// @brief Field m_RenderGraph, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph;

  /// @brief Field m_Disposed, offset: 0x18, size: 0x1, def value: None
  bool m_Disposed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder, m_RenderPass) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder, m_Resources) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder, m_RenderGraph) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder, m_Disposed) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphBuilder");
