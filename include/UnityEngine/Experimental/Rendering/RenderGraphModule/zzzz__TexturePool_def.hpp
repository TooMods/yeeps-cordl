#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResourcePool_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TexturePool)
namespace UnityEngine::Rendering {
class RTHandle;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class TexturePool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::TexturePool);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::TexturePool
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::TexturePool*
class CORDL_TYPE TexturePool : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourcePool_1<::UnityEngine::Rendering::RTHandle*> {
public:
  // Declarations
  /// @brief Method GetResourceName, addr 0x1bcd8f4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetResourceName(::UnityEngine::Rendering::RTHandle* res);

  /// @brief Method GetResourceSize, addr 0x1bcd914, size 0x1c, virtual true, abstract: false, final false
  inline int64_t GetResourceSize(::UnityEngine::Rendering::RTHandle* res);

  /// @brief Method GetResourceTypeName, addr 0x1bcd930, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetResourceTypeName();

  /// @brief Method GetSortIndex, addr 0x1bcd970, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetSortIndex(::UnityEngine::Rendering::RTHandle* res);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TexturePool* New_ctor();

  /// @brief Method PurgeUnusedResources, addr 0x1bcd988, size 0x554, virtual true, abstract: false, final false
  inline void PurgeUnusedResources(int32_t currentFrameIndex);

  /// @brief Method ReleaseInternalResource, addr 0x1bcd8dc, size 0x18, virtual true, abstract: false, final false
  inline void ReleaseInternalResource(::UnityEngine::Rendering::RTHandle* res);

  /// @brief Method .ctor, addr 0x1bca8bc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TexturePool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TexturePool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TexturePool(TexturePool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TexturePool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TexturePool(TexturePool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::TexturePool, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::TexturePool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::TexturePool*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "TexturePool");
