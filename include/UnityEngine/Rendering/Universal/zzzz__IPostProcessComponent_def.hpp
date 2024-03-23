#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPostProcessComponent)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::IPostProcessComponent);
// Type: UnityEngine.Rendering.Universal::IPostProcessComponent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::IPostProcessComponent*
class CORDL_TYPE IPostProcessComponent {
public:
  // Declarations
  /// @brief Method IsActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsTileCompatible();

  // Ctor Parameters [CppParam { name: "", ty: "IPostProcessComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPostProcessComponent(IPostProcessComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPostProcessComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPostProcessComponent(IPostProcessComponent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::IPostProcessComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::IPostProcessComponent*, "UnityEngine.Rendering.Universal", "IPostProcessComponent");
