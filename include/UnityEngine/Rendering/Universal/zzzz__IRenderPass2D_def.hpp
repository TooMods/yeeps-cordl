#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRenderPass2D)
namespace UnityEngine::Rendering::Universal {
class Renderer2DData;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class IRenderPass2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::IRenderPass2D);
// Type: UnityEngine.Rendering.Universal::IRenderPass2D
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::IRenderPass2D*
class CORDL_TYPE IRenderPass2D {
public:
  // Declarations
  __declspec(property(get = get_rendererData))::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> rendererData;

  /// @brief Method get_rendererData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> get_rendererData();

  // Ctor Parameters [CppParam { name: "", ty: "IRenderPass2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRenderPass2D(IRenderPass2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRenderPass2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderPass2D(IRenderPass2D const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::IRenderPass2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::IRenderPass2D*, "UnityEngine.Rendering.Universal", "IRenderPass2D");
