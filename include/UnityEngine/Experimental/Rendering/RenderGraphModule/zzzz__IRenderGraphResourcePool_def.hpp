#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IRenderGraphResourcePool)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class IRenderGraphResourcePool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::IRenderGraphResourcePool
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::IRenderGraphResourcePool*
class CORDL_TYPE IRenderGraphResourcePool : public ::System::Object {
public:
  // Declarations
  /// @brief Method CheckFrameAllocation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CheckFrameAllocation(bool onException, int32_t frameIndex);

  /// @brief Method Cleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Cleanup();

  /// @brief Method LogResources, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogResources(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* New_ctor();

  /// @brief Method PurgeUnusedResources, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PurgeUnusedResources(int32_t currentFrameIndex);

  /// @brief Method .ctor, addr 0x1bc9dd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IRenderGraphResourcePool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphResourcePool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRenderGraphResourcePool(IRenderGraphResourcePool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphResourcePool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderGraphResourcePool(IRenderGraphResourcePool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "IRenderGraphResourcePool");
