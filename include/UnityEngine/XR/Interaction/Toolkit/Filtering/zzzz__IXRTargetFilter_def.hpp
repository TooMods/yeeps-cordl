#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRTargetFilter)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRTargetFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::IXRTargetFilter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::IXRTargetFilter*
class CORDL_TYPE IXRTargetFilter {
public:
  // Declarations
  __declspec(property(get = get_canProcess)) bool canProcess;

  /// @brief Method Link, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Link(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Process(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets,
                      ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* results);

  /// @brief Method Unlink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Unlink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method get_canProcess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_canProcess();

  // Ctor Parameters [CppParam { name: "", ty: "IXRTargetFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRTargetFilter(IXRTargetFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRTargetFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRTargetFilter(IXRTargetFilter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRTargetFilter");
