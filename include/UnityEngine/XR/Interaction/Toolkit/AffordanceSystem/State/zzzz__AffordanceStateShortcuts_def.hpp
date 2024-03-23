#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__AffordanceStateData_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AffordanceStateShortcuts)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct AffordanceStateData;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class AffordanceStateShortcuts;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateShortcuts);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State::AffordanceStateShortcuts
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State::AffordanceStateShortcuts*
class CORDL_TYPE AffordanceStateShortcuts : public ::System::Object {
public:
  // Declarations
  /// @brief Field <activatedState>k__BackingField, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF__activatedState_k__BackingField,
                             put = setStaticF__activatedState_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData _activatedState_k__BackingField;

  /// @brief Field <disabledState>k__BackingField, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF__disabledState_k__BackingField,
                             put = setStaticF__disabledState_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData _disabledState_k__BackingField;

  /// @brief Field <hoveredPriorityState>k__BackingField, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF__hoveredPriorityState_k__BackingField,
                             put = setStaticF__hoveredPriorityState_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData
      _hoveredPriorityState_k__BackingField;

  /// @brief Field <hoveredState>k__BackingField, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF__hoveredState_k__BackingField,
                             put = setStaticF__hoveredState_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData _hoveredState_k__BackingField;

  /// @brief Field <idleState>k__BackingField, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF__idleState_k__BackingField,
                             put = setStaticF__idleState_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData _idleState_k__BackingField;

  /// @brief Field <selectedState>k__BackingField, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF__selectedState_k__BackingField,
                             put = setStaticF__selectedState_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData _selectedState_k__BackingField;

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__activatedState_k__BackingField();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__disabledState_k__BackingField();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__hoveredPriorityState_k__BackingField();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__hoveredState_k__BackingField();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__idleState_k__BackingField();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__selectedState_k__BackingField();

  /// @brief Method get_activatedState, addr 0x2a2b57c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_activatedState();

  /// @brief Method get_disabledState, addr 0x2a2b3c4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_disabledState();

  /// @brief Method get_hoveredPriorityState, addr 0x2a2b4cc, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_hoveredPriorityState();

  /// @brief Method get_hoveredState, addr 0x2a2b474, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_hoveredState();

  /// @brief Method get_idleState, addr 0x2a2b41c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_idleState();

  /// @brief Method get_selectedState, addr 0x2a2b524, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_selectedState();

  static inline void setStaticF__activatedState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData value);

  static inline void setStaticF__disabledState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData value);

  static inline void setStaticF__hoveredPriorityState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData value);

  static inline void setStaticF__hoveredState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData value);

  static inline void setStaticF__idleState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData value);

  static inline void setStaticF__selectedState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AffordanceStateShortcuts();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AffordanceStateShortcuts", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AffordanceStateShortcuts(AffordanceStateShortcuts&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AffordanceStateShortcuts", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AffordanceStateShortcuts(AffordanceStateShortcuts const&) = delete;

  /// @brief Field activated offset 0xffffffff size 0x1
  static constexpr uint8_t activated{ static_cast<uint8_t>(0x5u) };

  /// @brief Field disabled offset 0xffffffff size 0x1
  static constexpr uint8_t disabled{ static_cast<uint8_t>(0x0u) };

  /// @brief Field hovered offset 0xffffffff size 0x1
  static constexpr uint8_t hovered{ static_cast<uint8_t>(0x2u) };

  /// @brief Field hoveredPriority offset 0xffffffff size 0x1
  static constexpr uint8_t hoveredPriority{ static_cast<uint8_t>(0x3u) };

  /// @brief Field idle offset 0xffffffff size 0x1
  static constexpr uint8_t idle{ static_cast<uint8_t>(0x1u) };

  /// @brief Field selected offset 0xffffffff size 0x1
  static constexpr uint8_t selected{ static_cast<uint8_t>(0x4u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateShortcuts, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateShortcuts);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateShortcuts*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State",
                       "AffordanceStateShortcuts");
