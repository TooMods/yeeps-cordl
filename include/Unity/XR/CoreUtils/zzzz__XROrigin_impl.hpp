#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_impl.hpp"
#include "UnityEngine/XR/zzzz__TrackingOriginModeFlags_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__ARTrackablesParentTransformChangedEventArgs_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/zzzz__TrackingOriginModeFlags_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode::__XROrigin__TrackingOriginMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode::__XROrigin__TrackingOriginMode() {}
constexpr ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode::NotSpecified{ static_cast<int32_t>(0x0) };
constexpr ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode::Device{ static_cast<int32_t>(0x1) };
constexpr ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode::Floor{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::*)(int32_t)>(
    &::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28803dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::*)()>(
    &::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2881ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::*)()>(
    &::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2881ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::*)()>(
    &::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2881b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::*)()>(
    &::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2881b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::*)()>(
    &::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2881b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::__cordl_internal_set___4__this(::UnityW<::Unity::XR::CoreUtils::XROrigin> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48* Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>(__1__state));
}
inline void Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48::__XROrigin___RepeatInitializeCamera_d__48() {}
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_Camera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::Unity::XR::CoreUtils::XROrigin::*)()>(
    &::Unity::XR::CoreUtils::XROrigin::get_Camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fa80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "get_Camera",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_Camera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Camera*)>(&::Unity::XR::CoreUtils::XROrigin::set_Camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fa88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_Camera", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_TrackablesParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::XR::CoreUtils::XROrigin::*)()>(
    &::Unity::XR::CoreUtils::XROrigin::get_TrackablesParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fa90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "get_TrackablesParent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_TrackablesParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Transform*)>(
    &::Unity::XR::CoreUtils::XROrigin::set_TrackablesParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fa98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_TrackablesParent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.add_TrackablesParentTransformChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(
    ::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*)>(&::Unity::XR::CoreUtils::XROrigin::add_TrackablesParentTransformChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x287faa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "add_TrackablesParentTransformChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.remove_TrackablesParentTransformChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(
    ::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*)>(&::Unity::XR::CoreUtils::XROrigin::remove_TrackablesParentTransformChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x287fb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "remove_TrackablesParentTransformChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_Origin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Unity::XR::CoreUtils::XROrigin::*)()>(
    &::Unity::XR::CoreUtils::XROrigin::get_Origin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "get_Origin",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_Origin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::GameObject*)>(
    &::Unity::XR::CoreUtils::XROrigin::set_Origin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_Origin", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_CameraFloorOffsetObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Unity::XR::CoreUtils::XROrigin::*)()>(
    &::Unity::XR::CoreUtils::XROrigin::get_CameraFloorOffsetObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fc10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                               "get_CameraFloorOffsetObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_CameraFloorOffsetObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::GameObject*)>(
    &::Unity::XR::CoreUtils::XROrigin::set_CameraFloorOffsetObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_CameraFloorOffsetObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_RequestedTrackingOriginMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode (::Unity::XR::CoreUtils::XROrigin::*)()>(
    &::Unity::XR::CoreUtils::XROrigin::get_RequestedTrackingOriginMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "get_RequestedTrackingOriginMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_RequestedTrackingOriginMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode)>(
    &::Unity::XR::CoreUtils::XROrigin::set_RequestedTrackingOriginMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_RequestedTrackingOriginMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_CameraYOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_CameraYOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "get_CameraYOffset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_CameraYOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(float_t)>(&::Unity::XR::CoreUtils::XROrigin::set_CameraYOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fcd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_CameraYOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_CurrentTrackingOriginMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::TrackingOriginModeFlags (::Unity::XR::CoreUtils::XROrigin::*)()>(
    &::Unity::XR::CoreUtils::XROrigin::get_CurrentTrackingOriginMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                               "get_CurrentTrackingOriginMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_CurrentTrackingOriginMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::XR::TrackingOriginModeFlags)>(
    &::Unity::XR::CoreUtils::XROrigin::set_CurrentTrackingOriginMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287fce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_CurrentTrackingOriginMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::TrackingOriginModeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_OriginInCameraSpacePos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::Unity::XR::CoreUtils::XROrigin::*)()>(
    &::Unity::XR::CoreUtils::XROrigin::get_OriginInCameraSpacePos)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x287fcf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                               "get_OriginInCameraSpacePos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_CameraInOriginSpacePos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::Unity::XR::CoreUtils::XROrigin::*)()>(
    &::Unity::XR::CoreUtils::XROrigin::get_CameraInOriginSpacePos)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x287fd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                               "get_CameraInOriginSpacePos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_CameraInOriginSpaceHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_CameraInOriginSpaceHeight)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x287fd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                               "get_CameraInOriginSpaceHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MoveOffsetHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::MoveOffsetHeight)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x287fc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MoveOffsetHeight",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MoveOffsetHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(float_t)>(&::Unity::XR::CoreUtils::XROrigin::MoveOffsetHeight)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x287fdac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MoveOffsetHeight", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.TryInitializeCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::TryInitializeCamera)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x287fc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "TryInitializeCamera",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.SetupCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::SetupCamera)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x287fe60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "SetupCamera",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.SetupCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::XR::XRInputSubsystem*)>(
    &::Unity::XR::CoreUtils::XROrigin::SetupCamera)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x28801ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "SetupCamera", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnInputSubsystemTrackingOriginUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::XR::XRInputSubsystem*)>(
    &::Unity::XR::CoreUtils::XROrigin::OnInputSubsystemTrackingOriginUpdated)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28803b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnInputSubsystemTrackingOriginUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.RepeatInitializeCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Unity::XR::CoreUtils::XROrigin::*)()>(
    &::Unity::XR::CoreUtils::XROrigin::RepeatInitializeCamera)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2880144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                               "RepeatInitializeCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.RotateAroundCameraUsingOriginUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(float_t)>(
    &::Unity::XR::CoreUtils::XROrigin::RotateAroundCameraUsingOriginUp)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2880404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "RotateAroundCameraUsingOriginUp",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.RotateAroundCameraPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Vector3, float_t)>(
    &::Unity::XR::CoreUtils::XROrigin::RotateAroundCameraPosition)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2880448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                               "RotateAroundCameraPosition", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MatchOriginUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Vector3)>(
    &::Unity::XR::CoreUtils::XROrigin::MatchOriginUp)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x288055c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MatchOriginUp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MatchOriginUpCameraForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::Unity::XR::CoreUtils::XROrigin::MatchOriginUpCameraForward)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2880728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MatchOriginUpCameraForward", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MatchOriginUpOriginForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::Unity::XR::CoreUtils::XROrigin::MatchOriginUpOriginForward)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2880aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MatchOriginUpOriginForward", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MoveCameraToWorldLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Vector3)>(
    &::Unity::XR::CoreUtils::XROrigin::MoveCameraToWorldLocation)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2880cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MoveCameraToWorldLocation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::Awake)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x2880e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.GetCameraOriginPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::Unity::XR::CoreUtils::XROrigin::*)()>(
    &::Unity::XR::CoreUtils::XROrigin::GetCameraOriginPose)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2881234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "GetCameraOriginPose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x288135c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28813dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnBeforeRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::OnBeforeRender)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x288145c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnBeforeRender",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::OnValidate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2881594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnValidate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2881844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::OnDestroy)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2881848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2881a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin._OnValidate_g__IsModeStale_60_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::_OnValidate_g__IsModeStale_60_0)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2881654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "<OnValidate>g__IsModeStale|60_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_Camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_Camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get__TrackablesParent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrackablesParent_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get__TrackablesParent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrackablesParent_k__BackingField;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set__TrackablesParent_k__BackingField(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TrackablesParent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_TrackablesParentTransformChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackablesParentTransformChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*> const&
Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_TrackablesParentTransformChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackablesParentTransformChanged;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_TrackablesParentTransformChanged(::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrackablesParentTransformChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_OriginBaseGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginBaseGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_OriginBaseGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginBaseGameObject;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_OriginBaseGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OriginBaseGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraFloorOffsetObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraFloorOffsetObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraFloorOffsetObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraFloorOffsetObject;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_CameraFloorOffsetObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraFloorOffsetObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_RequestedTrackingOriginMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedTrackingOriginMode;
}
constexpr ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_RequestedTrackingOriginMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedTrackingOriginMode;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_RequestedTrackingOriginMode(::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestedTrackingOriginMode = value;
}
constexpr float_t& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraYOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraYOffset;
}
constexpr float_t const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraYOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraYOffset;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_CameraYOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraYOffset = value;
}
constexpr ::UnityEngine::XR::TrackingOriginModeFlags& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get__CurrentTrackingOriginMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentTrackingOriginMode_k__BackingField;
}
constexpr ::UnityEngine::XR::TrackingOriginModeFlags const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get__CurrentTrackingOriginMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentTrackingOriginMode_k__BackingField;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set__CurrentTrackingOriginMode_k__BackingField(::UnityEngine::XR::TrackingOriginModeFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CurrentTrackingOriginMode_k__BackingField = value;
}
constexpr bool& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraInitialized;
}
constexpr bool const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraInitialized;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_CameraInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraInitialized = value;
}
constexpr bool& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraInitializing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraInitializing;
}
constexpr bool const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraInitializing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraInitializing;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_CameraInitializing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraInitializing = value;
}
inline void Unity::XR::CoreUtils::XROrigin::setStaticF_s_InputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_InputSubsystems",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* Unity::XR::CoreUtils::XROrigin::getStaticF_s_InputSubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_InputSubsystems",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get>();
}
inline ::UnityW<::UnityEngine::Camera> Unity::XR::CoreUtils::XROrigin::get_Camera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "get_Camera",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_Camera(::UnityEngine::Camera* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_Camera", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Unity::XR::CoreUtils::XROrigin::get_TrackablesParent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "get_TrackablesParent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_TrackablesParent(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_TrackablesParent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::XROrigin::add_TrackablesParentTransformChanged(::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "add_TrackablesParentTransformChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::XROrigin::remove_TrackablesParentTransformChanged(::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "remove_TrackablesParentTransformChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::XR::CoreUtils::XROrigin::get_Origin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "get_Origin",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_Origin(::UnityEngine::GameObject* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_Origin", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::XR::CoreUtils::XROrigin::get_CameraFloorOffsetObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                             "get_CameraFloorOffsetObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_CameraFloorOffsetObject(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_CameraFloorOffsetObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode Unity::XR::CoreUtils::XROrigin::get_RequestedTrackingOriginMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                             "get_RequestedTrackingOriginMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_RequestedTrackingOriginMode(::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_RequestedTrackingOriginMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t Unity::XR::CoreUtils::XROrigin::get_CameraYOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "get_CameraYOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_CameraYOffset(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_CameraYOffset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::TrackingOriginModeFlags Unity::XR::CoreUtils::XROrigin::get_CurrentTrackingOriginMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                             "get_CurrentTrackingOriginMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::TrackingOriginModeFlags, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_CurrentTrackingOriginMode(::UnityEngine::XR::TrackingOriginModeFlags value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "set_CurrentTrackingOriginMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::TrackingOriginModeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::XROrigin::get_OriginInCameraSpacePos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                             "get_OriginInCameraSpacePos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::XROrigin::get_CameraInOriginSpacePos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                             "get_CameraInOriginSpacePos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline float_t Unity::XR::CoreUtils::XROrigin::get_CameraInOriginSpaceHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                             "get_CameraInOriginSpaceHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::MoveOffsetHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MoveOffsetHeight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::MoveOffsetHeight(float_t y) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MoveOffsetHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, y);
}
inline void Unity::XR::CoreUtils::XROrigin::TryInitializeCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "TryInitializeCamera",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::XROrigin::SetupCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "SetupCamera",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::XROrigin::SetupCamera(::UnityEngine::XR::XRInputSubsystem* inputSubsystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "SetupCamera", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inputSubsystem);
}
inline void Unity::XR::CoreUtils::XROrigin::OnInputSubsystemTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem* inputSubsystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnInputSubsystemTrackingOriginUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputSubsystem);
}
inline ::System::Collections::IEnumerator* Unity::XR::CoreUtils::XROrigin::RepeatInitializeCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "RepeatInitializeCamera",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::XROrigin::RotateAroundCameraUsingOriginUp(float_t angleDegrees) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "RotateAroundCameraUsingOriginUp",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, angleDegrees);
}
inline bool Unity::XR::CoreUtils::XROrigin::RotateAroundCameraPosition(::UnityEngine::Vector3 vector, float_t angleDegrees) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                             "RotateAroundCameraPosition", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, vector, angleDegrees);
}
inline bool Unity::XR::CoreUtils::XROrigin::MatchOriginUp(::UnityEngine::Vector3 destinationUp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MatchOriginUp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, destinationUp);
}
inline bool Unity::XR::CoreUtils::XROrigin::MatchOriginUpCameraForward(::UnityEngine::Vector3 destinationUp, ::UnityEngine::Vector3 destinationForward) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MatchOriginUpCameraForward", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, destinationUp, destinationForward);
}
inline bool Unity::XR::CoreUtils::XROrigin::MatchOriginUpOriginForward(::UnityEngine::Vector3 destinationUp, ::UnityEngine::Vector3 destinationForward) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MatchOriginUpOriginForward", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, destinationUp, destinationForward);
}
inline bool Unity::XR::CoreUtils::XROrigin::MoveCameraToWorldLocation(::UnityEngine::Vector3 desiredWorldLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "MoveCameraToWorldLocation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, desiredWorldLocation);
}
inline void Unity::XR::CoreUtils::XROrigin::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Pose Unity::XR::CoreUtils::XROrigin::GetCameraOriginPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "GetCameraOriginPose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::OnBeforeRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnBeforeRender",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnValidate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::XROrigin* Unity::XR::CoreUtils::XROrigin::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::XROrigin*>());
}
inline void Unity::XR::CoreUtils::XROrigin::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::XROrigin::_OnValidate_g__IsModeStale_60_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::XROrigin*>::get(),
                                                                             "<OnValidate>g__IsModeStale|60_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::XROrigin::XROrigin() {}
