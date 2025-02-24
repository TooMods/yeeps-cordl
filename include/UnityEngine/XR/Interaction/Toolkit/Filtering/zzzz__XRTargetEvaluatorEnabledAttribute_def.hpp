#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(XRTargetEvaluatorEnabledAttribute)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRTargetEvaluatorEnabledAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluatorEnabledAttribute);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::XRTargetEvaluatorEnabledAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::XRTargetEvaluatorEnabledAttribute*
class CORDL_TYPE XRTargetEvaluatorEnabledAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluatorEnabledAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2fee708, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRTargetEvaluatorEnabledAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRTargetEvaluatorEnabledAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRTargetEvaluatorEnabledAttribute(XRTargetEvaluatorEnabledAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRTargetEvaluatorEnabledAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRTargetEvaluatorEnabledAttribute(XRTargetEvaluatorEnabledAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluatorEnabledAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluatorEnabledAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluatorEnabledAttribute*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRTargetEvaluatorEnabledAttribute");
