#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MobileInterface_def.hpp"
#include "GlobalNamespace/zzzz__FollowPlayerMenu_def.hpp"
#include "GlobalNamespace/zzzz__ImaginationPrompt_def.hpp"
#include "GlobalNamespace/zzzz__Joystick2D_def.hpp"
#include "GlobalNamespace/zzzz__MobileCreatorPackMenu_def.hpp"
#include "GlobalNamespace/zzzz__MobileInterface_def.hpp"
#include "GlobalNamespace/zzzz__MobileLoginMenu_def.hpp"
#include "GlobalNamespace/zzzz__MobilePromptDisplay_def.hpp"
#include "GlobalNamespace/zzzz__MobileSlidingPage_def.hpp"
#include "GlobalNamespace/zzzz__PanZone2D_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/AudioTaps/zzzz__VivoxAudioTap_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MobileInterface____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MobileInterface____c::*)()>(&::GlobalNamespace::__MobileInterface____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dfafec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MobileInterface____c._OnPCQuitButtonPressed_b__61_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MobileInterface____c::*)(::GlobalNamespace::__ImaginationPrompt__ActionType)>(
    &::GlobalNamespace::__MobileInterface____c::_OnPCQuitButtonPressed_b__61_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2dfaff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface____c*>::get(), "<OnPCQuitButtonPressed>b__61_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__MobileInterface____c::setStaticF___9(::GlobalNamespace::__MobileInterface____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__MobileInterface____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface____c*>::get>(
      std::forward<::GlobalNamespace::__MobileInterface____c*>(value));
}
inline ::GlobalNamespace::__MobileInterface____c* GlobalNamespace::__MobileInterface____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__MobileInterface____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface____c*>::get>();
}
inline void GlobalNamespace::__MobileInterface____c::setStaticF___9__61_0(::GlobalNamespace::__ImaginationPrompt__OnActionTaken* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*, "<>9__61_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface____c*>::get>(
      std::forward<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>(value));
}
inline ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* GlobalNamespace::__MobileInterface____c::getStaticF___9__61_0() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*, "<>9__61_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface____c*>::get>();
}
inline ::GlobalNamespace::__MobileInterface____c* GlobalNamespace::__MobileInterface____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MobileInterface____c*>());
}
inline void GlobalNamespace::__MobileInterface____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MobileInterface____c::_OnPCQuitButtonPressed_b__61_0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface____c*>::get(), "<OnPCQuitButtonPressed>b__61_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MobileInterface____c::__MobileInterface____c() {}
//  Writing Method size for method: ::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::*)(int32_t)>(
    &::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2dfb008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::*)()>(
    &::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2dfb030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::*)()>(
    &::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::MoveNext)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2dfb034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::*)()>(
    &::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dfb3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::*)()>(
    &::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2dfb3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::*)()>(
    &::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dfb400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobileInterface>& GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MobileInterface> const& GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MobileInterface> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75* GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>(__1__state));
}
inline void GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75::__MobileInterface___ShowPCControlsRoutine_d__75() {}
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.get_mobileMoveInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)()>(&::GlobalNamespace::MobileInterface::get_mobileMoveInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x308735c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "get_mobileMoveInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.set_mobileMoveInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::MobileInterface::set_mobileMoveInput)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x30873b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "set_mobileMoveInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.get_mobileLookInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&::GlobalNamespace::MobileInterface::get_mobileLookInput)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3087430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "get_mobileLookInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.set_mobileLookInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector2)>(&::GlobalNamespace::MobileInterface::set_mobileLookInput)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3087488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "set_mobileLookInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::Initialize)> {
  constexpr static std::size_t size = 0xee8;
  constexpr static std::size_t addrs = 0x30874f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.SetupSafeArea
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::SetupSafeArea)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x30883d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "SetupSafeArea",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnMoveJoystickValueUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(::UnityEngine::Vector2)>(
    &::GlobalNamespace::MobileInterface::OnMoveJoystickValueUpdated)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x308855c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnMoveJoystickValueUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnLookPanDeltaUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(::UnityEngine::Vector2)>(
    &::GlobalNamespace::MobileInterface::OnLookPanDeltaUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x30885fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnLookPanDeltaUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnPanZoneTapped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(::UnityEngine::Vector2)>(
    &::GlobalNamespace::MobileInterface::OnPanZoneTapped)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x3088b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnPanZoneTapped", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnIsOccupyingCurrencyAnchorUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(bool)>(
    &::GlobalNamespace::MobileInterface::OnIsOccupyingCurrencyAnchorUpdated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30886ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnIsOccupyingCurrencyAnchorUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.ToggleFollowPlayerMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::ToggleFollowPlayerMenu)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3088e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "ToggleFollowPlayerMenu", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnIsCameraLinkedUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(bool)>(&::GlobalNamespace::MobileInterface::OnIsCameraLinkedUpdated)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x30886cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnIsCameraLinkedUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.ToggleLoginMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::ToggleLoginMenu)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3088ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "ToggleLoginMenu",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnLoginMenuSetActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(bool)>(&::GlobalNamespace::MobileInterface::OnLoginMenuSetActive)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3088edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnLoginMenuSetActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnLinkedToMobileAccount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::OnLinkedToMobileAccount)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3088f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "OnLinkedToMobileAccount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnLinkFlowComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::OnLinkFlowComplete)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3088f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnLinkFlowComplete",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.SetLogoutContainersActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(bool)>(&::GlobalNamespace::MobileInterface::SetLogoutContainersActive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x30887d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "SetLogoutContainersActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.ToggleCreatorPackMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::ToggleCreatorPackMenu)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3088fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "ToggleCreatorPackMenu", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnCreatorPackMenuSetActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(bool)>(
    &::GlobalNamespace::MobileInterface::OnCreatorPackMenuSetActive)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3088fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnCreatorPackMenuSetActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnHasCreatorPackUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(bool)>(&::GlobalNamespace::MobileInterface::OnHasCreatorPackUpdated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3089058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnHasCreatorPackUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnCreatorPackFlowComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::OnCreatorPackFlowComplete)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3089070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "OnCreatorPackFlowComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.HideCreatorPackSuccessPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::HideCreatorPackSuccessPage)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x30890c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "HideCreatorPackSuccessPage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.SetCreatorPackContainersActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(bool)>(
    &::GlobalNamespace::MobileInterface::SetCreatorPackContainersActive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3088840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "SetCreatorPackContainersActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OpenLoggedOutPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::OpenLoggedOutPage)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x30890e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OpenLoggedOutPage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OpenCreatorPackPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::OpenCreatorPackPage)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x308910c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "OpenCreatorPackPage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnRestartButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::OnRestartButtonPressed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3089130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "OnRestartButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnLogoutButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::OnLogoutButtonPressed)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x30891dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "OnLogoutButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnPCQuitButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::OnPCQuitButtonPressed)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3089300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "OnPCQuitButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnAnyPageOpened
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(bool)>(&::GlobalNamespace::MobileInterface::OnAnyPageOpened)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3088f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnAnyPageOpened",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.SetLinkedPageVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(bool)>(&::GlobalNamespace::MobileInterface::SetLinkedPageVisible)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3088e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "SetLinkedPageVisible",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnLinkedPageTapped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::OnLinkedPageTapped)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3089544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnLinkedPageTapped",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x30895c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnChannelJoined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(::StringW)>(&::GlobalNamespace::MobileInterface::OnChannelJoined)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x30888a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnChannelJoined", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnChannelLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(::StringW)>(&::GlobalNamespace::MobileInterface::OnChannelLeft)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3089648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnChannelLeft", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.ShowPCControlsRoutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MobileInterface::*)()>(
    &::GlobalNamespace::MobileInterface::ShowPCControlsRoutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3088ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "ShowPCControlsRoutine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.RefreshCanUseControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::RefreshCanUseControls)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x308948c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                               "RefreshCanUseControls", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface.OnOrientationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(bool)>(&::GlobalNamespace::MobileInterface::OnOrientationChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3089868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnOrientationChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)()>(&::GlobalNamespace::MobileInterface::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x308986c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileInterface._OnLogoutButtonPressed_b__60_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInterface::*)(::GlobalNamespace::__ImaginationPrompt__ActionType)>(
    &::GlobalNamespace::MobileInterface::_OnLogoutButtonPressed_b__60_0)> {
  constexpr static std::size_t size = 0x1c748;
  constexpr static std::size_t addrs = 0x30898d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "<OnLogoutButtonPressed>b__60_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::MobileInterface::__cordl_internal_get_mobileOverlayCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileOverlayCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::MobileInterface::__cordl_internal_get_mobileOverlayCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileOverlayCamera;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_mobileOverlayCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mobileOverlayCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>, ::Array<::UnityW<::UnityEngine::RectTransform>>*>& GlobalNamespace::MobileInterface::__cordl_internal_get_safeAreaContainers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___safeAreaContainers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>, ::Array<::UnityW<::UnityEngine::RectTransform>>*> const& GlobalNamespace::MobileInterface::__cordl_internal_get_safeAreaContainers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___safeAreaContainers;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_safeAreaContainers(::ArrayW<::UnityW<::UnityEngine::RectTransform>, ::Array<::UnityW<::UnityEngine::RectTransform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___safeAreaContainers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MobileInterface::__cordl_internal_get_basicOverlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicOverlay;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MobileInterface::__cordl_internal_get_basicOverlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicOverlay;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_basicOverlay(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___basicOverlay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Joystick2D>& GlobalNamespace::MobileInterface::__cordl_internal_get_moveJoystick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveJoystick;
}
constexpr ::UnityW<::GlobalNamespace::Joystick2D> const& GlobalNamespace::MobileInterface::__cordl_internal_get_moveJoystick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveJoystick;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_moveJoystick(::UnityW<::GlobalNamespace::Joystick2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___moveJoystick)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PanZone2D>& GlobalNamespace::MobileInterface::__cordl_internal_get_lookPanZone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookPanZone;
}
constexpr ::UnityW<::GlobalNamespace::PanZone2D> const& GlobalNamespace::MobileInterface::__cordl_internal_get_lookPanZone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookPanZone;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_lookPanZone(::UnityW<::GlobalNamespace::PanZone2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lookPanZone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MobileInterface::__cordl_internal_get_mobilePanSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobilePanSensitivity;
}
constexpr float_t const& GlobalNamespace::MobileInterface::__cordl_internal_get_mobilePanSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobilePanSensitivity;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_mobilePanSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mobilePanSensitivity = value;
}
constexpr float_t& GlobalNamespace::MobileInterface::__cordl_internal_get_editorPanSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorPanSensitivity;
}
constexpr float_t const& GlobalNamespace::MobileInterface::__cordl_internal_get_editorPanSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorPanSensitivity;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_editorPanSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___editorPanSensitivity = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::MobileInterface::__cordl_internal_get_mobileInteractionLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileInteractionLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::MobileInterface::__cordl_internal_get_mobileInteractionLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileInteractionLayerMask;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_mobileInteractionLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mobileInteractionLayerMask = value;
}
constexpr float_t& GlobalNamespace::MobileInterface::__cordl_internal_get_maxTapMoveDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxTapMoveDistance;
}
constexpr float_t const& GlobalNamespace::MobileInterface::__cordl_internal_get_maxTapMoveDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxTapMoveDistance;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_maxTapMoveDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxTapMoveDistance = value;
}
constexpr float_t& GlobalNamespace::MobileInterface::__cordl_internal_get_tapMoveDistanceRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tapMoveDistanceRatio;
}
constexpr float_t const& GlobalNamespace::MobileInterface::__cordl_internal_get_tapMoveDistanceRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tapMoveDistanceRatio;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_tapMoveDistanceRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tapMoveDistanceRatio = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MobileInterface::__cordl_internal_get_masterPlayerCurrencyDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayerCurrencyDisplay;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MobileInterface::__cordl_internal_get_masterPlayerCurrencyDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayerCurrencyDisplay;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_masterPlayerCurrencyDisplay(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___masterPlayerCurrencyDisplay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FollowPlayerMenu>& GlobalNamespace::MobileInterface::__cordl_internal_get_followPlayerMenu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followPlayerMenu;
}
constexpr ::UnityW<::GlobalNamespace::FollowPlayerMenu> const& GlobalNamespace::MobileInterface::__cordl_internal_get_followPlayerMenu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followPlayerMenu;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_followPlayerMenu(::UnityW<::GlobalNamespace::FollowPlayerMenu> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___followPlayerMenu)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& GlobalNamespace::MobileInterface::__cordl_internal_get_loggedOutMenu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loggedOutMenu;
}
constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& GlobalNamespace::MobileInterface::__cordl_internal_get_loggedOutMenu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loggedOutMenu;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_loggedOutMenu(::UnityW<::GlobalNamespace::MobileSlidingPage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loggedOutMenu)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MobileInterface::__cordl_internal_get_loginContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loginContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MobileInterface::__cordl_internal_get_loginContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loginContainer;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_loginContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loginContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::MobileInterface::__cordl_internal_get_logoutContainers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logoutContainers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& GlobalNamespace::MobileInterface::__cordl_internal_get_logoutContainers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logoutContainers;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_logoutContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logoutContainers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobileLoginMenu>& GlobalNamespace::MobileInterface::__cordl_internal_get_loginMenu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loginMenu;
}
constexpr ::UnityW<::GlobalNamespace::MobileLoginMenu> const& GlobalNamespace::MobileInterface::__cordl_internal_get_loginMenu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loginMenu;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_loginMenu(::UnityW<::GlobalNamespace::MobileLoginMenu> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loginMenu)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& GlobalNamespace::MobileInterface::__cordl_internal_get_linkSuccessPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkSuccessPage;
}
constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& GlobalNamespace::MobileInterface::__cordl_internal_get_linkSuccessPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkSuccessPage;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_linkSuccessPage(::UnityW<::GlobalNamespace::MobileSlidingPage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___linkSuccessPage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MobileInterface::__cordl_internal_get_isLinkedToMobileAccount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLinkedToMobileAccount;
}
constexpr bool const& GlobalNamespace::MobileInterface::__cordl_internal_get_isLinkedToMobileAccount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLinkedToMobileAccount;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_isLinkedToMobileAccount(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLinkedToMobileAccount = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::MobileInterface::__cordl_internal_get_creatorPackContainers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creatorPackContainers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& GlobalNamespace::MobileInterface::__cordl_internal_get_creatorPackContainers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creatorPackContainers;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_creatorPackContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___creatorPackContainers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobileCreatorPackMenu>& GlobalNamespace::MobileInterface::__cordl_internal_get_creatorPackMenu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creatorPackMenu;
}
constexpr ::UnityW<::GlobalNamespace::MobileCreatorPackMenu> const& GlobalNamespace::MobileInterface::__cordl_internal_get_creatorPackMenu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creatorPackMenu;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_creatorPackMenu(::UnityW<::GlobalNamespace::MobileCreatorPackMenu> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___creatorPackMenu)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& GlobalNamespace::MobileInterface::__cordl_internal_get_creatorPackSuccessPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creatorPackSuccessPage;
}
constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& GlobalNamespace::MobileInterface::__cordl_internal_get_creatorPackSuccessPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creatorPackSuccessPage;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_creatorPackSuccessPage(::UnityW<::GlobalNamespace::MobileSlidingPage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___creatorPackSuccessPage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MobileInterface::__cordl_internal_get_hasCreatorPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasCreatorPack;
}
constexpr bool const& GlobalNamespace::MobileInterface::__cordl_internal_get_hasCreatorPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasCreatorPack;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_hasCreatorPack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasCreatorPack = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MobileInterface::__cordl_internal_get_linkedPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkedPage;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MobileInterface::__cordl_internal_get_linkedPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkedPage;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_linkedPage(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___linkedPage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& GlobalNamespace::MobileInterface::__cordl_internal_get_linkedPagePopup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkedPagePopup;
}
constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& GlobalNamespace::MobileInterface::__cordl_internal_get_linkedPagePopup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkedPagePopup;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_linkedPagePopup(::UnityW<::GlobalNamespace::MobileSlidingPage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___linkedPagePopup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobilePromptDisplay>& GlobalNamespace::MobileInterface::__cordl_internal_get_linkedPromptDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkedPromptDisplay;
}
constexpr ::UnityW<::GlobalNamespace::MobilePromptDisplay> const& GlobalNamespace::MobileInterface::__cordl_internal_get_linkedPromptDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkedPromptDisplay;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_linkedPromptDisplay(::UnityW<::GlobalNamespace::MobilePromptDisplay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___linkedPromptDisplay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& GlobalNamespace::MobileInterface::__cordl_internal_get_pcControls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pcControls;
}
constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& GlobalNamespace::MobileInterface::__cordl_internal_get_pcControls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pcControls;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_pcControls(::UnityW<::GlobalNamespace::MobileSlidingPage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pcControls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MobileInterface::__cordl_internal_get_showPCControlDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showPCControlDuration;
}
constexpr float_t const& GlobalNamespace::MobileInterface::__cordl_internal_get_showPCControlDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showPCControlDuration;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_showPCControlDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showPCControlDuration = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MobileInterface::__cordl_internal_get_audioTapObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioTapObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MobileInterface::__cordl_internal_get_audioTapObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioTapObject;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_audioTapObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioTapObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MobileInterface::__cordl_internal_get_isLinkedPopupVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLinkedPopupVisible;
}
constexpr bool const& GlobalNamespace::MobileInterface::__cordl_internal_get_isLinkedPopupVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLinkedPopupVisible;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_isLinkedPopupVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLinkedPopupVisible = value;
}
constexpr float_t& GlobalNamespace::MobileInterface::__cordl_internal_get_nextLinkedPageTapTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextLinkedPageTapTime;
}
constexpr float_t const& GlobalNamespace::MobileInterface::__cordl_internal_get_nextLinkedPageTapTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextLinkedPageTapTime;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_nextLinkedPageTapTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextLinkedPageTapTime = value;
}
constexpr float_t& GlobalNamespace::MobileInterface::__cordl_internal_get_linkedPageAutoHideTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkedPageAutoHideTime;
}
constexpr float_t const& GlobalNamespace::MobileInterface::__cordl_internal_get_linkedPageAutoHideTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linkedPageAutoHideTime;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_linkedPageAutoHideTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linkedPageAutoHideTime = value;
}
constexpr ::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap>& GlobalNamespace::MobileInterface::__cordl_internal_get_audioTap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioTap;
}
constexpr ::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> const& GlobalNamespace::MobileInterface::__cordl_internal_get_audioTap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioTap;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_audioTap(::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioTap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MobileInterface::__cordl_internal_get_curChannelName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curChannelName;
}
constexpr ::StringW const& GlobalNamespace::MobileInterface::__cordl_internal_get_curChannelName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curChannelName;
}
constexpr void GlobalNamespace::MobileInterface::__cordl_internal_set_curChannelName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curChannelName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MobileInterface::setStaticF__mobileMoveInput_k__BackingField(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "<mobileMoveInput>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::MobileInterface::getStaticF__mobileMoveInput_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "<mobileMoveInput>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get>();
}
inline void GlobalNamespace::MobileInterface::setStaticF__mobileLookInput_k__BackingField(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "<mobileLookInput>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 GlobalNamespace::MobileInterface::getStaticF__mobileLookInput_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "<mobileLookInput>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get>();
}
inline void GlobalNamespace::MobileInterface::setStaticF_canUseHotkeys(bool value) {
  ::cordl_internals::setStaticField<bool, "canUseHotkeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::MobileInterface::getStaticF_canUseHotkeys() {
  return ::cordl_internals::getStaticField<bool, "canUseHotkeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get>();
}
inline ::UnityEngine::Vector3 GlobalNamespace::MobileInterface::get_mobileMoveInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "get_mobileMoveInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::set_mobileMoveInput(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "set_mobileMoveInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector2 GlobalNamespace::MobileInterface::get_mobileLookInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "get_mobileLookInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::set_mobileLookInput(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "set_mobileLookInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MobileInterface::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::SetupSafeArea() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "SetupSafeArea",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OnMoveJoystickValueUpdated(::UnityEngine::Vector2 newValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnMoveJoystickValueUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::MobileInterface::OnLookPanDeltaUpdated(::UnityEngine::Vector2 newDelta) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnLookPanDeltaUpdated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newDelta);
}
inline void GlobalNamespace::MobileInterface::OnPanZoneTapped(::UnityEngine::Vector2 screenPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnPanZoneTapped", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screenPosition);
}
inline void GlobalNamespace::MobileInterface::OnIsOccupyingCurrencyAnchorUpdated(bool newIsOccupyingCurrencyAnchor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnIsOccupyingCurrencyAnchorUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsOccupyingCurrencyAnchor);
}
inline void GlobalNamespace::MobileInterface::ToggleFollowPlayerMenu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                             "ToggleFollowPlayerMenu", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OnIsCameraLinkedUpdated(bool newIsCameraLinked) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnIsCameraLinkedUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsCameraLinked);
}
inline void GlobalNamespace::MobileInterface::ToggleLoginMenu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "ToggleLoginMenu",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OnLoginMenuSetActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnLoginMenuSetActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::MobileInterface::OnLinkedToMobileAccount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                             "OnLinkedToMobileAccount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OnLinkFlowComplete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnLinkFlowComplete",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::SetLogoutContainersActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "SetLogoutContainersActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::MobileInterface::ToggleCreatorPackMenu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                             "ToggleCreatorPackMenu", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OnCreatorPackMenuSetActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnCreatorPackMenuSetActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::MobileInterface::OnHasCreatorPackUpdated(bool newHasCreatorPack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnHasCreatorPackUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasCreatorPack);
}
inline void GlobalNamespace::MobileInterface::OnCreatorPackFlowComplete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                             "OnCreatorPackFlowComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::HideCreatorPackSuccessPage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                             "HideCreatorPackSuccessPage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::SetCreatorPackContainersActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "SetCreatorPackContainersActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::MobileInterface::OpenLoggedOutPage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OpenLoggedOutPage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OpenCreatorPackPage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OpenCreatorPackPage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OnRestartButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                             "OnRestartButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OnLogoutButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                             "OnLogoutButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OnPCQuitButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                             "OnPCQuitButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OnAnyPageOpened(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnAnyPageOpened",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::MobileInterface::SetLinkedPageVisible(bool newVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "SetLinkedPageVisible",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newVisible);
}
inline void GlobalNamespace::MobileInterface::OnLinkedPageTapped() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnLinkedPageTapped",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OnChannelJoined(::StringW channelName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnChannelJoined", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channelName);
}
inline void GlobalNamespace::MobileInterface::OnChannelLeft(::StringW channelName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnChannelLeft", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channelName);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MobileInterface::ShowPCControlsRoutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                             "ShowPCControlsRoutine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::RefreshCanUseControls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(),
                                                                             "RefreshCanUseControls", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::OnOrientationChanged(bool newIsLandscape) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "OnOrientationChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsLandscape);
}
inline ::GlobalNamespace::MobileInterface* GlobalNamespace::MobileInterface::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MobileInterface*>());
}
inline void GlobalNamespace::MobileInterface::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileInterface::_OnLogoutButtonPressed_b__60_0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInterface*>::get(), "<OnLogoutButtonPressed>b__60_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobileInterface::MobileInterface() {}
