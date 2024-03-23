#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AffordanceStateData)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct AffordanceStateData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State::AffordanceStateData
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State::AffordanceStateData
struct CORDL_TYPE AffordanceStateData {
public:
  // Declarations
  __declspec(property(get = get_stateIndex)) uint8_t stateIndex;

  __declspec(property(get = get_stateTransitionAmountFloat)) float_t stateTransitionAmountFloat;

  __declspec(property(get = get_stateTransitionIncrement)) uint8_t stateTransitionIncrement;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*();

  /// @brief Method Equals, addr 0x2a2b2e8, size 0x84, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a2b2c0, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData other);

  /// @brief Method GetHashCode, addr 0x2a2b36c, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x2a2b27c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(uint8_t stateIndex, float_t transitionAmount);

  /// @brief Method .ctor, addr 0x2a2b2b4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint8_t stateIndex, uint8_t transitionIncrement);

  /// @brief Method get_stateIndex, addr 0x2a2b254, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_stateIndex();

  /// @brief Method get_stateTransitionAmountFloat, addr 0x2a2b264, size 0x18, virtual false, abstract: false, final false
  inline float_t get_stateTransitionAmountFloat();

  /// @brief Method get_stateTransitionIncrement, addr 0x2a2b25c, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_stateTransitionIncrement();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*
  i___System__IEquatable_1___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__State__AffordanceStateData_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AffordanceStateData();

  // Ctor Parameters [CppParam { name: "_stateIndex_k__BackingField", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_stateTransitionIncrement_k__BackingField", ty: "uint8_t",
  // modifiers: "", def_value: None }]
  constexpr AffordanceStateData(uint8_t _stateIndex_k__BackingField, uint8_t _stateTransitionIncrement_k__BackingField) noexcept;

  /// @brief Field <stateIndex>k__BackingField, offset: 0x0, size: 0x1, def value: None
  uint8_t _stateIndex_k__BackingField;

  /// @brief Field <stateTransitionIncrement>k__BackingField, offset: 0x1, size: 0x1, def value: None
  uint8_t _stateTransitionIncrement_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field totalStateTransitionIncrements offset 0xffffffff size 0x1
  static constexpr uint8_t totalStateTransitionIncrements{ static_cast<uint8_t>(0xffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData, 0x2>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData, _stateIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData, _stateTransitionIncrement_k__BackingField) == 0x1, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "AffordanceStateData");
