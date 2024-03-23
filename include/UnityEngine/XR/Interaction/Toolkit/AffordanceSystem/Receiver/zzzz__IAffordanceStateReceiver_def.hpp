#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAffordanceStateReceiver)
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct AffordanceStateData;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class IAffordanceStateReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver::IAffordanceStateReceiver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver::IAffordanceStateReceiver*
class CORDL_TYPE IAffordanceStateReceiver {
public:
  // Declarations
  __declspec(property(get = get_currentAffordanceStateData))::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<
      ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* currentAffordanceStateData;

  /// @brief Method OnAffordanceStateUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnAffordanceStateUpdated(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData previousState,
                                       ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData newState);

  /// @brief Method get_currentAffordanceStateData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*
  get_currentAffordanceStateData();

  // Ctor Parameters [CppParam { name: "", ty: "IAffordanceStateReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAffordanceStateReceiver(IAffordanceStateReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAffordanceStateReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAffordanceStateReceiver(IAffordanceStateReceiver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver",
                       "IAffordanceStateReceiver");
