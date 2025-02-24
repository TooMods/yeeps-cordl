#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pointer)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Pointer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Pointer);
// Type: UnityEngine.InputSystem::Pointer
// SizeInfo { instance_size: 416, native_size: -1, calculated_instance_size: 416, calculated_native_size: 416, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::Pointer*
class CORDL_TYPE Pointer : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::Pointer* _current_k__BackingField;

  /// @brief Field <delta>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__delta_k__BackingField, put = __cordl_internal_set__delta_k__BackingField))::UnityEngine::InputSystem::Controls::DeltaControl* _delta_k__BackingField;

  /// @brief Field <displayIndex>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__displayIndex_k__BackingField,
                      put = __cordl_internal_set__displayIndex_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _displayIndex_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__position_k__BackingField,
                      put = __cordl_internal_set__position_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _position_k__BackingField;

  /// @brief Field <press>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__press_k__BackingField, put = __cordl_internal_set__press_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _press_k__BackingField;

  /// @brief Field <pressure>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__pressure_k__BackingField,
                      put = __cordl_internal_set__pressure_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _pressure_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__radius_k__BackingField,
                      put = __cordl_internal_set__radius_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _radius_k__BackingField;

  __declspec(property(get = get_delta, put = set_delta))::UnityEngine::InputSystem::Controls::DeltaControl* delta;

  __declspec(property(get = get_displayIndex, put = set_displayIndex))::UnityEngine::InputSystem::Controls::IntegerControl* displayIndex;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::InputSystem::Controls::Vector2Control* position;

  __declspec(property(get = get_press, put = set_press))::UnityEngine::InputSystem::Controls::ButtonControl* press;

  __declspec(property(get = get_pressure, put = set_pressure))::UnityEngine::InputSystem::Controls::AxisControl* pressure;

  __declspec(property(get = get_radius, put = set_radius))::UnityEngine::InputSystem::Controls::Vector2Control* radius;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept;

  /// @brief Method FinishSetup, addr 0x187e9d8, size 0x1a0, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x187e5c4, size 0x4c, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::Pointer* New_ctor();

  /// @brief Method OnNextUpdate, addr 0x187ec08, size 0x88, virtual false, abstract: false, final false
  inline void OnNextUpdate();

  /// @brief Method OnRemoved, addr 0x187e6ec, size 0x7c, virtual true, abstract: false, final false
  inline void OnRemoved();

  /// @brief Method OnStateEvent, addr 0x187ecd4, size 0x4c, virtual false, abstract: false, final false
  inline void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent, addr 0x187f3d0, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ByRef<uint32_t> offset);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate, addr 0x187f3c8, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate();

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent, addr 0x187f3cc, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  constexpr ::UnityEngine::InputSystem::Controls::DeltaControl*& __cordl_internal_get__delta_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::DeltaControl*> const& __cordl_internal_get__delta_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__displayIndex_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __cordl_internal_get__displayIndex_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__position_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __cordl_internal_get__position_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__press_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__press_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__pressure_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__pressure_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__radius_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __cordl_internal_get__radius_k__BackingField() const;

  constexpr void __cordl_internal_set__delta_k__BackingField(::UnityEngine::InputSystem::Controls::DeltaControl* value);

  constexpr void __cordl_internal_set__displayIndex_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr void __cordl_internal_set__position_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__press_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__pressure_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__radius_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method .ctor, addr 0x187ed5c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Pointer* getStaticF__current_k__BackingField();

  /// @brief Method get_current, addr 0x187f334, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Pointer* get_current();

  /// @brief Method get_delta, addr 0x187f2e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* get_delta();

  /// @brief Method get_displayIndex, addr 0x187f324, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_displayIndex();

  /// @brief Method get_position, addr 0x187f2d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_position();

  /// @brief Method get_press, addr 0x187f314, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_press();

  /// @brief Method get_pressure, addr 0x187f304, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_pressure();

  /// @brief Method get_radius, addr 0x187f2f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_radius();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver* i___UnityEngine__InputSystem__LowLevel__IInputStateCallbackReceiver() noexcept;

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Pointer* value);

  /// @brief Method set_current, addr 0x187f37c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::Pointer* value);

  /// @brief Method set_delta, addr 0x187f2ec, size 0x8, virtual false, abstract: false, final false
  inline void set_delta(::UnityEngine::InputSystem::Controls::DeltaControl* value);

  /// @brief Method set_displayIndex, addr 0x187f32c, size 0x8, virtual false, abstract: false, final false
  inline void set_displayIndex(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method set_position, addr 0x187f2dc, size 0x8, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_press, addr 0x187f31c, size 0x8, virtual false, abstract: false, final false
  inline void set_press(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_pressure, addr 0x187f30c, size 0x8, virtual false, abstract: false, final false
  inline void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_radius, addr 0x187f2fc, size 0x8, virtual false, abstract: false, final false
  inline void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pointer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pointer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pointer(Pointer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pointer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pointer(Pointer const&) = delete;

  /// @brief Field <position>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____position_k__BackingField;

  /// @brief Field <delta>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::DeltaControl* ____delta_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____radius_k__BackingField;

  /// @brief Field <pressure>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____pressure_k__BackingField;

  /// @brief Field <press>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____press_k__BackingField;

  /// @brief Field <displayIndex>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____displayIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Pointer, 0x1a0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pointer, ____position_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pointer, ____delta_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pointer, ____radius_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pointer, ____pressure_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pointer, ____press_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pointer, ____displayIndex_k__BackingField) == 0x198, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Pointer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Pointer*, "UnityEngine.InputSystem", "Pointer");
