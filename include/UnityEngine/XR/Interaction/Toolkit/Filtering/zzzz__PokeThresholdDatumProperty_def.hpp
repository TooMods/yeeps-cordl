#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeThresholdData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeThresholdDatum_def.hpp"
CORDL_MODULE_EXPORT(PokeThresholdDatumProperty)
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdDatum;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdDatumProperty;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::PokeThresholdDatumProperty
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::PokeThresholdDatumProperty*
class CORDL_TYPE PokeThresholdDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*,
                                                                                                     ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum>> {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum* datum);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData* value);

  /// @brief Method .ctor, addr 0x2feed34, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum* datum);

  /// @brief Method .ctor, addr 0x2feecdc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PokeThresholdDatumProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PokeThresholdDatumProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PokeThresholdDatumProperty(PokeThresholdDatumProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PokeThresholdDatumProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PokeThresholdDatumProperty(PokeThresholdDatumProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "PokeThresholdDatumProperty");
