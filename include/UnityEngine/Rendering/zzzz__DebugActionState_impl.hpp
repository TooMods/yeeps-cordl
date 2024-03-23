#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType::__DebugActionState__DebugActionKeyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType::__DebugActionState__DebugActionKeyType() {}
constexpr ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType UnityEngine::Rendering::__DebugActionState__DebugActionKeyType::Button{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType UnityEngine::Rendering::__DebugActionState__DebugActionKeyType::Axis{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType UnityEngine::Rendering::__DebugActionState__DebugActionKeyType::Key{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.get_runningAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DebugActionState::*)()>(
    &::UnityEngine::Rendering::DebugActionState::get_runningAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd5bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(),
                                                                               "get_runningAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.set_runningAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(bool)>(
    &::UnityEngine::Rendering::DebugActionState::set_runningAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bd5bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "set_runningAction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.get_actionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::DebugActionState::*)()>(
    &::UnityEngine::Rendering::DebugActionState::get_actionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd5bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(),
                                                                               "get_actionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.set_actionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(float_t)>(
    &::UnityEngine::Rendering::DebugActionState::set_actionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd5bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "set_actionState",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.Trigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(int32_t, float_t)>(
    &::UnityEngine::Rendering::DebugActionState::Trigger)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1bd5be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "Trigger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.TriggerWithButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(::UnityEngine::InputSystem::InputAction*, float_t)>(
    &::UnityEngine::Rendering::DebugActionState::TriggerWithButton)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1bd3160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "TriggerWithButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)()>(&::UnityEngine::Rendering::DebugActionState::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1bd5c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(::UnityEngine::Rendering::DebugActionDesc*)>(
    &::UnityEngine::Rendering::DebugActionState::Update)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1bd3230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugActionDesc*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)()>(&::UnityEngine::Rendering::DebugActionState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd3020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr ::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_Type(::UnityEngine::Rendering::__DebugActionState__DebugActionKeyType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Type = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_inputAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputAction;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_inputAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputAction;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_inputAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_TriggerPressedUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TriggerPressedUp;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_TriggerPressedUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TriggerPressedUp;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_TriggerPressedUp(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TriggerPressedUp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timer;
}
constexpr float_t const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timer;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_Timer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Timer = value;
}
constexpr bool& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__runningAction_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runningAction_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__runningAction_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runningAction_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set__runningAction_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____runningAction_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__actionState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionState_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__actionState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionState_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set__actionState_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____actionState_k__BackingField = value;
}
inline bool UnityEngine::Rendering::DebugActionState::get_runningAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(),
                                                                             "get_runningAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugActionState::set_runningAction(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "set_runningAction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::DebugActionState::get_actionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(),
                                                                             "get_actionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugActionState::set_actionState(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "set_actionState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugActionState::Trigger(int32_t triggerCount, float_t state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "Trigger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, triggerCount, state);
}
inline void UnityEngine::Rendering::DebugActionState::TriggerWithButton(::UnityEngine::InputSystem::InputAction* action, float_t state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "TriggerWithButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action, state);
}
inline void UnityEngine::Rendering::DebugActionState::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugActionState::Update(::UnityEngine::Rendering::DebugActionDesc* desc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugActionDesc*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::DebugActionState* UnityEngine::Rendering::DebugActionState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugActionState*>());
}
inline void UnityEngine::Rendering::DebugActionState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionState*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugActionState::DebugActionState() {}
