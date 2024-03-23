#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCasterGroup2D_def.hpp"
CORDL_MODULE_EXPORT(CompositeShadowCaster2D)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class CompositeShadowCaster2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::CompositeShadowCaster2D);
// Type: UnityEngine.Rendering.Universal::CompositeShadowCaster2D
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::CompositeShadowCaster2D*
class CORDL_TYPE CompositeShadowCaster2D : public ::UnityEngine::Rendering::Universal::ShadowCasterGroup2D {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::CompositeShadowCaster2D* New_ctor();

  /// @brief Method OnDisable, addr 0x2f42030, size 0x8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2f42028, size 0x8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method .ctor, addr 0x2f42038, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeShadowCaster2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeShadowCaster2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeShadowCaster2D(CompositeShadowCaster2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeShadowCaster2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeShadowCaster2D(CompositeShadowCaster2D const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CompositeShadowCaster2D, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::CompositeShadowCaster2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CompositeShadowCaster2D*, "UnityEngine.Rendering.Universal", "CompositeShadowCaster2D");
