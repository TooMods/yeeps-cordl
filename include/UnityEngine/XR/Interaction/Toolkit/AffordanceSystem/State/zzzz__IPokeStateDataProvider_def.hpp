#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPokeStateDataProvider)
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeStateData;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class IPokeStateDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State::IPokeStateDataProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State::IPokeStateDataProvider*
class CORDL_TYPE IPokeStateDataProvider {
public:
  // Declarations
  __declspec(
      property(get = get_pokeStateData))::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* pokeStateData;

  /// @brief Method get_pokeStateData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* get_pokeStateData();

  // Ctor Parameters [CppParam { name: "", ty: "IPokeStateDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPokeStateDataProvider(IPokeStateDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPokeStateDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPokeStateDataProvider(IPokeStateDataProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State",
                       "IPokeStateDataProvider");
