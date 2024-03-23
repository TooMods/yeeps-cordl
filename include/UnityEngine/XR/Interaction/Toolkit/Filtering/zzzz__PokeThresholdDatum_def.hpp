#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeThresholdData_def.hpp"
CORDL_MODULE_EXPORT(PokeThresholdDatum)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdDatum;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::PokeThresholdDatum
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::PokeThresholdDatum*
class CORDL_TYPE PokeThresholdDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*> {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum* New_ctor();

  /// @brief Method .ctor, addr 0x2feec94, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PokeThresholdDatum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PokeThresholdDatum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PokeThresholdDatum(PokeThresholdDatum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PokeThresholdDatum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PokeThresholdDatum(PokeThresholdDatum const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum, 0x38>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "PokeThresholdDatum");
