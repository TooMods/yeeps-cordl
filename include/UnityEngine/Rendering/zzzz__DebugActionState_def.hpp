#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugActionState)
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::Rendering {
class DebugActionDesc;
}
namespace UnityEngine::Rendering {
struct __DebugActionState__DebugActionKeyType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct __DebugActionState__DebugActionKeyType;
}
namespace UnityEngine::Rendering {
class DebugActionState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugActionState);
// Type: ::DebugActionKeyType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::DebugActionState::DebugActionKeyType
struct CORDL_TYPE __DebugActionState__DebugActionKeyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DebugActionState__DebugActionKeyType_Unwrapped
  enum struct ____DebugActionState__DebugActionKeyType_Unwrapped : int32_t {
    __E_Button = static_cast<int32_t>(0x0),
    __E_Axis = static_cast<int32_t>(0x1),
    __E_Key = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DebugActionState__DebugActionKeyType_Unwrapped() const noexcept {
    return static_cast<____DebugActionState__DebugActionKeyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugActionState__DebugActionKeyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DebugActionState__DebugActionKeyType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Axis value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType const Axis;

  /// @brief Field Button value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType const Button;

  /// @brief Field Key value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType const Key;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::DebugActionState
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::DebugActionState*
class CORDL_TYPE DebugActionState : public ::System::Object {
public:
  // Declarations
  using DebugActionKeyType = ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType;

  /// @brief Field <actionState>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__actionState_k__BackingField, put = __cordl_internal_set__actionState_k__BackingField)) float_t _actionState_k__BackingField;

  /// @brief Field <runningAction>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__runningAction_k__BackingField, put = __cordl_internal_set__runningAction_k__BackingField)) bool _runningAction_k__BackingField;

  __declspec(property(get = get_actionState, put = set_actionState)) float_t actionState;

  /// @brief Field inputAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_inputAction, put = __cordl_internal_set_inputAction))::UnityEngine::InputSystem::InputAction* inputAction;

  /// @brief Field m_Timer, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timer, put = __cordl_internal_set_m_Timer)) float_t m_Timer;

  /// @brief Field m_TriggerPressedUp, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TriggerPressedUp, put = __cordl_internal_set_m_TriggerPressedUp))::ArrayW<bool, ::Array<bool>*> m_TriggerPressedUp;

  /// @brief Field m_Type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type))::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType m_Type;

  __declspec(property(get = get_runningAction, put = set_runningAction)) bool runningAction;

  static inline ::UnityEngine::Rendering::DebugActionState* New_ctor();

  /// @brief Method Reset, addr 0x1bd5c9c, size 0x10, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Trigger, addr 0x1bd5be4, size 0xb8, virtual false, abstract: false, final false
  inline void Trigger(int32_t triggerCount, float_t state);

  /// @brief Method TriggerWithButton, addr 0x1bd3160, size 0x6c, virtual false, abstract: false, final false
  inline void TriggerWithButton(::UnityEngine::InputSystem::InputAction* action, float_t state);

  /// @brief Method Update, addr 0x1bd3230, size 0x1a0, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Rendering::DebugActionDesc* desc);

  constexpr float_t const& __cordl_internal_get__actionState_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__actionState_k__BackingField();

  constexpr bool const& __cordl_internal_get__runningAction_k__BackingField() const;

  constexpr bool& __cordl_internal_get__runningAction_k__BackingField();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_inputAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get_inputAction() const;

  constexpr float_t const& __cordl_internal_get_m_Timer() const;

  constexpr float_t& __cordl_internal_get_m_Timer();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_TriggerPressedUp() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_TriggerPressedUp();

  constexpr ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType const& __cordl_internal_get_m_Type() const;

  constexpr ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType& __cordl_internal_get_m_Type();

  constexpr void __cordl_internal_set__actionState_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__runningAction_k__BackingField(bool value);

  constexpr void __cordl_internal_set_inputAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_Timer(float_t value);

  constexpr void __cordl_internal_set_m_TriggerPressedUp(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_m_Type(::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType value);

  /// @brief Method .ctor, addr 0x1bd3020, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_actionState, addr 0x1bd5bd4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_actionState();

  /// @brief Method get_runningAction, addr 0x1bd5bc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_runningAction();

  /// @brief Method set_actionState, addr 0x1bd5bdc, size 0x8, virtual false, abstract: false, final false
  inline void set_actionState(float_t value);

  /// @brief Method set_runningAction, addr 0x1bd5bc8, size 0xc, virtual false, abstract: false, final false
  inline void set_runningAction(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugActionState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugActionState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugActionState(DebugActionState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugActionState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugActionState(DebugActionState const&) = delete;

  /// @brief Field m_Type, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType ___m_Type;

  /// @brief Field inputAction, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___inputAction;

  /// @brief Field m_TriggerPressedUp, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_TriggerPressedUp;

  /// @brief Field m_Timer, offset: 0x28, size: 0x4, def value: None
  float_t ___m_Timer;

  /// @brief Field <runningAction>k__BackingField, offset: 0x2c, size: 0x1, def value: None
  bool ____runningAction_k__BackingField;

  /// @brief Field <actionState>k__BackingField, offset: 0x30, size: 0x4, def value: None
  float_t ____actionState_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugActionState, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___inputAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_TriggerPressedUp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_Timer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ____runningAction_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ____actionState_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType, "UnityEngine.Rendering", "DebugActionState/DebugActionKeyType");
NEED_NO_BOX(::UnityEngine::Rendering::DebugActionState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugActionState*, "UnityEngine.Rendering", "DebugActionState");
