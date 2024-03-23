#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRDistanceEvaluator)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRDistanceEvaluator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::XRDistanceEvaluator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::XRDistanceEvaluator*
class CORDL_TYPE XRDistanceEvaluator : public ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator {
public:
  // Declarations
  /// @brief Field m_MaxDistance, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxDistance, put = __cordl_internal_set_m_MaxDistance)) float_t m_MaxDistance;

  __declspec(property(get = get_maxDistance, put = set_maxDistance)) float_t maxDistance;

  /// @brief Method CalculateNormalizedScore, addr 0x2ff1d78, size 0x22c, virtual true, abstract: false, final false
  inline float_t CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* target);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator* New_ctor();

  /// @brief Method Reset, addr 0x2ff1c3c, size 0x13c, virtual true, abstract: false, final false
  inline void Reset();

  constexpr float_t const& __cordl_internal_get_m_MaxDistance() const;

  constexpr float_t& __cordl_internal_get_m_MaxDistance();

  constexpr void __cordl_internal_set_m_MaxDistance(float_t value);

  /// @brief Method .ctor, addr 0x2ff1fa4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_maxDistance, addr 0x2ff1c2c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxDistance();

  /// @brief Method set_maxDistance, addr 0x2ff1c34, size 0x8, virtual false, abstract: false, final false
  inline void set_maxDistance(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDistanceEvaluator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDistanceEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDistanceEvaluator(XRDistanceEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDistanceEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDistanceEvaluator(XRDistanceEvaluator const&) = delete;

  /// @brief Field m_MaxDistance, offset: 0x2c, size: 0x4, def value: None
  float_t ___m_MaxDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator, ___m_MaxDistance) == 0x2c, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRDistanceEvaluator");
