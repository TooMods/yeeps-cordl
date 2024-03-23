#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IUIInteractor)
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor);
// Type: UnityEngine.XR.Interaction.Toolkit.UI::IUIInteractor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::IUIInteractor*
class CORDL_TYPE IUIInteractor {
public:
  // Declarations
  /// @brief Method TryGetUIModel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryGetUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);

  /// @brief Method UpdateUIModel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);

  // Ctor Parameters [CppParam { name: "", ty: "IUIInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUIInteractor(IUIInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUIInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUIInteractor(IUIInteractor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::UI
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, "UnityEngine.XR.Interaction.Toolkit.UI", "IUIInteractor");
