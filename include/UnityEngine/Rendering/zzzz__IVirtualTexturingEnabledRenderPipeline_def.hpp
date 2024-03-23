#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVirtualTexturingEnabledRenderPipeline)
// Forward declare root types
namespace UnityEngine::Rendering {
class IVirtualTexturingEnabledRenderPipeline;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline);
// Type: UnityEngine.Rendering::IVirtualTexturingEnabledRenderPipeline
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::IVirtualTexturingEnabledRenderPipeline*
class CORDL_TYPE IVirtualTexturingEnabledRenderPipeline {
public:
  // Declarations
  __declspec(property(get = get_virtualTexturingEnabled)) bool virtualTexturingEnabled;

  /// @brief Method get_virtualTexturingEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_virtualTexturingEnabled();

  // Ctor Parameters [CppParam { name: "", ty: "IVirtualTexturingEnabledRenderPipeline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVirtualTexturingEnabledRenderPipeline(IVirtualTexturingEnabledRenderPipeline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVirtualTexturingEnabledRenderPipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVirtualTexturingEnabledRenderPipeline(IVirtualTexturingEnabledRenderPipeline const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline*, "UnityEngine.Rendering", "IVirtualTexturingEnabledRenderPipeline");
