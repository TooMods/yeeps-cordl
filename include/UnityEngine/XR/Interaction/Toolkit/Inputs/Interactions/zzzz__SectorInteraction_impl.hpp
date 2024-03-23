#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteractionContext_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__Cardinal_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions::__SectorInteraction__Directions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions::__SectorInteraction__Directions() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions
    UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions
    UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions::North{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions
    UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions::South{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions
    UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions::East{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions
    UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions::West{ static_cast<int32_t>(0x8) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior::__SectorInteraction__SweepBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior::__SectorInteraction__SweepBehavior() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior
    UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior::Locked{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior
    UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior::AllowReentry{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior
    UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior::DisallowReentry{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior
    UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior::HistoryIndependent{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State::__SectorInteraction__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State::__SectorInteraction__State() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State::Centered{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State
    UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State::StartedValidDirection{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State
    UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State::StartedInvalidDirection{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.get_pressPointOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::get_pressPointOrDefault)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a29d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                                 "get_pressPointOrDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.get_defaultPressPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::get_defaultPressPoint)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a29dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                                 "get_defaultPressPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.set_defaultPressPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::set_defaultPressPoint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a29e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(), "set_defaultPressPoint",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::*)(
    ByRef<::UnityEngine::InputSystem::InputInteractionContext>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Process)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2a29ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(), "Process",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.IsValidDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::*)(
    ByRef<::UnityEngine::InputSystem::InputInteractionContext>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::IsValidDirection)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a29fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                    "IsValidDirection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.GetNearestDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions (*)(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::GetNearestDirection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a2a074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                    "GetNearestDirection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a2a094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                                 "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a2a124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                                 "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a2a128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>"
constexpr UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::operator ::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>*() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>"
constexpr ::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>*
UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::i___UnityEngine__InputSystem__IInputInteraction_1___UnityEngine__Vector2_() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
constexpr UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::operator ::UnityEngine::InputSystem::IInputInteraction*() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction"
constexpr ::UnityEngine::InputSystem::IInputInteraction* UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::i___UnityEngine__InputSystem__IInputInteraction() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputInteraction*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions&
UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_directions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directions;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_directions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_set_directions(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___directions = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior&
UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_sweepBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sweepBehavior;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_sweepBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sweepBehavior;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_set_sweepBehavior(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sweepBehavior = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_pressPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pressPoint;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_pressPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pressPoint;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_set_pressPoint(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pressPoint = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State&
UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_m_State() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State const&
UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_m_State() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_set_m_State(
    ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_State = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_m_WasValidDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WasValidDirection;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_get_m_WasValidDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WasValidDirection;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::__cordl_internal_set_m_WasValidDirection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WasValidDirection = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::setStaticF__defaultPressPoint_k__BackingField(float_t value) {
  ::cordl_internals::setStaticField<float_t, "<defaultPressPoint>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get>(
      std::forward<float_t>(value));
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::getStaticF__defaultPressPoint_k__BackingField() {
  return ::cordl_internals::getStaticField<float_t, "<defaultPressPoint>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get>();
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::get_pressPointOrDefault() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                               "get_pressPointOrDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::get_defaultPressPoint() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                               "get_defaultPressPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::set_defaultPressPoint(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(), "set_defaultPressPoint",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(), "Process",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::IsValidDirection(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(), "IsValidDirection",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions
UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::GetNearestDirection(::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                  "GetNearestDirection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction* UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction::SectorInteraction() {}
