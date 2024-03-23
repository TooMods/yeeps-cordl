#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRPokeFilter)
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings {
class BindingsGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class IPokeStateDataProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRInteractionStrengthFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRSelectFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeStateData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractable;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::XRPokeFilter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::XRPokeFilter*
class CORDL_TYPE XRPokeFilter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_canProcess)) bool canProcess;

  /// @brief Field m_BindingsGroup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindingsGroup, put = __cordl_internal_set_m_BindingsGroup))::Unity::XR::CoreUtils::Bindings::BindingsGroup* m_BindingsGroup;

  /// @brief Field m_Interactable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Interactable, put = __cordl_internal_set_m_Interactable))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> m_Interactable;

  /// @brief Field m_PokeCollider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PokeCollider, put = __cordl_internal_set_m_PokeCollider))::UnityW<::UnityEngine::Collider> m_PokeCollider;

  /// @brief Field m_PokeConfiguration, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PokeConfiguration,
                      put = __cordl_internal_set_m_PokeConfiguration))::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* m_PokeConfiguration;

  /// @brief Field m_PokeLogic, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PokeLogic, put = __cordl_internal_set_m_PokeLogic))::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* m_PokeLogic;

  __declspec(property(get = get_pokeCollider, put = set_pokeCollider))::UnityW<::UnityEngine::Collider> pokeCollider;

  __declspec(property(get = get_pokeConfiguration, put = set_pokeConfiguration))::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* pokeConfiguration;

  __declspec(property(get = get_pokeInteractable, put = set_pokeInteractable))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> pokeInteractable;

  __declspec(
      property(get = get_pokeStateData))::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* pokeStateData;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*() noexcept;

  /// @brief Method Awake, addr 0x2feef64, size 0x218, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearBindings, addr 0x2fef72c, size 0x17c, virtual false, abstract: false, final false
  inline void ClearBindings();

  /// @brief Method FindPokeCollider, addr 0x2fef210, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> FindPokeCollider();

  /// @brief Method FindPokeInteractable, addr 0x2fef17c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> FindPokeInteractable();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter* New_ctor();

  /// @brief Method OnDestroy, addr 0x2fef59c, size 0x190, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDrawGizmosSelected, addr 0x2fef8f8, size 0x4, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnHoverEntered, addr 0x2ff0364, size 0x150, virtual false, abstract: false, final false
  inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverExited, addr 0x2ff0564, size 0x38, virtual false, abstract: false, final false
  inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnValidate, addr 0x2feef60, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Process, addr 0x2fef8fc, size 0x208, virtual true, abstract: false, final true
  inline bool Process(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method Process, addr 0x2ff0244, size 0x120, virtual true, abstract: false, final true
  inline float_t Process(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable, float_t interactionStrength);

  /// @brief Method Reset, addr 0x2feef5c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Setup, addr 0x2feed9c, size 0x158, virtual false, abstract: false, final false
  inline void Setup();

  /// @brief Method SetupBindings, addr 0x2fef430, size 0x16c, virtual false, abstract: false, final false
  inline void SetupBindings();

  /// @brief Method Start, addr 0x2fef2a4, size 0x18c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& __cordl_internal_get_m_BindingsGroup();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::BindingsGroup*> const& __cordl_internal_get_m_BindingsGroup() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> const& __cordl_internal_get_m_Interactable() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>& __cordl_internal_get_m_Interactable();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_PokeCollider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_PokeCollider();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*& __cordl_internal_get_m_PokeConfiguration();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*> const& __cordl_internal_get_m_PokeConfiguration() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*& __cordl_internal_get_m_PokeLogic();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*> const& __cordl_internal_get_m_PokeLogic() const;

  constexpr void __cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup* value);

  constexpr void __cordl_internal_set_m_Interactable(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> value);

  constexpr void __cordl_internal_set_m_PokeCollider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_m_PokeConfiguration(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* value);

  constexpr void __cordl_internal_set_m_PokeLogic(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* value);

  /// @brief Method .ctor, addr 0x2ff0910, size 0x110, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canProcess, addr 0x2feef2c, size 0x30, virtual true, abstract: false, final false
  inline bool get_canProcess();

  /// @brief Method get_pokeCollider, addr 0x2feeef4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_pokeCollider();

  /// @brief Method get_pokeConfiguration, addr 0x2feef04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* get_pokeConfiguration();

  /// @brief Method get_pokeInteractable, addr 0x2feed8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> get_pokeInteractable();

  /// @brief Method get_pokeStateData, addr 0x2feef14, size 0x18, virtual true, abstract: false, final true
  inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* get_pokeStateData();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider*
  i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__State__IPokeStateDataProvider() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRInteractionStrengthFilter() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRSelectFilter() noexcept;

  /// @brief Method set_pokeCollider, addr 0x2feeefc, size 0x8, virtual false, abstract: false, final false
  inline void set_pokeCollider(::UnityEngine::Collider* value);

  /// @brief Method set_pokeConfiguration, addr 0x2feef0c, size 0x8, virtual false, abstract: false, final false
  inline void set_pokeConfiguration(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* value);

  /// @brief Method set_pokeInteractable, addr 0x2feed94, size 0x8, virtual false, abstract: false, final false
  inline void set_pokeInteractable(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRPokeFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRPokeFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRPokeFilter(XRPokeFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRPokeFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRPokeFilter(XRPokeFilter const&) = delete;

  /// @brief Field m_Interactable, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> ___m_Interactable;

  /// @brief Field m_PokeCollider, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___m_PokeCollider;

  /// @brief Field m_PokeConfiguration, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* ___m_PokeConfiguration;

  /// @brief Field m_PokeLogic, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* ___m_PokeLogic;

  /// @brief Field m_BindingsGroup, offset: 0x38, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::BindingsGroup* ___m_BindingsGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter, ___m_Interactable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter, ___m_PokeCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter, ___m_PokeConfiguration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter, ___m_PokeLogic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter, ___m_BindingsGroup) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRPokeFilter");
