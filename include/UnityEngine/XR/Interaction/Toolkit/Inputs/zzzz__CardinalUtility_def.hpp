#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CardinalUtility)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
struct Cardinal;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class CardinalUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs::CardinalUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs::CardinalUtility*
class CORDL_TYPE CardinalUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetNearestCardinal, addr 0x2ff5670, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal GetNearestCardinal(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CardinalUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CardinalUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CardinalUtility(CardinalUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CardinalUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CardinalUtility(CardinalUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "CardinalUtility");
