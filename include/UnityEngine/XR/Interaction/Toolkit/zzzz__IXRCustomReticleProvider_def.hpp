#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRCustomReticleProvider)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRCustomReticleProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRCustomReticleProvider);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRCustomReticleProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRCustomReticleProvider*
class CORDL_TYPE IXRCustomReticleProvider {
public:
  // Declarations
  /// @brief Method AttachCustomReticle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool AttachCustomReticle(::UnityEngine::GameObject* reticleInstance);

  /// @brief Method RemoveCustomReticle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool RemoveCustomReticle();

  // Ctor Parameters [CppParam { name: "", ty: "IXRCustomReticleProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRCustomReticleProvider(IXRCustomReticleProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRCustomReticleProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRCustomReticleProvider(IXRCustomReticleProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRCustomReticleProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRCustomReticleProvider*, "UnityEngine.XR.Interaction.Toolkit", "IXRCustomReticleProvider");
