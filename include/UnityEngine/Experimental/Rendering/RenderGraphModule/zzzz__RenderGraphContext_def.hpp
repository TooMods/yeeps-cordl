#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
CORDL_MODULE_EXPORT(RenderGraphContext)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphDefaultResources;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphContext
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphContext*
class CORDL_TYPE RenderGraphContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field cmd, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cmd, put = __cordl_internal_set_cmd))::UnityEngine::Rendering::CommandBuffer* cmd;

  /// @brief Field defaultResources, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultResources,
                      put = __cordl_internal_set_defaultResources))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* defaultResources;

  /// @brief Field renderContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_renderContext, put = __cordl_internal_set_renderContext))::UnityEngine::Rendering::ScriptableRenderContext renderContext;

  /// @brief Field renderGraphPool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_renderGraphPool,
                      put = __cordl_internal_set_renderGraphPool))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* renderGraphPool;

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* New_ctor();

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_cmd();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get_cmd() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources*& __cordl_internal_get_defaultResources();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources*> const& __cordl_internal_get_defaultResources() const;

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext const& __cordl_internal_get_renderContext() const;

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext& __cordl_internal_get_renderContext();

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*& __cordl_internal_get_renderGraphPool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*> const& __cordl_internal_get_renderGraphPool() const;

  constexpr void __cordl_internal_set_cmd(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_defaultResources(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* value);

  constexpr void __cordl_internal_set_renderContext(::UnityEngine::Rendering::ScriptableRenderContext value);

  constexpr void __cordl_internal_set_renderGraphPool(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* value);

  /// @brief Method .ctor, addr 0x23cad38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphContext(RenderGraphContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphContext(RenderGraphContext const&) = delete;

  /// @brief Field renderContext, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScriptableRenderContext ___renderContext;

  /// @brief Field cmd, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___cmd;

  /// @brief Field renderGraphPool, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* ___renderGraphPool;

  /// @brief Field defaultResources, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* ___defaultResources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ___renderContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ___cmd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ___renderGraphPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext, ___defaultResources) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphContext");
