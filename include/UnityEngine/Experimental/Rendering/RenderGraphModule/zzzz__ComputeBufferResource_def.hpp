#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ComputeBufferDesc_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResource_2_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBufferResource)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class ComputeBufferResource;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferResource);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::ComputeBufferResource
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::ComputeBufferResource*
class CORDL_TYPE ComputeBufferResource
    : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc,
                                                                                              ::UnityEngine::ComputeBuffer*> {
public:
  // Declarations
  /// @brief Method CreateGraphicsResource, addr 0x1bc9398, size 0x168, virtual true, abstract: false, final false
  inline void CreateGraphicsResource(::StringW name);

  /// @brief Method CreatePooledGraphicsResource, addr 0x1bc9094, size 0x194, virtual true, abstract: false, final false
  inline void CreatePooledGraphicsResource();

  /// @brief Method GetName, addr 0x1bc9040, size 0x54, virtual true, abstract: false, final false
  inline ::StringW GetName();

  /// @brief Method LogCreation, addr 0x1bc9558, size 0xd0, virtual true, abstract: false, final false
  inline void LogCreation(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  /// @brief Method LogRelease, addr 0x1bc9628, size 0xd0, virtual true, abstract: false, final false
  inline void LogRelease(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferResource* New_ctor();

  /// @brief Method ReleaseGraphicsResource, addr 0x1bc9500, size 0x58, virtual true, abstract: false, final false
  inline void ReleaseGraphicsResource();

  /// @brief Method ReleasePooledGraphicsResource, addr 0x1bc9228, size 0x170, virtual true, abstract: false, final false
  inline void ReleasePooledGraphicsResource(int32_t frameIndex);

  /// @brief Method .ctor, addr 0x1bc96f8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeBufferResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeBufferResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeBufferResource(ComputeBufferResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeBufferResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeBufferResource(ComputeBufferResource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferResource, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferResource*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "ComputeBufferResource");
