#pragma once
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__ImaginationPrompt_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1439f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::*)(bool)>(
    &::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1439fd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1439fe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x143a070;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>(object, method));
}
inline void GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::Invoke(bool newValue) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline ::System::IAsyncResult* GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::BeginInvoke(bool newValue, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newValue, callback, object);
}
inline void GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged::__SettingsManager__OnBooleanSettingChanged() {}
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x143931c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::*)()>(
    &::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x143a07c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x143a090;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x143a0b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>(object, method));
}
inline void GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete::__SettingsManager__OnSettingsPromptComplete() {}
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c::*)()>(&::GlobalNamespace::__SettingsManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x143a120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c._TryLaunchSettings_b__74_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c::*)(::GlobalNamespace::__ImaginationPrompt__ActionType)>(
    &::GlobalNamespace::__SettingsManager____c::_TryLaunchSettings_b__74_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x143a128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get(), "<TryLaunchSettings>b__74_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c._LaunchChangeSettings_b__75_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c::*)()>(
    &::GlobalNamespace::__SettingsManager____c::_LaunchChangeSettings_b__75_5)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x143a19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get(),
                                                                               "<LaunchChangeSettings>b__75_5", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__SettingsManager____c::setStaticF___9(::GlobalNamespace::__SettingsManager____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__SettingsManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get>(
      std::forward<::GlobalNamespace::__SettingsManager____c*>(value));
}
inline ::GlobalNamespace::__SettingsManager____c* GlobalNamespace::__SettingsManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__SettingsManager____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get>();
}
inline void GlobalNamespace::__SettingsManager____c::setStaticF___9__74_0(::GlobalNamespace::__ImaginationPrompt__OnActionTaken* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*, "<>9__74_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get>(
      std::forward<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*>(value));
}
inline ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* GlobalNamespace::__SettingsManager____c::getStaticF___9__74_0() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*, "<>9__74_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get>();
}
inline void GlobalNamespace::__SettingsManager____c::setStaticF___9__75_5(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*, "<>9__75_5",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get>(
      std::forward<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>(value));
}
inline ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* GlobalNamespace::__SettingsManager____c::getStaticF___9__75_5() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*, "<>9__75_5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get>();
}
inline ::GlobalNamespace::__SettingsManager____c* GlobalNamespace::__SettingsManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SettingsManager____c*>());
}
inline void GlobalNamespace::__SettingsManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c::_TryLaunchSettings_b__74_0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get(), "<TryLaunchSettings>b__74_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
inline void GlobalNamespace::__SettingsManager____c::_LaunchChangeSettings_b__75_5() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c*>::get(),
                                                                             "<LaunchChangeSettings>b__75_5", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsManager____c::__SettingsManager____c() {}
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass75_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1439314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass75_0._LaunchChangeSettings_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_LaunchChangeSettings_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x143a1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(),
                                                 "<LaunchChangeSettings>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass75_0._LaunchChangeSettings_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_LaunchChangeSettings_b__1)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x143a2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(),
                                                 "<LaunchChangeSettings>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass75_0._LaunchChangeSettings_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_LaunchChangeSettings_b__2)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x143a388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(),
                                                 "<LaunchChangeSettings>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass75_0._LaunchChangeSettings_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_LaunchChangeSettings_b__3)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x143a450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(),
                                                 "<LaunchChangeSettings>b__3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass75_0._LaunchChangeSettings_b__4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_LaunchChangeSettings_b__4)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x143a518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(),
                                                 "<LaunchChangeSettings>b__4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get_curSettingIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSettingIndex;
}
constexpr int32_t const& GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get_curSettingIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSettingIndex;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_set_curSettingIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curSettingIndex = value;
}
constexpr int32_t& GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get_totalSettingCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalSettingCount;
}
constexpr int32_t const& GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get_totalSettingCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalSettingCount;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_set_totalSettingCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalSettingCount = value;
}
constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get___9__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__4;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get___9__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__4;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_set___9__4(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get___9__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__3;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get___9__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__3;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_set___9__3(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_set___9__2(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__cordl_internal_set___9__1(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SettingsManager____c__DisplayClass75_0* GlobalNamespace::__SettingsManager____c__DisplayClass75_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>());
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_LaunchChangeSettings_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(),
                                               "<LaunchChangeSettings>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_LaunchChangeSettings_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(),
                                               "<LaunchChangeSettings>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_LaunchChangeSettings_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(),
                                               "<LaunchChangeSettings>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_LaunchChangeSettings_b__3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(),
                                               "<LaunchChangeSettings>b__3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass75_0::_LaunchChangeSettings_b__4() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass75_0*>::get(),
                                               "<LaunchChangeSettings>b__4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsManager____c__DisplayClass75_0::__SettingsManager____c__DisplayClass75_0() {}
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass77_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass77_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass77_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14396c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass77_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass77_0._PromptAllowJoystickTurning_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass77_0::*)(
    ::GlobalNamespace::__ImaginationPrompt__ActionType)>(&::GlobalNamespace::__SettingsManager____c__DisplayClass77_0::_PromptAllowJoystickTurning_b__0)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x143a634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass77_0*>::get(), "<PromptAllowJoystickTurning>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass77_0._PromptAllowJoystickTurning_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass77_0::*)(
    ::GlobalNamespace::__ImaginationPrompt__ActionType)>(&::GlobalNamespace::__SettingsManager____c__DisplayClass77_0::_PromptAllowJoystickTurning_b__1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x143a7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass77_0*>::get(), "<PromptAllowJoystickTurning>b__1",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_get_curSettingIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSettingIndex;
}
constexpr int32_t const& GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_get_curSettingIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSettingIndex;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_set_curSettingIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curSettingIndex = value;
}
constexpr int32_t& GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_get_totalSettingCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalSettingCount;
}
constexpr int32_t const& GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_get_totalSettingCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalSettingCount;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_set_totalSettingCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalSettingCount = value;
}
constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_get_onComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_get_onComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ImaginationPrompt__OnActionTaken*& GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__cordl_internal_set___9__1(::GlobalNamespace::__ImaginationPrompt__OnActionTaken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SettingsManager____c__DisplayClass77_0* GlobalNamespace::__SettingsManager____c__DisplayClass77_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SettingsManager____c__DisplayClass77_0*>());
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass77_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass77_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass77_0::_PromptAllowJoystickTurning_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass77_0*>::get(), "<PromptAllowJoystickTurning>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass77_0::_PromptAllowJoystickTurning_b__1(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass77_0*>::get(), "<PromptAllowJoystickTurning>b__1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsManager____c__DisplayClass77_0::__SettingsManager____c__DisplayClass77_0() {}
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass78_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass78_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass78_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14399f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass78_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass78_0._PromptIsSmoothTurning_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass78_0::*)(
    ::GlobalNamespace::__ImaginationPrompt__ActionType)>(&::GlobalNamespace::__SettingsManager____c__DisplayClass78_0::_PromptIsSmoothTurning_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x143a848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass78_0*>::get(), "<PromptIsSmoothTurning>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& GlobalNamespace::__SettingsManager____c__DisplayClass78_0::__cordl_internal_get_onComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass78_0::__cordl_internal_get_onComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass78_0::__cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SettingsManager____c__DisplayClass78_0* GlobalNamespace::__SettingsManager____c__DisplayClass78_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SettingsManager____c__DisplayClass78_0*>());
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass78_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass78_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass78_0::_PromptIsSmoothTurning_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass78_0*>::get(), "<PromptIsSmoothTurning>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsManager____c__DisplayClass78_0::__SettingsManager____c__DisplayClass78_0() {}
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass79_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass79_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass79_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1439b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass79_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass79_0._PromptAllowJoystickRolling_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass79_0::*)(
    ::GlobalNamespace::__ImaginationPrompt__ActionType)>(&::GlobalNamespace::__SettingsManager____c__DisplayClass79_0::_PromptAllowJoystickRolling_b__0)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x143a8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass79_0*>::get(), "<PromptAllowJoystickRolling>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass79_0._PromptAllowJoystickRolling_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass79_0::*)(
    ::GlobalNamespace::__ImaginationPrompt__ActionType)>(&::GlobalNamespace::__SettingsManager____c__DisplayClass79_0::_PromptAllowJoystickRolling_b__1)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x143aa74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass79_0*>::get(), "<PromptAllowJoystickRolling>b__1",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_get_allowPrompt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowPrompt;
}
constexpr bool const& GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_get_allowPrompt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowPrompt;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_set_allowPrompt(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowPrompt = value;
}
constexpr int32_t& GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_get_curSettingIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSettingIndex;
}
constexpr int32_t const& GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_get_curSettingIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curSettingIndex;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_set_curSettingIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curSettingIndex = value;
}
constexpr int32_t& GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_get_totalSettingCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalSettingCount;
}
constexpr int32_t const& GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_get_totalSettingCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalSettingCount;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_set_totalSettingCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalSettingCount = value;
}
constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_get_onComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_get_onComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ImaginationPrompt__OnActionTaken*& GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ImaginationPrompt__OnActionTaken*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__cordl_internal_set___9__1(::GlobalNamespace::__ImaginationPrompt__OnActionTaken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SettingsManager____c__DisplayClass79_0* GlobalNamespace::__SettingsManager____c__DisplayClass79_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SettingsManager____c__DisplayClass79_0*>());
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass79_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass79_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass79_0::_PromptAllowJoystickRolling_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass79_0*>::get(), "<PromptAllowJoystickRolling>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass79_0::_PromptAllowJoystickRolling_b__1(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass79_0*>::get(), "<PromptAllowJoystickRolling>b__1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsManager____c__DisplayClass79_0::__SettingsManager____c__DisplayClass79_0() {}
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass80_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass80_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass80_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1439b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass80_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass80_0._PromptLeftHandedMode_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass80_0::*)(
    ::GlobalNamespace::__ImaginationPrompt__ActionType)>(&::GlobalNamespace::__SettingsManager____c__DisplayClass80_0::_PromptLeftHandedMode_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x143ab30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass80_0*>::get(), "<PromptLeftHandedMode>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& GlobalNamespace::__SettingsManager____c__DisplayClass80_0::__cordl_internal_get_onComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass80_0::__cordl_internal_get_onComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass80_0::__cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SettingsManager____c__DisplayClass80_0* GlobalNamespace::__SettingsManager____c__DisplayClass80_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SettingsManager____c__DisplayClass80_0*>());
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass80_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass80_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass80_0::_PromptLeftHandedMode_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass80_0*>::get(), "<PromptLeftHandedMode>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsManager____c__DisplayClass80_0::__SettingsManager____c__DisplayClass80_0() {}
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass81_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass81_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass81_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1439cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass81_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass81_0._PromptIsMusicDisabled_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass81_0::*)(
    ::GlobalNamespace::__ImaginationPrompt__ActionType)>(&::GlobalNamespace::__SettingsManager____c__DisplayClass81_0::_PromptIsMusicDisabled_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x143abd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass81_0*>::get(), "<PromptIsMusicDisabled>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& GlobalNamespace::__SettingsManager____c__DisplayClass81_0::__cordl_internal_get_onComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass81_0::__cordl_internal_get_onComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass81_0::__cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SettingsManager____c__DisplayClass81_0* GlobalNamespace::__SettingsManager____c__DisplayClass81_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SettingsManager____c__DisplayClass81_0*>());
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass81_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass81_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass81_0::_PromptIsMusicDisabled_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass81_0*>::get(), "<PromptIsMusicDisabled>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsManager____c__DisplayClass81_0::__SettingsManager____c__DisplayClass81_0() {}
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass82_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass82_0::*)()>(
    &::GlobalNamespace::__SettingsManager____c__DisplayClass82_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1439e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass82_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SettingsManager____c__DisplayClass82_0._PromptAllowGriefProtection_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SettingsManager____c__DisplayClass82_0::*)(
    ::GlobalNamespace::__ImaginationPrompt__ActionType)>(&::GlobalNamespace::__SettingsManager____c__DisplayClass82_0::_PromptAllowGriefProtection_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x143ac78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass82_0*>::get(), "<PromptAllowGriefProtection>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*& GlobalNamespace::__SettingsManager____c__DisplayClass82_0::__cordl_internal_get_onComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*> const&
GlobalNamespace::__SettingsManager____c__DisplayClass82_0::__cordl_internal_get_onComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onComplete;
}
constexpr void GlobalNamespace::__SettingsManager____c__DisplayClass82_0::__cordl_internal_set_onComplete(::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SettingsManager____c__DisplayClass82_0* GlobalNamespace::__SettingsManager____c__DisplayClass82_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SettingsManager____c__DisplayClass82_0*>());
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass82_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass82_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SettingsManager____c__DisplayClass82_0::_PromptAllowGriefProtection_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SettingsManager____c__DisplayClass82_0*>::get(), "<PromptAllowGriefProtection>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionTaken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsManager____c__DisplayClass82_0::__SettingsManager____c__DisplayClass82_0() {}
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.get_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::get_isInitialized)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1436ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_isInitialized",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.set_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::set_isInitialized)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1436b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_isInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.get_isLeftHanded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::get_isLeftHanded)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1436b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_isLeftHanded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.set_isLeftHanded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::set_isLeftHanded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1436be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_isLeftHanded",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.get_allowJoystickTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::get_allowJoystickTurning)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1436c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                               "get_allowJoystickTurning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.get_doesLeftJoystickAllowTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::get_doesLeftJoystickAllowTurning)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1436d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_doesLeftJoystickAllowTurning",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.set_doesLeftJoystickAllowTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::set_doesLeftJoystickAllowTurning)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1436d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_doesLeftJoystickAllowTurning",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.get_doesRightJoystickAllowTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::get_doesRightJoystickAllowTurning)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1436dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_doesRightJoystickAllowTurning",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.set_doesRightJoystickAllowTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::set_doesRightJoystickAllowTurning)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1436e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_doesRightJoystickAllowTurning",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.get_isSmoothTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::get_isSmoothTurning)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1436e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                               "get_isSmoothTurning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.set_isSmoothTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::set_isSmoothTurning)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1436ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_isSmoothTurning",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.get_allowJoystickRolling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::get_allowJoystickRolling)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1436f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                               "get_allowJoystickRolling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.get_doesLeftJoystickAllowRolling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::get_doesLeftJoystickAllowRolling)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1437024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_doesLeftJoystickAllowRolling",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.set_doesLeftJoystickAllowRolling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::set_doesLeftJoystickAllowRolling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x143707c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_doesLeftJoystickAllowRolling",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.get_doesRightJoystickAllowRolling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::get_doesRightJoystickAllowRolling)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x14370d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_doesRightJoystickAllowRolling",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.set_doesRightJoystickAllowRolling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::set_doesRightJoystickAllowRolling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1437130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_doesRightJoystickAllowRolling",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.get_isMusicDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::get_isMusicDisabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x143718c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                               "get_isMusicDisabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.set_isMusicDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::set_isMusicDisabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x14371e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_isMusicDisabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.get_allowGriefProtection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::get_allowGriefProtection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1437240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                               "get_allowGriefProtection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.set_allowGriefProtection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::set_allowGriefProtection)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1437298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_allowGriefProtection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsManager::*)()>(&::GlobalNamespace::SettingsManager::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x14372f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.InitializeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::SettingsManager::InitializeSettings)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1437398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "InitializeSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.SetIsLeftHanded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::SetIsLeftHanded)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x1437788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetIsLeftHanded",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.SetDoesLeftJoystickAllowTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::SetDoesLeftJoystickAllowTurning)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x14379e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetDoesLeftJoystickAllowTurning",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.SetDoesRightJoystickAllowTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::SetDoesRightJoystickAllowTurning)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x1437c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetDoesRightJoystickAllowTurning",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.SetIsSmoothTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::SetIsSmoothTurning)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x1437e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetIsSmoothTurning",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.SetDoesLeftJoystickAllowRolling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, bool)>(&::GlobalNamespace::SettingsManager::SetDoesLeftJoystickAllowRolling)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x14380e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetDoesLeftJoystickAllowRolling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.SetDoesRightJoystickAllowRolling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, bool)>(&::GlobalNamespace::SettingsManager::SetDoesRightJoystickAllowRolling)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x14383c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetDoesRightJoystickAllowRolling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.SetIsMusicDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::SetIsMusicDisabled)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x143869c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetIsMusicDisabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.SetAllowGriefProtection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::SettingsManager::SetAllowGriefProtection)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x14388f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetAllowGriefProtection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.SetBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&::GlobalNamespace::SettingsManager::SetBool)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14379dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetBool", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.GetBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, bool)>(&::GlobalNamespace::SettingsManager::GetBool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1437768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "GetBool", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.GetSettingsStateText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::SettingsManager::GetSettingsStateText)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x1438b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                               "GetSettingsStateText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.GenerateBooleanSettingStateText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(bool)>(&::GlobalNamespace::SettingsManager::GenerateBooleanSettingStateText)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1438ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "GenerateBooleanSettingStateText",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.GenerateLeftRightSettingStateText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(bool, bool)>(&::GlobalNamespace::SettingsManager::GenerateLeftRightSettingStateText)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1438f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "GenerateLeftRightSettingStateText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.TryLaunchSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsManager::TryLaunchSettings)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x1438ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "TryLaunchSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.LaunchChangeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::SettingsManager::LaunchChangeSettings)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x14391e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                               "LaunchChangeSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.PromptAllowJoystickTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*)>(
    &::GlobalNamespace::SettingsManager::PromptAllowJoystickTurning)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1439548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptAllowJoystickTurning", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.PromptIsSmoothTurning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*)>(
    &::GlobalNamespace::SettingsManager::PromptIsSmoothTurning)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1439880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptIsSmoothTurning", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.PromptAllowJoystickRolling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*)>(
    &::GlobalNamespace::SettingsManager::PromptAllowJoystickRolling)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x14399f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptAllowJoystickRolling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.PromptLeftHandedMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*)>(
    &::GlobalNamespace::SettingsManager::PromptLeftHandedMode)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x14393d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptLeftHandedMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.PromptIsMusicDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*)>(
    &::GlobalNamespace::SettingsManager::PromptIsMusicDisabled)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1439b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptIsMusicDisabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.PromptAllowGriefProtection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*)>(
    &::GlobalNamespace::SettingsManager::PromptAllowGriefProtection)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1439d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptAllowGriefProtection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.GenerateSettingPromptPostfix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, int32_t)>(&::GlobalNamespace::SettingsManager::GenerateSettingPromptPostfix)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x14396c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "GenerateSettingPromptPostfix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsManager::*)()>(&::GlobalNamespace::SettingsManager::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1439e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& GlobalNamespace::SettingsManager::__cordl_internal_get_onIsLeftHandedChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIsLeftHandedChangedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const&
GlobalNamespace::SettingsManager::__cordl_internal_get_onIsLeftHandedChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIsLeftHandedChangedCallbacks;
}
constexpr void GlobalNamespace::SettingsManager::__cordl_internal_set_onIsLeftHandedChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onIsLeftHandedChangedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& GlobalNamespace::SettingsManager::__cordl_internal_get_onDoesLeftJoystickAllowTurningChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDoesLeftJoystickAllowTurningChangedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const&
GlobalNamespace::SettingsManager::__cordl_internal_get_onDoesLeftJoystickAllowTurningChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDoesLeftJoystickAllowTurningChangedCallbacks;
}
constexpr void GlobalNamespace::SettingsManager::__cordl_internal_set_onDoesLeftJoystickAllowTurningChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onDoesLeftJoystickAllowTurningChangedCallbacks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& GlobalNamespace::SettingsManager::__cordl_internal_get_onDoesRightJoystickAllowTurningChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDoesRightJoystickAllowTurningChangedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const&
GlobalNamespace::SettingsManager::__cordl_internal_get_onDoesRightJoystickAllowTurningChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDoesRightJoystickAllowTurningChangedCallbacks;
}
constexpr void GlobalNamespace::SettingsManager::__cordl_internal_set_onDoesRightJoystickAllowTurningChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onDoesRightJoystickAllowTurningChangedCallbacks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& GlobalNamespace::SettingsManager::__cordl_internal_get_onIsSmoothTurningChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIsSmoothTurningChangedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const&
GlobalNamespace::SettingsManager::__cordl_internal_get_onIsSmoothTurningChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIsSmoothTurningChangedCallbacks;
}
constexpr void GlobalNamespace::SettingsManager::__cordl_internal_set_onIsSmoothTurningChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onIsSmoothTurningChangedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& GlobalNamespace::SettingsManager::__cordl_internal_get_onDoesLeftJoystickAllowRollingChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDoesLeftJoystickAllowRollingChangedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const&
GlobalNamespace::SettingsManager::__cordl_internal_get_onDoesLeftJoystickAllowRollingChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDoesLeftJoystickAllowRollingChangedCallbacks;
}
constexpr void GlobalNamespace::SettingsManager::__cordl_internal_set_onDoesLeftJoystickAllowRollingChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onDoesLeftJoystickAllowRollingChangedCallbacks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& GlobalNamespace::SettingsManager::__cordl_internal_get_onDoesRightJoystickAllowRollingChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDoesRightJoystickAllowRollingChangedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const&
GlobalNamespace::SettingsManager::__cordl_internal_get_onDoesRightJoystickAllowRollingChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDoesRightJoystickAllowRollingChangedCallbacks;
}
constexpr void GlobalNamespace::SettingsManager::__cordl_internal_set_onDoesRightJoystickAllowRollingChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onDoesRightJoystickAllowRollingChangedCallbacks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& GlobalNamespace::SettingsManager::__cordl_internal_get_onIsMusicDisabledChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIsMusicDisabledChangedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const&
GlobalNamespace::SettingsManager::__cordl_internal_get_onIsMusicDisabledChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIsMusicDisabledChangedCallbacks;
}
constexpr void GlobalNamespace::SettingsManager::__cordl_internal_set_onIsMusicDisabledChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onIsMusicDisabledChangedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*& GlobalNamespace::SettingsManager::__cordl_internal_get_onAllowGriefProtectionChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onAllowGriefProtectionChangedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged*> const&
GlobalNamespace::SettingsManager::__cordl_internal_get_onAllowGriefProtectionChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onAllowGriefProtectionChangedCallbacks;
}
constexpr void GlobalNamespace::SettingsManager::__cordl_internal_set_onAllowGriefProtectionChangedCallbacks(::GlobalNamespace::__SettingsManager__OnBooleanSettingChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onAllowGriefProtectionChangedCallbacks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SettingsManager::setStaticF__isInitialized_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<isInitialized>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF__isInitialized_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<isInitialized>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>();
}
inline void GlobalNamespace::SettingsManager::setStaticF__isLeftHanded_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<isLeftHanded>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF__isLeftHanded_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<isLeftHanded>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>();
}
inline void GlobalNamespace::SettingsManager::setStaticF__doesLeftJoystickAllowTurning_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<doesLeftJoystickAllowTurning>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF__doesLeftJoystickAllowTurning_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<doesLeftJoystickAllowTurning>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>();
}
inline void GlobalNamespace::SettingsManager::setStaticF__doesRightJoystickAllowTurning_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<doesRightJoystickAllowTurning>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF__doesRightJoystickAllowTurning_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<doesRightJoystickAllowTurning>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>();
}
inline void GlobalNamespace::SettingsManager::setStaticF__isSmoothTurning_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<isSmoothTurning>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF__isSmoothTurning_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<isSmoothTurning>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>();
}
inline void GlobalNamespace::SettingsManager::setStaticF__doesLeftJoystickAllowRolling_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<doesLeftJoystickAllowRolling>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF__doesLeftJoystickAllowRolling_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<doesLeftJoystickAllowRolling>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>();
}
inline void GlobalNamespace::SettingsManager::setStaticF__doesRightJoystickAllowRolling_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<doesRightJoystickAllowRolling>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF__doesRightJoystickAllowRolling_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<doesRightJoystickAllowRolling>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>();
}
inline void GlobalNamespace::SettingsManager::setStaticF__isMusicDisabled_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<isMusicDisabled>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF__isMusicDisabled_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<isMusicDisabled>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>();
}
inline void GlobalNamespace::SettingsManager::setStaticF__allowGriefProtection_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<allowGriefProtection>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF__allowGriefProtection_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<allowGriefProtection>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>();
}
inline void GlobalNamespace::SettingsManager::setStaticF_canLaunchSettings(bool value) {
  ::cordl_internals::setStaticField<bool, "canLaunchSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF_canLaunchSettings() {
  return ::cordl_internals::getStaticField<bool, "canLaunchSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>();
}
inline bool GlobalNamespace::SettingsManager::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_isInitialized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::set_isInitialized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_isInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::SettingsManager::get_isLeftHanded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_isLeftHanded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::set_isLeftHanded(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_isLeftHanded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::SettingsManager::get_allowJoystickTurning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                             "get_allowJoystickTurning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::SettingsManager::get_doesLeftJoystickAllowTurning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                             "get_doesLeftJoystickAllowTurning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::set_doesLeftJoystickAllowTurning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_doesLeftJoystickAllowTurning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::SettingsManager::get_doesRightJoystickAllowTurning() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_doesRightJoystickAllowTurning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::set_doesRightJoystickAllowTurning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_doesRightJoystickAllowTurning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::SettingsManager::get_isSmoothTurning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_isSmoothTurning",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::set_isSmoothTurning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_isSmoothTurning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::SettingsManager::get_allowJoystickRolling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                             "get_allowJoystickRolling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::SettingsManager::get_doesLeftJoystickAllowRolling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                             "get_doesLeftJoystickAllowRolling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::set_doesLeftJoystickAllowRolling(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_doesLeftJoystickAllowRolling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::SettingsManager::get_doesRightJoystickAllowRolling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_doesRightJoystickAllowRolling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::set_doesRightJoystickAllowRolling(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_doesRightJoystickAllowRolling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::SettingsManager::get_isMusicDisabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "get_isMusicDisabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::set_isMusicDisabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_isMusicDisabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::SettingsManager::get_allowGriefProtection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                             "get_allowGriefProtection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::set_allowGriefProtection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "set_allowGriefProtection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::SettingsManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::InitializeSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "InitializeSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::SetIsLeftHanded(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetIsLeftHanded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newValue);
}
inline void GlobalNamespace::SettingsManager::SetDoesLeftJoystickAllowTurning(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetDoesLeftJoystickAllowTurning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newValue);
}
inline void GlobalNamespace::SettingsManager::SetDoesRightJoystickAllowTurning(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetDoesRightJoystickAllowTurning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newValue);
}
inline void GlobalNamespace::SettingsManager::SetIsSmoothTurning(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetIsSmoothTurning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newValue);
}
/// @param allowPrompt: bool (default: false)
inline void GlobalNamespace::SettingsManager::SetDoesLeftJoystickAllowRolling(bool newValue, bool allowPrompt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetDoesLeftJoystickAllowRolling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newValue, allowPrompt);
}
/// @param allowPrompt: bool (default: false)
inline void GlobalNamespace::SettingsManager::SetDoesRightJoystickAllowRolling(bool newValue, bool allowPrompt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetDoesRightJoystickAllowRolling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newValue, allowPrompt);
}
inline void GlobalNamespace::SettingsManager::SetIsMusicDisabled(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetIsMusicDisabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newValue);
}
inline void GlobalNamespace::SettingsManager::SetAllowGriefProtection(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetAllowGriefProtection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newValue);
}
inline void GlobalNamespace::SettingsManager::SetBool(::StringW key, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "SetBool", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key, value);
}
/// @param defaultValue: bool (default: false)
inline bool GlobalNamespace::SettingsManager::GetBool(::StringW key, bool defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "GetBool", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key, defaultValue);
}
inline ::StringW GlobalNamespace::SettingsManager::GetSettingsStateText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "GetSettingsStateText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::SettingsManager::GenerateBooleanSettingStateText(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "GenerateBooleanSettingStateText",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::SettingsManager::GenerateLeftRightSettingStateText(bool leftValue, bool rightValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "GenerateLeftRightSettingStateText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, leftValue, rightValue);
}
inline bool GlobalNamespace::SettingsManager::TryLaunchSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "TryLaunchSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::LaunchChangeSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "LaunchChangeSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
/// @param onComplete: ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* (default: nullptr)
inline int32_t GlobalNamespace::SettingsManager::PromptAllowJoystickTurning(int32_t curSettingIndex, int32_t totalSettingCount,
                                                                            ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptAllowJoystickTurning", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, curSettingIndex, totalSettingCount, onComplete);
}
/// @param onComplete: ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* (default: nullptr)
inline int32_t GlobalNamespace::SettingsManager::PromptIsSmoothTurning(int32_t curSettingIndex, int32_t totalSettingCount, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptIsSmoothTurning", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, curSettingIndex, totalSettingCount, onComplete);
}
/// @param onComplete: ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* (default: nullptr)
inline int32_t GlobalNamespace::SettingsManager::PromptAllowJoystickRolling(int32_t curSettingIndex, int32_t totalSettingCount,
                                                                            ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptAllowJoystickRolling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, curSettingIndex, totalSettingCount, onComplete);
}
/// @param onComplete: ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* (default: nullptr)
inline int32_t GlobalNamespace::SettingsManager::PromptLeftHandedMode(int32_t curSettingIndex, int32_t totalSettingCount, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptLeftHandedMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, curSettingIndex, totalSettingCount, onComplete);
}
/// @param onComplete: ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* (default: nullptr)
inline int32_t GlobalNamespace::SettingsManager::PromptIsMusicDisabled(int32_t curSettingIndex, int32_t totalSettingCount, ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptIsMusicDisabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, curSettingIndex, totalSettingCount, onComplete);
}
/// @param onComplete: ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* (default: nullptr)
inline int32_t GlobalNamespace::SettingsManager::PromptAllowGriefProtection(int32_t curSettingIndex, int32_t totalSettingCount,
                                                                            ::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "PromptAllowGriefProtection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsManager__OnSettingsPromptComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, curSettingIndex, totalSettingCount, onComplete);
}
inline ::StringW GlobalNamespace::SettingsManager::GenerateSettingPromptPostfix(int32_t curSettingIndex, int32_t totalSettingCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "GenerateSettingPromptPostfix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, curSettingIndex, totalSettingCount);
}
inline ::GlobalNamespace::SettingsManager* GlobalNamespace::SettingsManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SettingsManager*>());
}
inline void GlobalNamespace::SettingsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsManager::SettingsManager() {}
