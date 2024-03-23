#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(XRBaseTargetFilter)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRTargetFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRBaseTargetFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::XRBaseTargetFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::XRBaseTargetFilter*
class CORDL_TYPE XRBaseTargetFilter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_canProcess)) bool canProcess;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*() noexcept;

  /// @brief Method Link, addr 0x2ff3190, size 0x4, virtual true, abstract: false, final false
  inline void Link(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter* New_ctor();

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Process(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets,
                      ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* results);

  /// @brief Method Unlink, addr 0x2ff3194, size 0x4, virtual true, abstract: false, final false
  inline void Unlink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method .ctor, addr 0x2ff3198, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canProcess, addr 0x2ff3188, size 0x8, virtual true, abstract: false, final false
  inline bool get_canProcess();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRTargetFilter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRBaseTargetFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRBaseTargetFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRBaseTargetFilter(XRBaseTargetFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRBaseTargetFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRBaseTargetFilter(XRBaseTargetFilter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRBaseTargetFilter");
