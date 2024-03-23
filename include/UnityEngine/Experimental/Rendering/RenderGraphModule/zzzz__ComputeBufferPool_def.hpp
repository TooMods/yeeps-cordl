#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResourcePool_1_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBufferPool)
namespace UnityEngine {
class ComputeBuffer;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class ComputeBufferPool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferPool);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::ComputeBufferPool
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::ComputeBufferPool*
class CORDL_TYPE ComputeBufferPool : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<::UnityEngine::ComputeBuffer*> {
public:
  // Declarations
  /// @brief Method GetResourceName, addr 0x1bc9758, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetResourceName(::UnityEngine::ComputeBuffer* res);

  /// @brief Method GetResourceSize, addr 0x1bc9798, size 0x44, virtual true, abstract: false, final false
  inline int64_t GetResourceSize(::UnityEngine::ComputeBuffer* res);

  /// @brief Method GetResourceTypeName, addr 0x1bc97dc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetResourceTypeName();

  /// @brief Method GetSortIndex, addr 0x1bc981c, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetSortIndex(::UnityEngine::ComputeBuffer* res);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferPool* New_ctor();

  /// @brief Method PurgeUnusedResources, addr 0x1bc983c, size 0x554, virtual true, abstract: false, final false
  inline void PurgeUnusedResources(int32_t currentFrameIndex);

  /// @brief Method ReleaseInternalResource, addr 0x1bc9740, size 0x18, virtual true, abstract: false, final false
  inline void ReleaseInternalResource(::UnityEngine::ComputeBuffer* res);

  /// @brief Method .ctor, addr 0x1bc9d90, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeBufferPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeBufferPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeBufferPool(ComputeBufferPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeBufferPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeBufferPool(ComputeBufferPool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferPool, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferPool*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "ComputeBufferPool");
