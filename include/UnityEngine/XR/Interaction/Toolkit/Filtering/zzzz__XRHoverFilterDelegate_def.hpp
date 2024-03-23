#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRHoverFilterDelegate)
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRHoverFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRHoverFilterDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::XRHoverFilterDelegate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::XRHoverFilterDelegate*
class CORDL_TYPE XRHoverFilterDelegate : public ::System::Object {
public:
  // Declarations
  /// @brief Field <canProcess>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__canProcess_k__BackingField, put = __cordl_internal_set__canProcess_k__BackingField)) bool _canProcess_k__BackingField;

  /// @brief Field <delegateToProcess>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__delegateToProcess_k__BackingField, put = __cordl_internal_set__delegateToProcess_k__BackingField))::System::Func_3<
      ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* _delegateToProcess_k__BackingField;

  __declspec(property(get = get_canProcess, put = set_canProcess)) bool canProcess;

  __declspec(property(get = get_delegateToProcess, put = set_delegateToProcess))::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*,
                                                                                                 ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* delegateToProcess;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*() noexcept;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate*
  New_ctor(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* delegateToProcess);

  /// @brief Method Process, addr 0x2fee7b4, size 0x24, virtual true, abstract: false, final true
  inline bool Process(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  constexpr bool const& __cordl_internal_get__canProcess_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canProcess_k__BackingField();

  constexpr ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>*&
  __cordl_internal_get__delegateToProcess_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>*> const&
  __cordl_internal_get__delegateToProcess_k__BackingField() const;

  constexpr void __cordl_internal_set__canProcess_k__BackingField(bool value);

  constexpr void __cordl_internal_set__delegateToProcess_k__BackingField(
      ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* value);

  /// @brief Method .ctor, addr 0x2fee734, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* delegateToProcess);

  /// @brief Method get_canProcess, addr 0x2fee720, size 0x8, virtual true, abstract: false, final true
  inline bool get_canProcess();

  /// @brief Method get_delegateToProcess, addr 0x2fee710, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* get_delegateToProcess();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRHoverFilter() noexcept;

  /// @brief Method set_canProcess, addr 0x2fee728, size 0xc, virtual false, abstract: false, final false
  inline void set_canProcess(bool value);

  /// @brief Method set_delegateToProcess, addr 0x2fee718, size 0x8, virtual false, abstract: false, final false
  inline void set_delegateToProcess(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRHoverFilterDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRHoverFilterDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRHoverFilterDelegate(XRHoverFilterDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRHoverFilterDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRHoverFilterDelegate(XRHoverFilterDelegate const&) = delete;

  /// @brief Field <delegateToProcess>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* ____delegateToProcess_k__BackingField;

  /// @brief Field <canProcess>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____canProcess_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate, ____delegateToProcess_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate, ____canProcess_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRHoverFilterDelegate");
