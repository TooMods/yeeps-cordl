#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BootManager_def.hpp"
#include "GlobalNamespace/zzzz__BootAcknowledgementPage_def.hpp"
#include "GlobalNamespace/zzzz__BootManager_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BootManager__OnTransitionComplete._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BootManager__OnTransitionComplete::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__BootManager__OnTransitionComplete::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x159aad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager__OnTransitionComplete.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BootManager__OnTransitionComplete::*)()>(
    &::GlobalNamespace::__BootManager__OnTransitionComplete::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x159b498;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager__OnTransitionComplete.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__BootManager__OnTransitionComplete::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__BootManager__OnTransitionComplete::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x159b4ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager__OnTransitionComplete.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BootManager__OnTransitionComplete::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__BootManager__OnTransitionComplete::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x159b4cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BootManager__OnTransitionComplete* GlobalNamespace::__BootManager__OnTransitionComplete::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BootManager__OnTransitionComplete*>(object, method));
}
inline void GlobalNamespace::__BootManager__OnTransitionComplete::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__BootManager__OnTransitionComplete::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__BootManager__OnTransitionComplete::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__BootManager__OnTransitionComplete::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BootManager__OnTransitionComplete::__BootManager__OnTransitionComplete() {}
//  Writing Method size for method: ::GlobalNamespace::__BootManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BootManager____c::*)()>(&::GlobalNamespace::__BootManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x159b53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager____c._GoToGame_b__28_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BootManager____c::*)()>(&::GlobalNamespace::__BootManager____c::_GoToGame_b__28_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x159b544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager____c*>::get(),
                                                                               "<GoToGame>b__28_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BootManager____c::setStaticF___9(::GlobalNamespace::__BootManager____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__BootManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager____c*>::get>(
      std::forward<::GlobalNamespace::__BootManager____c*>(value));
}
inline ::GlobalNamespace::__BootManager____c* GlobalNamespace::__BootManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__BootManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager____c*>::get>();
}
inline void GlobalNamespace::__BootManager____c::setStaticF___9__28_0(::GlobalNamespace::__BootManager__OnTransitionComplete* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__BootManager__OnTransitionComplete*, "<>9__28_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager____c*>::get>(
      std::forward<::GlobalNamespace::__BootManager__OnTransitionComplete*>(value));
}
inline ::GlobalNamespace::__BootManager__OnTransitionComplete* GlobalNamespace::__BootManager____c::getStaticF___9__28_0() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__BootManager__OnTransitionComplete*, "<>9__28_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager____c*>::get>();
}
inline ::GlobalNamespace::__BootManager____c* GlobalNamespace::__BootManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BootManager____c*>());
}
inline void GlobalNamespace::__BootManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BootManager____c::_GoToGame_b__28_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager____c*>::get(), "<GoToGame>b__28_0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BootManager____c::__BootManager____c() {}
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::*)(int32_t)>(
    &::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x159b058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::*)()>(
    &::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x159b5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::*)()>(
    &::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::MoveNext)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x159b5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::*)()>(
    &::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x159b6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::*)()>(
    &::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x159b6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::*)()>(
    &::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x159b714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BootManager>& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::BootManager> const& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BootManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr float_t& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr float_t const& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_set_target(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___target = value;
}
constexpr ::GlobalNamespace::__BootManager__OnTransitionComplete*& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get_onTransitionComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onTransitionComplete;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BootManager__OnTransitionComplete*> const&
GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get_onTransitionComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onTransitionComplete;
}
constexpr void GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_set_onTransitionComplete(::GlobalNamespace::__BootManager__OnTransitionComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onTransitionComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get__start_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start_5__2;
}
constexpr float_t const& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get__start_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start_5__2;
}
constexpr void GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_set__start_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____start_5__2 = value;
}
constexpr float_t& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get__p_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__3;
}
constexpr float_t const& GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_get__p_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__3;
}
constexpr void GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__cordl_internal_set__p_5__3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____p_5__3 = value;
}
inline ::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32* GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>(__1__state));
}
inline void GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BootManager___TransitionVisibilityRoutine_d__32::__BootManager___TransitionVisibilityRoutine_d__32() {}
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::*)(int32_t)>(
    &::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x159b130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::*)()>(
    &::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x159b71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::*)()>(
    &::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x159b720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::*)()>(
    &::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x159b840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::*)()>(
    &::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x159b848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::*)()>(
    &::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x31c6c;
  constexpr static std::size_t addrs = 0x159b888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BootManager>& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::BootManager> const& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BootManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_set_target(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___target = value;
}
constexpr ::GlobalNamespace::__BootManager__OnTransitionComplete*& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get_onTransitionComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onTransitionComplete;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BootManager__OnTransitionComplete*> const&
GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get_onTransitionComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onTransitionComplete;
}
constexpr void GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_set_onTransitionComplete(::GlobalNamespace::__BootManager__OnTransitionComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onTransitionComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get__start_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start_5__2;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get__start_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start_5__2;
}
constexpr void GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_set__start_5__2(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____start_5__2 = value;
}
constexpr float_t& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get__p_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__3;
}
constexpr float_t const& GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_get__p_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__3;
}
constexpr void GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__cordl_internal_set__p_5__3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____p_5__3 = value;
}
inline ::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37* GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>(__1__state));
}
inline void GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BootManager___TransitionBackgroundRoutine_d__37::__BootManager___TransitionBackgroundRoutine_d__37() {}
//  Writing Method size for method: ::GlobalNamespace::BootManager.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BootManager::*)()>(&::GlobalNamespace::BootManager::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x159a650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BootManager::*)()>(&::GlobalNamespace::BootManager::Start)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x159a7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager.OnReadyToDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BootManager::*)()>(&::GlobalNamespace::BootManager::OnReadyToDisplay)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x159ac20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "OnReadyToDisplay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager.HasAcceptedTermsOfService
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BootManager::*)()>(&::GlobalNamespace::BootManager::HasAcceptedTermsOfService)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x159aa7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(),
                                                                               "HasAcceptedTermsOfService", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager.OnTermsOfServiceAccepted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BootManager::*)()>(&::GlobalNamespace::BootManager::OnTermsOfServiceAccepted)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x159aee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(),
                                                                               "OnTermsOfServiceAccepted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager.GoToGame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BootManager::*)()>(&::GlobalNamespace::BootManager::GoToGame)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x159a980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "GoToGame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager.TransitionVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BootManager::*)(float_t, float_t, bool, ::GlobalNamespace::__BootManager__OnTransitionComplete*)>(&::GlobalNamespace::BootManager::TransitionVisibility)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x159a704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "TransitionVisibility", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager.TransitionVisibilityRoutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::BootManager::*)(float_t, float_t, ::GlobalNamespace::__BootManager__OnTransitionComplete*)>(&::GlobalNamespace::BootManager::TransitionVisibilityRoutine)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x159afcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "TransitionVisibilityRoutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager.SetVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BootManager::*)(float_t)>(&::GlobalNamespace::BootManager::SetVisibility)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x159af74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "SetVisibility", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager.TransitionBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BootManager::*)(
    ::UnityEngine::Color, float_t, ::GlobalNamespace::__BootManager__OnTransitionComplete*)>(&::GlobalNamespace::BootManager::TransitionBackground)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x159ab8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "TransitionBackground", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager.TransitionBackgroundRoutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::BootManager::*)(::UnityEngine::Color, float_t, ::GlobalNamespace::__BootManager__OnTransitionComplete*)>(&::GlobalNamespace::BootManager::TransitionBackgroundRoutine)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x159b080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "TransitionBackgroundRoutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BootManager::*)()>(&::GlobalNamespace::BootManager::LateUpdate)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x159b158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BootManager::*)()>(&::GlobalNamespace::BootManager::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x159b3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BootManager._OnTermsOfServiceAccepted_b__27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BootManager::*)()>(&::GlobalNamespace::BootManager::_OnTermsOfServiceAccepted_b__27_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x159b420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "<OnTermsOfServiceAccepted>b__27_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BootAcknowledgementPage>& GlobalNamespace::BootManager::__cordl_internal_get_termsOfServicePage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___termsOfServicePage;
}
constexpr ::UnityW<::GlobalNamespace::BootAcknowledgementPage> const& GlobalNamespace::BootManager::__cordl_internal_get_termsOfServicePage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___termsOfServicePage;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_termsOfServicePage(::UnityW<::GlobalNamespace::BootAcknowledgementPage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___termsOfServicePage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BootManager::__cordl_internal_get_fadeInDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInDuration;
}
constexpr float_t const& GlobalNamespace::BootManager::__cordl_internal_get_fadeInDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInDuration;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_fadeInDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeInDuration = value;
}
constexpr float_t& GlobalNamespace::BootManager::__cordl_internal_get_fadeOutDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeOutDuration;
}
constexpr float_t const& GlobalNamespace::BootManager::__cordl_internal_get_fadeOutDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeOutDuration;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_fadeOutDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeOutDuration = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::BootManager::__cordl_internal_get_fadeImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::BootManager::__cordl_internal_get_fadeImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeImage;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_fadeImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fadeImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::BootManager::__cordl_internal_get_backgroundTargetColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundTargetColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BootManager::__cordl_internal_get_backgroundTargetColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundTargetColor;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_backgroundTargetColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundTargetColor = value;
}
constexpr float_t& GlobalNamespace::BootManager::__cordl_internal_get_backgroundTransitionInDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundTransitionInDuration;
}
constexpr float_t const& GlobalNamespace::BootManager::__cordl_internal_get_backgroundTransitionInDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundTransitionInDuration;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_backgroundTransitionInDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundTransitionInDuration = value;
}
constexpr float_t& GlobalNamespace::BootManager::__cordl_internal_get_backgroundTransitionOutDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundTransitionOutDuration;
}
constexpr float_t const& GlobalNamespace::BootManager::__cordl_internal_get_backgroundTransitionOutDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundTransitionOutDuration;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_backgroundTransitionOutDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundTransitionOutDuration = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BootManager::__cordl_internal_get_canvasAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canvasAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BootManager::__cordl_internal_get_canvasAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canvasAnchor;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_canvasAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___canvasAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BootManager::__cordl_internal_get_cameraTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BootManager::__cordl_internal_get_cameraTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraTransform;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_cameraTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BootManager::__cordl_internal_get_angleCorrectionStartThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleCorrectionStartThreshold;
}
constexpr float_t const& GlobalNamespace::BootManager::__cordl_internal_get_angleCorrectionStartThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleCorrectionStartThreshold;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_angleCorrectionStartThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___angleCorrectionStartThreshold = value;
}
constexpr float_t& GlobalNamespace::BootManager::__cordl_internal_get_angleCorrectionEndThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleCorrectionEndThreshold;
}
constexpr float_t const& GlobalNamespace::BootManager::__cordl_internal_get_angleCorrectionEndThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleCorrectionEndThreshold;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_angleCorrectionEndThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___angleCorrectionEndThreshold = value;
}
constexpr float_t& GlobalNamespace::BootManager::__cordl_internal_get_angleCorrectionSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleCorrectionSpeed;
}
constexpr float_t const& GlobalNamespace::BootManager::__cordl_internal_get_angleCorrectionSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleCorrectionSpeed;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_angleCorrectionSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___angleCorrectionSpeed = value;
}
constexpr bool& GlobalNamespace::BootManager::__cordl_internal_get_isCorrectingAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCorrectingAngle;
}
constexpr bool const& GlobalNamespace::BootManager::__cordl_internal_get_isCorrectingAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCorrectingAngle;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_isCorrectingAngle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCorrectingAngle = value;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay>& GlobalNamespace::BootManager::__cordl_internal_get_OVROverlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OVROverlay;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& GlobalNamespace::BootManager::__cordl_internal_get_OVROverlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OVROverlay;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_OVROverlay(::UnityW<::GlobalNamespace::OVROverlay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OVROverlay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::BootManager::__cordl_internal_get_OVROverlayCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OVROverlayCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::BootManager::__cordl_internal_get_OVROverlayCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OVROverlayCamera;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_OVROverlayCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OVROverlayCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::BootManager::__cordl_internal_get_canvasRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canvasRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::BootManager::__cordl_internal_get_canvasRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canvasRect;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_canvasRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___canvasRect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::BootManager::__cordl_internal_get_overlayRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::BootManager::__cordl_internal_get_overlayRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayRenderTexture;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_overlayRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overlayRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::BootManager::__cordl_internal_get_camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::BootManager::__cordl_internal_get_camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BootManager::__cordl_internal_get_mobileOrthoSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileOrthoSize;
}
constexpr float_t const& GlobalNamespace::BootManager::__cordl_internal_get_mobileOrthoSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileOrthoSize;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_mobileOrthoSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mobileOrthoSize = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::BootManager::__cordl_internal_get_curTransitionVisibilityRoutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTransitionVisibilityRoutine;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& GlobalNamespace::BootManager::__cordl_internal_get_curTransitionVisibilityRoutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTransitionVisibilityRoutine;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_curTransitionVisibilityRoutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curTransitionVisibilityRoutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BootManager::__cordl_internal_get_curVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curVisibility;
}
constexpr float_t const& GlobalNamespace::BootManager::__cordl_internal_get_curVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curVisibility;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_curVisibility(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curVisibility = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::BootManager::__cordl_internal_get_curTransitionBackgroundRoutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTransitionBackgroundRoutine;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& GlobalNamespace::BootManager::__cordl_internal_get_curTransitionBackgroundRoutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTransitionBackgroundRoutine;
}
constexpr void GlobalNamespace::BootManager::__cordl_internal_set_curTransitionBackgroundRoutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curTransitionBackgroundRoutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BootManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BootManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BootManager::OnReadyToDisplay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "OnReadyToDisplay",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::BootManager::HasAcceptedTermsOfService() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(),
                                                                             "HasAcceptedTermsOfService", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::BootManager::OnTermsOfServiceAccepted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "OnTermsOfServiceAccepted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BootManager::GoToGame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "GoToGame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param instant: bool (default: false)
/// @param onTransitionComplete: ::GlobalNamespace::__BootManager__OnTransitionComplete* (default: nullptr)
inline void GlobalNamespace::BootManager::TransitionVisibility(float_t target, float_t duration, bool instant, ::GlobalNamespace::__BootManager__OnTransitionComplete* onTransitionComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "TransitionVisibility", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, duration, instant, onTransitionComplete);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::BootManager::TransitionVisibilityRoutine(float_t target, float_t duration,
                                                                                                     ::GlobalNamespace::__BootManager__OnTransitionComplete* onTransitionComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "TransitionVisibilityRoutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, target, duration, onTransitionComplete);
}
inline void GlobalNamespace::BootManager::SetVisibility(float_t newVisibility) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "SetVisibility",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newVisibility);
}
/// @param onTransitionComplete: ::GlobalNamespace::__BootManager__OnTransitionComplete* (default: nullptr)
inline void GlobalNamespace::BootManager::TransitionBackground(::UnityEngine::Color target, float_t duration, ::GlobalNamespace::__BootManager__OnTransitionComplete* onTransitionComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "TransitionBackground", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, duration, onTransitionComplete);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::BootManager::TransitionBackgroundRoutine(::UnityEngine::Color target, float_t duration,
                                                                                                     ::GlobalNamespace::__BootManager__OnTransitionComplete* onTransitionComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "TransitionBackgroundRoutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BootManager__OnTransitionComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, target, duration, onTransitionComplete);
}
inline void GlobalNamespace::BootManager::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BootManager* GlobalNamespace::BootManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BootManager*>());
}
inline void GlobalNamespace::BootManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BootManager::_OnTermsOfServiceAccepted_b__27_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BootManager*>::get(), "<OnTermsOfServiceAccepted>b__27_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BootManager::BootManager() {}
