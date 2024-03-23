#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IXRReticleDirectionProvider)
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRReticleDirectionProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRReticleDirectionProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRReticleDirectionProvider*
class CORDL_TYPE IXRReticleDirectionProvider {
public:
  // Declarations
  /// @brief Method GetReticleDirection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetReticleDirection(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::Vector3 hitNormal, ByRef<::UnityEngine::Vector3> reticleUp,
                                  ByRef<::System::Nullable_1<::UnityEngine::Vector3>> optionalReticleForward);

  // Ctor Parameters [CppParam { name: "", ty: "IXRReticleDirectionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRReticleDirectionProvider(IXRReticleDirectionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRReticleDirectionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRReticleDirectionProvider(IXRReticleDirectionProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider*, "UnityEngine.XR.Interaction.Toolkit", "IXRReticleDirectionProvider");
