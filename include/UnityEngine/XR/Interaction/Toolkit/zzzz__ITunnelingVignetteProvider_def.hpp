#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITunnelingVignetteProvider)
namespace UnityEngine::XR::Interaction::Toolkit {
class VignetteParameters;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ITunnelingVignetteProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider);
// Type: UnityEngine.XR.Interaction.Toolkit::ITunnelingVignetteProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::ITunnelingVignetteProvider*
class CORDL_TYPE ITunnelingVignetteProvider {
public:
  // Declarations
  __declspec(property(get = get_vignetteParameters))::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* vignetteParameters;

  /// @brief Method get_vignetteParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* get_vignetteParameters();

  // Ctor Parameters [CppParam { name: "", ty: "ITunnelingVignetteProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITunnelingVignetteProvider(ITunnelingVignetteProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITunnelingVignetteProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITunnelingVignetteProvider(ITunnelingVignetteProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*, "UnityEngine.XR.Interaction.Toolkit", "ITunnelingVignetteProvider");
