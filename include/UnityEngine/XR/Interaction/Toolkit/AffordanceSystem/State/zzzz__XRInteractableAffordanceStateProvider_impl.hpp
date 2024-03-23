#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__BaseAffordanceStateProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__AnimationCurveDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__AffordanceStateData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractionStrengthInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode::
    __XRInteractableAffordanceStateProvider__SelectClickAnimationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode::
    __XRInteractableAffordanceStateProvider__SelectClickAnimationMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode
    UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode
    UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode::SelectEntered{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode
    UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode::SelectExited{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode::
    __XRInteractableAffordanceStateProvider__ActivateClickAnimationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode::
    __XRInteractableAffordanceStateProvider__ActivateClickAnimationMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode
    UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode
    UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode::Activated{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode
    UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode::Deactivated{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::*)(int32_t)>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a2d4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                        ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a2ecd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                     ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::MoveNext)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2a2ecd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                     ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::
            System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2ee5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                        ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a2ee64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                     ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2eea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                     ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::
    __XRInteractableAffordanceStateProvider___ClickAnimation_d__77::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_set___4__this(
    ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get_targetStateIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetStateIndex;
}
constexpr uint8_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get_targetStateIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetStateIndex;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_set_targetStateIndex(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetStateIndex = value;
}
constexpr ::System::Action*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get_onComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get_onComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_set_onComplete(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get__elapsedTime_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__2;
}
constexpr float_t const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_get__elapsedTime_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__2;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::__cordl_internal_set__elapsedTime_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elapsedTime_5__2 = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>(__1__state));
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
      ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
      "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
      "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
      "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
      "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*>::get(),
      "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77::
    __XRInteractableAffordanceStateProvider___ClickAnimation_d__77() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::*)(int32_t)>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a2d954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                        ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a2eeac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                     ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::MoveNext)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2a2eeb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                     ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::
            System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2f018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                        ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a2f020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                     ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2f060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                     ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::operator ::System::Collections::Generic::
    IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::
    __XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::operator ::System::Collections::
    IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::__cordl_internal_set___4__this(
    ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>(__1__state));
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                      ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                   ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                   ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::
    System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                      ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                   ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                                   ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79::
    __XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_interactableSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_interactableSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "get_interactableSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_interactableSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_interactableSource)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a2c5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "set_interactableSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_ignoreHoverEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreHoverEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "get_ignoreHoverEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_ignoreHoverEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreHoverEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a2c7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "set_ignoreHoverEvents", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_ignoreHoverPriorityEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreHoverPriorityEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "get_ignoreHoverPriorityEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_ignoreHoverPriorityEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreHoverPriorityEvents)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a2c7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "set_ignoreHoverPriorityEvents", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_ignoreSelectEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreSelectEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "get_ignoreSelectEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_ignoreSelectEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreSelectEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a2c8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "set_ignoreSelectEvents", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_ignoreActivateEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreActivateEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "get_ignoreActivateEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_ignoreActivateEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreActivateEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a2c904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "set_ignoreActivateEvents", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_selectClickAnimationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode (
        ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_selectClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "get_selectClickAnimationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_selectClickAnimationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode)>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_selectClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "set_selectClickAnimationMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_activateClickAnimationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode (
        ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_activateClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "get_activateClickAnimationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_activateClickAnimationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode)>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_activateClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "set_activateClickAnimationMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_clickAnimationDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_clickAnimationDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "get_clickAnimationDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_clickAnimationDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    float_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_clickAnimationDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "set_clickAnimationDuration", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_clickAnimationCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_clickAnimationCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "get_clickAnimationCurve", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_clickAnimationCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_clickAnimationCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2c948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "set_clickAnimationCurve", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_isHovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isHovered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2a2c950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_isSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isSelected)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2a2ca00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_isActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2cab0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_isRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isRegistered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2cab8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::Awake)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2a2cac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), "Awake",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnValidate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a2cc34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.SetBoundInteractionReceiver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::SetBoundInteractionReceiver)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2a2c66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "SetBoundInteractionReceiver", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*)>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnRegistered)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a2ccd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnUnregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*)>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnUnregistered)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a2cd08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnFirstHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnFirstHoverEntered)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a2cd34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnLastHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLastHoverExited)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a2cd5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnHoverEntered)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2a2cd84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnHoverExited)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2a2ceec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.StopHoveredPriorityRoutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::StopHoveredPriorityRoutine)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a2c894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "StopHoveredPriorityRoutine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnFirstSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnFirstSelectEntered)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a2cfb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnLastSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLastSelectExited)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a2d058;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnActivatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnActivatedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2a2d0fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnDeactivatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnDeactivatedEvent)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a2d1a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnLargestInteractionStrengthChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(
    float_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLargestInteractionStrengthChanged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a2d250;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.SelectedClickBehavior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::SelectedClickBehavior)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2a2d294;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.ActivatedClickBehavior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ActivatedClickBehavior)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2a2d360;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.ClickAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(uint8_t, float_t, ::System::Action*)>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ClickAnimation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a2d42c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.GenerateNewAffordanceState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData (
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::GenerateNewAffordanceState)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x2a2d4e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.HoveredPriorityRoutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::HoveredPriorityRoutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a2ce84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "HoveredPriorityRoutine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.BindToProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::BindToProviders)> {
  constexpr static std::size_t size = 0xaac;
  constexpr static std::size_t addrs = 0x2a2d97c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.RefreshState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::RefreshState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a2c8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), "RefreshState",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.ClearBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ClearBindings)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0x2a2e428;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a2ec20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider._SelectedClickBehavior_b__75_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_SelectedClickBehavior_b__75_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2ecc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "<SelectedClickBehavior>b__75_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider._ActivatedClickBehavior_b__76_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_ActivatedClickBehavior_b__76_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2ecc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
        "<ActivatedClickBehavior>b__76_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_InteractableSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractableSource;
}
constexpr ::UnityW<::UnityEngine::Object> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_InteractableSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractableSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_InteractableSource(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InteractableSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreHoverEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreHoverEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreHoverEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreHoverEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IgnoreHoverEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreHoverEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreHoverPriorityEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreHoverPriorityEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreHoverPriorityEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreHoverPriorityEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IgnoreHoverPriorityEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreHoverPriorityEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreSelectEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreSelectEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreSelectEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreSelectEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IgnoreSelectEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreSelectEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreActivateEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreActivateEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreActivateEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreActivateEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IgnoreActivateEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreActivateEvents = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectClickAnimationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectClickAnimationMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectClickAnimationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectClickAnimationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_SelectClickAnimationMode(
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectClickAnimationMode = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivateClickAnimationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivateClickAnimationMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivateClickAnimationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivateClickAnimationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_ActivateClickAnimationMode(
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActivateClickAnimationMode = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickAnimationDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickAnimationDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_ClickAnimationDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClickAnimationDuration = value;
}
constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickAnimationCurve;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickAnimationCurve;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_ClickAnimationCurve(
    ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ClickAnimationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_Interactable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interactable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_Interactable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interactable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_Interactable(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Interactable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoverInteractable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverInteractable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoverInteractable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_HoverInteractable(
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HoverInteractable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectInteractable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectInteractable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectInteractable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_SelectInteractable(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectInteractable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivateInteractable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivateInteractable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivateInteractable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivateInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_ActivateInteractable(
    ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActivateInteractable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_InteractionStrengthInteractable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionStrengthInteractable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_InteractionStrengthInteractable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionStrengthInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_InteractionStrengthInteractable(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InteractionStrengthInteractable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectedClickAnimation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedClickAnimation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectedClickAnimation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedClickAnimation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_SelectedClickAnimation(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedClickAnimation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivatedClickAnimation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivatedClickAnimation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivatedClickAnimation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivatedClickAnimation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_ActivatedClickAnimation(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActivatedClickAnimation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoveredPriorityRoutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoveredPriorityRoutine;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoveredPriorityRoutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoveredPriorityRoutine;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_HoveredPriorityRoutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HoveredPriorityRoutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsBoundToInteractionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsBoundToInteractionEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsBoundToInteractionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsBoundToInteractionEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IsBoundToInteractionEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsBoundToInteractionEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsActivated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsActivated;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsActivated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsActivated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IsActivated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsActivated = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsRegistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsRegistered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsRegistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsRegistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IsRegistered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsRegistered = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsHoveredPriority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsHoveredPriority;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsHoveredPriority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsHoveredPriority;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IsHoveredPriority(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsHoveredPriority = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HasInteractionStrengthInteractable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInteractionStrengthInteractable;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HasInteractionStrengthInteractable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInteractionStrengthInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_HasInteractionStrengthInteractable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasInteractionStrengthInteractable = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoveringPriorityInteractorCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoveringPriorityInteractorCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoveringPriorityInteractorCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoveringPriorityInteractorCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_HoveringPriorityInteractorCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HoveringPriorityInteractorCount = value;
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_interactableSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), "get_interactableSource",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_interactableSource(::UnityEngine::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), "set_interactableSource",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreHoverEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), "get_ignoreHoverEvents",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreHoverEvents(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), "set_ignoreHoverEvents",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreHoverPriorityEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "get_ignoreHoverPriorityEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreHoverPriorityEvents(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "set_ignoreHoverPriorityEvents", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreSelectEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), "get_ignoreSelectEvents",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreSelectEvents(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), "set_ignoreSelectEvents",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreActivateEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "get_ignoreActivateEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreActivateEvents(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "set_ignoreActivateEvents", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_selectClickAnimationMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "get_selectClickAnimationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode, false>(
      this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_selectClickAnimationMode(
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "set_selectClickAnimationMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_activateClickAnimationMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "get_activateClickAnimationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode, false>(
      this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_activateClickAnimationMode(
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "set_activateClickAnimationMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_clickAnimationDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "get_clickAnimationDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_clickAnimationDuration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "set_clickAnimationDuration", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_clickAnimationCurve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "get_clickAnimationCurve", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*, false>(this, ___internal_method);
}
inline void
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_clickAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "set_clickAnimationCurve", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isHovered() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isSelected() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isActivated() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isRegistered() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), "Awake",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnValidate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::SetBoundInteractionReceiver(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* receiver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "SetBoundInteractionReceiver", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, receiver);
}
inline void
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnUnregistered(
    ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::StopHoveredPriorityRoutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "StopHoveredPriorityRoutine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnFirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnActivatedEvent(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnDeactivatedEvent(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLargestInteractionStrengthChanged(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::SelectedClickBehavior() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ActivatedClickBehavior() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param onComplete: ::System::Action* (default: nullptr)
inline ::System::Collections::IEnumerator*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ClickAnimation(uint8_t targetStateIndex, float_t duration, ::System::Action* onComplete) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, targetStateIndex, duration, onComplete);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::GenerateNewAffordanceState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::HoveredPriorityRoutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), "HoveredPriorityRoutine",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::BindToProviders() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::RefreshState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), "RefreshState",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ClearBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_SelectedClickBehavior_b__75_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "<SelectedClickBehavior>b__75_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_ActivatedClickBehavior_b__76_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>::get(),
      "<ActivatedClickBehavior>b__76_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::XRInteractableAffordanceStateProvider() {}
