#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(XRLayout)
namespace UnityEngine::Rendering::Universal {
struct XRPassCreateInfo;
}
namespace UnityEngine::Rendering::Universal {
class XRPass;
}
namespace UnityEngine::Rendering::Universal {
class XRSystem;
}
namespace UnityEngine::Rendering::Universal {
struct XRViewCreateInfo;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct XRLayout;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::XRLayout);
// Type: UnityEngine.Rendering.Universal::XRLayout
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::XRLayout
struct CORDL_TYPE XRLayout {
public:
  // Declarations
  /// @brief Method AddViewToPass, addr 0x288e278, size 0xa0, virtual false, abstract: false, final false
  inline void AddViewToPass(::UnityEngine::Rendering::Universal::XRViewCreateInfo viewCreateInfo, ::UnityEngine::Rendering::Universal::XRPass* pass);

  /// @brief Method CreatePass, addr 0x288dea0, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::XRPass* CreatePass(::UnityEngine::Rendering::Universal::XRPassCreateInfo passCreateInfo);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRLayout();

  // Ctor Parameters [CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: None }, CppParam { name: "xrSystem", ty:
  // "::UnityEngine::Rendering::Universal::XRSystem*", modifiers: "", def_value: None }]
  constexpr XRLayout(::UnityW<::UnityEngine::Camera> camera, ::UnityEngine::Rendering::Universal::XRSystem* xrSystem) noexcept;

  /// @brief Field camera, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field xrSystem, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XRSystem* xrSystem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRLayout, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRLayout, camera) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRLayout, xrSystem) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRLayout, "UnityEngine.Rendering.Universal", "XRLayout");
