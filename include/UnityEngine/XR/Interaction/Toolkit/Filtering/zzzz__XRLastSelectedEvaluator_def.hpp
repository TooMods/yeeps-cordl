#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRLastSelectedEvaluator)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRTargetEvaluatorLinkable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRLastSelectedEvaluator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::XRLastSelectedEvaluator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::XRLastSelectedEvaluator*
class CORDL_TYPE XRLastSelectedEvaluator : public ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator {
public:
  // Declarations
  /// @brief Field m_InteractableSelectionTimeMap, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractableSelectionTimeMap,
                      put = __cordl_internal_set_m_InteractableSelectionTimeMap))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*,
                                                                                                                              float_t>* m_InteractableSelectionTimeMap;

  /// @brief Field m_MaxTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxTime, put = __cordl_internal_set_m_MaxTime)) float_t m_MaxTime;

  __declspec(property(get = get_maxTime, put = set_maxTime)) float_t maxTime;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*() noexcept;

  /// @brief Method CalculateNormalizedScore, addr 0x2ff2330, size 0xac, virtual true, abstract: false, final false
  inline float_t CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* target);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator* New_ctor();

  /// @brief Method OnDisable, addr 0x2ff22dc, size 0x50, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnLink, addr 0x2ff205c, size 0x140, virtual true, abstract: false, final false
  inline void OnLink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method OnSelect, addr 0x2ff1fcc, size 0x90, virtual false, abstract: false, final false
  inline void OnSelect(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnUnlink, addr 0x2ff219c, size 0x140, virtual true, abstract: false, final false
  inline void OnUnlink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>*& __cordl_internal_get_m_InteractableSelectionTimeMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>*> const&
  __cordl_internal_get_m_InteractableSelectionTimeMap() const;

  constexpr float_t const& __cordl_internal_get_m_MaxTime() const;

  constexpr float_t& __cordl_internal_get_m_MaxTime();

  constexpr void __cordl_internal_set_m_InteractableSelectionTimeMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>* value);

  constexpr void __cordl_internal_set_m_MaxTime(float_t value);

  /// @brief Method .ctor, addr 0x2ff23dc, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_maxTime, addr 0x2ff1fbc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxTime();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRTargetEvaluatorLinkable() noexcept;

  /// @brief Method set_maxTime, addr 0x2ff1fc4, size 0x8, virtual false, abstract: false, final false
  inline void set_maxTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRLastSelectedEvaluator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRLastSelectedEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRLastSelectedEvaluator(XRLastSelectedEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRLastSelectedEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRLastSelectedEvaluator(XRLastSelectedEvaluator const&) = delete;

  /// @brief Field m_InteractableSelectionTimeMap, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>* ___m_InteractableSelectionTimeMap;

  /// @brief Field m_MaxTime, offset: 0x38, size: 0x4, def value: None
  float_t ___m_MaxTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator, ___m_InteractableSelectionTimeMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator, ___m_MaxTime) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRLastSelectedEvaluator");
