#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExtendedAxisEventData)
namespace UnityEngine::EventSystems {
class EventSystem;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class ExtendedAxisEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::ExtendedAxisEventData);
// Type: UnityEngine.InputSystem.UI::ExtendedAxisEventData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.UI::ExtendedAxisEventData*
class CORDL_TYPE ExtendedAxisEventData : public ::UnityEngine::EventSystems::AxisEventData {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::UI::ExtendedAxisEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method ToString, addr 0x1eab34c, size 0xbc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x1eab344, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedAxisEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtendedAxisEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtendedAxisEventData(ExtendedAxisEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedAxisEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtendedAxisEventData(ExtendedAxisEventData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::ExtendedAxisEventData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::ExtendedAxisEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::ExtendedAxisEventData*, "UnityEngine.InputSystem.UI", "ExtendedAxisEventData");
