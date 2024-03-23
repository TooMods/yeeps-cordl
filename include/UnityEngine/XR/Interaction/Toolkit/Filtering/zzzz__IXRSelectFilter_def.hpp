#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRSelectFilter)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRSelectFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::IXRSelectFilter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::IXRSelectFilter*
class CORDL_TYPE IXRSelectFilter {
public:
  // Declarations
  __declspec(property(get = get_canProcess)) bool canProcess;

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Process(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method get_canProcess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_canProcess();

  // Ctor Parameters [CppParam { name: "", ty: "IXRSelectFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRSelectFilter(IXRSelectFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRSelectFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRSelectFilter(IXRSelectFilter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRSelectFilter");
