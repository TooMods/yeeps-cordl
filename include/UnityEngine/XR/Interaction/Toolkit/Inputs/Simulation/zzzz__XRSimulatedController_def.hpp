#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRSimulatedController)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRSimulatedController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRSimulatedController
// SizeInfo { instance_size: 536, native_size: -1, calculated_instance_size: 536, calculated_native_size: 536, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRSimulatedController*
class CORDL_TYPE XRSimulatedController : public ::UnityEngine::InputSystem::XR::XRController {
public:
  // Declarations
  /// @brief Field <batteryLevel>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get__batteryLevel_k__BackingField,
                      put = __cordl_internal_set__batteryLevel_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _batteryLevel_k__BackingField;

  /// @brief Field <gripButton>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__gripButton_k__BackingField,
                      put = __cordl_internal_set__gripButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _gripButton_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__grip_k__BackingField, put = __cordl_internal_set__grip_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <menuButton>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__menuButton_k__BackingField,
                      put = __cordl_internal_set__menuButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _menuButton_k__BackingField;

  /// @brief Field <primary2DAxisClick>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__primary2DAxisClick_k__BackingField,
                      put = __cordl_internal_set__primary2DAxisClick_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _primary2DAxisClick_k__BackingField;

  /// @brief Field <primary2DAxisTouch>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__primary2DAxisTouch_k__BackingField,
                      put = __cordl_internal_set__primary2DAxisTouch_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _primary2DAxisTouch_k__BackingField;

  /// @brief Field <primary2DAxis>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__primary2DAxis_k__BackingField,
                      put = __cordl_internal_set__primary2DAxis_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _primary2DAxis_k__BackingField;

  /// @brief Field <primaryButton>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__primaryButton_k__BackingField,
                      put = __cordl_internal_set__primaryButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _primaryButton_k__BackingField;

  /// @brief Field <primaryTouch>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__primaryTouch_k__BackingField,
                      put = __cordl_internal_set__primaryTouch_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _primaryTouch_k__BackingField;

  /// @brief Field <secondary2DAxisClick>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__secondary2DAxisClick_k__BackingField,
                      put = __cordl_internal_set__secondary2DAxisClick_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _secondary2DAxisClick_k__BackingField;

  /// @brief Field <secondary2DAxisTouch>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get__secondary2DAxisTouch_k__BackingField,
                      put = __cordl_internal_set__secondary2DAxisTouch_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _secondary2DAxisTouch_k__BackingField;

  /// @brief Field <secondary2DAxis>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__secondary2DAxis_k__BackingField,
                      put = __cordl_internal_set__secondary2DAxis_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _secondary2DAxis_k__BackingField;

  /// @brief Field <secondaryButton>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__secondaryButton_k__BackingField,
                      put = __cordl_internal_set__secondaryButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryButton_k__BackingField;

  /// @brief Field <secondaryTouch>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__secondaryTouch_k__BackingField,
                      put = __cordl_internal_set__secondaryTouch_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryTouch_k__BackingField;

  /// @brief Field <triggerButton>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerButton_k__BackingField,
                      put = __cordl_internal_set__triggerButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _triggerButton_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__trigger_k__BackingField,
                      put = __cordl_internal_set__trigger_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  /// @brief Field <userPresence>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__userPresence_k__BackingField,
                      put = __cordl_internal_set__userPresence_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField;

  __declspec(property(get = get_batteryLevel, put = set_batteryLevel))::UnityEngine::InputSystem::Controls::AxisControl* batteryLevel;

  __declspec(property(get = get_grip, put = set_grip))::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_gripButton, put = set_gripButton))::UnityEngine::InputSystem::Controls::ButtonControl* gripButton;

  __declspec(property(get = get_menuButton, put = set_menuButton))::UnityEngine::InputSystem::Controls::ButtonControl* menuButton;

  __declspec(property(get = get_primary2DAxis, put = set_primary2DAxis))::UnityEngine::InputSystem::Controls::Vector2Control* primary2DAxis;

  __declspec(property(get = get_primary2DAxisClick, put = set_primary2DAxisClick))::UnityEngine::InputSystem::Controls::ButtonControl* primary2DAxisClick;

  __declspec(property(get = get_primary2DAxisTouch, put = set_primary2DAxisTouch))::UnityEngine::InputSystem::Controls::ButtonControl* primary2DAxisTouch;

  __declspec(property(get = get_primaryButton, put = set_primaryButton))::UnityEngine::InputSystem::Controls::ButtonControl* primaryButton;

  __declspec(property(get = get_primaryTouch, put = set_primaryTouch))::UnityEngine::InputSystem::Controls::ButtonControl* primaryTouch;

  __declspec(property(get = get_secondary2DAxis, put = set_secondary2DAxis))::UnityEngine::InputSystem::Controls::Vector2Control* secondary2DAxis;

  __declspec(property(get = get_secondary2DAxisClick, put = set_secondary2DAxisClick))::UnityEngine::InputSystem::Controls::ButtonControl* secondary2DAxisClick;

  __declspec(property(get = get_secondary2DAxisTouch, put = set_secondary2DAxisTouch))::UnityEngine::InputSystem::Controls::ButtonControl* secondary2DAxisTouch;

  __declspec(property(get = get_secondaryButton, put = set_secondaryButton))::UnityEngine::InputSystem::Controls::ButtonControl* secondaryButton;

  __declspec(property(get = get_secondaryTouch, put = set_secondaryTouch))::UnityEngine::InputSystem::Controls::ButtonControl* secondaryTouch;

  __declspec(property(get = get_trigger, put = set_trigger))::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_triggerButton, put = set_triggerButton))::UnityEngine::InputSystem::Controls::ButtonControl* triggerButton;

  __declspec(property(get = get_userPresence, put = set_userPresence))::UnityEngine::InputSystem::Controls::ButtonControl* userPresence;

  /// @brief Method ExecuteCommand, addr 0x2a29a2c, size 0x8c, virtual true, abstract: false, final false
  inline int64_t ExecuteCommand(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandPtr);

  /// @brief Method FinishSetup, addr 0x2a296f0, size 0x33c, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__batteryLevel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__batteryLevel_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__gripButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__gripButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__grip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__grip_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menuButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__menuButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primary2DAxisClick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__primary2DAxisClick_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primary2DAxisTouch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__primary2DAxisTouch_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__primary2DAxis_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __cordl_internal_get__primary2DAxis_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primaryButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__primaryButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primaryTouch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__primaryTouch_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondary2DAxisClick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__secondary2DAxisClick_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondary2DAxisTouch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__secondary2DAxisTouch_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__secondary2DAxis_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __cordl_internal_get__secondary2DAxis_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondaryButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__secondaryButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondaryTouch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__secondaryTouch_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__triggerButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__trigger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__trigger_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__userPresence_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__userPresence_k__BackingField() const;

  constexpr void __cordl_internal_set__batteryLevel_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__gripButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__menuButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__primary2DAxisClick_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__primary2DAxisTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__primary2DAxis_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__primaryTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__secondary2DAxisClick_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__secondary2DAxisTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__secondary2DAxis_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__secondaryTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__triggerButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x2a29ab8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_batteryLevel, addr 0x2a296d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_batteryLevel();

  /// @brief Method get_grip, addr 0x2a29600, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method get_gripButton, addr 0x2a29660, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripButton();

  /// @brief Method get_menuButton, addr 0x2a29680, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menuButton();

  /// @brief Method get_primary2DAxis, addr 0x2a295e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_primary2DAxis();

  /// @brief Method get_primary2DAxisClick, addr 0x2a29690, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primary2DAxisClick();

  /// @brief Method get_primary2DAxisTouch, addr 0x2a296a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primary2DAxisTouch();

  /// @brief Method get_primaryButton, addr 0x2a29620, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton();

  /// @brief Method get_primaryTouch, addr 0x2a29630, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryTouch();

  /// @brief Method get_secondary2DAxis, addr 0x2a29610, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_secondary2DAxis();

  /// @brief Method get_secondary2DAxisClick, addr 0x2a296b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondary2DAxisClick();

  /// @brief Method get_secondary2DAxisTouch, addr 0x2a296c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondary2DAxisTouch();

  /// @brief Method get_secondaryButton, addr 0x2a29640, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton();

  /// @brief Method get_secondaryTouch, addr 0x2a29650, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryTouch();

  /// @brief Method get_trigger, addr 0x2a295f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method get_triggerButton, addr 0x2a29670, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerButton();

  /// @brief Method get_userPresence, addr 0x2a296e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence();

  /// @brief Method set_batteryLevel, addr 0x2a296d8, size 0x8, virtual false, abstract: false, final false
  inline void set_batteryLevel(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_grip, addr 0x2a29608, size 0x8, virtual false, abstract: false, final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_gripButton, addr 0x2a29668, size 0x8, virtual false, abstract: false, final false
  inline void set_gripButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_menuButton, addr 0x2a29688, size 0x8, virtual false, abstract: false, final false
  inline void set_menuButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_primary2DAxis, addr 0x2a295e8, size 0x8, virtual false, abstract: false, final false
  inline void set_primary2DAxis(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_primary2DAxisClick, addr 0x2a29698, size 0x8, virtual false, abstract: false, final false
  inline void set_primary2DAxisClick(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_primary2DAxisTouch, addr 0x2a296a8, size 0x8, virtual false, abstract: false, final false
  inline void set_primary2DAxisTouch(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_primaryButton, addr 0x2a29628, size 0x8, virtual false, abstract: false, final false
  inline void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_primaryTouch, addr 0x2a29638, size 0x8, virtual false, abstract: false, final false
  inline void set_primaryTouch(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_secondary2DAxis, addr 0x2a29618, size 0x8, virtual false, abstract: false, final false
  inline void set_secondary2DAxis(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_secondary2DAxisClick, addr 0x2a296b8, size 0x8, virtual false, abstract: false, final false
  inline void set_secondary2DAxisClick(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_secondary2DAxisTouch, addr 0x2a296c8, size 0x8, virtual false, abstract: false, final false
  inline void set_secondary2DAxisTouch(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_secondaryButton, addr 0x2a29648, size 0x8, virtual false, abstract: false, final false
  inline void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_secondaryTouch, addr 0x2a29658, size 0x8, virtual false, abstract: false, final false
  inline void set_secondaryTouch(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trigger, addr 0x2a295f8, size 0x8, virtual false, abstract: false, final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_triggerButton, addr 0x2a29678, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_userPresence, addr 0x2a296e8, size 0x8, virtual false, abstract: false, final false
  inline void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSimulatedController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSimulatedController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSimulatedController(XRSimulatedController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSimulatedController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSimulatedController(XRSimulatedController const&) = delete;

  /// @brief Field <primary2DAxis>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____primary2DAxis_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <secondary2DAxis>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____secondary2DAxis_k__BackingField;

  /// @brief Field <primaryButton>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primaryButton_k__BackingField;

  /// @brief Field <primaryTouch>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primaryTouch_k__BackingField;

  /// @brief Field <secondaryButton>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondaryButton_k__BackingField;

  /// @brief Field <secondaryTouch>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondaryTouch_k__BackingField;

  /// @brief Field <gripButton>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripButton_k__BackingField;

  /// @brief Field <triggerButton>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerButton_k__BackingField;

  /// @brief Field <menuButton>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menuButton_k__BackingField;

  /// @brief Field <primary2DAxisClick>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primary2DAxisClick_k__BackingField;

  /// @brief Field <primary2DAxisTouch>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primary2DAxisTouch_k__BackingField;

  /// @brief Field <secondary2DAxisClick>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondary2DAxisClick_k__BackingField;

  /// @brief Field <secondary2DAxisTouch>k__BackingField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondary2DAxisTouch_k__BackingField;

  /// @brief Field <batteryLevel>k__BackingField, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____batteryLevel_k__BackingField;

  /// @brief Field <userPresence>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____userPresence_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, 0x218>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____primary2DAxis_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____trigger_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____grip_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____secondary2DAxis_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____primaryButton_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____primaryTouch_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____secondaryButton_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____secondaryTouch_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____gripButton_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____triggerButton_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____menuButton_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____primary2DAxisClick_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____primary2DAxisTouch_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____secondary2DAxisClick_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____secondary2DAxisTouch_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____batteryLevel_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____userPresence_k__BackingField) == 0x210, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRSimulatedController");
